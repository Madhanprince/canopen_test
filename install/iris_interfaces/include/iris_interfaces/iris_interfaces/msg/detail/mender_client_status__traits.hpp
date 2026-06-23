// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/MenderClientStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/mender_client_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MenderClientStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: ota_client_state
  {
    out << "ota_client_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ota_client_state, out);
    out << ", ";
  }

  // member: last_sync_with_server
  {
    out << "last_sync_with_server: ";
    rosidl_generator_traits::value_to_yaml(msg.last_sync_with_server, out);
    out << ", ";
  }

  // member: download_available
  {
    out << "download_available: ";
    rosidl_generator_traits::value_to_yaml(msg.download_available, out);
    out << ", ";
  }

  // member: install_available
  {
    out << "install_available: ";
    rosidl_generator_traits::value_to_yaml(msg.install_available, out);
    out << ", ";
  }

  // member: reboot_required
  {
    out << "reboot_required: ";
    rosidl_generator_traits::value_to_yaml(msg.reboot_required, out);
    out << ", ";
  }

  // member: update_status
  {
    out << "update_status: ";
    rosidl_generator_traits::value_to_yaml(msg.update_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MenderClientStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ota_client_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ota_client_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ota_client_state, out);
    out << "\n";
  }

  // member: last_sync_with_server
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_sync_with_server: ";
    rosidl_generator_traits::value_to_yaml(msg.last_sync_with_server, out);
    out << "\n";
  }

  // member: download_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "download_available: ";
    rosidl_generator_traits::value_to_yaml(msg.download_available, out);
    out << "\n";
  }

  // member: install_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "install_available: ";
    rosidl_generator_traits::value_to_yaml(msg.install_available, out);
    out << "\n";
  }

  // member: reboot_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reboot_required: ";
    rosidl_generator_traits::value_to_yaml(msg.reboot_required, out);
    out << "\n";
  }

  // member: update_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_status: ";
    rosidl_generator_traits::value_to_yaml(msg.update_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MenderClientStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::MenderClientStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::MenderClientStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::MenderClientStatus>()
{
  return "iris_interfaces::msg::MenderClientStatus";
}

template<>
inline const char * name<iris_interfaces::msg::MenderClientStatus>()
{
  return "iris_interfaces/msg/MenderClientStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::MenderClientStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::msg::MenderClientStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::msg::MenderClientStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__TRAITS_HPP_
