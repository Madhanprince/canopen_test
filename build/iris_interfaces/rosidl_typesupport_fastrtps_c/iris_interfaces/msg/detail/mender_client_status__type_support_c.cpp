// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iris_interfaces:msg/MenderClientStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/mender_client_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iris_interfaces/msg/detail/mender_client_status__struct.h"
#include "iris_interfaces/msg/detail/mender_client_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // last_sync_with_server, ota_client_state, update_status
#include "rosidl_runtime_c/string_functions.h"  // last_sync_with_server, ota_client_state, update_status

// forward declare type support functions


using _MenderClientStatus__ros_msg_type = iris_interfaces__msg__MenderClientStatus;

static bool _MenderClientStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MenderClientStatus__ros_msg_type * ros_message = static_cast<const _MenderClientStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: ota_client_state
  {
    const rosidl_runtime_c__String * str = &ros_message->ota_client_state;
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

  // Field name: last_sync_with_server
  {
    const rosidl_runtime_c__String * str = &ros_message->last_sync_with_server;
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

  // Field name: download_available
  {
    cdr << (ros_message->download_available ? true : false);
  }

  // Field name: install_available
  {
    cdr << (ros_message->install_available ? true : false);
  }

  // Field name: reboot_required
  {
    cdr << (ros_message->reboot_required ? true : false);
  }

  // Field name: update_status
  {
    const rosidl_runtime_c__String * str = &ros_message->update_status;
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

  return true;
}

static bool _MenderClientStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MenderClientStatus__ros_msg_type * ros_message = static_cast<_MenderClientStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: ota_client_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ota_client_state.data) {
      rosidl_runtime_c__String__init(&ros_message->ota_client_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ota_client_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ota_client_state'\n");
      return false;
    }
  }

  // Field name: last_sync_with_server
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_sync_with_server.data) {
      rosidl_runtime_c__String__init(&ros_message->last_sync_with_server);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_sync_with_server,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_sync_with_server'\n");
      return false;
    }
  }

  // Field name: download_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->download_available = tmp ? true : false;
  }

  // Field name: install_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->install_available = tmp ? true : false;
  }

  // Field name: reboot_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reboot_required = tmp ? true : false;
  }

  // Field name: update_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->update_status.data) {
      rosidl_runtime_c__String__init(&ros_message->update_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->update_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'update_status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t get_serialized_size_iris_interfaces__msg__MenderClientStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MenderClientStatus__ros_msg_type * ros_message = static_cast<const _MenderClientStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ota_client_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ota_client_state.size + 1);
  // field.name last_sync_with_server
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_sync_with_server.size + 1);
  // field.name download_available
  {
    size_t item_size = sizeof(ros_message->download_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name install_available
  {
    size_t item_size = sizeof(ros_message->install_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reboot_required
  {
    size_t item_size = sizeof(ros_message->reboot_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name update_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->update_status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MenderClientStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iris_interfaces__msg__MenderClientStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t max_serialized_size_iris_interfaces__msg__MenderClientStatus(
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

  // member: ota_client_state
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
  // member: last_sync_with_server
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
  // member: download_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: install_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reboot_required
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: update_status
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = iris_interfaces__msg__MenderClientStatus;
    is_plain =
      (
      offsetof(DataType, update_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MenderClientStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iris_interfaces__msg__MenderClientStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MenderClientStatus = {
  "iris_interfaces::msg",
  "MenderClientStatus",
  _MenderClientStatus__cdr_serialize,
  _MenderClientStatus__cdr_deserialize,
  _MenderClientStatus__get_serialized_size,
  _MenderClientStatus__max_serialized_size
};

static rosidl_message_type_support_t _MenderClientStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MenderClientStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, MenderClientStatus)() {
  return &_MenderClientStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
