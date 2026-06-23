// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/WaterTankLevels.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/water_tank_levels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_WaterTankLevels_dirty_water_tank_level
{
public:
  explicit Init_WaterTankLevels_dirty_water_tank_level(::iris_interfaces::msg::WaterTankLevels & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::WaterTankLevels dirty_water_tank_level(::iris_interfaces::msg::WaterTankLevels::_dirty_water_tank_level_type arg)
  {
    msg_.dirty_water_tank_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::WaterTankLevels msg_;
};

class Init_WaterTankLevels_fresh_water_tank_level
{
public:
  Init_WaterTankLevels_fresh_water_tank_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterTankLevels_dirty_water_tank_level fresh_water_tank_level(::iris_interfaces::msg::WaterTankLevels::_fresh_water_tank_level_type arg)
  {
    msg_.fresh_water_tank_level = std::move(arg);
    return Init_WaterTankLevels_dirty_water_tank_level(msg_);
  }

private:
  ::iris_interfaces::msg::WaterTankLevels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::WaterTankLevels>()
{
  return iris_interfaces::msg::builder::Init_WaterTankLevels_fresh_water_tank_level();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__BUILDER_HPP_
