// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iris_interfaces:msg/BrushStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/brush_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iris_interfaces/msg/detail/brush_status__struct.h"
#include "iris_interfaces/msg/detail/brush_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "iris_interfaces/msg/detail/actuator_status__functions.h"  // brush_actuator

// forward declare type support functions
size_t get_serialized_size_iris_interfaces__msg__ActuatorStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_iris_interfaces__msg__ActuatorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, ActuatorStatus)();


using _BrushStatus__ros_msg_type = iris_interfaces__msg__BrushStatus;

static bool _BrushStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BrushStatus__ros_msg_type * ros_message = static_cast<const _BrushStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: brush_motor_command
  {
    cdr << ros_message->brush_motor_command;
  }

  // Field name: brush_motor_status
  {
    cdr << ros_message->brush_motor_status;
  }

  // Field name: brush_actuator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, ActuatorStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brush_actuator, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BrushStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BrushStatus__ros_msg_type * ros_message = static_cast<_BrushStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: brush_motor_command
  {
    cdr >> ros_message->brush_motor_command;
  }

  // Field name: brush_motor_status
  {
    cdr >> ros_message->brush_motor_status;
  }

  // Field name: brush_actuator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, ActuatorStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brush_actuator))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t get_serialized_size_iris_interfaces__msg__BrushStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BrushStatus__ros_msg_type * ros_message = static_cast<const _BrushStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brush_motor_command
  {
    size_t item_size = sizeof(ros_message->brush_motor_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brush_motor_status
  {
    size_t item_size = sizeof(ros_message->brush_motor_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brush_actuator

  current_alignment += get_serialized_size_iris_interfaces__msg__ActuatorStatus(
    &(ros_message->brush_actuator), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BrushStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iris_interfaces__msg__BrushStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t max_serialized_size_iris_interfaces__msg__BrushStatus(
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

  // member: brush_motor_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brush_motor_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brush_actuator
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_iris_interfaces__msg__ActuatorStatus(
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
    using DataType = iris_interfaces__msg__BrushStatus;
    is_plain =
      (
      offsetof(DataType, brush_actuator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BrushStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iris_interfaces__msg__BrushStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BrushStatus = {
  "iris_interfaces::msg",
  "BrushStatus",
  _BrushStatus__cdr_serialize,
  _BrushStatus__cdr_deserialize,
  _BrushStatus__get_serialized_size,
  _BrushStatus__max_serialized_size
};

static rosidl_message_type_support_t _BrushStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BrushStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, BrushStatus)() {
  return &_BrushStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
