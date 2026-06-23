// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/BrushStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/brush_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "iris_interfaces/msg/detail/brush_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace iris_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const iris_interfaces::msg::ActuatorStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  iris_interfaces::msg::ActuatorStatus &);
size_t get_serialized_size(
  const iris_interfaces::msg::ActuatorStatus &,
  size_t current_alignment);
size_t
max_serialized_size_ActuatorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_serialize(
  const iris_interfaces::msg::BrushStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: brush_motor_command
  cdr << ros_message.brush_motor_command;
  // Member: brush_motor_status
  cdr << ros_message.brush_motor_status;
  // Member: brush_actuator
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.brush_actuator,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  iris_interfaces::msg::BrushStatus & ros_message)
{
  // Member: brush_motor_command
  cdr >> ros_message.brush_motor_command;

  // Member: brush_motor_status
  cdr >> ros_message.brush_motor_status;

  // Member: brush_actuator
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.brush_actuator);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
get_serialized_size(
  const iris_interfaces::msg::BrushStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: brush_motor_command
  {
    size_t item_size = sizeof(ros_message.brush_motor_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brush_motor_status
  {
    size_t item_size = sizeof(ros_message.brush_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brush_actuator

  current_alignment +=
    iris_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.brush_actuator, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
max_serialized_size_BrushStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: brush_motor_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brush_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brush_actuator
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        iris_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ActuatorStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = iris_interfaces::msg::BrushStatus;
    is_plain =
      (
      offsetof(DataType, brush_actuator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BrushStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::BrushStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BrushStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<iris_interfaces::msg::BrushStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BrushStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::BrushStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BrushStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BrushStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BrushStatus__callbacks = {
  "iris_interfaces::msg",
  "BrushStatus",
  _BrushStatus__cdr_serialize,
  _BrushStatus__cdr_deserialize,
  _BrushStatus__get_serialized_size,
  _BrushStatus__max_serialized_size
};

static rosidl_message_type_support_t _BrushStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BrushStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace iris_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::msg::BrushStatus>()
{
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_BrushStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, msg, BrushStatus)() {
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_BrushStatus__handle;
}

#ifdef __cplusplus
}
#endif
