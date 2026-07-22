import subprocess  # Added missing import
import canopen
import rclpy
from rclpy.node import Node

INTERFACE_1 = "can0"
INTERFACE_2 = "can1"
BITRATE = 500000

# CORRECTED: Changed from folder paths to explicit file paths
CAN_SCRIPT = "/home/agx/canopen_test/can_interface/scripts/can_init.sh"
IRIS_A5_EDS_PATH = "/home/agx/canopen_test/a5_control/eds/IRIS_A5.eds"
ITALSEA_DUAL_DRIVE_EDS_PATH = (
    "/home/agx/canopen_test/motor_control/eds/IRIS_A2.eds"
)


class Can_interface_1(Node):

    def __init__(
        self, a5_node_id, ital_node_id, interface_1, interface_2, bitrate
    ):
        super().__init__("can_interface")
        self.a5_id = a5_node_id
        self.ital_id = ital_node_id
        self.interface_1 = interface_1
        self.interface_2 = interface_2
        self.bitrate = bitrate
        self.network_can0 = canopen.Network()
        self.network_can1 = canopen.Network()
        self.remote_1 = canopen.RemoteNode(self.a5_id, IRIS_A5_EDS_PATH)
        self.remote_2 = canopen.BaseNode402(
            self.ital_id, ITALSEA_DUAL_DRIVE_EDS_PATH
        )

        self.network_can0.add_node(self.remote_1)
        self.network_can1.add_node(self.remote_2)
        self.initialize_can_network()

    def network_connect(self):
        self.network_can0.connect(
            bustype="socketcan",
            channel=self.interface_1,
            bitrate=self.bitrate,
        )
        self.network_can1.connect(
            bustype="socketcan",
            channel=self.interface_2,
            bitrate=self.bitrate,
        )
        self.remote_1.nmt.state = "PRE-OPERATIONAL"
        self.remote_2.nmt.state = "PRE-OPERATIONAL"
        self.can_state()

    def can_state(self):
        self.remote_1.nmt.state = "OPERATIONAL"
        self.can_comm_can0()
        self.remote_2.nmt.state = "OPERATIONAL"
        self.can_comm_can1()

    def can_comm_can0(self):

        self.encoders = self.remote_1.tpdo[1]
        self.ultrasonic_sensors = self.remote_1.tpdo[2]
        self.water_level_and_status = self.remote_1.tpdo[3]

    def can_comm_can1(self):
        # CORRECTED: Removed the extra [2] index. pycanopen targets names directly on the .tpdo dictionary.
        # TPDO 1
        self.status_bits = self.remtpdo[1]

    def initialize_can_network(self):
        # Force execution via shell interpreter
        subprocess.run(["/bin/bash", CAN_SCRIPT])



def main():
    rclpy.init()
    can_interface = Can_interface_1(
        a5_node_id=5,
        ital_node_id=1,
        interface_1=INTERFACE_1,
        interface_2=INTERFACE_2,
        bitrate=BITRATE,
    )
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
