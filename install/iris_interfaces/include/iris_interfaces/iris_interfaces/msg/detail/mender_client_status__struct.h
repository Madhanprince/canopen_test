// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/MenderClientStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ota_client_state'
// Member 'last_sync_with_server'
// Member 'update_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MenderClientStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__MenderClientStatus
{
  rosidl_runtime_c__String ota_client_state;
  rosidl_runtime_c__String last_sync_with_server;
  bool download_available;
  bool install_available;
  bool reboot_required;
  rosidl_runtime_c__String update_status;
} iris_interfaces__msg__MenderClientStatus;

// Struct for a sequence of iris_interfaces__msg__MenderClientStatus.
typedef struct iris_interfaces__msg__MenderClientStatus__Sequence
{
  iris_interfaces__msg__MenderClientStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__MenderClientStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__STRUCT_H_
