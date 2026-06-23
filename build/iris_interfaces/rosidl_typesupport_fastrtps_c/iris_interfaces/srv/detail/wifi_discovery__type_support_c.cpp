// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iris_interfaces:srv/WifiDiscovery.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/srv/detail/wifi_discovery__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iris_interfaces/srv/detail/wifi_discovery__struct.h"
#include "iris_interfaces/srv/detail/wifi_discovery__functions.h"
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

#include "rosidl_runtime_c/string.h"  // wifidiscovery
#include "rosidl_runtime_c/string_functions.h"  // wifidiscovery

// forward declare type support functions


using _WifiDiscovery_Request__ros_msg_type = iris_interfaces__srv__WifiDiscovery_Request;

static bool _WifiDiscovery_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WifiDiscovery_Request__ros_msg_type * ros_message = static_cast<const _WifiDiscovery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: wifidiscovery
  {
    const rosidl_runtime_c__String * str = &ros_message->wifidiscovery;
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

static bool _WifiDiscovery_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WifiDiscovery_Request__ros_msg_type * ros_message = static_cast<_WifiDiscovery_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: wifidiscovery
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wifidiscovery.data) {
      rosidl_runtime_c__String__init(&ros_message->wifidiscovery);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wifidiscovery,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wifidiscovery'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t get_serialized_size_iris_interfaces__srv__WifiDiscovery_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WifiDiscovery_Request__ros_msg_type * ros_message = static_cast<const _WifiDiscovery_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wifidiscovery
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wifidiscovery.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WifiDiscovery_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iris_interfaces__srv__WifiDiscovery_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t max_serialized_size_iris_interfaces__srv__WifiDiscovery_Request(
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

  // member: wifidiscovery
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
    using DataType = iris_interfaces__srv__WifiDiscovery_Request;
    is_plain =
      (
      offsetof(DataType, wifidiscovery) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WifiDiscovery_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iris_interfaces__srv__WifiDiscovery_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WifiDiscovery_Request = {
  "iris_interfaces::srv",
  "WifiDiscovery_Request",
  _WifiDiscovery_Request__cdr_serialize,
  _WifiDiscovery_Request__cdr_deserialize,
  _WifiDiscovery_Request__get_serialized_size,
  _WifiDiscovery_Request__max_serialized_size
};

static rosidl_message_type_support_t _WifiDiscovery_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WifiDiscovery_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, srv, WifiDiscovery_Request)() {
  return &_WifiDiscovery_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "iris_interfaces/srv/detail/wifi_discovery__struct.h"
// already included above
// #include "iris_interfaces/srv/detail/wifi_discovery__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // discoverystatus
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // discoverystatus

// forward declare type support functions


using _WifiDiscovery_Response__ros_msg_type = iris_interfaces__srv__WifiDiscovery_Response;

static bool _WifiDiscovery_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WifiDiscovery_Response__ros_msg_type * ros_message = static_cast<const _WifiDiscovery_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: discoverystatus
  {
    const rosidl_runtime_c__String * str = &ros_message->discoverystatus;
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

static bool _WifiDiscovery_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WifiDiscovery_Response__ros_msg_type * ros_message = static_cast<_WifiDiscovery_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: discoverystatus
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->discoverystatus.data) {
      rosidl_runtime_c__String__init(&ros_message->discoverystatus);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->discoverystatus,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'discoverystatus'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t get_serialized_size_iris_interfaces__srv__WifiDiscovery_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WifiDiscovery_Response__ros_msg_type * ros_message = static_cast<const _WifiDiscovery_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discoverystatus
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->discoverystatus.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WifiDiscovery_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iris_interfaces__srv__WifiDiscovery_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t max_serialized_size_iris_interfaces__srv__WifiDiscovery_Response(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: discoverystatus
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
    using DataType = iris_interfaces__srv__WifiDiscovery_Response;
    is_plain =
      (
      offsetof(DataType, discoverystatus) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WifiDiscovery_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iris_interfaces__srv__WifiDiscovery_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WifiDiscovery_Response = {
  "iris_interfaces::srv",
  "WifiDiscovery_Response",
  _WifiDiscovery_Response__cdr_serialize,
  _WifiDiscovery_Response__cdr_deserialize,
  _WifiDiscovery_Response__get_serialized_size,
  _WifiDiscovery_Response__max_serialized_size
};

static rosidl_message_type_support_t _WifiDiscovery_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WifiDiscovery_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, srv, WifiDiscovery_Response)() {
  return &_WifiDiscovery_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iris_interfaces/srv/wifi_discovery.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WifiDiscovery__callbacks = {
  "iris_interfaces::srv",
  "WifiDiscovery",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, srv, WifiDiscovery_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, srv, WifiDiscovery_Response)(),
};

static rosidl_service_type_support_t WifiDiscovery__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WifiDiscovery__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, srv, WifiDiscovery)() {
  return &WifiDiscovery__handle;
}

#if defined(__cplusplus)
}
#endif
