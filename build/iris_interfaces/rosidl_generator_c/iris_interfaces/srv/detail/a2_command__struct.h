// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:srv/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__STRUCT_H_
#define IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/A2Command in the package iris_interfaces.
typedef struct iris_interfaces__srv__A2Command_Request
{
  uint8_t brush_command;
  uint8_t vacuum_command;
} iris_interfaces__srv__A2Command_Request;

// Struct for a sequence of iris_interfaces__srv__A2Command_Request.
typedef struct iris_interfaces__srv__A2Command_Request__Sequence
{
  iris_interfaces__srv__A2Command_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__A2Command_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/A2Command in the package iris_interfaces.
typedef struct iris_interfaces__srv__A2Command_Response
{
  uint8_t brush_status;
  uint8_t vacuum_status;
} iris_interfaces__srv__A2Command_Response;

// Struct for a sequence of iris_interfaces__srv__A2Command_Response.
typedef struct iris_interfaces__srv__A2Command_Response__Sequence
{
  iris_interfaces__srv__A2Command_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__A2Command_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__STRUCT_H_
