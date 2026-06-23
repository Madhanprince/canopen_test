// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:msg/A2FaultStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/a2_fault_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "iris_interfaces/msg/detail/a2_fault_status__struct.hpp"

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
  const iris_interfaces::msg::BrushFaults &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  iris_interfaces::msg::BrushFaults &);
size_t get_serialized_size(
  const iris_interfaces::msg::BrushFaults &,
  size_t current_alignment);
size_t
max_serialized_size_BrushFaults(
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
bool cdr_serialize(
  const iris_interfaces::msg::VacuumFaults &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  iris_interfaces::msg::VacuumFaults &);
size_t get_serialized_size(
  const iris_interfaces::msg::VacuumFaults &,
  size_t current_alignment);
size_t
max_serialized_size_VacuumFaults(
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
  const iris_interfaces::msg::A2FaultStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a2_fault_status
  cdr << ros_message.a2_fault_status;
  // Member: brush
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.brush,
    cdr);
  // Member: vacuum
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vacuum,
    cdr);
  // Member: water_pump_digital_fault
  cdr << ros_message.water_pump_digital_fault;
  // Member: detergent_pump_digital_fault
  cdr << ros_message.detergent_pump_digital_fault;
  // Member: brush_vacuum_motor_driver_digital_fault
  cdr << ros_message.brush_vacuum_motor_driver_digital_fault;
  // Member: water_and_detergent_pump_flow_fault
  cdr << ros_message.water_and_detergent_pump_flow_fault;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  iris_interfaces::msg::A2FaultStatus & ros_message)
{
  // Member: a2_fault_status
  cdr >> ros_message.a2_fault_status;

  // Member: brush
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.brush);

  // Member: vacuum
  iris_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vacuum);

  // Member: water_pump_digital_fault
  cdr >> ros_message.water_pump_digital_fault;

  // Member: detergent_pump_digital_fault
  cdr >> ros_message.detergent_pump_digital_fault;

  // Member: brush_vacuum_motor_driver_digital_fault
  cdr >> ros_message.brush_vacuum_motor_driver_digital_fault;

  // Member: water_and_detergent_pump_flow_fault
  cdr >> ros_message.water_and_detergent_pump_flow_fault;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
get_serialized_size(
  const iris_interfaces::msg::A2FaultStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a2_fault_status
  {
    size_t item_size = sizeof(ros_message.a2_fault_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brush

  current_alignment +=
    iris_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.brush, current_alignment);
  // Member: vacuum

  current_alignment +=
    iris_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vacuum, current_alignment);
  // Member: water_pump_digital_fault
  {
    size_t item_size = sizeof(ros_message.water_pump_digital_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: detergent_pump_digital_fault
  {
    size_t item_size = sizeof(ros_message.detergent_pump_digital_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brush_vacuum_motor_driver_digital_fault
  {
    size_t item_size = sizeof(ros_message.brush_vacuum_motor_driver_digital_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_and_detergent_pump_flow_fault
  {
    size_t item_size = sizeof(ros_message.water_and_detergent_pump_flow_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iris_interfaces
max_serialized_size_A2FaultStatus(
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


  // Member: a2_fault_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brush
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        iris_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_BrushFaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: vacuum
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        iris_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_VacuumFaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: water_pump_digital_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: detergent_pump_digital_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brush_vacuum_motor_driver_digital_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: water_and_detergent_pump_flow_fault
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
    using DataType = iris_interfaces::msg::A2FaultStatus;
    is_plain =
      (
      offsetof(DataType, water_and_detergent_pump_flow_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _A2FaultStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::A2FaultStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _A2FaultStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<iris_interfaces::msg::A2FaultStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _A2FaultStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const iris_interfaces::msg::A2FaultStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _A2FaultStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_A2FaultStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _A2FaultStatus__callbacks = {
  "iris_interfaces::msg",
  "A2FaultStatus",
  _A2FaultStatus__cdr_serialize,
  _A2FaultStatus__cdr_deserialize,
  _A2FaultStatus__get_serialized_size,
  _A2FaultStatus__max_serialized_size
};

static rosidl_message_type_support_t _A2FaultStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_A2FaultStatus__callbacks,
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
get_message_type_support_handle<iris_interfaces::msg::A2FaultStatus>()
{
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_A2FaultStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, msg, A2FaultStatus)() {
  return &iris_interfaces::msg::typesupport_fastrtps_cpp::_A2FaultStatus__handle;
}

#ifdef __cplusplus
}
#endif
