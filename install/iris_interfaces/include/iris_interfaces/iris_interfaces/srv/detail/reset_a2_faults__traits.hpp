// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:srv/ResetA2Faults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__RESET_A2_FAULTS__TRAITS_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__RESET_A2_FAULTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/srv/detail/reset_a2_faults__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetA2Faults_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetA2Faults_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetA2Faults_Request & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::ResetA2Faults_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::ResetA2Faults_Request & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::ResetA2Faults_Request>()
{
  return "iris_interfaces::srv::ResetA2Faults_Request";
}

template<>
inline const char * name<iris_interfaces::srv::ResetA2Faults_Request>()
{
  return "iris_interfaces/srv/ResetA2Faults_Request";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ResetA2Faults_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::srv::ResetA2Faults_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::srv::ResetA2Faults_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetA2Faults_Response & msg,
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
  const ResetA2Faults_Response & msg,
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

inline std::string to_yaml(const ResetA2Faults_Response & msg, bool use_flow_style = false)
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
  const iris_interfaces::srv::ResetA2Faults_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::srv::ResetA2Faults_Response & msg)
{
  return iris_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::srv::ResetA2Faults_Response>()
{
  return "iris_interfaces::srv::ResetA2Faults_Response";
}

template<>
inline const char * name<iris_interfaces::srv::ResetA2Faults_Response>()
{
  return "iris_interfaces/srv/ResetA2Faults_Response";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ResetA2Faults_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::srv::ResetA2Faults_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::srv::ResetA2Faults_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::srv::ResetA2Faults>()
{
  return "iris_interfaces::srv::ResetA2Faults";
}

template<>
inline const char * name<iris_interfaces::srv::ResetA2Faults>()
{
  return "iris_interfaces/srv/ResetA2Faults";
}

template<>
struct has_fixed_size<iris_interfaces::srv::ResetA2Faults>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::srv::ResetA2Faults_Request>::value &&
    has_fixed_size<iris_interfaces::srv::ResetA2Faults_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::srv::ResetA2Faults>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::srv::ResetA2Faults_Request>::value &&
    has_bounded_size<iris_interfaces::srv::ResetA2Faults_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::srv::ResetA2Faults>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::srv::ResetA2Faults_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::srv::ResetA2Faults_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__SRV__DETAIL__RESET_A2_FAULTS__TRAITS_HPP_
