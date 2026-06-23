// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/OTAStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/ota_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'system_software_info'
#include "iris_interfaces/msg/detail/system_software_status__traits.hpp"
// Member 'mender_client_status'
#include "iris_interfaces/msg/detail/mender_client_status__traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const OTAStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: system_software_info
  {
    out << "system_software_info: ";
    to_flow_style_yaml(msg.system_software_info, out);
    out << ", ";
  }

  // member: mender_client_status
  {
    out << "mender_client_status: ";
    to_flow_style_yaml(msg.mender_client_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OTAStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: system_software_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_software_info:\n";
    to_block_style_yaml(msg.system_software_info, out, indentation + 2);
  }

  // member: mender_client_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mender_client_status:\n";
    to_block_style_yaml(msg.mender_client_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OTAStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::OTAStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::OTAStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::OTAStatus>()
{
  return "iris_interfaces::msg::OTAStatus";
}

template<>
inline const char * name<iris_interfaces::msg::OTAStatus>()
{
  return "iris_interfaces/msg/OTAStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::OTAStatus>
  : std::integral_constant<bool, has_fixed_size<iris_interfaces::msg::MenderClientStatus>::value && has_fixed_size<iris_interfaces::msg::SystemSoftwareStatus>::value> {};

template<>
struct has_bounded_size<iris_interfaces::msg::OTAStatus>
  : std::integral_constant<bool, has_bounded_size<iris_interfaces::msg::MenderClientStatus>::value && has_bounded_size<iris_interfaces::msg::SystemSoftwareStatus>::value> {};

template<>
struct is_message<iris_interfaces::msg::OTAStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__TRAITS_HPP_
