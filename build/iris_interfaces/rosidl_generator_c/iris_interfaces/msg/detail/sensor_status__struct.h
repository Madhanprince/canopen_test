// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONNECTED'.
static const char * const iris_interfaces__msg__SensorStatus__CONNECTED = "CONNECTED";

/// Constant 'DISCONNECTED'.
static const char * const iris_interfaces__msg__SensorStatus__DISCONNECTED = "DISCONNECTED";

// Include directives for member types
// Member 'sensor_name'
// Member 'sensor_robot_position'
// Member 'sensor_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__SensorStatus
{
  rosidl_runtime_c__String sensor_name;
  rosidl_runtime_c__String sensor_robot_position;
  rosidl_runtime_c__String sensor_status;
  float sensor_temperature;
} iris_interfaces__msg__SensorStatus;

// Struct for a sequence of iris_interfaces__msg__SensorStatus.
typedef struct iris_interfaces__msg__SensorStatus__Sequence
{
  iris_interfaces__msg__SensorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__SensorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
