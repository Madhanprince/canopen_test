import canopen
import rclpy
from rclpy.node import Node

INTERFACE_1="can0"
INTERFACE_2="can1"
BITRATE = 500000
CAN_SCRIPT="" 
IRIS_A5_EDS_PATH =""
ITALSEA_DUAL_DRIVE_EDS_PATH = ""


class Can_interface_1(Node):
    def __init__(self,a5_node_id,ital_node_id,interface_1,interface_2,bitrate):
        super().__init__('can_interface')
        self.a5_id = a5_node_id 
        self.ital_id = ital_node_id
        self.interface_1 = interface_1
        self.interface_2 = interface_2
        self.bitrate = bitrate
        self.network_can0 = canopen.Network()
        self.network_can1 = canopen.Network()
        self.remote_1 = canopen.RemoteNode(self.a5_id,IRIS_A5_EDS_PATH)
        self.remote_2 = canopen.BaseNode402(self.ital_id,ITALSEA_DUAL_DRIVE_EDS_PATH)
        
        self.network_can0.add_node(self.remote_1)
        self.network_can1.add_node(self.remote_2)
    
    def network_connect(self):
        self.network_can0.connect(bustype ="socketcan",channel=self.interface_1,bitrate =self.bitrate)
        self.network_can1.connect(bustype ="socketcan",channel=self.interface_2,bitrate =self.bitrate)
        self.remote_1.nmt.state = "PRE-OPERATIONAL"
        self.remote_2.nmt.state = "PRE-OPERATIONAL"
        self.can_state()

    def can_state(self):
        self.remote_1.nmt.state="OPERATIONAL"
        self.can_comm_can0()
        self.remote_2.nmt.state="OPERATIONAL"
        self.can_comm_can1()

    def can_comm_can0(self):
    
        self.encoders = self.remote_1.tpdo[1]
        self.ultrasonic_sensors = self.remote_1.tpdo[2]
        self.water_level_and_status = self.remote_1.tpdo[3]
    
    def can_comm_can1(self):
        self.left_wheel_rpm_demand = self.remote_2.tpdo[2][
            "VelocityModeVelocityDemand-Axis0"
        ]
        self.left_wheel_rpm_actual = self.remote_2.tpdo[2][
            "VelocityModeVelocityActualValue-Axis0"
        ]
        self.right_wheel_rpm_demand = self.remote_2.tpdo[2][
            "VelocityModeVelocityDemand-Axis1"
        ]
        self.right_wheel_rpm_actual = self.remote_2.tpdo[2][
            "VelocityModeVelocityActualValue-Axis1"
        ]

def main():
    rclpy.init()
    can_interface = Can_interface_1(a5_node_id=5,ital_node_id=1,interface_1=INTERFACE_1,
                                    interface_2=INTERFACE_2,bitrate=BITRATE)
    can_interface.network_connect()
    try:
        rclpy.spin(can_interface)
    except KeyboardInterrupt:
        pass
    finally:
        try:
            can_interface.destroy_node()
        except Exception:
            pass
        rclpy.shutdown()