// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ActuatorStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__ActuatorStatus
{
  uint8_t moving_down;
  uint8_t hold_down;
  uint8_t moving_up;
  uint8_t hold_up;
} iris_interfaces__msg__ActuatorStatus;

// Struct for a sequence of iris_interfaces__msg__ActuatorStatus.
typedef struct iris_interfaces__msg__ActuatorStatus__Sequence
{
  iris_interfaces__msg__ActuatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__ActuatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_H_
