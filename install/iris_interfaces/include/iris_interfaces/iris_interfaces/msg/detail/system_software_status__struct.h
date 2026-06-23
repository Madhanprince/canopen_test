// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/SystemSoftwareStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_software_name'
// Member 'current_boot_slot'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemSoftwareStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__SystemSoftwareStatus
{
  rosidl_runtime_c__String current_software_name;
  rosidl_runtime_c__String current_boot_slot;
} iris_interfaces__msg__SystemSoftwareStatus;

// Struct for a sequence of iris_interfaces__msg__SystemSoftwareStatus.
typedef struct iris_interfaces__msg__SystemSoftwareStatus__Sequence
{
  iris_interfaces__msg__SystemSoftwareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__SystemSoftwareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__STRUCT_H_
