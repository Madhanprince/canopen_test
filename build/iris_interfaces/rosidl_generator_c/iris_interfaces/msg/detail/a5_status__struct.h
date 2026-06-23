// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/A5Status.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode_and_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/A5Status in the package iris_interfaces.
/**
  * This message is not used in A5 itself. Dummy as of now
 */
typedef struct iris_interfaces__msg__A5Status
{
  rosidl_runtime_c__String mode_and_status;
} iris_interfaces__msg__A5Status;

// Struct for a sequence of iris_interfaces__msg__A5Status.
typedef struct iris_interfaces__msg__A5Status__Sequence
{
  iris_interfaces__msg__A5Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__A5Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__STRUCT_H_
