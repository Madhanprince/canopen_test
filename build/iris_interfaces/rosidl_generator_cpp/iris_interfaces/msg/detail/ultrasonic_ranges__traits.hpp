// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/ultrasonic_ranges__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ultrasonic_1'
// Member 'ultrasonic_2'
// Member 'ultrasonic_3'
// Member 'ultrasonic_4'
#include "sensor_msgs/msg/detail/range__traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UltrasonicRanges & msg,
  std::ostream & out)
{
  out << "{";
  // member: ultrasonic_1
  {
    out << "ultrasonic_1: ";
    to_flow_style_yaml(msg.ultrasonic_1, out);
    out << ", ";
  }

  // member: ultrasonic_2
  {
    out << "ultrasonic_2: ";
    to_flow_style_yaml(msg.ultrasonic_2, out);
    out << ", ";
  }

  // member: ultrasonic_3
  {
    out << "ultrasonic_3: ";
    to_flow_style_yaml(msg.ultrasonic_3, out);
    out << ", ";
  }

  // member: ultrasonic_4
  {
    out << "ultrasonic_4: ";
    to_flow_style_yaml(msg.ultrasonic_4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UltrasonicRanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ultrasonic_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_1:\n";
    to_block_style_yaml(msg.ultrasonic_1, out, indentation + 2);
  }

  // member: ultrasonic_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_2:\n";
    to_block_style_yaml(msg.ultrasonic_2, out, indentation + 2);
  }

  // member: ultrasonic_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_3:\n";
    to_block_style_yaml(msg.ultrasonic_3, out, indentation + 2);
  }

  // member: ultrasonic_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_4:\n";
    to_block_style_yaml(msg.ultrasonic_4, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UltrasonicRanges & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::UltrasonicRanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::UltrasonicRanges & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::UltrasonicRanges>()
{
  return "iris_interfaces::msg::UltrasonicRanges";
}

template<>
inline const char * name<iris_interfaces::msg::UltrasonicRanges>()
{
  return "iris_interfaces/msg/UltrasonicRanges";
}

template<>
struct has_fixed_size<iris_interfaces::msg::UltrasonicRanges>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Range>::value> {};

template<>
struct has_bounded_size<iris_interfaces::msg::UltrasonicRanges>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Range>::value> {};

template<>
struct is_message<iris_interfaces::msg::UltrasonicRanges>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__TRAITS_HPP_
