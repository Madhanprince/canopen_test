// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/WheelCommandSpeed.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WHEEL_COMMAND_SPEED__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__WHEEL_COMMAND_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/wheel_command_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelCommandSpeed_right_wheel
{
public:
  explicit Init_WheelCommandSpeed_right_wheel(::iris_interfaces::msg::WheelCommandSpeed & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::WheelCommandSpeed right_wheel(::iris_interfaces::msg::WheelCommandSpeed::_right_wheel_type arg)
  {
    msg_.right_wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::WheelCommandSpeed msg_;
};

class Init_WheelCommandSpeed_left_wheel
{
public:
  Init_WheelCommandSpeed_left_wheel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelCommandSpeed_right_wheel left_wheel(::iris_interfaces::msg::WheelCommandSpeed::_left_wheel_type arg)
  {
    msg_.left_wheel = std::move(arg);
    return Init_WheelCommandSpeed_right_wheel(msg_);
  }

private:
  ::iris_interfaces::msg::WheelCommandSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::WheelCommandSpeed>()
{
  return iris_interfaces::msg::builder::Init_WheelCommandSpeed_left_wheel();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__WHEEL_COMMAND_SPEED__BUILDER_HPP_
