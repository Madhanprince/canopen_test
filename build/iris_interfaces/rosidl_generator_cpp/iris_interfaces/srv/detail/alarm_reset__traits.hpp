// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:srv/AlarmReset.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__TRAITS_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/srv/detail/alarm_reset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AlarmReset_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reset_alarm
  {
    out << "reset_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_alarm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlarmReset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reset_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_alarm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlarmReset_Request & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::AlarmReset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::AlarmReset_Request & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::AlarmReset_Request>()
{
  return "iris_interfaces::srv::AlarmReset_Request";
}

template<>
inline const char * name<iris_interfaces::srv::AlarmReset_Request>()
{
  return "iris_interfaces/srv/AlarmReset_Request";
}

template<>
struct has_fixed_size<iris_interfaces::srv::AlarmReset_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::srv::AlarmReset_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::srv::AlarmReset_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AlarmReset_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: respones
  {
    out << "respones: ";
    rosidl_generator_traits::value_to_yaml(msg.respones, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlarmReset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: respones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respones: ";
    rosidl_generator_traits::value_to_yaml(msg.respones, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlarmReset_Response & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::AlarmReset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::AlarmReset_Response & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::AlarmReset_Response>()
{
  return "iris_interfaces::srv::AlarmReset_Response";
}

template<>
inline const char * name<iris_interfaces::srv::AlarmReset_Response>()
{
  return "iris_interfaces/srv/AlarmReset_Response";
}

template<>
struct has_fixed_size<iris_interfaces::srv::AlarmReset_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::AlarmReset_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::AlarmReset_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::srv::AlarmReset>()
{
  return "iris_interfaces::srv::AlarmReset";
}

template<>
inline const char * name<iris_interfaces::srv::AlarmReset>()
{
  return "iris_interfaces/srv/AlarmReset";
}

template<>
struct has_fixed_size<iris_interfaces::srv::AlarmReset>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::srv::AlarmReset_Request>::value &&
    has_fixed_size<iris_interfaces::srv::AlarmReset_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::srv::AlarmReset>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::srv::AlarmReset_Request>::value &&
    has_bounded_size<iris_interfaces::srv::AlarmReset_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::srv::AlarmReset>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::srv::AlarmReset_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::srv::AlarmReset_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__TRAITS_HPP_
