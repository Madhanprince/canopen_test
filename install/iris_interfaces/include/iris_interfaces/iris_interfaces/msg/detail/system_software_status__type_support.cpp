// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/SystemSoftwareStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iris_interfaces/msg/detail/system_software_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace iris_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SystemSoftwareStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iris_interfaces::msg::SystemSoftwareStatus(_init);
}

void SystemSoftwareStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iris_interfaces::msg::SystemSoftwareStatus *>(message_memory);
  typed_message->~SystemSoftwareStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemSoftwareStatus_message_member_array[2] = {
  {
    "current_software_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::SystemSoftwareStatus, current_software_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_boot_slot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::SystemSoftwareStatus, current_boot_slot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemSoftwareStatus_message_members = {
  "iris_interfaces::msg",  // message namespace
  "SystemSoftwareStatus",  // message name
  2,  // number of fields
  sizeof(iris_interfaces::msg::SystemSoftwareStatus),
  SystemSoftwareStatus_message_member_array,  // message members
  SystemSoftwareStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemSoftwareStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemSoftwareStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemSoftwareStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace iris_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::msg::SystemSoftwareStatus>()
{
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemSoftwareStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, msg, SystemSoftwareStatus)() {
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemSoftwareStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
