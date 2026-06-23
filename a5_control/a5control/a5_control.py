import canopen
import time
import rclpy
from rclpy.node import Node
from rclpy.lifecycle import Node
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
        self.remote.load_configuration()
        # TPDO 1
        self.encoders = self.remote.tpdo[1]
        # TPDO 2
        self.ultrasonic_sensors = self.remote.tpdo[2] # how to assign the ultrasonic
        # TPDO 3
        self.water_level_and_status = self.remote.tpdo[3]
        # RPDO 1
        self.led_command = self.remote.rpdo[1]["LedCommand"]
        
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
        
        self.__current_state = State("inactive",2)
        return TransitionCallbackReturn.SUCCESS

    def on_activate( self,state)->TransitionCallbackReturn :

        self.__node_logger.warn("---ACTIVATING---")
        self.remote.nmt.state="OPERATIONAL"
        self.__encoders.add_callback(self.__a5_encoders_callback)
        self.__ultrasonic_sensors.add_callback(
            self.__a5_ultrasonic_sensors_callback
        )
        self.water_level_and_status.add_callback(
            self.__a5_water_level_and_status_callback
        )
        self.__current_state = State("activate",3)
        return TransitionCallbackReturn.SUCCESS

    def on_deactivate(self,state)->TransitionCallbackReturn :
            
        self.__node_logger.warn("---DE-ACTIVATING---")
        self.destroy_publisher(self.__encoder_publisher)
        self.destroy_publisher(self.__ultrasonic_publisher)
        self.destroy_publisher(self.__water_levels_publisher)
        self.destroy_publisher(self.__status_publisher)
        self.destroy_subscription(self.__led_command_subscriber)
        self.__a5_node.encoders.callbacks.clear()
        self.__a5_node.ultrasonic_sensors.callbacks.clear()
        self.__a5_node.water_level_and_status.callbacks.clear()
        self.__a5_node_nmt.state = "PRE-OPERATIONAL"

        self.__current_state = State("inactivate",2)
        return TransitionCallbackReturn.SUCCESS

    def on_cleanup(self, state: State) -> TransitionCallbackReturn:

        if self.network is not None :
            self.__node_logger.warn("---CLEANING UP---")
            self.remote.state = "PRE-OPERATIONAL"
            self.__network.disconnect()
            self.__node_logger.warn("Cleanup successful.")
            self.__current_state = State("unconfigured", 0)
            return TransitionCallbackReturn.SUCCESS
        
    def on_shutdown(self,state:State) ->TransitionCallbackReturn :

        self.__node_logger.fatal("---SHUTTING DOWN---")
        self.__node_logger.fatal("Shutdown successful.")
        self.__current_state = State("finalized", 4)
        return TransitionCallbackReturn.SUCCESS

    # def on_error(self,)
        
    def a5_encoders_callback(self,tpdo_encoder):

        self.encoders_msg = WheelEncoders()
        self.encoders_msg.left_wheel_ticks =tpdo_encoder["LeftEncoder"].raw 
        self.encoders_msg.right_wheel_ticks =tpdo_encoder["RightEncoder"].raw

        self.__encoder_publisher.publish(self.encoders_msg)
    
    def a5_ultrasonic_sensors_callback(self,tpdo_ultrasonic):

        self.ultrasonic_sensors_msg = 

    def a5_water_level_and_status_callback(self,tpdo_water_level_and_status):

        self.a5_water_level_and_status_msg = WaterTankLevels()
        self.fresh_water_tank_level =self.tpdo_water_level_and_status["DirtyWaterLevel"].raw
        self.dirty_water_tank_level =self.tpdo_water_level_and_status["FreshWaterLevel"].raw
        self.water_levels_publisher.publish(self.a5_water_level_and_status_msg)

        status_msg = A5Status()
        status_msg.mode_and_status = str(
            tpdo_water_level_and_status["ModeAndStatus"].raw
        )
        self.status_msg.publish(status_msg)
        self.__water_levels_publisher.publish(a5_water_level_and_status_msg_msg)
    
   

def main():
    rclpy.init()
    a5_node=A5Control(node_id = 5,INTERFACE,BITRATE)


if __name__ == '__main__':
    main()