// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/OTAStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'system_software_info'
#include "iris_interfaces/msg/detail/system_software_status__struct.h"
// Member 'mender_client_status'
#include "iris_interfaces/msg/detail/mender_client_status__struct.h"

/// Struct defined in msg/OTAStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__OTAStatus
{
  iris_interfaces__msg__SystemSoftwareStatus system_software_info;
  iris_interfaces__msg__MenderClientStatus mender_client_status;
} iris_interfaces__msg__OTAStatus;

// Struct for a sequence of iris_interfaces__msg__OTAStatus.
typedef struct iris_interfaces__msg__OTAStatus__Sequence
{
  iris_interfaces__msg__OTAStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__OTAStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__STRUCT_H_
