// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/BrushStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/brush_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'brush_actuator'
#include "iris_interfaces/msg/detail/actuator_status__traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BrushStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: brush_motor_command
  {
    out << "brush_motor_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_motor_command, out);
    out << ", ";
  }

  // member: brush_motor_status
  {
    out << "brush_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_motor_status, out);
    out << ", ";
  }

  // member: brush_actuator
  {
    out << "brush_actuator: ";
    to_flow_style_yaml(msg.brush_actuator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BrushStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brush_motor_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brush_motor_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_motor_command, out);
    out << "\n";
  }

  // member: brush_motor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brush_motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_motor_status, out);
    out << "\n";
  }

  // member: brush_actuator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brush_actuator:\n";
    to_block_style_yaml(msg.brush_actuator, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BrushStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::msg::BrushStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::BrushStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::BrushStatus>()
{
  return "iris_interfaces::msg::BrushStatus";
}

template<>
inline const char * name<iris_interfaces::msg::BrushStatus>()
{
  return "iris_interfaces/msg/BrushStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::BrushStatus>
  : std::integral_constant<bool, has_fixed_size<iris_interfaces::msg::ActuatorStatus>::value> {};

template<>
struct has_bounded_size<iris_interfaces::msg::BrushStatus>
  : std::integral_constant<bool, has_bounded_size<iris_interfaces::msg::ActuatorStatus>::value> {};

template<>
struct is_message<iris_interfaces::msg::BrushStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__TRAITS_HPP_
