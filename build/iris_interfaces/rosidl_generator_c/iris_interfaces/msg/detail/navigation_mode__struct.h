// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/NavigationMode.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__NAVIGATION_MODE__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__NAVIGATION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLEAN'.
static const char * const iris_interfaces__msg__NavigationMode__CLEAN = "CLEAN";

/// Constant 'P2P'.
static const char * const iris_interfaces__msg__NavigationMode__P2P = "P2P";

/// Constant 'P2PANDCLEAN'.
static const char * const iris_interfaces__msg__NavigationMode__P2PANDCLEAN = "P2PANDCLEAN";

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NavigationMode in the package iris_interfaces.
typedef struct iris_interfaces__msg__NavigationMode
{
  rosidl_runtime_c__String mode;
} iris_interfaces__msg__NavigationMode;

// Struct for a sequence of iris_interfaces__msg__NavigationMode.
typedef struct iris_interfaces__msg__NavigationMode__Sequence
{
  iris_interfaces__msg__NavigationMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__NavigationMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__NAVIGATION_MODE__STRUCT_H_
