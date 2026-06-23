// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ultrasonic_1'
// Member 'ultrasonic_2'
// Member 'ultrasonic_3'
// Member 'ultrasonic_4'
#include "sensor_msgs/msg/detail/range__struct.h"

/// Struct defined in msg/UltrasonicRanges in the package iris_interfaces.
/**
  * TODO: Rename the sensors w.r.t to position later on.
 */
typedef struct iris_interfaces__msg__UltrasonicRanges
{
  sensor_msgs__msg__Range ultrasonic_1;
  sensor_msgs__msg__Range ultrasonic_2;
  sensor_msgs__msg__Range ultrasonic_3;
  sensor_msgs__msg__Range ultrasonic_4;
} iris_interfaces__msg__UltrasonicRanges;

// Struct for a sequence of iris_interfaces__msg__UltrasonicRanges.
typedef struct iris_interfaces__msg__UltrasonicRanges__Sequence
{
  iris_interfaces__msg__UltrasonicRanges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__UltrasonicRanges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__STRUCT_H_
