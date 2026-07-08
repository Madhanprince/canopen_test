import canopen
from rclpy.logging import get_logger

CAN_UP_SCRIPT_PATH = (
    "motor_control/scripts/can_up.sh"
)
#: Constant used to define the network interface to be used by the network module.
INTERFACE = "can0"

#: Constant used to define the bitrate in which the motor control lifecycle node should
#: initiate communication to the CAN network.
BITRATE = 500000

class ItalseaDualDrive:
    def __init__(self, node_id):
        self.node_id = node_id
        self.dual_drive=canopen.BaseNode402(node_id, 'motor_control/italsea_dual_drive.eds')
        self.__logger = get_logger('italsea_dual_drive')
        self.alarm_list = {
            "A0": "No alarm",
            "A1": "FW/BW Switch ON: Release the direction switches or re-set the input hardware configuration.",
            "A2": "Hall Sensor Fault (1): Verify the integrity and the quality of the crimps, re-connect the encoder/hall sensor cable to the controller and restart the controller.",
            "A3": "Pot. Fault: Verify the integrity and the quality of the crimps, re-connect the potentiometer to the controller and restart the controller.",
            "A4": "Ref out Neutral: Verify the integrity and the quality of the crimps: if the alarm persists perform a speed reference calibration",
            "A5": "Board Overtemperature (1): Switch off the board and let it cool: if the alarm persists an additional heat sink or cooling fan could be required.",
            "A6": "Power Stage (1): Critical Damage - Replace the controller.",
            "A7": "Overcurrent (1): Unplug the motor cables and switch on the board if the alarm persists, replace the controller.",
            "A8": "Power Fuse/Relay: Verify the integrity of the external power fuse, try to disconnect possible loads connected to the board and restart the controller: if the alarm persists, replace the controller.",
            "A9": "Undervoltage: Verify the state of charge of the battery and the wiring quality. Restart the controller.",
            "A10": "Overvoltage: Verify the integrity of the battery and eventually contact the battery manufacturer to get information about the regenerative braking current. Restart the controller.",
            "A11": "Overload Current (1): Verify the system current absorptions and, eventually, customize the specific motor parameters. Restart the controller.",
            "A12": "Disable ON: Reconnect the STO input and restart the controller.",
            "A13": "Key-OFF: Verify the integrity of the external key switch fuse, the integrity, and the quality of the crimps. Switch off the controller for 10 seconds, then switch it on again.",
            "A14": "EEPROM FAIL: Perform a 'Reset to Default' using the programmer and restart the controller. If alarm persists, replace the controller",
            "A15": "Overspeed (1): Verify the logic-state of the hall-sensor cables, the integrity, and the quality of the encoder crimps (if used). Disconnect the motor from sources that could speed up the motor shaft. Restart the controller.",
            "A16": "Comm. Timeout: Verify the integrity and the quality of the crimps on the communication cable and restart the controller.",
            "A17": "Motor Overtemperature (1): Switch off the board and let it cool: if the alarm persists an additional heat sink or cooling fan could be required.",
            "A18": "Hall Sensor Fault (2): Verify the integrity and the quality of the crimps, re-connect the encoder/hall sensor cable to the controller and restart the controller.",
            "A19": "Board Overtemperature (2): Switch off the board and let it cool: if the alarm persists an additional heat sink or cooling fan could be required.",
            "A20": "Power Stage (2): Critical Damage - Replace the controller.",
            "A21": "Overcurrent (2): Unplug the motor cables and switch on the board if the alarm persists, replace the controller.",
            "A22": "Overload Current (2): Verify the system current absorptions and, eventually, customize the specific motor parameters. Restart the controller.",
            "A23": "Overspeed (2): Verify the logic-state of the hall-sensor cables, the integrity, and the quality of the encoder crimps (if used). Disconnect the motor from sources that could speed up the motor shaft. Restart the controller.",
            "A24": "Motor Overtemperature (2): Switch off the board and let it cool: if the alarm persists an additional heat sink or cooling fan could be required.",
            "A25": "Phase Lack (1): Verify the integrity and the quality of the crimps, re-connect the power cables to the controller and restart the controller.",
            "A26": "Phase Lack (2): Verify the integrity and the quality of the crimps, re-connect the power cables to the controller and restart the controller.",
        }

    def init_pdos(self):
        self.left_wheel_rpm = self.dual_drive.rpdo[1][
            "VelocityModeTargetVelocity-Axis0"
        ]
        self.right_wheel_rpm = self.dual_drive.rpdo[1][
            "VelocityModeTargetVelocity-Axis1"
        ]

        self.actual_alarm = self.dual_drive.tpdo[1]["InternalStatus.ActualAlarm"]
        self.status2 = self.dual_drive.tpdo[1]["InternalStatus.Status2"]
        self.input_voltage = self.dual_drive.tpdo[1]["InputVoltage"]
        self.left_motor_current = self.dual_drive.tpdo[1]["CurrentActualValue-Axis0"]
        self.right_motor_current = self.dual_drive.tpdo[1]["CurrentActualValue-Axis1"]

        self.velocity_demand_axis_0=self.dual_drive.tpdo[2]["Velocity mode velocity demand Axis 0"]
        self.velocity_actual_axis_0=self.dual_drive.tpdo[2]["Velocity mode velocity actual value Axis 0"]
        self.velocity_demand_axis_1=self.dual_drive.tpdo[2]["Velocity mode velocity demand-Axis1"]
        self.velocity_actual_axis_1=self.dual_drive.tpdo[2]["Velocity mode velocity actual value-Axis 1"]

         # TPDO-3
        self.software_version = self.dual_drive.tpdo[3]["SoftwareVersion"]
        self.board_temperature = self.dual_drive.tpdo[3][
            "Temperatures.BoardTemperature"
        ]
        self.left_overload_percentage = self.dual_drive.tpdo[3][
            "Overload.OverloadPercentage-Axis0"
        ]
        self.right_overload_percentage = self.dual_drive.tpdo[3][
            "Overload.OverloadPercentage-Axis1"
        ]

    def init_sdos(self):
        
        self.p_motor_rated_current = (
            self.dual_drive.sdo["MotorRatedCurrent-Axis0"].raw / 1000
        )  # mA to A
        self.p_manufacturer_software_version = self.dual_drive.sdo[
            "ManufacturerSoftwareVersion"
        ].raw

        # Axis 0

        self.VelocityMinAmountAxis0 = self.dual_drive.sdo[
            "VelocityModeVelocityMinMaxAmount-Axis0"
        ]["VelocityMinAmount"] 

        self.VelocityMaxAmountAxis0 = self.dual_drive.sdo[
            "VelocityModeVelocityMinMaxAmount-Axis0"
        ]["VelocityMaxAmount"]

        self.VelocityAccelerationAxis0DeltaSpeed = self.dual_drive.sdo[
            "VelocityModeVelocityAcceleration-Axis0"
        ]["DeltaSpeed"]
        self.VelocityAccelerationAxis0DeltaTime = self.dual_drive.sdo[
            "VelocityModeVelocityAcceleration-Axis0"
        ]["DeltaTime"]

        self.VelocityDecelerationAxis0DeltaSpeed = self.dual_drive.sdo[
            "VelocityModeVelocityDeceleration-Axis0"
        ]["DeltaSpeed"]
        self.VelocityDecelerationAxis0DeltaTime = self.dual_drive.sdo[
            "VelocityModeVelocityDeceleration-Axis0"
        ]["DeltaTime"]

        # Axis 1

        self.VelocityMinAmountAxis1 = self.dual_drive.sdo[
            "VelocityModeVelocityMinMaxAmount-Axis1"
        ]["VelocityMinAmount"]

        self.VelocityMaxAmountAxis1 = self.dual_drive.sdo[
            "VelocityModeVelocityMinMaxAmount-Axis1"
        ]["VelocityMaxAmount"]

        self.VelocityAccelerationAxis1DeltaSpeed = self.dual_drive.sdo[
            "VelocityModeVelocityAcceleration-Axis1"
        ]["DeltaSpeed"]
        self.VelocityAccelerationAxis1DeltaTime = self.dual_drive.sdo[
            "VelocityModeVelocityAcceleration-Axis1"
        ]["DeltaTime"]

        self.VelocityDecelerationAxis1DeltaSpeed = self.dual_drive.sdo[
            "VelocityModeVelocityDeceleration-Axis1"
        ]["DeltaSpeed"]
        self.VelocityDecelerationAxis1DeltaTime = self.dual_drive.sdo[
            "VelocityModeVelocityDeceleration-Axis1"
        ]["DeltaTime"]

    def update_reference_source(self, reference_source):

        try:
            reference_source = int(reference_source)
        except (ValueError, TypeError):
            raise ValueError("Invalid reference source. Must be a valid integer.")

        if reference_source not in [0, 2]:
            raise ValueError("Invalid reference source. Must be 0 (CANopen) or 2 (Digital).")
        self.dual_drive.sdo["ReferenceSource"]["ActualValue"].raw = reference_source

        self.dual_drive.store(1)
        self.__logger.info("Reference source updated successfully.")
        self.restart_node("Restarting to set new reference source.")

    def reset_dual_drive(self,reset_reason):

        self.dual_drive.nmt.state = "RESET"
        self.dual_drive.wait_for_bootup(10)
        self.__logger.info("Software reboot completed.")
