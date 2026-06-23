// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:srv/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__TRAITS_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/srv/detail/a2_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const A2Command_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: brush_command
  {
    out << "brush_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_command, out);
    out << ", ";
  }

  // member: vacuum_command
  {
    out << "vacuum_command: ";
    rosidl_generator_traits::value_to_yaml(msg.vacuum_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const A2Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brush_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brush_command: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_command, out);
    out << "\n";
  }

  // member: vacuum_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vacuum_command: ";
    rosidl_generator_traits::value_to_yaml(msg.vacuum_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const A2Command_Request & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::A2Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::A2Command_Request & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::A2Command_Request>()
{
  return "iris_interfaces::srv::A2Command_Request";
}

template<>
inline const char * name<iris_interfaces::srv::A2Command_Request>()
{
  return "iris_interfaces/srv/A2Command_Request";
}

template<>
struct has_fixed_size<iris_interfaces::srv::A2Command_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::srv::A2Command_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::srv::A2Command_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const A2Command_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: brush_status
  {
    out << "brush_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_status, out);
    out << ", ";
  }

  // member: vacuum_status
  {
    out << "vacuum_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vacuum_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const A2Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brush_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brush_status: ";
    rosidl_generator_traits::value_to_yaml(msg.brush_status, out);
    out << "\n";
  }

  // member: vacuum_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vacuum_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vacuum_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const A2Command_Response & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::A2Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::A2Command_Response & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::A2Command_Response>()
{
  return "iris_interfaces::srv::A2Command_Response";
}

template<>
inline const char * name<iris_interfaces::srv::A2Command_Response>()
{
  return "iris_interfaces/srv/A2Command_Response";
}

template<>
struct has_fixed_size<iris_interfaces::srv::A2Command_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::srv::A2Command_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::srv::A2Command_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::srv::A2Command>()
{
  return "iris_interfaces::srv::A2Command";
}

template<>
inline const char * name<iris_interfaces::srv::A2Command>()
{
  return "iris_interfaces/srv/A2Command";
}

template<>
struct has_fixed_size<iris_interfaces::srv::A2Command>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::srv::A2Command_Request>::value &&
    has_fixed_size<iris_interfaces::srv::A2Command_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::srv::A2Command>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::srv::A2Command_Request>::value &&
    has_bounded_size<iris_interfaces::srv::A2Command_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::srv::A2Command>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::srv::A2Command_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::srv::A2Command_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__TRAITS_HPP_
