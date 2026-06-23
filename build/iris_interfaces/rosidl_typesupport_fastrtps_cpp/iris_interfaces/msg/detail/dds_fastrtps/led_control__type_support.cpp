// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/LedControl.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/led_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "iris_interfaces/msg/detail/led_control__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_serialize(
  const iris_interfaces::msg::LedControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led_command
  cdr << ros_message.led_command;
  // Member: left_indicator
  cdr << ros_message.left_indicator;
  // Member: right_indicator
  cdr << ros_message.right_indicator;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  iris_interfaces::msg::LedControl & ros_message)
{
  // Member: led_command
  cdr >> ros_message.led_command;

  // Member: left_indicator
  cdr >> ros_message.left_indicator;

  // Member: right_indicator
  cdr >> ros_message.right_indicator;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
get_serialized_size(
  const iris_interfaces::msg::LedControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led_command
  {
    size_t item_size = sizeof(ros_message.led_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_indicator
  {
    size_t item_size = sizeof(ros_message.left_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_indicator
  {
    size_t item_size = sizeof(ros_message.right_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
max_serialized_size_LedControl(
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


  // Member: led_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = iris_interfaces::msg::LedControl;
    is_plain =
      (
      offsetof(DataType, right_indicator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LedControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::LedControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LedControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<iris_interfaces::msg::LedControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LedControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::LedControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LedControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LedControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LedControl__callbacks = {
  "iris_interfaces::msg",
  "LedControl",
  _LedControl__cdr_serialize,
  _LedControl__cdr_deserialize,
  _LedControl__get_serialized_size,
  _LedControl__max_serialized_size
};

static rosidl_message_type_support_t _LedControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LedControl__callbacks,
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
get_message_type_support_handle<iris_interfaces::msg::LedControl>()
{
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_LedControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, msg, LedControl)() {
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_LedControl__handle;
}

#ifdef __cplusplus
}
#endif
