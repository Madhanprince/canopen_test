// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/WheelCommandSpeed.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WHEEL_COMMAND_SPEED__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__WHEEL_COMMAND_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelCommandSpeed in the package iris_interfaces.
typedef struct iris_interfaces__msg__WheelCommandSpeed
{
  int16_t left_wheel;
  int16_t right_wheel;
} iris_interfaces__msg__WheelCommandSpeed;

// Struct for a sequence of iris_interfaces__msg__WheelCommandSpeed.
typedef struct iris_interfaces__msg__WheelCommandSpeed__Sequence
{
  iris_interfaces__msg__WheelCommandSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__WheelCommandSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__WHEEL_COMMAND_SPEED__STRUCT_H_
