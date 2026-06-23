// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/FollowPathResult.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/follow_path_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FollowPathResult & msg,
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
  const FollowPathResult & msg,
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

inline std::string to_yaml(const FollowPathResult & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::FollowPathResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::FollowPathResult & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::FollowPathResult>()
{
  return "iris_interfaces::msg::FollowPathResult";
}

template<>
inline const char * name<iris_interfaces::msg::FollowPathResult>()
{
  return "iris_interfaces/msg/FollowPathResult";
}

template<>
struct has_fixed_size<iris_interfaces::msg::FollowPathResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::msg::FollowPathResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::msg::FollowPathResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__TRAITS_HPP_
