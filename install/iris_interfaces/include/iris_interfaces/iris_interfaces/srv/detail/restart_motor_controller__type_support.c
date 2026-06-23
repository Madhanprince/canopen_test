// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iris_interfaces:srv/RestartMotorController.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iris_interfaces/srv/detail/restart_motor_controller__rosidl_typesupport_introspection_c.h"
#include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iris_interfaces/srv/detail/restart_motor_controller__functions.h"
#include "iris_interfaces/srv/detail/restart_motor_controller__struct.h"


// Include directives for member types
// Member `restart_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__srv__RestartMotorController_Request__init(message_memory);
}

void iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_fini_function(void * message_memory)
{
  iris_interfaces__srv__RestartMotorController_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_member_array[1] = {
  {
    "restart_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__srv__RestartMotorController_Request, restart_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_members = {
  "iris_interfaces__srv",  // message namespace
  "RestartMotorController_Request",  // message name
  1,  // number of fields
  sizeof(iris_interfaces__srv__RestartMotorController_Request),
  iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_member_array,  // message members
  iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_type_support_handle = {
  0,
  &iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController_Request)() {
  if (!iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__srv__RestartMotorController_Request__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/srv/detail/restart_motor_controller__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/srv/detail/restart_motor_controller__functions.h"
// already included above
// #include "iris_interfaces/srv/detail/restart_motor_controller__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__srv__RestartMotorController_Response__init(message_memory);
}

void iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_fini_function(void * message_memory)
{
  iris_interfaces__srv__RestartMotorController_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__srv__RestartMotorController_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_members = {
  "iris_interfaces__srv",  // message namespace
  "RestartMotorController_Response",  // message name
  1,  // number of fields
  sizeof(iris_interfaces__srv__RestartMotorController_Response),
  iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_member_array,  // message members
  iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_type_support_handle = {
  0,
  &iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController_Response)() {
  if (!iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__srv__RestartMotorController_Response__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iris_interfaces/srv/detail/restart_motor_controller__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_members = {
  "iris_interfaces__srv",  // service namespace
  "RestartMotorController",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_Request_message_type_support_handle,
  NULL  // response message
  // iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_Response_message_type_support_handle
};

static rosidl_service_type_support_t iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_type_support_handle = {
  0,
  &iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController)() {
  if (!iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_type_support_handle.typesupport_identifier) {
    iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, srv, RestartMotorController_Response)()->data;
  }

  return &iris_interfaces__srv__detail__restart_motor_controller__rosidl_typesupport_introspection_c__RestartMotorController_service_type_support_handle;
}
