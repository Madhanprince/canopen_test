// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/VacuumFaults.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iris_interfaces/msg/detail/vacuum_faults__struct.hpp"
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

void VacuumFaults_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iris_interfaces::msg::VacuumFaults(_init);
}

void VacuumFaults_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iris_interfaces::msg::VacuumFaults *>(message_memory);
  typed_message->~VacuumFaults();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VacuumFaults_message_member_array[4] = {
  {
    "squeeze_actuator_digital_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::VacuumFaults, squeeze_actuator_digital_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_brush_current_digital_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::VacuumFaults, drive_brush_current_digital_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "overcurrent_analog_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::VacuumFaults, overcurrent_analog_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "undercurrent_analog_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::VacuumFaults, undercurrent_analog_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VacuumFaults_message_members = {
  "iris_interfaces::msg",  // message namespace
  "VacuumFaults",  // message name
  4,  // number of fields
  sizeof(iris_interfaces::msg::VacuumFaults),
  VacuumFaults_message_member_array,  // message members
  VacuumFaults_init_function,  // function to initialize message memory (memory has to be allocated)
  VacuumFaults_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VacuumFaults_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VacuumFaults_message_members,
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
get_message_type_support_handle<iris_interfaces::msg::VacuumFaults>()
{
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::VacuumFaults_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, msg, VacuumFaults)() {
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::VacuumFaults_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
