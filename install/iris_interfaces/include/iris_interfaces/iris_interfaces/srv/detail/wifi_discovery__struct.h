// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:srv/WifiDiscovery.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__STRUCT_H_
#define IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wifidiscovery'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WifiDiscovery in the package iris_interfaces.
typedef struct iris_interfaces__srv__WifiDiscovery_Request
{
  rosidl_runtime_c__String wifidiscovery;
} iris_interfaces__srv__WifiDiscovery_Request;

// Struct for a sequence of iris_interfaces__srv__WifiDiscovery_Request.
typedef struct iris_interfaces__srv__WifiDiscovery_Request__Sequence
{
  iris_interfaces__srv__WifiDiscovery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__WifiDiscovery_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'discoverystatus'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WifiDiscovery in the package iris_interfaces.
typedef struct iris_interfaces__srv__WifiDiscovery_Response
{
  int32_t timestamp;
  rosidl_runtime_c__String discoverystatus;
} iris_interfaces__srv__WifiDiscovery_Response;

// Struct for a sequence of iris_interfaces__srv__WifiDiscovery_Response.
typedef struct iris_interfaces__srv__WifiDiscovery_Response__Sequence
{
  iris_interfaces__srv__WifiDiscovery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__WifiDiscovery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__STRUCT_H_
