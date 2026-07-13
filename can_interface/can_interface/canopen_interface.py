import canopen
import rclpy

INTERFACE_1="can0"
INTERFACE_2="can1"
BITRATE = 500000
CAN_SCRIPT="" 



class Can_interface_1(Node):
    def __init__(self,interface_1,interface_2,bitrate):
        self.interface1 = interface_1
        self.interface2 = interface_2
        self.bitrate_ = bitrate
        self.network_can0 = canopen.Network()
        self.network_can1 = canopen.Network()
        self.remote_1 = canopen.RemoteNode(self.node_id,IRIS_A5_EDS_PATH)
        self.remote_2 = canopen.RemoteNode(self.node_id,ITALSEA_DUAL_DRIVE_EDS_PATH)

        self.network_can0.add_node(self.remote_1)
        self.network_can1.add_node(self.remote_2)
    
    def network_connect(self):
        self.can_network.connect(bustype ="socketcan",channel=self.interface_1,bitrate =self.bitrate)
        self.can_network.connect(bustype ="socketcan",channel=self.interface_2,bitrate =self.bitrate)
        self.remote_1.nmt.state = "PRE-OPERATIONAL"
        self.remote_2.nmt.state = "PER-OPERATIONAL"

    def can_comm(self):
        self.encoders = self.remote.tpdo[1]
        self.ultrasonic_sensors = self.remote.tpdo[2]
        self.water_level_and_status = self.remote.tpdo[3]

        self.left_wheel_rpm_demand = self.dual_drive.tpdo[2][
            "VelocityModeVelocityDemand-Axis0"
        ]
        self.left_wheel_rpm_actual = self.dual_drive.tpdo[2][
            "VelocityModeVelocityActualValue-Axis0"
        ]
        self.right_wheel_rpm_demand = self.dual_drive.tpdo[2][
            "VelocityModeVelocityDemand-Axis1"
        ]
        self.right_wheel_rpm_actual = self.dual_drive.tpdo[2][
            "VelocityModeVelocityActualValue-Axis1"
        ]

def main():
    rclpy.init()
    can_interface = Can_interface_1(INTERFACE_1,INTERFACE_2,BITRATE)
    
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