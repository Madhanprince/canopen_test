// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/SystemSoftwareStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/system_software_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemSoftwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_software_name
  {
    out << "current_software_name: ";
    rosidl_generator_traits::value_to_yaml(msg.current_software_name, out);
    out << ", ";
  }

  // member: current_boot_slot
  {
    out << "current_boot_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.current_boot_slot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemSoftwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_software_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_software_name: ";
    rosidl_generator_traits::value_to_yaml(msg.current_software_name, out);
    out << "\n";
  }

  // member: current_boot_slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_boot_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.current_boot_slot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemSoftwareStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::SystemSoftwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::SystemSoftwareStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::SystemSoftwareStatus>()
{
  return "iris_interfaces::msg::SystemSoftwareStatus";
}

template<>
inline const char * name<iris_interfaces::msg::SystemSoftwareStatus>()
{
  return "iris_interfaces/msg/SystemSoftwareStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::SystemSoftwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::msg::SystemSoftwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::msg::SystemSoftwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__TRAITS_HPP_
