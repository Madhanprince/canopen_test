// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/motor_controller_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "iris_interfaces/msg/detail/motor_controller_status__struct.hpp"

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
  const iris_interfaces::msg::MotorStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  iris_interfaces::msg::MotorStatus &);
size_t get_serialized_size(
  const iris_interfaces::msg::MotorStatus &,
  size_t current_alignment);
size_t
max_serialized_size_MotorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace iris_interfaces

// functions for iris_interfaces::msg::MotorStatus already declared above


namespace iris_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_serialize(
  const iris_interfaces::msg::MotorControllerStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: software_version
  cdr << ros_message.software_version;
  // Member: input_voltage
  cdr << ros_message.input_voltage;
  // Member: board_temperature
  cdr << ros_message.board_temperature;
  // Member: sto_status
  cdr << ros_message.sto_status;
  // Member: controller_alarm
  cdr << ros_message.controller_alarm;
  // Member: controller_nmt_state
  cdr << ros_message.controller_nmt_state;
  // Member: left_motor
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left_motor,
    cdr);
  // Member: right_motor
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right_motor,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  iris_interfaces::msg::MotorControllerStatus & ros_message)
{
  // Member: software_version
  cdr >> ros_message.software_version;

  // Member: input_voltage
  cdr >> ros_message.input_voltage;

  // Member: board_temperature
  cdr >> ros_message.board_temperature;

  // Member: sto_status
  cdr >> ros_message.sto_status;

  // Member: controller_alarm
  cdr >> ros_message.controller_alarm;

  // Member: controller_nmt_state
  cdr >> ros_message.controller_nmt_state;

  // Member: left_motor
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left_motor);

  // Member: right_motor
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right_motor);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
get_serialized_size(
  const iris_interfaces::msg::MotorControllerStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: software_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.software_version.size() + 1);
  // Member: input_voltage
  {
    size_t item_size = sizeof(ros_message.input_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: board_temperature
  {
    size_t item_size = sizeof(ros_message.board_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sto_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sto_status.size() + 1);
  // Member: controller_alarm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controller_alarm.size() + 1);
  // Member: controller_nmt_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controller_nmt_state.size() + 1);
  // Member: left_motor

  current_alignment +=
    iris_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left_motor, current_alignment);
  // Member: right_motor

  current_alignment +=
    iris_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right_motor, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
max_serialized_size_MotorControllerStatus(
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


  // Member: software_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: input_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: board_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sto_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: controller_alarm
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: controller_nmt_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: left_motor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        iris_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: right_motor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        iris_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorStatus(
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
    using DataType = iris_interfaces::msg::MotorControllerStatus;
    is_plain =
      (
      offsetof(DataType, right_motor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorControllerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::MotorControllerStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorControllerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<iris_interfaces::msg::MotorControllerStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorControllerStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::MotorControllerStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorControllerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorControllerStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorControllerStatus__callbacks = {
  "iris_interfaces::msg",
  "MotorControllerStatus",
  _MotorControllerStatus__cdr_serialize,
  _MotorControllerStatus__cdr_deserialize,
  _MotorControllerStatus__get_serialized_size,
  _MotorControllerStatus__max_serialized_size
};

static rosidl_message_type_support_t _MotorControllerStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorControllerStatus__callbacks,
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
get_message_type_support_handle<iris_interfaces::msg::MotorControllerStatus>()
{
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_MotorControllerStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, msg, MotorControllerStatus)() {
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_MotorControllerStatus__handle;
}

#ifdef __cplusplus
}
#endif
