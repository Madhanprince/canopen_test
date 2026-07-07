import os
import canopen
import traceback
import subprocess
import Exception

import rclpy
from typing import Optional
from can.exceptions import CanOperationError
from canopen.sdo.exceptions import SdoCommunicationError
from canopen.nmt import NmtError

from ament_index_python.packages import get_package_share_path

from rclpy.executors import MultiThreadedExecutor
from rclpy.timer import Timer
from rclpy.lifecycle import Node
from rclpy.lifecycle import State
from rclpy.lifecycle import TransitionCallbackReturn
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.callback_groups import ReentrantCallbackGroup

from iris_interfaces.msg import WheelCommandSpeed
from iris_interfaces.msg import MotorControllerStatus
from iris_interfaces.srv import UpdateMotorControllerParameters
from iris_interfaces.srv import RestartMotorController
from iris_interfaces.srv import UpdateMotorControllerReferenceSource
from motor_control.italsea_dual_drive import ItalseaDualDrive


#: Constant used to define the network interface to be used by the network module.
INTERFACE = "can0"

#: Constant used to define the bitrate in which the motor control lifecycle node should
#: initiate communication to the CAN network.
BITRATE = 500000

NODE_ID = 1


class MotorControl(Node):
    def __init__(self, interface, bitrate, node_id):
        super().__init__('motor_control')
        self.interface = interface
        self.bitrate = bitrate
        self.node_id = node_id
        self.routine_callback_group = ReentrantCallbackGroup()
        self.motor_control_callback_group = MutuallyExclusiveCallbackGroup()
        self.network: Optional[canopen.Network] = None
        self.current_state: State | None = State("unconfigured",0)
        self.update_parameters_srv= self.create_service(UpdateMotorControllerParameters, 
                'update_motor_controller_parameters', 
                self.update_motor_controller_parameters_callback, 
                callback_group=self.motor_control_callback_group)
        self.reset_controller_srv= self.create_service(RestartMotorController, 
                'restart_motor_controller', 
                self.restart_motor_controller_callback, 
                callback_group=self.motor_control_callback_group)
        self.update_reference_source_srv= self.create_service(UpdateMotorControllerReferenceSource, 
                'update_motor_controller_reference_source', 
                self.update_motor_controller_reference_source_callback, 
                callback_group=self.motor_control_callback_group)   
        

    def on_configure(self, state: State) -> TransitionCallbackReturn:
        try:
            self.__node_logger.warn("--- CONFIGURING ---")
            self.network = canopen.Network()
            self.network.connect(bustype='socketcan', channel=self.interface, bitrate=self.bitrate)
            self.motor_node= ItalseaDualDrive(self.node_id)
            self.network.add_node(self.motor_node.dual_drive)
            self.motor_node_nmt = self.motor_node.dual_drive.nmt
            self.motor_node_emcy = self.motor_node.dual_drive.emcy
            self.motor_node.add_callback(self.emcy_callback)
            self.motor_node.dual_drive.nmt.state = 'PRE-OPERATIONAL'

            self.motor_node.init_pdos()
            self.motor_node.init_sdos()

            # Axis 0 parameters
            self.__motor_node.VelocityMaxAmountAxis0.raw = 1000
            self.__motor_node.VelocityAccelerationAxis0DeltaSpeed.raw = 10000  
            self.__motor_node.VelocityAccelerationAxis0DeltaTime.raw = 10
            self.__motor_node.VelocityDecelerationAxis0DeltaSpeed.raw = 10000
            self.__motor_node.VelocityDecelerationAxis0DeltaTime.raw = 10

            # Axis 1 parameters
            self.__motor_node.VelocityMaxAmountAxis1.raw = 1000
            self.__motor_node.VelocityAccelerationAxis1DeltaSpeed.raw = 10000
            self.__motor_node.VelocityAccelerationAxis1DeltaTime.raw = 10
            self.__motor_node.VelocityDecelerationAxis1DeltaSpeed.raw = 10000
            self.__motor_node.VelocityDecelerationAxis1DeltaTime.raw = 10

            self.__check_network_timer = self.create_timer(
                0.04, self.__check_network_callback, self.__routine_callback_group
            )
            self.__heartbeat_timer = self.create_timer(
                1.0, self.__heartbeat_callback, self.__routine_callback_group
            )
            
            self.__node_logger.warn(
                "Configuration Successful: Controller State - {}".format(
                    self.__motor_node_nmt.state
                )
            )
          
            # Read Delta Speed
            self.__node_logger.info(
                "Delta Speed Axis 0 : Acc - {}, Dec - {}".format(
                self.__motor_node.VelocityAccelerationAxis0DeltaSpeed.raw,
                    self.__motor_node.VelocityDecelerationAxis0DeltaSpeed.raw
                )
            )

            self.__node_logger.info(
                "Delta Speed Axis 1 : Acc - {}, Dec - {}".format(
                    self.__motor_node.VelocityAccelerationAxis1DeltaSpeed.raw,
                    self.__motor_node.VelocityDecelerationAxis1DeltaSpeed.raw
                )
            )

            self.current_state = State("inactive", 1)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            traceback.print_exc(e)
            return self.on_error(e)

    def on_activate(self, state: State) -> TransitionCallbackReturn:
        try:
            self.__node_logger.warn("--- ACTIVATING ---")
            self.status_publisher = self.create_publisher(MotorControllerStatus, "motor_controller_status", 10)
            self.check_alarms_timer = self.create_timer(
                1.0, self.__check_alarms_callback, self.__routine_callback_group
            )
            self.publish_status_timer = self.create_timer(
                0.04,self.__publish_status_callback, self.__routine_callback_group
            )
            self.wheel_command_subscriber = self.create_subscription(
                WheelCommandSpeed, "wheel_command_speed", self.__wheel_command_callback, 10
            )
            self.__node_logger.warn(
                "Activation Successful: Controller State - {}".format(
                    self.__motor_node_nmt.state
                )
            )
            self.current_state = State("active", 2)
            return TransitionCallbackReturn.SUCCESS
        
    
        except Exception as e:
            traceback.print_exc(e)
            return self.on_error(e)
    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        try:
            self.__node_logger.warn("--- DEACTIVATING ---")
            self.motor_node.left_wheel_rpm.raw = 0
            self.motor_node.right_wheel_rpm.raw = 0
            self.status_publisher.destroy()
            self.check_alarms_timer.destroy()
            self.publish_status_timer.destroy()
            self.wheel_command_subscriber.destroy()
            self.__node_logger.warn(
                "Deactivation Successful: Controller State - {}".format(
                    self.__motor_node_nmt.state
                )
            )
            self.current_state = State("inactive", 1)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:  
            traceback.print_exc(e)
            return TransitionCallbackReturn.ERROR
    def on_cleanup(self, state: State) -> TransitionCallbackReturn:
            try:
                self.__node_logger.warn("---CLEANING UP---")
                self.__motor_node_nmt.state = "PRE-OPERATIONAL"
                self.destroy_timer(self.__check_network_timer)
                self.destroy_timer(self.__heartbeat_timer)
                self.__network.disconnect()
                self.__node_logger.warn("Cleanup successful")
                self.__current_state = State("unconfigured", 0)
                return TransitionCallbackReturn.SUCCESS
            except Exception as e:
                traceback.print_exception(e)
                return TransitionCallbackReturn.ERROR
    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        try:
            self.__node_logger.warn("---SHUTTING DOWN---")
            self.__motor_node_nmt.state = "STOPPED"
            self.__node_logger.warn("Shutdown successful")
            self.__current_state = State("finalized", 3)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            traceback.print_exception(e)
            return TransitionCallbackReturn.ERROR
        
def main():
    rclpy.init()
    executor = MultiThreadedExecutor()
    motor_control_node = MotorControl(INTERFACE, BITRATE ,NODE_ID)
    executor.add_node(motor_control_node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        executor.destroy_node(motor_control_node)
