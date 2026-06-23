// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:msg/WaterTankLevels.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__TRAITS_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/msg/detail/water_tank_levels__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iris_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaterTankLevels & msg,
  std::ostream & out)
{
  out << "{";
  // member: fresh_water_tank_level
  {
    out << "fresh_water_tank_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fresh_water_tank_level, out);
    out << ", ";
  }

  // member: dirty_water_tank_level
  {
    out << "dirty_water_tank_level: ";
    rosidl_generator_traits::value_to_yaml(msg.dirty_water_tank_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaterTankLevels & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fresh_water_tank_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fresh_water_tank_level: ";
    rosidl_generator_traits::value_to_yaml(msg.fresh_water_tank_level, out);
    out << "\n";
  }

  // member: dirty_water_tank_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dirty_water_tank_level: ";
    rosidl_generator_traits::value_to_yaml(msg.dirty_water_tank_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaterTankLevels & msg, bool use_flow_style = false)
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
  const iris_interfaces::msg::WaterTankLevels & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::msg::WaterTankLevels & msg)
{
  return iris_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::msg::WaterTankLevels>()
{
  return "iris_interfaces::msg::WaterTankLevels";
}

template<>
inline const char * name<iris_interfaces::msg::WaterTankLevels>()
{
  return "iris_interfaces/msg/WaterTankLevels";
}

template<>
struct has_fixed_size<iris_interfaces::msg::WaterTankLevels>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::msg::WaterTankLevels>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::msg::WaterTankLevels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__TRAITS_HPP_
