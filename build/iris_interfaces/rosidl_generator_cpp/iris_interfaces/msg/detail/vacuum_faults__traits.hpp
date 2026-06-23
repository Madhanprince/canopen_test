// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/VacuumFaults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/vacuum_faults__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VacuumFaults & msg,
  std::ostream & out)
{
  out << "{";
  // member: squeeze_actuator_digital_fault
  {
    out << "squeeze_actuator_digital_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.squeeze_actuator_digital_fault, out);
    out << ", ";
  }

  // member: drive_brush_current_digital_fault
  {
    out << "drive_brush_current_digital_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_brush_current_digital_fault, out);
    out << ", ";
  }

  // member: overcurrent_analog_fault
  {
    out << "overcurrent_analog_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.overcurrent_analog_fault, out);
    out << ", ";
  }

  // member: undercurrent_analog_fault
  {
    out << "undercurrent_analog_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.undercurrent_analog_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VacuumFaults & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: squeeze_actuator_digital_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squeeze_actuator_digital_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.squeeze_actuator_digital_fault, out);
    out << "\n";
  }

  // member: drive_brush_current_digital_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_brush_current_digital_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_brush_current_digital_fault, out);
    out << "\n";
  }

  // member: overcurrent_analog_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overcurrent_analog_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.overcurrent_analog_fault, out);
    out << "\n";
  }

  // member: undercurrent_analog_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undercurrent_analog_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.undercurrent_analog_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VacuumFaults & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::VacuumFaults & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::VacuumFaults & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::VacuumFaults>()
{
  return "iris_interfaces::msg::VacuumFaults";
}

template<>
inline const char * name<iris_interfaces::msg::VacuumFaults>()
{
  return "iris_interfaces/msg/VacuumFaults";
}

template<>
struct has_fixed_size<iris_interfaces::msg::VacuumFaults>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::msg::VacuumFaults>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::msg::VacuumFaults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__TRAITS_HPP_
