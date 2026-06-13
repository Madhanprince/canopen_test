#!/usr/bin/env python3
"""
Italsea 7CH2D090 dual-drive controller simulator.

Behavioral clone of the real controller's CANopen interface, built on the
actual ItalseaDualDrive.eds. Mimics, per UM rev.7:

  NMT (sec. 25)
    - boot-up message (0x700+ID, 0x00) on power-on and on NMT Reset Node /
      Reset Communication
    - node STAYS in PRE-OPERATIONAL after boot-up; master must send NMT
      Start (bench-observed; UM sec. 25 claims auto-transition, it does not)
    - TPDOs and RPDO consumption only in OPERATIONAL
    - heartbeat from "CANBUS HEARTBEAT RATE" parameter (default 100 ms),
      state byte 127/5/4

  PDOs (sec. 23.4)
    - TPDO1 (0x180+ID, "TPDO1 RATE" param, def 100 ms):
        ActualAlarm u8 | Status2 u8 | InputVoltage i16 | I axis0 i16 | I axis1 i16
    - TPDO2 (0x280+ID, 100 ms): vel demand/actual axis0, demand/actual axis1
    - TPDO3 (0x380+ID, 1000 ms): SW version u16 | board temp u8 | overload0 u16 | overload1 u16
    - RPDO1 (0x200+ID): target velocity axis0 i16 + axis1 i16
    - RPDO1 timeout ("RPDO1 TIMEOUT" param, def 200 ms): mapped objects reset
      to power-on value -> speed references forced to 0 (sec. 23.3)

  SDO / parameters (sec. 21, 24)
    - parameter objects (Italsea Parameters Type): writing Actual Value outside
      [Min, Max] aborts with 0x06090032 / 0x06090031
    - parameter writes are volatile until the "save" signature (0x65766173) is
      written to 0x1010:01; "load" (0x64616F6C) to 0x1011:01 restores defaults
    - parameters are applied at the next power-on / NMT Reset Node, like the
      real board

  Drive model (sec. 22)
    - 0x6042/0x6842 target -> demand ramped with ACCELERATION RAMP -> actual
    - currents in permille of rated current (0x6075), per object 0x6078 spec
    - Status2 brake bits follow motion, main contactor closed

Known EDS deviations handled here (flagged because the real board reports the
corrected values over SDO even though this EDS file says otherwise):
    - 0x1A01 sub2 in the EDS is 0x68440010; the manual's TPDO2 map is
      0x6043,0x6044,0x6843,0x6844 -> sim serves 0x60440010
    - 0x1400 sub1 default has bit31 set (PDO invalid); sim serves 0x200+ID valid

Usage:
    python3 italsea_sim.py [--channel vcan0] [--interface socketcan] [--node-id 1]
"""

import argparse
import logging
import random
import struct
import threading
import time

import canopen
from canopen.sdo import SdoAbortedError

log = logging.getLogger("italsea_sim")

EDS_PATH = "ItalseaDualDrive.eds"

ABORT_VALUE_TOO_HIGH = 0x06090031
ABORT_VALUE_TOO_LOW = 0x06090032
SIGNATURE_SAVE = b"save"   # 0x65766173 little-endian on the wire
SIGNATURE_LOAD = b"load"   # 0x64616F6C

BATTERY_DECIVOLT = 245        # 24.5 V nominal (7CH2D090, 24 V system)
RATED_CURRENT_MA = 25_000     # 7CH2D090 default rated current 25 ARMS
SOFTWARE_VERSION = 0x0207
REBOOT_DELAY_S = 0.4          # NMT Reset Node -> boot-up message. A real MCU
                              # takes a few hundred ms to reboot; emitting the
                              # boot-up instantly races masters that call
                              # wait_for_bootup() right after sending the reset.

# Power-on parameter values per the user manual (the EDS ships all-zero
# defaults because the real board fills these in at runtime).
# name -> (min, default, max)
PARAM_DEFAULTS = {
    "CANBUS NODE ID": (1, 1, 127),
    "CANBUS BAUDRATE": (0, 3, 4),
    "CANBUS HEARTBEAT RATE": (0, 100, 5000),
    "TPDO1 ENABLE": (0, 1, 1),
    "TPDO1 RATE": (10, 100, 10000),
    "TPDO2 ENABLE": (0, 1, 1),
    "TPDO2 RATE": (10, 100, 10000),
    "TPDO3 ENABLE": (0, 1, 1),
    "TPDO3 RATE": (10, 1000, 10000),
    "RPDO1 ENABLE": (0, 1, 1),
    "RPDO1 TIMEOUT": (0, 200, 10000),
    "ACCELERATION RAMP": (1, 30, 100),
    "NEUTRAL RAMP": (1, 30, 100),
    "NOLOAD MAXIMUM SPEED": (50, 4200, 10000),
}


class Axis:
    def __init__(self):
        self.target = 0       # rpm, signed (power-on value 0)
        self.demand = 0.0
        self.actual = 0


class Italsea7CH2D090Sim:
    def __init__(self, channel, interface, node_id, eds_path=EDS_PATH):
        self.node_id = node_id
        self.network = canopen.Network()
        self.network.connect(interface=interface, channel=channel)
        self.node = canopen.LocalNode(node_id, eds_path)
        self.network.add_node(self.node)

        self.axes = (Axis(), Axis())
        self._eeprom = {}          # committed parameter values: index -> int
        self._pending = {}         # written but not yet stored
        self._seeding = False
        self._reset_request = None
        self._last_rpdo1 = None    # monotonic time of last RPDO1, None = not armed
        self._lock = threading.Lock()

        # Resolve Italsea parameter objects by name (EDS index layout is not
        # the manual's 0x3000+ID formula, so never hardcode these).
        self._params = {}
        for index, obj in self.node.object_dictionary.items():
            if 0x3000 <= index <= 0x3FFF and not isinstance(
                obj, canopen.objectdictionary.ODVariable
            ):
                self._params[obj.name.upper()] = index
        self._param_indexes = set(self._params.values())

        self.node.add_write_callback(self._on_sdo_write)
        self.network.subscribe(0x000, self._on_nmt)
        self.network.subscribe(0x200 + node_id, self._on_rpdo1)

    # ------------------------------------------------------------------ #
    # small data-store helpers
    # ------------------------------------------------------------------ #
    def _od_var(self, index, sub):
        obj = self.node.object_dictionary[index]
        if not isinstance(obj, canopen.objectdictionary.ODVariable):
            obj = obj[sub]
        return obj

    def _set(self, index, sub, value):
        # Encode with the OD's own datatype so the sim always matches the EDS.
        self.node.set_data(index, sub, self._od_var(index, sub).encode_raw(value))

    def _get(self, index, sub, default=0):
        try:
            return self._od_var(index, sub).decode_raw(
                self.node.get_data(index, sub))
        except Exception:
            return default

    def _param(self, name, default=0):
        index = self._params.get(name.upper())
        if index is None:
            return default
        return self._get(index, 1, default)

    # ------------------------------------------------------------------ #
    # boot / NMT
    # ------------------------------------------------------------------ #
    def boot(self):
        """Power-on / Reset Node sequence, per UM sec. 25."""
        self._seeding = True
        with self._lock:
            self.node.data_store.clear()
            self._pending.clear()
            self._seed_parameters()
            self._seed_runtime_objects()
            for axis in self.axes:
                axis.target = 0
                axis.demand = 0.0
                axis.actual = 0
            self._last_rpdo1 = None
        self._seeding = False

        self.node.nmt._state = 0
        self.network.send_message(0x700 + self.node_id, b"\x00")  # boot-up
        log.info("boot-up sent, entering PRE-OPERATIONAL")
        self.node.nmt._state = 127
        self._send_heartbeat()
        # Bench-observed behavior: the board STAYS in PRE-OPERATIONAL until
        # the master sends NMT Start (command 1). The UM sec. 25 claim of an
        # automatic transition does not match the real 7CH2D090. Incoming
        # NMT start/stop/preop commands are applied by canopen's NmtSlave,
        # which updates node.nmt._state; TPDO/RPDO gating follows it.

        self._refresh_periods()

    def _seed_parameters(self):
        for name, (vmin, vdef, vmax) in PARAM_DEFAULTS.items():
            index = self._params.get(name.upper())
            if index is None:
                continue
            self._set(index, 2, vmin)
            self._set(index, 3, vmax)
            self._set(index, 4, vdef)
            value = self._eeprom.get(index, vdef)
            self._set(index, 1, value)
        if self._params.get("CANBUS NODE ID") is None:
            log.warning("parameter objects not found by name; check EDS")

    def _seed_runtime_objects(self):
        n = self.node_id
        # Identity / versions
        self._set(0x1018, 1, 0x00000578)        # Italsea vendor id
        self._set(0x1018, 2, 0x00000001)
        self._set(0x1018, 3, 0x00000007)
        self._set(0x1018, 4, 0x00C0FFEE)
        self._set(0x2201, 0, SOFTWARE_VERSION)
        # PDO communication parameters as the real board reports them
        self._set(0x1400, 1, 0x00000200 + n)     # EDS default has bit31 set
        self._set(0x1800, 1, 0x40000180 + n)
        self._set(0x1801, 1, 0x40000280 + n)
        self._set(0x1802, 1, 0x40000380 + n)
        # EDS bug: 0x1A01 sub2 says 0x6844, board maps 0x6044 (UM 23.4.6)
        self._set(0x1A01, 2, 0x60440010)
        # Drive constants
        self._set(0x6075, 0, RATED_CURRENT_MA)
        self._set(0x6875, 0, RATED_CURRENT_MA)
        self._set(0x6073, 0, 900)                # 90.0 A max (A/10)
        self._set(0x6873, 0, 900)
        # Process data power-on values
        self._set(0x2310, 1, 0)                  # no alarm
        self._set(0x2310, 2, 0b00001000)         # contactor closed, brakes set
        self._set(0x2301, 0, BATTERY_DECIVOLT)
        self._set(0x2300, 1, 32)
        for index in (0x2311,):
            self._set(index, 1, 0)
            self._set(index, 4, 0)
        for index in (0x6042, 0x6043, 0x6044, 0x6842, 0x6843, 0x6844,
                      0x6078, 0x6878):
            self._set(index, 0, 0)
        self._set(0x2380, 1, BATTERY_DECIVOLT)   # bus voltage
        for sub in (2, 3, 4, 5, 6, 7):
            self._set(0x2380, sub, 0)

    def _refresh_periods(self):
        # Rates are parameters -> applied at power-on only, like the board.
        self.hb_period = max(self._param("CANBUS HEARTBEAT RATE", 100), 10) / 1000.0
        self.t1_period = self._param("TPDO1 RATE", 100) / 1000.0
        self.t2_period = self._param("TPDO2 RATE", 100) / 1000.0
        self.t3_period = self._param("TPDO3 RATE", 1000) / 1000.0
        self.t1_enabled = bool(self._param("TPDO1 ENABLE", 1))
        self.t2_enabled = bool(self._param("TPDO2 ENABLE", 1))
        self.t3_enabled = bool(self._param("TPDO3 ENABLE", 1))
        self.rpdo1_enabled = bool(self._param("RPDO1 ENABLE", 1))
        self.rpdo1_timeout = self._param("RPDO1 TIMEOUT", 200) / 1000.0
        accel = max(self._param("ACCELERATION RAMP", 30), 1) / 10.0   # s to max
        self.max_rpm = self._param("NOLOAD MAXIMUM SPEED", 4200)
        self.ramp_rpm_s = self.max_rpm / accel
        log.info(
            "periods: HB %.0fms TPDO1 %.0fms TPDO2 %.0fms TPDO3 %.0fms, "
            "RPDO1 timeout %.0fms, ramp %.0f rpm/s",
            self.hb_period * 1e3, self.t1_period * 1e3, self.t2_period * 1e3,
            self.t3_period * 1e3, self.rpdo1_timeout * 1e3, self.ramp_rpm_s,
        )

    def _on_nmt(self, can_id, data, timestamp):
        if len(data) < 2 or data[1] not in (0, self.node_id):
            return
        command = data[0]
        if command in (129, 130):                      # Reset Node / Reset Comm
            log.info("NMT reset command %d received", command)
            self._reset_request = command
        # 1 / 2 / 128 are applied by canopen's NmtSlave (state gating below)

    @property
    def operational(self):
        return self.node.nmt._state == 5

    def _send_heartbeat(self):
        self.network.send_message(0x700 + self.node_id,
                                  bytes([self.node.nmt._state & 0x7F]))

    # ------------------------------------------------------------------ #
    # SDO write behavior (parameters, store/restore, velocity targets)
    # ------------------------------------------------------------------ #
    def _on_sdo_write(self, *, index, subindex, od, data):
        if self._seeding:
            return

        if index in self._param_indexes and subindex == 1:
            value = struct.unpack("<H", data)[0]
            vmin = self._get(index, 2)
            vmax = self._get(index, 3)
            if vmax > vmin:
                if value > vmax:
                    raise SdoAbortedError(ABORT_VALUE_TOO_HIGH)
                if value < vmin:
                    raise SdoAbortedError(ABORT_VALUE_TOO_LOW)
            self._pending[index] = value
            log.info("param 0x%04X (%s) <- %d (volatile until store)",
                     index, od.parent.name, value)

        elif index == 0x1010 and subindex == 1:
            if data[:4] != SIGNATURE_SAVE:
                raise SdoAbortedError(0x08000020)      # cannot be stored
            self._eeprom.update(self._pending)
            self._pending.clear()
            log.info("parameters stored to EEPROM (%d values)", len(self._eeprom))

        elif index == 0x1011 and subindex == 1:
            if data[:4] != SIGNATURE_LOAD:
                raise SdoAbortedError(0x08000020)
            self._eeprom.clear()
            log.info("restore defaults requested; applied at next reset")

        elif index in (0x6042, 0x6842):
            axis = self.axes[0 if index == 0x6042 else 1]
            axis.target = struct.unpack("<h", data)[0]

    # ------------------------------------------------------------------ #
    # RPDO1
    # ------------------------------------------------------------------ #
    def _on_rpdo1(self, can_id, data, timestamp):
        if not (self.operational and self.rpdo1_enabled) or len(data) < 4:
            return
        t0, t1 = struct.unpack_from("<hh", data)
        with self._lock:
            self.axes[0].target = t0
            self.axes[1].target = t1
            self._set(0x6042, 0, t0)
            self._set(0x6842, 0, t1)
            self._last_rpdo1 = time.monotonic()

    def _check_rpdo1_timeout(self, now):
        if (self._last_rpdo1 is not None and self.rpdo1_timeout > 0
                and now - self._last_rpdo1 > self.rpdo1_timeout):
            # UM 23.3: mapped objects reset to power-on value -> targets = 0.
            # (Depending on alarm config the real board can also latch A16.)
            log.warning("RPDO1 timeout (%.0f ms): speed references reset to 0",
                        self.rpdo1_timeout * 1e3)
            with self._lock:
                for axis in self.axes:
                    axis.target = 0
                self._set(0x6042, 0, 0)
                self._set(0x6842, 0, 0)
                self._last_rpdo1 = None                # re-arm on next frame

    # ------------------------------------------------------------------ #
    # drive model + TPDOs
    # ------------------------------------------------------------------ #
    def _step_model(self, dt):
        for i, axis in enumerate(self.axes):
            limit = self.ramp_rpm_s * dt
            error = axis.target - axis.demand
            axis.demand += max(-limit, min(limit, error))
            moving = abs(axis.demand) > 1
            axis.actual = int(axis.demand + (random.uniform(-3, 3) if moving else 0))

            base = 0x6043 if i == 0 else 0x6843
            self._set(base, 0, int(axis.demand))
            self._set(base + 1, 0, axis.actual)

            permille = int(abs(axis.demand) / self.max_rpm * 600
                           + (30 if moving else 0) + random.uniform(-5, 5))
            self._set(0x6078 if i == 0 else 0x6878, 0, permille)
            ovl = min(1000, int(abs(permille)))
            self._set(0x2311, 1 if i == 0 else 4, ovl // 10)
            # motor voltage ~ proportional to speed (Measures, V/10)
            v_mot = int(axis.demand / self.max_rpm * BATTERY_DECIVOLT)
            self._set(0x2380, 2 if i == 0 else 5, v_mot)

        load = (abs(self.axes[0].demand) + abs(self.axes[1].demand)) / (2 * self.max_rpm)
        self._set(0x2301, 0, int(BATTERY_DECIVOLT - load * 8 + random.uniform(-1, 1)))
        self._set(0x2380, 1, self._get(0x2301, 0))
        self._set(0x2300, 1, min(90, int(32 + load * 25)))
        status2 = 0b00001000                            # main contactor closed
        if abs(self.axes[0].demand) > 1 or self.axes[0].target != 0:
            status2 |= 0b001                            # brake 1 released
        if abs(self.axes[1].demand) > 1 or self.axes[1].target != 0:
            status2 |= 0b010                            # brake 2 released
        self._set(0x2310, 2, status2)

    def _tx_tpdo1(self):
        payload = struct.pack(
            "<BBhhh",
            self._get(0x2310, 1),
            self._get(0x2310, 2),
            self._get(0x2301, 0),
            self._get(0x6078, 0),
            self._get(0x6878, 0),
        )
        self.network.send_message(0x180 + self.node_id, payload)

    def _tx_tpdo2(self):
        payload = struct.pack(
            "<hhhh",
            self._get(0x6043, 0),
            self._get(0x6044, 0),
            self._get(0x6843, 0),
            self._get(0x6844, 0),
        )
        self.network.send_message(0x280 + self.node_id, payload)

    def _tx_tpdo3(self):
        payload = struct.pack(
            "<HBHH",
            self._get(0x2201, 0),
            self._get(0x2300, 1),
            self._get(0x2311, 1),
            self._get(0x2311, 4),
        )
        self.network.send_message(0x380 + self.node_id, payload)

    # ------------------------------------------------------------------ #
    def run(self):
        self.boot()
        tick = 0.01
        now = time.monotonic()
        next_hb = next_t1 = next_t2 = next_t3 = now
        last = now
        try:
            while True:
                time.sleep(tick)
                now = time.monotonic()

                if self._reset_request is not None:
                    log.info("rebooting (NMT command %d)", self._reset_request)
                    self._reset_request = None
                    self.node.nmt._state = 0          # silent during "reboot"
                    time.sleep(REBOOT_DELAY_S)
                    self.boot()
                    next_hb = next_t1 = next_t2 = next_t3 = time.monotonic()
                    last = time.monotonic()
                    continue

                self._step_model(now - last)
                last = now

                if now >= next_hb:
                    self._send_heartbeat()
                    next_hb = now + self.hb_period

                if self.operational:
                    self._check_rpdo1_timeout(now)
                    if self.t1_enabled and now >= next_t1:
                        self._tx_tpdo1()
                        next_t1 = now + self.t1_period
                    if self.t2_enabled and now >= next_t2:
                        self._tx_tpdo2()
                        next_t2 = now + self.t2_period
                    if self.t3_enabled and now >= next_t3:
                        self._tx_tpdo3()
                        next_t3 = now + self.t3_period
        except KeyboardInterrupt:
            pass
        finally:
            self.network.disconnect()


def main():
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[1])
    parser.add_argument("--channel", default="vcan0")
    parser.add_argument("--interface", default="socketcan")
    parser.add_argument("--node-id", type=int, default=1)
    parser.add_argument("--eds", default=EDS_PATH)
    args = parser.parse_args()

    logging.basicConfig(level=logging.INFO,
                        format="%(asctime)s %(levelname)s %(message)s")
    sim = Italsea7CH2D090Sim(args.channel, args.interface, args.node_id, args.eds)
    log.info("7CH2D090 sim: node %d on %s", args.node_id, args.channel)
    sim.run()


if __name__ == "__main__":
    main()
