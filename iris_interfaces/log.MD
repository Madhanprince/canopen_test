# IRIS INTERFACES

## BRIEF
This Package is used to create interfaces to communicate between packages. Mainly contains of msg, srv and action.

## DATE : 09-03-2025

## AUTHOR : RMCL_ROBOTICS

### Log 
* created the ros 2 package with WheelEncoders.msg

#### Date : 09-03-2025
#### Modified by Yasvanth S
---
#### Date : 17-03-2025 - Jeevaga Kirupha Roopan S
* Added WheelCommandSpeed.msg for **iris_motor_control** package
---
#### Date : 19-03-2025 - Jeevaga Kirupha Roopan S
* Changed Data type in WheelCommandSpeed.msg for **iris_motor_control** package
---

### Log 
* Added variables in WheelEncoders.msg.

#### Date : 20-03-2025
#### Modified by Yasvanth S
---

### Log 
* Added sensor status message.

#### Date : 07-04-2025
#### Modified by Yasvanth S
---

### Log 
* Changed float to float32 in sensor status.
* Added sensor status message in cmakelists.

#### Date : 15-04-2025
#### Modified by Yasvanth S
---

### Log 
* Changed from bool to string for sensor_status.
* Added constant values for connected and disconnected.

#### Date : 16-04-2025
#### Modified by Yasvanth S

---
#### Date : 16-04-2025 - Jeevaga Kirupha Roopan S
* Added motor status message
* Added motor controller status message
  
---
#### Date : 19-04-2025 - Jeevaga Kirupha Roopan S
* Added custom srv for motor controller restart and motor controller update parameters.
  
---
#### Date : 29-04-2025 - Jeevaga Kirupha Roopan S
* Modified `UpdateMotorContollerParameters` srv's request from bool to uint as ROS types are C++ types. So it doesn't allow us to pass the parameter as is to a confitional statement in python.
* Updated function

---
#### Date : 17-06-2025 - Jeevaga Kirupha Roopan S
* Added UltrasonicRanges.msg for ultrasonic message publication.
---
#### Date : 19-06-2025 - Jeevaga Kirupha Roopan S
* Added WaterTankLevels.msg for fresh and dirty water tank level message publication.
---

### Log 
* Added StateManager service message for launch and handling state of the nodes.

#### Date : 27-06-2025
#### Modified by Yasvanth S
---

### Log 
* Changed node_name to component_name in StateManager.srv

#### Date : 15-07-2025
#### Modified by Yasvanth S
---

### Log 
* Added ComputePathCoverage and NavigatePathCoverage action.
* Added HeadbandMode and NavigationMode msg.

#### Date : 13-08-2025
#### Modified by Yasvanth S
---

### Log 
* Added PathCoverageController action for path coverage controller.
* Added FollowPathResult message for follow path.

#### Date : 1-09-2025
#### Modified by Yasvanth S

---
#### Date : 02-09-2025 - Jeevaga Kirupha Roopan S
* Added `OTAStatus.msg` for mender interface package.
---
#### Date : 11-09-2025 - Jeevaga Kirupha Roopan S
* Added `ResetWheelEncoders.srv` for iris a5 control package.
* Modified `ResetWheelEncoders.srv` response.
---
### Log 
* Added Container name in Process Manager service.

#### Date : 24-10-2025
#### Modified by Boopesh E
---
#### Date : 17-10-2025 - 0.5.8 - Jeevaga Kirupha Roopan S
* Added `A5Status.msg` and `LedControl.msg`.
---
#### Date : 22-10-2025 - 0.5.9 - Jeevaga Kirupha Roopan S
* Added `A2FaultStatus.msg`, `A2Command.msg`, `A2FunctionalStautus.msg`, `ActuatorStatus.msg`, `WaterPumpControl.msg`, 
`BrushFaults.msg`, `BrushStatus.msg`, `vacuumFaults.msg` and `vacuumStatus.msg`.
---
#### Date : 24-11-2025 - 0.5.10 - Jeevaga Kirupha Roopan S
* Added sofware version field in `MotorControllerStatus.msg`.
* Modified field data type for A2 related messages
---
#### Date : 09-12-2025 - 0.5.11 - Jeevaga Kirupha Roopan S
* Added `A2Command` srv.
* Added `UpdateMotorControllerReferenceSource` srv.
* Added `ResetA2Faults` srv.
* Corrected typo in `Vacuum`.
* Modified `A2Command` msg for pump flow rate alone.
---
#### Date : 09-12-2025 - 0.5.12 - Jeevaga Kirupha Roopan S
* Added `a2_fault_status` field in `A2FaultStatus.msg` to help monitor overall fault status.
---
#### Date : 27-04-2026 - 0.5.13 - Jeevaga Kirupha Roopan S
* Changes from P6.
---