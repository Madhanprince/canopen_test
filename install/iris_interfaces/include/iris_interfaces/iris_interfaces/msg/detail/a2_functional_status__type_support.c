// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iris_interfaces:msg/A2FunctionalStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iris_interfaces/msg/detail/a2_functional_status__rosidl_typesupport_introspection_c.h"
#include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iris_interfaces/msg/detail/a2_functional_status__functions.h"
#include "iris_interfaces/msg/detail/a2_functional_status__struct.h"


// Include directives for member types
// Member `brush`
#include "iris_interfaces/msg/brush_status.h"
// Member `brush`
#include "iris_interfaces/msg/detail/brush_status__rosidl_typesupport_introspection_c.h"
// Member `vacuum`
#include "iris_interfaces/msg/vacuum_status.h"
// Member `vacuum`
#include "iris_interfaces/msg/detail/vacuum_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__msg__A2FunctionalStatus__init(message_memory);
}

void iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_fini_function(void * message_memory)
{
  iris_interfaces__msg__A2FunctionalStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_member_array[4] = {
  {
    "brush",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__msg__A2FunctionalStatus, brush),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vacuum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__msg__A2FunctionalStatus, vacuum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "water_pump",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__msg__A2FunctionalStatus, water_pump),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detergent_pump",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__msg__A2FunctionalStatus, detergent_pump),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_members = {
  "iris_interfaces__msg",  // message namespace
  "A2FunctionalStatus",  // message name
  4,  // number of fields
  sizeof(iris_interfaces__msg__A2FunctionalStatus),
  iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_member_array,  // message members
  iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_type_support_handle = {
  0,
  &iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, msg, A2FunctionalStatus)() {
  iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, msg, BrushStatus)();
  iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, msg, VacuumStatus)();
  if (!iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__msg__A2FunctionalStatus__rosidl_typesupport_introspection_c__A2FunctionalStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
