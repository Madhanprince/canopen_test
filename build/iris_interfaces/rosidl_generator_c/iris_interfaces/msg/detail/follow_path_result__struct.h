// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/FollowPathResult.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCEEDED'.
static const char * const iris_interfaces__msg__FollowPathResult__SUCCEEDED = "SUCCEEDED";

/// Constant 'ABORTED'.
static const char * const iris_interfaces__msg__FollowPathResult__ABORTED = "ABORTED";

/// Constant 'CANCELLED'.
static const char * const iris_interfaces__msg__FollowPathResult__CANCELLED = "CANCELLED";

/// Constant 'NONE'.
static const char * const iris_interfaces__msg__FollowPathResult__NONE = "NONE";

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FollowPathResult in the package iris_interfaces.
typedef struct iris_interfaces__msg__FollowPathResult
{
  rosidl_runtime_c__String result;
} iris_interfaces__msg__FollowPathResult;

// Struct for a sequence of iris_interfaces__msg__FollowPathResult.
typedef struct iris_interfaces__msg__FollowPathResult__Sequence
{
  iris_interfaces__msg__FollowPathResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__FollowPathResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__STRUCT_H_
