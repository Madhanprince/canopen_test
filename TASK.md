# Task: Write a CANopen driver for the Italsea 7CH2D090 (simulated)

A simulator of our Italsea 7CH2D090 dual-drive controller runs on `vcan0` as
**node 1**, speaking real CiA 301. It behaves like the bench unit: boot-up
message, stays in PRE-OPERATIONAL until you send NMT Start, heartbeat, TPDO1/2/3,
RPDO1 with a 200 ms safety timeout, Italsea parameter objects with
save/restore signatures, and NMT Reset Node reboots.

You get `ItalseaDualDrive.eds`, the 7CH2D090 user manual (sections 16–25 are
the ones that matter), and the `canopen` docs: https://canopen.readthedocs.io/

## Setup

```bash
sudo modprobe vcan && sudo ip link add dev vcan0 type vcan && sudo ip link set vcan0 up
+
python3 italsea_sim.py          # terminal 1
candump vcan0                   # terminal 2 — keep this open the whole time
```

(No vcan available? `python3 selftest.py` runs sim + reference driver on an
in-process virtual bus.)

## The mission

Write **one Python module** with a driver class (think: a small
`ItalseaDualDrive`) that takes the node through its full lifecycle:

1. **Bring-up** — connect, ensure the node boots (send NMT Reset Node if you attached late), send NMT Start when the heartbeat shows PRE-OPERATIONAL,
   and confirm the heartbeat reports OPERATIONAL.
2. **Identify** — read the software version (0x2201) and rated current
   (0x6075) once via SDO.
3. **Bind PDOs** — `tpdo.read()` / `rpdo.read()` so your bindings come from
   the device, then expose named attributes for: target velocities (RPDO1),
   alarm/status/input-voltage/currents (TPDO1), velocity demand+actual both
   axes (TPDO2), board temp + overloads (TPDO3).
4. **Drive** — stream RPDO1 velocity commands at ≥10 Hz (faster than the
   200 ms timeout), log the ramped feedback from TPDO2, and decode TPDO1
   units correctly (V/10, ‰ of rated current, Status 2 bits).
5. **Respect the safety net** — stop streaming on purpose and show in your
   log (and in candump) what the controller does when RPDO1 times out.
   Explain in one comment why our AMR relies on this behavior.
6. **Configure** — change `TPDO1 RATE` via SDO, store with `node.store(1)`,
   reboot with NMT Reset Node, and prove the new rate survived (measure the
   TPDO1 period from timestamps, don't just read the parameter back).
   Also show what happens when you write a value below the parameter's
   minimum, and which SDO abort code comes back.

Deliverable: the module + a ~10-line README of what you observed on candump
at each step. `reference_driver.py` is the answer key — don't open it until
you're done or properly stuck.

## Things that will bite you (intentionally)

- PDOs are silent until the node is OPERATIONAL. If candump shows only
  0x701 heartbeats, check the state byte.
- Parameter writes are volatile until you write the "save" signature to
  0x1010:01 — and they only take effect after a reset, like the real board.
- ParameterNames in this EDS are space-separated and 0x6044's name is
  truncated ("Velocity Mode Velocity Actual Value Axis"). Bind by what the
  EDS actually says, or by index.
