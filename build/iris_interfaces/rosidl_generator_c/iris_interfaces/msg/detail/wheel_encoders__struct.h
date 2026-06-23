// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelEncoders in the package iris_interfaces.
typedef struct iris_interfaces__msg__WheelEncoders
{
  int32_t left_wheel_ticks;
  int32_t right_wheel_ticks;
} iris_interfaces__msg__WheelEncoders;

// Struct for a sequence of iris_interfaces__msg__WheelEncoders.
typedef struct iris_interfaces__msg__WheelEncoders__Sequence
{
  iris_interfaces__msg__WheelEncoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__WheelEncoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_
