// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:srv/ProcessManager.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__STRUCT_H_
#define IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'START'.
static const char * const iris_interfaces__srv__ProcessManager_Request__START = "START";

/// Constant 'STOP'.
static const char * const iris_interfaces__srv__ProcessManager_Request__STOP = "STOP";

/// Constant 'RESTART'.
static const char * const iris_interfaces__srv__ProcessManager_Request__RESTART = "RESTART";

/// Constant 'IS_ALIVE'.
static const char * const iris_interfaces__srv__ProcessManager_Request__IS_ALIVE = "IS_ALIVE";

// Include directives for member types
// Member 'package'
// Member 'executable'
// Member 'name_space'
// Member 'node_name'
// Member 'container_name'
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ProcessManager in the package iris_interfaces.
typedef struct iris_interfaces__srv__ProcessManager_Request
{
  rosidl_runtime_c__String package;
  rosidl_runtime_c__String executable;
  rosidl_runtime_c__String name_space;
  rosidl_runtime_c__String node_name;
  rosidl_runtime_c__String container_name;
  rosidl_runtime_c__String label;
} iris_interfaces__srv__ProcessManager_Request;

// Struct for a sequence of iris_interfaces__srv__ProcessManager_Request.
typedef struct iris_interfaces__srv__ProcessManager_Request__Sequence
{
  iris_interfaces__srv__ProcessManager_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__ProcessManager_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
static const char * const iris_interfaces__srv__ProcessManager_Response__SUCCESS = "SUCCESS";

/// Constant 'FAILED'.
static const char * const iris_interfaces__srv__ProcessManager_Response__FAILED = "FAILED";

/// Constant 'EXISTS'.
static const char * const iris_interfaces__srv__ProcessManager_Response__EXISTS = "EXISTS";

/// Constant 'DOESNT_EXIST'.
static const char * const iris_interfaces__srv__ProcessManager_Response__DOESNT_EXIST = "DOESNT_EXIST";

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ProcessManager in the package iris_interfaces.
typedef struct iris_interfaces__srv__ProcessManager_Response
{
  rosidl_runtime_c__String response;
} iris_interfaces__srv__ProcessManager_Response;

// Struct for a sequence of iris_interfaces__srv__ProcessManager_Response.
typedef struct iris_interfaces__srv__ProcessManager_Response__Sequence
{
  iris_interfaces__srv__ProcessManager_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__srv__ProcessManager_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__STRUCT_H_
