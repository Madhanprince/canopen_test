#!/home/agx/canopen_test/venv241/bin/python3.10
"""
Standalone CANopen controller for the A5 unit — no ROS2 dependency.

Replaces the rclpy lifecycle node with a plain state machine and
replaces ROS message types / publishers with dataclasses and
user-supplied callbacks.
"""

import logging
import time
import traceback
from dataclasses import dataclass, field
from enum import Enum
from typing import Callable, Optional

import canopen

# --------------------------------------------------------------------------
# Config
# --------------------------------------------------------------------------

INTERFACE = "can0"
BITRATE = 500000
IRIS_A5_EDS_PATH = "/home/agx/canopen_test/a5_control/eds/IRIS_A5.eds"

logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] %(name)s: %(message)s",
)


# --------------------------------------------------------------------------
# Message payloads (replace iris_interfaces.msg / sensor_msgs / etc.)
# --------------------------------------------------------------------------

@dataclass
class WheelEncoders:
    left_wheel_ticks: int = 0
    right_wheel_ticks: int = 0


@dataclass
class RangeReading:
    frame_id: str = ""
    stamp: float = 0.0
    range: float = 0.0
    min_range: float = 0.2
    max_range: float = 1.5
    field_of_view: float = 1.57


@dataclass
class UltrasonicRanges:
    ultrasonic_1: RangeReading = field(default_factory=RangeReading)
    ultrasonic_2: RangeReading = field(default_factory=RangeReading)
    ultrasonic_3: RangeReading = field(default_factory=RangeReading)
    ultrasonic_4: RangeReading = field(default_factory=RangeReading)


@dataclass
class WaterTankLevels:
    fresh_water_tank_level: int = 0
    dirty_water_tank_level: int = 0


@dataclass
class A5Status:
    mode_and_status: str = ""


# --------------------------------------------------------------------------
# Lifecycle state machine (replaces rclpy.lifecycle State/TransitionCallbackReturn)
# --------------------------------------------------------------------------

class LifecycleState(Enum):
    UNCONFIGURED = 0
    INACTIVE = 1
    ACTIVE = 2
    FINALIZED = 3


class A5Control:
    def __init__(self, node_id: int, interface: str, bitrate: int):
        self.log = logging.getLogger("a5_control")
        self.log.info("A5Control starting (standalone, no ROS2)")

        self._interface = interface
        self._bitrate = bitrate
        self.node_id = node_id

        self.network = canopen.Network()
        self.remote = canopen.RemoteNode(self.node_id, IRIS_A5_EDS_PATH)
        self.network.add_node(self.remote)

        self.state = LifecycleState.UNCONFIGURED

        # Latest values, updated by PDO callbacks
        self.encoders_msg = WheelEncoders()
        self.ultrasonic_msg = UltrasonicRanges()
        self.water_levels_msg = WaterTankLevels()
        self.status_msg = A5Status()

        # Optional user-supplied callbacks — call e.g. node.on_encoders = my_fn
        self.on_encoders: Optional[Callable[[WheelEncoders], None]] = None
        self.on_ultrasonic: Optional[Callable[[UltrasonicRanges], None]] = None
        self.on_water_levels: Optional[Callable[[WaterTankLevels], None]] = None
        self.on_status: Optional[Callable[[A5Status], None]] = None

        self.log.info(f"Connected to Node {self.node_id}")

    # ----------------------------------------------------------------
    # Lifecycle transitions
    # ----------------------------------------------------------------

    def configure(self) -> bool:
        try:
            self.log.warning("---CONFIGURING---")
            self.network.connect(
                bustype="socketcan", channel=self._interface, bitrate=self._bitrate
            )
            self.remote.nmt.state = "PRE-OPERATIONAL"
            self.remote.load_configuration()

            self.encoders = self.remote.tpdo[1]
            self.ultrasonic_sensors = self.remote.tpdo[2]
            self.water_level_and_status = self.remote.tpdo[3]
            self.led_command = self.remote.rpdo[1]["LedCommand"]

            self._ultrasonic_setup()

            self.state = LifecycleState.INACTIVE
            return True

        except Exception:
            self.log.error("Configure failed:\n" + traceback.format_exc())
            return False

    def activate(self) -> bool:
        self.log.warning("---ACTIVATING---")
        self.remote.nmt.state = "OPERATIONAL"
        self.encoders.add_callback(self._encoders_callback)
        self.ultrasonic_sensors.add_callback(self._ultrasonic_callback)
        self.water_level_and_status.add_callback(self._water_level_and_status_callback)
        self.state = LifecycleState.ACTIVE
        return True

    def deactivate(self) -> bool:
        self.log.warning("---DE-ACTIVATING---")
        self.encoders.callbacks.clear()
        self.ultrasonic_sensors.callbacks.clear()
        self.water_level_and_status.callbacks.clear()
        self.remote.nmt.state = "PRE-OPERATIONAL"
        self.state = LifecycleState.INACTIVE
        return True

    def cleanup(self) -> bool:
        if self.network is not None:
            self.log.warning("---CLEANING UP---")
            self.remote.nmt.state = "PRE-OPERATIONAL"
            self.network.disconnect()
            self.log.warning("Cleanup successful.")
            self.state = LifecycleState.UNCONFIGURED
            return True
        return False

    def shutdown(self) -> bool:
        self.log.critical("---SHUTTING DOWN---")
        if self.state == LifecycleState.ACTIVE:
            self.deactivate()
        if self.state == LifecycleState.INACTIVE:
            self.cleanup()
        self.log.critical("Shutdown successful.")
        self.state = LifecycleState.FINALIZED
        return True

    # ----------------------------------------------------------------
    # PDO callbacks
    # ----------------------------------------------------------------

    def _encoders_callback(self, tpdo_encoder):
        self.encoders_msg = WheelEncoders(
            left_wheel_ticks=tpdo_encoder["LeftEncoder"].raw,
            right_wheel_ticks=tpdo_encoder["RightEncoder"].raw,
        )
        if self.on_encoders:
            self.on_encoders(self.encoders_msg)

    def _ultrasonic_setup(self):
        for i in range(1, 5):
            reading: RangeReading = getattr(self.ultrasonic_msg, f"ultrasonic_{i}")
            reading.frame_id = f"Ultrasonic_{i}"
            reading.field_of_view = 1.57
            reading.min_range = 0.2
            reading.max_range = 1.5

    def _ultrasonic_callback(self, tpdo_ultrasonic):
        for i in range(1, 5):
            reading: RangeReading = getattr(self.ultrasonic_msg, f"ultrasonic_{i}")
            reading.stamp = time.time()
            reading.range = tpdo_ultrasonic[f"Ultrasonic{i}"].raw / 100.0
        if self.on_ultrasonic:
            self.on_ultrasonic(self.ultrasonic_msg)

    def _water_level_and_status_callback(self, tpdo_water_level_and_status):
        self.water_levels_msg = WaterTankLevels(
            fresh_water_tank_level=tpdo_water_level_and_status["FreshWaterLevel"].raw,
            dirty_water_tank_level=tpdo_water_level_and_status["DirtyWaterLevel"].raw,
        )
        if self.on_water_levels:
            self.on_water_levels(self.water_levels_msg)

        self.status_msg = A5Status(
            mode_and_status=str(tpdo_water_level_and_status["ModeAndStatus"].raw)
        )
        if self.on_status:
            self.on_status(self.status_msg)


# --------------------------------------------------------------------------
# Entry point
# --------------------------------------------------------------------------

def main():
    node = A5Control(node_id=5, interface=INTERFACE, bitrate=BITRATE)

    # Example: hook up simple print callbacks in place of ROS publishers
    node.on_encoders = lambda msg: print(msg)
    node.on_ultrasonic = lambda msg: print(msg)
    node.on_water_levels = lambda msg: print(msg)
    node.on_status = lambda msg: print(msg)

    if not node.configure():
        return
    if not node.activate():
        node.cleanup()
        return

    try:
        while True:
            time.sleep(0.1)
    except KeyboardInterrupt:
        pass
    finally:
        node.shutdown()


if __name__ == "__main__":
    main()
