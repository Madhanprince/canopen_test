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
        
        return super().on_configure(state)

def main():
    rclpy.init()
    a5_node=A5Control(node_id=1,INTERFACE,BITRATE)


if __name__ == '__main__':
    main()