import canopen
import time
import rclpy
import traceback
import subprocess
from rclpy.node import Node
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
from geometry_msgs.msg import Twist

from ament_index_python.packages import get_package_share_path

INTERFACE = "vcan0"
BITRATE = 500000
IRIS_A5_EDS_PATH = "/home/maddy/canopen_test/a5_control/eds/IRIS_A5.eds"
CAN_UP_SCRIPT_PATH = "/home/maddy/canopen_test/a5_control/scripts/can_init.sh"

class A5Control(Node):
    def __init__(self,node_id,interface,bitrate):
        super().__init__('a5_control')
        self.get_logger().info("My ROS2 Node Started")
        self.__interface = interface
        self.__bitrate = bitrate
        self.node_id= node_id
        self.__node_logger = self.get_logger()
        self.network = canopen.Network()
        self.remote = canopen.RemoteNode(self.node_id,IRIS_A5_EDS_PATH)
        self.network.add_node(self.remote)
        self.current_state :State | None = State("unconfigured",0)
        self.initialize_can_network()
        print(f"Connected to Node{self.node_id}")
    
    def on_configure(self, State) -> TransitionCallbackReturn :
        try:
            self.__node_logger.warn("---CONFIGURING---")
            self.network.connect(bustype="socketcan", channel=self.__interface, bitrate=self.__bitrate)
            self.remote.nmt.state = "PRE-OPERATIONAL"
            self.remote.load_configuration()

            # self.encoders = self.remote.tpdo[1]
            # self.ultrasonic_sensors = self.remote.tpdo[2]
            # self.water_level_and_status = self.remote.tpdo[3]
            # self.led_command = self.remote.rpdo[1]["LedCommand"]
        
            self.__encoder_publisher = self.create_publisher(
                WheelEncoders, "wheel_encoders", 10
            )
            self.__ultrasonic_publisher = self.create_publisher(
                UltrasonicRanges, "ultrasonic_ranges", 10
            )
            self.__water_levels_publisher = self.create_publisher(
                WaterTankLevels, "water_tank_levels", 10
            )
            self.__status_publisher = self.create_publisher(
                A5Status, "a5_control_status", 10
            )
            # self.__led_command_subscriber = self.create_subscription(
            #     LedControl, "a5_control/led_control", self.__led_control_callback, 10
            # )
            # self.ultrasonic_msg = UltrasonicRanges()
            # self.ultrasonic_setup()
            # self.current_state = State("inactive",2)
            return TransitionCallbackReturn.SUCCESS
        
        except Exception as e:
             traceback.print_exception(e)

    def on_activate(self, State) -> TransitionCallbackReturn :

        try:
            self.__node_logger.warn("---ACTIVATING---")
            self.remote.nmt.state = "OPERATIONAL"
            # self.encoders.add_callback(self.a5_encoders_callback)
            # self.ultrasonic_sensors.add_callback(self.a5_ultrasonic_sensors_callback)
            # self.water_level_and_status.add_callback(self.a5_water_level_and_status_callback)
            # self.current_state = State("activate",3)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e :
            traceback.print_exception(e)

    def on_deactivate(self, State) -> TransitionCallbackReturn :
            
        self.__node_logger.warn("---DE-ACTIVATING---")
        self.destroy_publisher(self.__encoder_publisher)
        self.destroy_publisher(self.__ultrasonic_publisher)
        self.destroy_publisher(self.__water_levels_publisher)
        self.destroy_publisher(self.__status_publisher)
        self.destroy_subscription(self.__led_command_subscriber)
        self.encoders.callbacks.clear()
        self.ultrasonic_sensors.callbacks.clear()
        self.water_level_and_status.callbacks.clear()
        self.remote.nmt.state = "PRE-OPERATIONAL"

        self.current_state = State("inactivate",2)
        return TransitionCallbackReturn.SUCCESS

    def on_cleanup(self, State) -> TransitionCallbackReturn:

        if self.network is not None:
            self.__node_logger.warn("---CLEANING UP---")
            self.remote.nmt.state = "PRE-OPERATIONAL"
            self.network.disconnect()
            self.__node_logger.warn("Cleanup successful.")
            self.current_state = State("unconfigured", 0)
            return TransitionCallbackReturn.SUCCESS
        
    def on_shutdown(self,State) ->TransitionCallbackReturn :

        self.__node_logger.fatal("---SHUTTING DOWN---")
        self.__node_logger.fatal("Shutdown successful.")
        self.current_state = State("finalized", 4)
        return TransitionCallbackReturn.SUCCESS 
        
    def on_error(self, state):
        return super().on_error(state)
    
    def a5_encoders_callback(self,tpdo_encoder):

        self.encoders_msg = WheelEncoders()
        self.encoders_msg.left_wheel_ticks =tpdo_encoder["LeftEncoder"].raw 
        self.encoders_msg.right_wheel_ticks =tpdo_encoder["RightEncoder"].raw

        self.__encoder_publisher.publish(self.encoders_msg)
    
    def ultrasonic_setup(self):
        for i in range(1,5):
            self.ultrasonic = getattr(self.ultrasonic_msg ,f"ultrasonic_{i}")

            self.ultrasonic.header.frame_id = f"ultrasonic_{i}"
            self.ultrasonic.radiation_type = Range.ULTRASOUND
            self.ultrasonic.field_of_view = 1.57
            self.ultrasonic.min_range = 0.2 
            self.ultrasonic.max_range = 1.5
    
    def a5_ultrasonic_sensors_callback(self,ultrasonic_rpdo):

        for i in range(1,5):
            self.ultrasonic = getattr(self.ultrasonic_msg ,f"ultrasonic{i}")
            self.ultrasonic.header.stamp = self.get_clock().now().to_msg()
            self.ultrasonic.range = ultrasonic_rpdo[f"Ultrasonic{i}"].raw / 100.0

    def a5_water_level_and_status_callback(self, tpdo_water_level_and_status):

        self.a5_water_level_and_status_msg = WaterTankLevels()
        self.fresh_water_tank_level =self.tpdo_water_level_and_status["DirtyWaterLevel"].raw
        self.dirty_water_tank_level =self.tpdo_water_level_and_status["FreshWaterLevel"].raw
        self.water_levels_publisher.publish(self.a5_water_level_and_status_msg)

        status_msg = A5Status()
        status_msg.mode_and_status = str(
            tpdo_water_level_and_status["ModeAndStatus"].raw
        )
        self.__status_publisher.publish(status_msg)

    
    def led_control_callback(self,msg):

        self.led_command.raw = msg.led_command 
        self.led_command.bits[6]= msg.left_indicator
        self.led_command.bits[7]= msg.right_indicator

    def initialize_can_network(self):
        subprocess.run([CAN_UP_SCRIPT_PATH])
    
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