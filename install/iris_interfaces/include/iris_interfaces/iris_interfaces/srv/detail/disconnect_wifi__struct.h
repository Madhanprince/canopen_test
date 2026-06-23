// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:srv/DisconnectWifi.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__DISCONNECT_WIFI__STRUCT_H_
#define IRIS_INTERFACES__SRV__DETAIL__DISCONNECT_WIFI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ssid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DisconnectWifi in the package iris_interfaces.
typedef struct iris_interfaces__srv__DisconnectWifi_Request
{
  rosidl_runtime_c__String ssid;
} iris_interfaces__srv__DisconnectWifi_Request;

// Struct for a sequence of iris_interfaces__srv__DisconnectWifi_Request.
typedef struct iris_interfaces__srv__DisconnectWifi_Request__Sequence
{
  iris_interfaces__srv__DisconnectWifi_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__DisconnectWifi_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DisconnectWifi in the package iris_interfaces.
typedef struct iris_interfaces__srv__DisconnectWifi_Response
{
  rosidl_runtime_c__String status;
} iris_interfaces__srv__DisconnectWifi_Response;

// Struct for a sequence of iris_interfaces__srv__DisconnectWifi_Response.
typedef struct iris_interfaces__srv__DisconnectWifi_Response__Sequence
{
  iris_interfaces__srv__DisconnectWifi_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__DisconnectWifi_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__SRV__DETAIL__DISCONNECT_WIFI__STRUCT_H_
