// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'brake_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__MotorStatus
{
  rosidl_runtime_c__String brake_state;
  float motor_voltage;
  float motor_current;
  float demand_rpm;
  float actual_rpm;
  uint8_t overload_percentage;
} iris_interfaces__msg__MotorStatus;

// Struct for a sequence of iris_interfaces__msg__MotorStatus.
typedef struct iris_interfaces__msg__MotorStatus__Sequence
{
  iris_interfaces__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
