// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:srv/ConnectWifi.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__CONNECT_WIFI__TRAITS_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__CONNECT_WIFI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/srv/detail/connect_wifi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConnectWifi_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ssid
  {
    out << "ssid: ";
    rosidl_generator_traits::value_to_yaml(msg.ssid, out);
    out << ", ";
  }

  // member: password
  {
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectWifi_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssid: ";
    rosidl_generator_traits::value_to_yaml(msg.ssid, out);
    out << "\n";
  }

  // member: password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectWifi_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::srv::ConnectWifi_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::ConnectWifi_Request & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::ConnectWifi_Request>()
{
  return "iris_interfaces::srv::ConnectWifi_Request";
}

template<>
inline const char * name<iris_interfaces::srv::ConnectWifi_Request>()
{
  return "iris_interfaces/srv/ConnectWifi_Request";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ConnectWifi_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::ConnectWifi_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::ConnectWifi_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConnectWifi_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectWifi_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectWifi_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::srv::ConnectWifi_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::ConnectWifi_Response & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::ConnectWifi_Response>()
{
  return "iris_interfaces::srv::ConnectWifi_Response";
}

template<>
inline const char * name<iris_interfaces::srv::ConnectWifi_Response>()
{
  return "iris_interfaces/srv/ConnectWifi_Response";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ConnectWifi_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::ConnectWifi_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::ConnectWifi_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::srv::ConnectWifi>()
{
  return "iris_interfaces::srv::ConnectWifi";
}

template<>
inline const char * name<iris_interfaces::srv::ConnectWifi>()
{
  return "iris_interfaces/srv/ConnectWifi";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ConnectWifi>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::srv::ConnectWifi_Request>::value &&
    has_fixed_size<iris_interfaces::srv::ConnectWifi_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::srv::ConnectWifi>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::srv::ConnectWifi_Request>::value &&
    has_bounded_size<iris_interfaces::srv::ConnectWifi_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::srv::ConnectWifi>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::srv::ConnectWifi_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::srv::ConnectWifi_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__SRV__DETAIL__CONNECT_WIFI__TRAITS_HPP_
