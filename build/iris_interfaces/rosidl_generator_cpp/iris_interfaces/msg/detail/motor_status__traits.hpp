// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: brake_state
  {
    out << "brake_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_state, out);
    out << ", ";
  }

  // member: motor_voltage
  {
    out << "motor_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_voltage, out);
    out << ", ";
  }

  // member: motor_current
  {
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << ", ";
  }

  // member: demand_rpm
  {
    out << "demand_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.demand_rpm, out);
    out << ", ";
  }

  // member: actual_rpm
  {
    out << "actual_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_rpm, out);
    out << ", ";
  }

  // member: overload_percentage
  {
    out << "overload_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.overload_percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brake_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_state: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_state, out);
    out << "\n";
  }

  // member: motor_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_voltage, out);
    out << "\n";
  }

  // member: motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << "\n";
  }

  // member: demand_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "demand_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.demand_rpm, out);
    out << "\n";
  }

  // member: actual_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_rpm, out);
    out << "\n";
  }

  // member: overload_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overload_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.overload_percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::MotorStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::MotorStatus>()
{
  return "iris_interfaces::msg::MotorStatus";
}

template<>
inline const char * name<iris_interfaces::msg::MotorStatus>()
{
  return "iris_interfaces/msg/MotorStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
