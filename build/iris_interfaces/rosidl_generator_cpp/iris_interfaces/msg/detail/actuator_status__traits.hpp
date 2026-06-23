// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/actuator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuatorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: moving_down
  {
    out << "moving_down: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_down, out);
    out << ", ";
  }

  // member: hold_down
  {
    out << "hold_down: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_down, out);
    out << ", ";
  }

  // member: moving_up
  {
    out << "moving_up: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_up, out);
    out << ", ";
  }

  // member: hold_up
  {
    out << "hold_up: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_up, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moving_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_down: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_down, out);
    out << "\n";
  }

  // member: hold_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hold_down: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_down, out);
    out << "\n";
  }

  // member: moving_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_up: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_up, out);
    out << "\n";
  }

  // member: hold_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hold_up: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_up, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::ActuatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::ActuatorStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::ActuatorStatus>()
{
  return "iris_interfaces::msg::ActuatorStatus";
}

template<>
inline const char * name<iris_interfaces::msg::ActuatorStatus>()
{
  return "iris_interfaces/msg/ActuatorStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::ActuatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::msg::ActuatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::msg::ActuatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__TRAITS_HPP_
