// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:srv/RestartMotorController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__TRAITS_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/srv/detail/restart_motor_controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RestartMotorController_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: restart_reason
  {
    out << "restart_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.restart_reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RestartMotorController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: restart_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restart_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.restart_reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RestartMotorController_Request & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::RestartMotorController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::RestartMotorController_Request & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::RestartMotorController_Request>()
{
  return "iris_interfaces::srv::RestartMotorController_Request";
}

template<>
inline const char * name<iris_interfaces::srv::RestartMotorController_Request>()
{
  return "iris_interfaces/srv/RestartMotorController_Request";
}

template<>
struct has_fixed_size<iris_interfaces::srv::RestartMotorController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::RestartMotorController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::RestartMotorController_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RestartMotorController_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RestartMotorController_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RestartMotorController_Response & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::RestartMotorController_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::RestartMotorController_Response & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::RestartMotorController_Response>()
{
  return "iris_interfaces::srv::RestartMotorController_Response";
}

template<>
inline const char * name<iris_interfaces::srv::RestartMotorController_Response>()
{
  return "iris_interfaces/srv/RestartMotorController_Response";
}

template<>
struct has_fixed_size<iris_interfaces::srv::RestartMotorController_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::RestartMotorController_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::RestartMotorController_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::srv::RestartMotorController>()
{
  return "iris_interfaces::srv::RestartMotorController";
}

template<>
inline const char * name<iris_interfaces::srv::RestartMotorController>()
{
  return "iris_interfaces/srv/RestartMotorController";
}

template<>
struct has_fixed_size<iris_interfaces::srv::RestartMotorController>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::srv::RestartMotorController_Request>::value &&
    has_fixed_size<iris_interfaces::srv::RestartMotorController_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::srv::RestartMotorController>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::srv::RestartMotorController_Request>::value &&
    has_bounded_size<iris_interfaces::srv::RestartMotorController_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::srv::RestartMotorController>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::srv::RestartMotorController_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::srv::RestartMotorController_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__TRAITS_HPP_
