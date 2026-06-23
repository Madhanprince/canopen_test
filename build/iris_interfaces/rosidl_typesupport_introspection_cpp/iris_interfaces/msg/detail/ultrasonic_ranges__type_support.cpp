// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iris_interfaces/msg/detail/ultrasonic_ranges__struct.hpp"
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

void UltrasonicRanges_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iris_interfaces::msg::UltrasonicRanges(_init);
}

void UltrasonicRanges_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iris_interfaces::msg::UltrasonicRanges *>(message_memory);
  typed_message->~UltrasonicRanges();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UltrasonicRanges_message_member_array[4] = {
  {
    "ultrasonic_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Range>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::UltrasonicRanges, ultrasonic_1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ultrasonic_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Range>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::UltrasonicRanges, ultrasonic_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ultrasonic_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Range>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::UltrasonicRanges, ultrasonic_3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ultrasonic_4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Range>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::UltrasonicRanges, ultrasonic_4),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UltrasonicRanges_message_members = {
  "iris_interfaces::msg",  // message namespace
  "UltrasonicRanges",  // message name
  4,  // number of fields
  sizeof(iris_interfaces::msg::UltrasonicRanges),
  UltrasonicRanges_message_member_array,  // message members
  UltrasonicRanges_init_function,  // function to initialize message memory (memory has to be allocated)
  UltrasonicRanges_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UltrasonicRanges_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UltrasonicRanges_message_members,
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
get_message_type_support_handle<iris_interfaces::msg::UltrasonicRanges>()
{
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::UltrasonicRanges_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, msg, UltrasonicRanges)() {
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::UltrasonicRanges_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
