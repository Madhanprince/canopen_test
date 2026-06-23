// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/motor_controller_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iris_interfaces/msg/detail/motor_controller_status__struct.h"
#include "iris_interfaces/msg/detail/motor_controller_status__functions.h"
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

#include "iris_interfaces/msg/detail/motor_status__functions.h"  // left_motor, right_motor
#include "rosidl_runtime_c/string.h"  // controller_alarm, controller_nmt_state, software_version, sto_status
#include "rosidl_runtime_c/string_functions.h"  // controller_alarm, controller_nmt_state, software_version, sto_status

// forward declare type support functions
size_t get_serialized_size_iris_interfaces__msg__MotorStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_iris_interfaces__msg__MotorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MotorStatus)();


using _MotorControllerStatus__ros_msg_type = iris_interfaces__msg__MotorControllerStatus;

static bool _MotorControllerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorControllerStatus__ros_msg_type * ros_message = static_cast<const _MotorControllerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: software_version
  {
    const rosidl_runtime_c__String * str = &ros_message->software_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: input_voltage
  {
    cdr << ros_message->input_voltage;
  }

  // Field name: board_temperature
  {
    cdr << ros_message->board_temperature;
  }

  // Field name: sto_status
  {
    const rosidl_runtime_c__String * str = &ros_message->sto_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: controller_alarm
  {
    const rosidl_runtime_c__String * str = &ros_message->controller_alarm;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: controller_nmt_state
  {
    const rosidl_runtime_c__String * str = &ros_message->controller_nmt_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: left_motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MotorStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->left_motor, cdr))
    {
      return false;
    }
  }

  // Field name: right_motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MotorStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->right_motor, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MotorControllerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorControllerStatus__ros_msg_type * ros_message = static_cast<_MotorControllerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: software_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->software_version.data) {
      rosidl_runtime_c__String__init(&ros_message->software_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->software_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'software_version'\n");
      return false;
    }
  }

  // Field name: input_voltage
  {
    cdr >> ros_message->input_voltage;
  }

  // Field name: board_temperature
  {
    cdr >> ros_message->board_temperature;
  }

  // Field name: sto_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sto_status.data) {
      rosidl_runtime_c__String__init(&ros_message->sto_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sto_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sto_status'\n");
      return false;
    }
  }

  // Field name: controller_alarm
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->controller_alarm.data) {
      rosidl_runtime_c__String__init(&ros_message->controller_alarm);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->controller_alarm,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'controller_alarm'\n");
      return false;
    }
  }

  // Field name: controller_nmt_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->controller_nmt_state.data) {
      rosidl_runtime_c__String__init(&ros_message->controller_nmt_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->controller_nmt_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'controller_nmt_state'\n");
      return false;
    }
  }

  // Field name: left_motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MotorStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->left_motor))
    {
      return false;
    }
  }

  // Field name: right_motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MotorStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->right_motor))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t get_serialized_size_iris_interfaces__msg__MotorControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorControllerStatus__ros_msg_type * ros_message = static_cast<const _MotorControllerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name software_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->software_version.size + 1);
  // field.name input_voltage
  {
    size_t item_size = sizeof(ros_message->input_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name board_temperature
  {
    size_t item_size = sizeof(ros_message->board_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sto_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sto_status.size + 1);
  // field.name controller_alarm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->controller_alarm.size + 1);
  // field.name controller_nmt_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->controller_nmt_state.size + 1);
  // field.name left_motor

  current_alignment += get_serialized_size_iris_interfaces__msg__MotorStatus(
    &(ros_message->left_motor), current_alignment);
  // field.name right_motor

  current_alignment += get_serialized_size_iris_interfaces__msg__MotorStatus(
    &(ros_message->right_motor), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MotorControllerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iris_interfaces__msg__MotorControllerStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t max_serialized_size_iris_interfaces__msg__MotorControllerStatus(
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

  // member: software_version
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
  // member: input_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: board_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sto_status
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
  // member: controller_alarm
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
  // member: controller_nmt_state
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
  // member: left_motor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_iris_interfaces__msg__MotorStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: right_motor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_iris_interfaces__msg__MotorStatus(
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
    using DataType = iris_interfaces__msg__MotorControllerStatus;
    is_plain =
      (
      offsetof(DataType, right_motor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotorControllerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iris_interfaces__msg__MotorControllerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorControllerStatus = {
  "iris_interfaces::msg",
  "MotorControllerStatus",
  _MotorControllerStatus__cdr_serialize,
  _MotorControllerStatus__cdr_deserialize,
  _MotorControllerStatus__get_serialized_size,
  _MotorControllerStatus__max_serialized_size
};

static rosidl_message_type_support_t _MotorControllerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorControllerStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MotorControllerStatus)() {
  return &_MotorControllerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
