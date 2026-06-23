// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/motor_controller_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left_motor'
// Member 'right_motor'
#include "iris_interfaces/msg/detail/motor_status__traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorControllerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: software_version
  {
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << ", ";
  }

  // member: input_voltage
  {
    out << "input_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.input_voltage, out);
    out << ", ";
  }

  // member: board_temperature
  {
    out << "board_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.board_temperature, out);
    out << ", ";
  }

  // member: sto_status
  {
    out << "sto_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sto_status, out);
    out << ", ";
  }

  // member: controller_alarm
  {
    out << "controller_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_alarm, out);
    out << ", ";
  }

  // member: controller_nmt_state
  {
    out << "controller_nmt_state: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_nmt_state, out);
    out << ", ";
  }

  // member: left_motor
  {
    out << "left_motor: ";
    to_flow_style_yaml(msg.left_motor, out);
    out << ", ";
  }

  // member: right_motor
  {
    out << "right_motor: ";
    to_flow_style_yaml(msg.right_motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorControllerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: software_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version: ";
    rosidl_generator_traits::value_to_yaml(msg.software_version, out);
    out << "\n";
  }

  // member: input_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.input_voltage, out);
    out << "\n";
  }

  // member: board_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.board_temperature, out);
    out << "\n";
  }

  // member: sto_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sto_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sto_status, out);
    out << "\n";
  }

  // member: controller_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_alarm, out);
    out << "\n";
  }

  // member: controller_nmt_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_nmt_state: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_nmt_state, out);
    out << "\n";
  }

  // member: left_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor:\n";
    to_block_style_yaml(msg.left_motor, out, indentation + 2);
  }

  // member: right_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor:\n";
    to_block_style_yaml(msg.right_motor, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorControllerStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::MotorControllerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::MotorControllerStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::MotorControllerStatus>()
{
  return "iris_interfaces::msg::MotorControllerStatus";
}

template<>
inline const char * name<iris_interfaces::msg::MotorControllerStatus>()
{
  return "iris_interfaces/msg/MotorControllerStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::MotorControllerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::msg::MotorControllerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::msg::MotorControllerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__TRAITS_HPP_
