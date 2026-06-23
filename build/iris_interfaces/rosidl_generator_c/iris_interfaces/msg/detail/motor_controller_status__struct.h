// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'software_version'
// Member 'sto_status'
// Member 'controller_alarm'
// Member 'controller_nmt_state'
#include "rosidl_runtime_c/string.h"
// Member 'left_motor'
// Member 'right_motor'
#include "iris_interfaces/msg/detail/motor_status__struct.h"

/// Struct defined in msg/MotorControllerStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__MotorControllerStatus
{
  rosidl_runtime_c__String software_version;
  float input_voltage;
  uint8_t board_temperature;
  rosidl_runtime_c__String sto_status;
  rosidl_runtime_c__String controller_alarm;
  rosidl_runtime_c__String controller_nmt_state;
  iris_interfaces__msg__MotorStatus left_motor;
  iris_interfaces__msg__MotorStatus right_motor;
} iris_interfaces__msg__MotorControllerStatus;

// Struct for a sequence of iris_interfaces__msg__MotorControllerStatus.
typedef struct iris_interfaces__msg__MotorControllerStatus__Sequence
{
  iris_interfaces__msg__MotorControllerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__MotorControllerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__STRUCT_H_
