import os
from urllib import response
import canopen
import traceback
import subprocess

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
from iris_interfaces.srv import AlarmReset
from motor_control.italsea_dual_drive import ItalseaDualDrive

#: Constant used to define the network interface to be used by the network module.
INTERFACE = "vcan0"

#: Constant used to define the bitrate in which the motor control lifecycle node should
#: initiate communication to the CAN network.
BITRATE = 500000

NODE_ID = 1

CAN_UP_SCRIPT_PATH = "/home/maddy/canopen_test/motor_control/scripts/can_init.sh"


class MotorControl(Node):
    def __init__(self, interface, bitrate, node_id):
        super().__init__('motor_control')
        self.interface = interface
        self.bitrate = bitrate
        self.node_id = node_id
        self.__node_logger = self.get_logger()
        self.routine_callback_group = ReentrantCallbackGroup()
        self.motor_control_callback_group = MutuallyExclusiveCallbackGroup()
        self.network: Optional[canopen.Network] = None
        self.current_state: State | None = State("unconfigured",0)
        # self.update_parameters_srv= self.create_service(UpdateMotorControllerParameters, 
        #         'update_motor_controller_parameters', 
        #         self.update_motor_controller_parameters_callback, 
        #         callback_group=self.motor_control_callback_group)
        self.reset_controller_srv= self.create_service(RestartMotorController, 
                'restart_motor_controller', 
                self.restart_motor_controller_callback)
        self.update_reference_source_srv= self.create_service(UpdateMotorControllerReferenceSource, 
                'update_motor_controller_reference_source', 
                self.update_motor_controller_reference_source_callback) 
        self.alarm_reset_srv_=self.create_service(AlarmReset,
                "reset_alarm",self.reset_alarm)  
        rclpy.logging.get_logger("motor_control")



    def on_configure(self, state: State) -> TransitionCallbackReturn:
        try:
            self.__node_logger.warn("--- CONFIGURING ---")
            self.network = canopen.Network()
            self.network.connect(bustype='socketcan', channel=self.interface, bitrate=self.bitrate)
            self.__motor_node= ItalseaDualDrive(self.node_id)
            self.network.add_node(self.__motor_node.dual_drive)
            self.__motor_node_emcy = self.__motor_node.dual_drive.emcy 
            self.__motor_node_emcy.add_callback(self.__emcy_callback)
            self.__motor_node_nmt = self.__motor_node.dual_drive.nmt
            self.__motor_node.dual_drive.nmt.state = 'PRE-OPERATIONAL'
            self.__motor_node.dual_drive.load_configuration()
            self.__motor_node.dual_drive.sdo.RESPONSE_TIMEOUT = 1.0
            self.__motor_node.init_pdos()
            self.__motor_node.init_sdos()

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
            traceback.print_exception(e)
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
            self.__motor_node.dual_drive.rpdo[1].start(0.04)
            self.current_state = State("active", 3)
            return TransitionCallbackReturn.SUCCESS
        
        except Exception as e:
            traceback.print_exc(e)
            return TransitionCallbackReturn.ERROR
        
    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        try:
            self.__node_logger.warn("--- DEACTIVATING ---")
            self.__motor_node.left_wheel_rpm.raw = 0
            self.__motor_node.right_wheel_rpm.raw = 0
            self.status_publisher.destroy()
            self.check_alarms_timer.destroy()
            self.publish_status_timer.destroy()
            self.wheel_command_subscriber.destroy()
            self.__node_logger.warn(
                "Deactivation Successful: Controller State - {}".format(
                    self.__motor_node_nmt.state
                )
            )
            self.__motor_node.dual_drive.rpdo[1].stop()
            self.current_state = State("inactive", 2)
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
            self.__node_logger.warn("Shutdown successful")
            self.__current_state = State("finalized", 4)
            return TransitionCallbackReturn.SUCCESS
        except Exception as e:
            traceback.print_exception(e)
            return TransitionCallbackReturn.ERROR
    
    def on_error(self, exception: Exception) -> TransitionCallbackReturn:

        self.__node_logger.error("--- ERROR HANDLING ---")
        # OSError: Errno 19 - No such device 'can0' -> raised by network.connect()
        if type(exception) is OSError and (
            exception.errno == 19 or exception.errno == 100
        ):
            self.__node_logger.info("Error: {}".format(exception))
            self.__node_logger.info("Trying to initialize CAN - {}.".format(INTERFACE))
            return self.__initialize_can_network()

        # CanOperationError: Error code 100 - Network is down -> raised by network.check()
        elif type(exception) is CanOperationError and exception.error_code == 100:
            self.__node_logger.info("Error: {}".format(exception))
            self.__node_logger.info("Trying to bringup network - {}".format(INTERFACE))
            return self.__initialize_can_network()

        # NMTError: No boot-up or heartbeat received -> raised by nmt.wait_for_heartbeat()
        elif type(exception) is NmtError:
            self.__node_logger.fatal("No heartbeat from Italsea Dual Drive Controller.")
            return TransitionCallbackReturn.ERROR

        elif type(exception) is SdoCommunicationError:
            self.__node_logger.info(
                "No response from Italsea Dual Drive for SDO Request."
            )
            return TransitionCallbackReturn.ERROR

        # Unhandled Exception
        else:
            traceback.print_exception(exception)
            self.__node_logger.fatal("Could not handle exception. Cleaning up")
            self.__current_state = State("finalized", 4)
            return TransitionCallbackReturn.ERROR
    
    def __wheel_command_callback(self, msg):

        self.__node_logger.warn(
            "Left RPM: {}, Right RPM: {}".format(msg.left_wheel, msg.right_wheel)
        )

        self.__motor_node.left_wheel_rpm.raw = msg.left_wheel
        self.__motor_node.right_wheel_rpm.raw = msg.right_wheel
    
    def __check_network_callback(self):
        try:
            self.network.check()
        except CanOperationError as e:
            self.__node_logger.error("CAN network error: {}".format(e))
            self.on_error(e)

    def __heartbeat_callback(self):
        try:
            self.__motor_node_nmt.wait_for_heartbeat(1)
        except CanOperationError as e:
            self.__node_logger.error("CAN network error: {}".format(e))
            self.on_error(e)

    def __check_alarms_callback(self):
        try:
            self.__check_node_alarms()
        except Exception as e:
            traceback.print_exception(e)
            self.on_error(e)
    
    def __check_node_alarms(self):

        self.__current_alarm= self.__motor_node.actual_alarm.phys
        if self.__current_alarm != 0:
            self.__alarm_msg = "A{} - {}".format(
                self.__current_alarm,
                self.__motor_node.alarm_list["A" + str(self.__current_alarm)],
            )
            self.__node_logger.error("Motor Alarm: {}".format(self.__alarm_msg))
            self.trigger_deactivate()
        else:
            self.__alarm_msg = "A{} - {}".format(
            self.__current_alarm,
            self.__motor_node.alarm_list["A" + str(self.__current_alarm)],
            )

    def __emcy_callback(self, emcy_error_code):
   
        self.__node_logger.error("EMCY message received: {}".format(emcy_error_code))

    def __publish_status_callback(self):
        
        self.__controller_status = MotorControllerStatus()
        self.__controller_status.software_version = (
            self.__motor_node.p_manufacturer_software_version
        )
        self.__controller_status.controller_nmt_state = (
            self.__motor_node.dual_drive.nmt.state
        )

        # Controller Status
        self.__controller_status.input_voltage = (
            self.__motor_node.input_voltage.phys / 10.0
        )
        self.__controller_status.board_temperature = (
            self.__motor_node.board_temperature.raw
        )
        self.__controller_status.sto_status = self.__motor_node.status2.bits[2]
        self.__controller_status.controller_alarm = self.__current_alarm
        self.__controller_status.controller_nmt_state = (
            self.__motor_node.dual_drive.nmt.state
        )

        # Left Motor Status
        self.__controller_status.left_motor.brake_state = self.__motor_node.status2.bits[0]
        
        self.__controller_status.left_motor.motor_voltage = (
            self.__motor_node.left_motor_voltage.phys / 10.0
        )
        self.__controller_status.left_motor.motor_current = (
            self.__motor_node.left_motor_current.raw / 1000
        ) * self.__motor_node.p_motor_rated_current
        self.__controller_status.left_motor.demand_rpm = (
            self.__motor_node.left_wheel_rpm_demand.raw / 10
        )
        self.__controller_status.left_motor.actual_rpm = (
            self.__motor_node.left_wheel_rpm_actual.raw / 10
        )
        self.__controller_status.left_motor.overload_percentage = (
            self.__motor_node.left_overload_percentage.raw
        )
        
        # Right Motor Status
        self.__controller_status.right_motor.brake_state = self.__motor_node.status2.bits[1]
        self.__controller_status.right_motor.motor_voltage = (
            self.__motor_node.right_motor_voltage.phys / 10.0
        )
        self.__controller_status.right_motor.motor_current = (
            self.__motor_node.right_motor_current.raw / 1000
        ) * self.__motor_node.p_motor_rated_current
        self.__controller_status.right_motor.demand_rpm = (
            self.__motor_node.right_wheel_rpm_demand.raw / 10
        )
        self.__controller_status.right_motor.actual_rpm = (
            self.__motor_node.right_wheel_rpm_actual.raw / 10
        )
        self.__controller_status.right_motor.overload_percentage = (
            self.__motor_node.right_overload_percentage.raw
        )
        self.__status_publisher.publish(self.__controller_status)


    def restart_motor_controller_callback(self,request,response):
        if self.current_state.name =="inactive":
            try:
                self.motor_node.reset_dual_drive(request.reset_reason)
                response.result = "Motor controller reset successfully."
                self.trigger_cleanup()
                return response
            except Exception as e:
                traceback.print_exception(e)
                response.result = "Failed to reset motor controller."
                return response
        else:
            response.result ="curent_state is not inactive, cannot reset motor controller"
            self.__node_logger.warn(response.result)
            return response
    
    def update_motor_controller_reference_source_callback(self,request,response):
        if self.current_state.label =="inactive":
            try:
                self.motor_node.update_reference_source(request.reference_source)
                response.response = "Reference source updated successfully."
                return response
            except Exception as e:
                traceback.print_exception(e)
                response.response = "Failed to update reference source."
                return response
        else:
            response.response = "Current state is not inactive, cannot update reference source in this state.{}".format(
                self.current_state.label
            )
            self.__node_logger.warn(response.response)
            return response
        
    def reset_alarm(self,request,response):

        if self.current_state.label == "inactive":
            self.__motor_node.reset_alarm_warning(request.reset_alarm)
            response.respones ='Alarm reseted successfully'
            return response
        else:
            response.response = "Current state is not inactive, cannot update reference source in this state.{}".format(
                self.current_state.label
            )
            self.__node_logger.warn(response.response)
            return response
        
    def __initialize_can_network(self):
        subprocess.run([CAN_UP_SCRIPT_PATH])
        if INTERFACE in os.listdir("/sys/class/net/"):
            self.__node_logger.info("Network UP - {}.".format(INTERFACE))
            # The below code is inconsistent with the Lifecycle design and C++ API
            # return TransitionCallbackReturn.SUCCESS -> Unconfigured but sets to Inactive state
            return TransitionCallbackReturn.FAILURE
        else:
            self.__node_logger.fatal("Could not setup network - {}.".format(INTERFACE))
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
