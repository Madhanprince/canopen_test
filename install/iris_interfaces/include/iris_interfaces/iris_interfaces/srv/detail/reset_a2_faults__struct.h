// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:srv/ResetA2Faults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__RESET_A2_FAULTS__STRUCT_H_
#define IRIS_INTERFACES__SRV__DETAIL__RESET_A2_FAULTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetA2Faults in the package iris_interfaces.
typedef struct iris_interfaces__srv__ResetA2Faults_Request
{
  uint8_t structure_needs_at_least_one_member;
} iris_interfaces__srv__ResetA2Faults_Request;

// Struct for a sequence of iris_interfaces__srv__ResetA2Faults_Request.
typedef struct iris_interfaces__srv__ResetA2Faults_Request__Sequence
{
  iris_interfaces__srv__ResetA2Faults_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__ResetA2Faults_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetA2Faults in the package iris_interfaces.
typedef struct iris_interfaces__srv__ResetA2Faults_Response
{
  rosidl_runtime_c__String result;
} iris_interfaces__srv__ResetA2Faults_Response;

// Struct for a sequence of iris_interfaces__srv__ResetA2Faults_Response.
typedef struct iris_interfaces__srv__ResetA2Faults_Response__Sequence
{
  iris_interfaces__srv__ResetA2Faults_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__ResetA2Faults_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__SRV__DETAIL__RESET_A2_FAULTS__STRUCT_H_
