// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/A2Command in the package iris_interfaces.
typedef struct iris_interfaces__msg__A2Command
{
  uint8_t pump_flow_rate;
} iris_interfaces__msg__A2Command;

// Struct for a sequence of iris_interfaces__msg__A2Command.
typedef struct iris_interfaces__msg__A2Command__Sequence
{
  iris_interfaces__msg__A2Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__A2Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__STRUCT_H_
