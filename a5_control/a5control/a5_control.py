import canopen
import time
import rclpy
from rclpy.node import Node
from rclpy.lifecycle import Node
from rclpy.lifecycle import Publisher
from rclpy.lifecycle import State
from rclpy.lifecycle import TransitionCallbackReturn

from ament_index_python.packages import get_package_share_path

INTERFACE = "can0"
BITRATE = 500000
IRIS_A5_EDS_PATH = str(get_package_share_path("canopen_test")) + "IRIS_A5.eds"

class A5Control(Node):
    def __init__(self,node_id,interface,bitrate):
        super().__init__('a5_control')
        self.get_logger().info("My ROS2 Node Started")
        self.__interface = interface
        self.__bitrate = bitrate
        self.node_id= node_id
        self.network = canopen.Network()
        self.remote = canopen.RemoteNode(self.node_id,IRIS_A5_EDS_PATH)
        self.network.add_node(self.remote)
        print(f"Connected to Node{self.node_id}")
    
    def on_configure(self, state) -> TransitionCallbackReturn :
        self.node_logger.Warn("---CONFIGURING---")
        self.network = canopen.Network()
        self.network.connect(bustype="scoketcan",channel= self.__interface, bitrate=self.__bitrate)
        self.remote.nmt.state = "PRE-OPERATIONAL"
        
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
        self.__led_command_subscriber = self.create_subscription(
                LedControl, "a5_control/led_control", self.__led_control_callback, 10
            )
        
    def on_active( self,state)->TransitionCallbackReturn :

        self.__node_logger.warn("---ACTIVATING---")
        self.
        self.__encoders.add_callback(self.__a5_encoders_callback)
        self.__ultrasonic_sensors.add_callback(
            self.__a5_ultrasonic_sensors_callback
        )
        self.water_level_and_status.add_callback(
            self.__a5_water_level_and_status_callback
        )
        self.__led_command.raw = LedCommand.STANDBY.value
        

def main():
    rclpy.init()
    a5_node=A5Control(node_id=1,INTERFACE,BITRATE)


if __name__ == '__main__':
    main()