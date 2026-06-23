// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/FollowPathResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iris_interfaces/msg/detail/follow_path_result__struct.hpp"
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

void FollowPathResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iris_interfaces::msg::FollowPathResult(_init);
}

void FollowPathResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iris_interfaces::msg::FollowPathResult *>(message_memory);
  typed_message->~FollowPathResult();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowPathResult_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces::msg::FollowPathResult, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowPathResult_message_members = {
  "iris_interfaces::msg",  // message namespace
  "FollowPathResult",  // message name
  1,  // number of fields
  sizeof(iris_interfaces::msg::FollowPathResult),
  FollowPathResult_message_member_array,  // message members
  FollowPathResult_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowPathResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowPathResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowPathResult_message_members,
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
get_message_type_support_handle<iris_interfaces::msg::FollowPathResult>()
{
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::FollowPathResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, msg, FollowPathResult)() {
  return &::iris_interfaces::msg::rosidl_typesupport_introspection_cpp::FollowPathResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
