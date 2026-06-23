// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_name
  {
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << ", ";
  }

  // member: sensor_robot_position
  {
    out << "sensor_robot_position: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_robot_position, out);
    out << ", ";
  }

  // member: sensor_status
  {
    out << "sensor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status, out);
    out << ", ";
  }

  // member: sensor_temperature
  {
    out << "sensor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_name, out);
    out << "\n";
  }

  // member: sensor_robot_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_robot_position: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_robot_position, out);
    out << "\n";
  }

  // member: sensor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status, out);
    out << "\n";
  }

  // member: sensor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorStatus & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::SensorStatus & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::SensorStatus>()
{
  return "iris_interfaces::msg::SensorStatus";
}

template<>
inline const char * name<iris_interfaces::msg::SensorStatus>()
{
  return "iris_interfaces/msg/SensorStatus";
}

template<>
struct has_fixed_size<iris_interfaces::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::msg::SensorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::msg::SensorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
