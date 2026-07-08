#!/usr/bin/env python3
import canopen
import time
import rclpy
import traceback
import subprocess
from rclpy.lifecycle import Node
from rclpy.lifecycle import State
from rclpy.lifecycle import TransitionCallbackReturn

from iris_interfaces.msg import WheelEncoders
from iris_interfaces.msg import UltrasonicRanges
from iris_interfaces.msg import WaterTankLevels
from iris_interfaces.msg import A5Status
from iris_interfaces.msg import LedControl
from iris_interfaces.srv import ResetWheelEncoders
from sensor_msgs.msg import Range

INTERFACE        = "vcan0"
BITRATE          = 500000
IRIS_A5_EDS_PATH = "/home/maddy/canopen_test/a5_control/eds/IRIS_A5.eds"
CAN_UP_SCRIPT    = "/home/maddy/canopen_test/a5_control/scripts/can_init.sh"
SDO_TIMEOUT_SEC  = 2.0


class A5Control(Node):

    def __init__(self, node_id, interface, bitrate):
        super().__init__('a5_control')
        self.get_logger().info("My ROS2 Node Started")
        self.__interface   = interface
        self.__bitrate     = bitrate
        self.node_id       = node_id
        self.__log         = self.get_logger()
        self.network       = canopen.Network()
        self.remote        = canopen.RemoteNode(self.node_id, IRIS_A5_EDS_PATH)
        self.network.add_node(self.remote)
        self.current_state = State("unconfigured", 0)
        self.initialize_can_network()
        self.__log.info(f"Connected to Node{self.node_id}")

    # ── on_configure ─────────────────────────────────────────────────────────
    def on_configure(self, state) -> TransitionCallbackReturn:
        try:
            self.__log.warn("---CONFIGURING---")

            self.network.connect(
                bustype="socketcan",
                channel=self.__interface,
                bitrate=self.__bitrate
            )

            # Put device into PRE-OPERATIONAL and wait for it to settle.
            # Do NOT call load_configuration() — it tries to rewrite PDO COB-IDs
            # and communication parameters via SDO which this device rejects
            # with abort code 0x05040000 (SDO protocol timed out).
            # The EDS already describes the PDO layout — python-canopen can
            # read incoming TPDOs and send RPDOs without any SDO configuration.
            self.__log.info("Setting NMT → PRE-OPERATIONAL")
            self.remote.nmt.state = "PRE-OPERATIONAL"
            time.sleep(0.2)   # give the device time to process NMT

            # Raise SDO timeout for any SDO reads we do do (heartbeat check etc.)
            self.remote.sdo.RESPONSE_TIMEOUT = SDO_TIMEOUT_SEC

            # Map PDO handles — python-canopen resolves these from the EDS,
            # no SDO writes needed
            self.encoders               = self.remote.tpdo[1]
            self.ultrasonic_sensors     = self.remote.tpdo[2]
            self.water_level_and_status = self.remote.tpdo[3]
            self.led_command            = self.remote.rpdo[1]["LedCommand"]

            # Publishers
            self.__encoder_publisher = self.create_publisher(
                WheelEncoders, "wheel_encoders", 10)
            self.__ultrasonic_publisher = self.create_publisher(
                UltrasonicRanges, "ultrasonic_ranges", 10)
            self.__water_levels_publisher = self.create_publisher(
                WaterTankLevels, "water_tank_levels", 10)
            self.__status_publisher = self.create_publisher(
                A5Status, "a5_control_status", 10)
            self.__led_command_subscriber = self.create_subscription(
                LedControl, "a5_control/led_control",
                self.__led_control_callback, 10)

            self.ultrasonic_msg = UltrasonicRanges()
            self.ultrasonic_setup()

            self.current_state = State("inactive", 2)
            self.__log.warn("---CONFIGURED OK---")
            return TransitionCallbackReturn.SUCCESS

        except Exception as e:
            self.__log.error(f"on_configure failed: {e}")
            traceback.print_exc()
            return TransitionCallbackReturn.FAILURE

    # ── on_activate ──────────────────────────────────────────────────────────
    def on_activate(self, state) -> TransitionCallbackReturn:
        try:
            self.__log.warn("---ACTIVATING---")

            # Go OPERATIONAL only after configure is confirmed done
            self.remote.nmt.state = "OPERATIONAL"
            time.sleep(0.05)

            self.encoders.add_callback(self.a5_encoders_callback)
            self.ultrasonic_sensors.add_callback(self.a5_ultrasonic_sensors_callback)
            self.water_level_and_status.add_callback(self.a5_water_level_and_status_callback)

            self.current_state = State("active", 3)
            self.__log.warn("---ACTIVATED---")
            return TransitionCallbackReturn.SUCCESS

        except Exception as e:
            self.__log.error(f"on_activate failed: {e}")
            traceback.print_exc()
            return TransitionCallbackReturn.FAILURE

    # ── on_deactivate ─────────────────────────────────────────────────────────
    def on_deactivate(self, state) -> TransitionCallbackReturn:
        self.__log.warn("---DE-ACTIVATING---")
        self.encoders.callbacks.clear()
        self.ultrasonic_sensors.callbacks.clear()
        self.water_level_and_status.callbacks.clear()
        self.remote.nmt.state = "PRE-OPERATIONAL"

        self.destroy_publisher(self.__encoder_publisher)
        self.destroy_publisher(self.__ultrasonic_publisher)
        self.destroy_publisher(self.__water_levels_publisher)
        self.destroy_publisher(self.__status_publisher)
        self.destroy_subscription(self.__led_command_subscriber)

        self.current_state = State("inactive", 2)
        return TransitionCallbackReturn.SUCCESS

    # ── on_cleanup ────────────────────────────────────────────────────────────
    def on_cleanup(self, state) -> TransitionCallbackReturn:
        self.__log.warn("---CLEANING UP---")
        try:
            self.remote.nmt.state = "PRE-OPERATIONAL"
            self.network.disconnect()
        except Exception as e:
            self.__log.warn(f"Cleanup disconnect error (non-fatal): {e}")
        self.current_state = State("unconfigured", 0)
        return TransitionCallbackReturn.SUCCESS

    # ── on_shutdown ───────────────────────────────────────────────────────────
    def on_shutdown(self, state) -> TransitionCallbackReturn:
        self.__log.fatal("---SHUTTING DOWN---")
        try:
            self.network.disconnect()
        except Exception:
            pass
        self.current_state = State("finalized", 4)
        return TransitionCallbackReturn.SUCCESS

    def on_error(self, state):
        return super().on_error(state)

    # ── TPDO callbacks ────────────────────────────────────────────────────────
    def a5_encoders_callback(self, tpdo_encoder):
        msg = WheelEncoders()
        msg.left_wheel_ticks  = tpdo_encoder["LeftEncoder"].raw
        msg.right_wheel_ticks = tpdo_encoder["RightEncoder"].raw
        self.__encoder_publisher.publish(msg)

    def ultrasonic_setup(self):
        for i in range(1, 5):
            us = getattr(self.ultrasonic_msg, f"ultrasonic_{i}")
            us.header.frame_id = f"ultrasonic_{i}"
            us.radiation_type  = Range.ULTRASOUND
            us.field_of_view   = 1.57
            us.min_range       = 0.2
            us.max_range       = 1.5

    def a5_ultrasonic_sensors_callback(self, ultrasonic_rpdo):
        for i in range(1, 5):
            us = getattr(self.ultrasonic_msg, f"ultrasonic_{i}")
            us.header.stamp = self.get_clock().now().to_msg()
            us.range = ultrasonic_rpdo[f"Ultrasonic{i}"].raw / 100.0
        self.__ultrasonic_publisher.publish(self.ultrasonic_msg)

    def a5_water_level_and_status_callback(self, tpdo_water_level_and_status):
        wl_msg = WaterTankLevels()
        wl_msg.dirty_water_tank_level = tpdo_water_level_and_status["DirtyWaterLevel"].raw
        wl_msg.fresh_water_tank_level = tpdo_water_level_and_status["FreshWaterLevel"].raw
        self.__water_levels_publisher.publish(wl_msg)

        status_msg = A5Status()
        status_msg.mode_and_status = str(
            tpdo_water_level_and_status["ModeAndStatus"].raw)
        self.__status_publisher.publish(status_msg)

    # ── RPDO send ─────────────────────────────────────────────────────────────
    def __led_control_callback(self, msg: LedControl):
        self.led_command.raw     = msg.led_command
        self.led_command.bits[6] = msg.left_indicator
        self.led_command.bits[7] = msg.right_indicator

    # ── CAN bring-up ──────────────────────────────────────────────────────────
    def initialize_can_network(self):
        result = subprocess.run(
            [CAN_UP_SCRIPT], capture_output=True, text=True)
        if result.returncode != 0:
            self.__log.warn(
                f"can_init.sh exited {result.returncode}: {result.stderr.strip()}")


# ── main ──────────────────────────────────────────────────────────────────────
def main():
    rclpy.init()
    a5_node = A5Control(node_id=5, interface=INTERFACE, bitrate=BITRATE)
    try:
        rclpy.spin(a5_node)
    except KeyboardInterrupt:
        pass
    finally:
        try:
            a5_node.destroy_node()
        except Exception:
            pass
        rclpy.shutdown()


if __name__ == '__main__':
    main()