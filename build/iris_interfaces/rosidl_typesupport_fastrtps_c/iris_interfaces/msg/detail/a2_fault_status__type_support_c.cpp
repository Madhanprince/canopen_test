// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iris_interfaces:msg/A2FaultStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/a2_fault_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iris_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iris_interfaces/msg/detail/a2_fault_status__struct.h"
#include "iris_interfaces/msg/detail/a2_fault_status__functions.h"
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

#include "iris_interfaces/msg/detail/brush_faults__functions.h"  // brush
#include "iris_interfaces/msg/detail/vacuum_faults__functions.h"  // vacuum

// forward declare type support functions
size_t get_serialized_size_iris_interfaces__msg__BrushFaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_iris_interfaces__msg__BrushFaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, BrushFaults)();
size_t get_serialized_size_iris_interfaces__msg__VacuumFaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_iris_interfaces__msg__VacuumFaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, VacuumFaults)();


using _A2FaultStatus__ros_msg_type = iris_interfaces__msg__A2FaultStatus;

static bool _A2FaultStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _A2FaultStatus__ros_msg_type * ros_message = static_cast<const _A2FaultStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: a2_fault_status
  {
    cdr << ros_message->a2_fault_status;
  }

  // Field name: brush
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, BrushFaults
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->brush, cdr))
    {
      return false;
    }
  }

  // Field name: vacuum
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, VacuumFaults
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vacuum, cdr))
    {
      return false;
    }
  }

  // Field name: water_pump_digital_fault
  {
    cdr << ros_message->water_pump_digital_fault;
  }

  // Field name: detergent_pump_digital_fault
  {
    cdr << ros_message->detergent_pump_digital_fault;
  }

  // Field name: brush_vacuum_motor_driver_digital_fault
  {
    cdr << ros_message->brush_vacuum_motor_driver_digital_fault;
  }

  // Field name: water_and_detergent_pump_flow_fault
  {
    cdr << ros_message->water_and_detergent_pump_flow_fault;
  }

  return true;
}

static bool _A2FaultStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _A2FaultStatus__ros_msg_type * ros_message = static_cast<_A2FaultStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: a2_fault_status
  {
    cdr >> ros_message->a2_fault_status;
  }

  // Field name: brush
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, BrushFaults
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->brush))
    {
      return false;
    }
  }

  // Field name: vacuum
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, iris_interfaces, msg, VacuumFaults
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vacuum))
    {
      return false;
    }
  }

  // Field name: water_pump_digital_fault
  {
    cdr >> ros_message->water_pump_digital_fault;
  }

  // Field name: detergent_pump_digital_fault
  {
    cdr >> ros_message->detergent_pump_digital_fault;
  }

  // Field name: brush_vacuum_motor_driver_digital_fault
  {
    cdr >> ros_message->brush_vacuum_motor_driver_digital_fault;
  }

  // Field name: water_and_detergent_pump_flow_fault
  {
    cdr >> ros_message->water_and_detergent_pump_flow_fault;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t get_serialized_size_iris_interfaces__msg__A2FaultStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _A2FaultStatus__ros_msg_type * ros_message = static_cast<const _A2FaultStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a2_fault_status
  {
    size_t item_size = sizeof(ros_message->a2_fault_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brush

  current_alignment += get_serialized_size_iris_interfaces__msg__BrushFaults(
    &(ros_message->brush), current_alignment);
  // field.name vacuum

  current_alignment += get_serialized_size_iris_interfaces__msg__VacuumFaults(
    &(ros_message->vacuum), current_alignment);
  // field.name water_pump_digital_fault
  {
    size_t item_size = sizeof(ros_message->water_pump_digital_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name detergent_pump_digital_fault
  {
    size_t item_size = sizeof(ros_message->detergent_pump_digital_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brush_vacuum_motor_driver_digital_fault
  {
    size_t item_size = sizeof(ros_message->brush_vacuum_motor_driver_digital_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name water_and_detergent_pump_flow_fault
  {
    size_t item_size = sizeof(ros_message->water_and_detergent_pump_flow_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _A2FaultStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iris_interfaces__msg__A2FaultStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iris_interfaces
size_t max_serialized_size_iris_interfaces__msg__A2FaultStatus(
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

  // member: a2_fault_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brush
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_iris_interfaces__msg__BrushFaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: vacuum
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_iris_interfaces__msg__VacuumFaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: water_pump_digital_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: detergent_pump_digital_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brush_vacuum_motor_driver_digital_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: water_and_detergent_pump_flow_fault
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
    using DataType = iris_interfaces__msg__A2FaultStatus;
    is_plain =
      (
      offsetof(DataType, water_and_detergent_pump_flow_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _A2FaultStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iris_interfaces__msg__A2FaultStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_A2FaultStatus = {
  "iris_interfaces::msg",
  "A2FaultStatus",
  _A2FaultStatus__cdr_serialize,
  _A2FaultStatus__cdr_deserialize,
  _A2FaultStatus__get_serialized_size,
  _A2FaultStatus__max_serialized_size
};

static rosidl_message_type_support_t _A2FaultStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_A2FaultStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iris_interfaces, msg, A2FaultStatus)() {
  return &_A2FaultStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
