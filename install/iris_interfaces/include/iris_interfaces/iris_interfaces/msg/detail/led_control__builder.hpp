// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/led_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedControl_right_indicator
{
public:
  explicit Init_LedControl_right_indicator(::iris_interfaces::msg::LedControl & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::LedControl right_indicator(::iris_interfaces::msg::LedControl::_right_indicator_type arg)
  {
    msg_.right_indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::LedControl msg_;
};

class Init_LedControl_left_indicator
{
public:
  explicit Init_LedControl_left_indicator(::iris_interfaces::msg::LedControl & msg)
  : msg_(msg)
  {}
  Init_LedControl_right_indicator left_indicator(::iris_interfaces::msg::LedControl::_left_indicator_type arg)
  {
    msg_.left_indicator = std::move(arg);
    return Init_LedControl_right_indicator(msg_);
  }

private:
  ::iris_interfaces::msg::LedControl msg_;
};

class Init_LedControl_led_command
{
public:
  Init_LedControl_led_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedControl_left_indicator led_command(::iris_interfaces::msg::LedControl::_led_command_type arg)
  {
    msg_.led_command = std::move(arg);
    return Init_LedControl_left_indicator(msg_);
  }

private:
  ::iris_interfaces::msg::LedControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::LedControl>()
{
  return iris_interfaces::msg::builder::Init_LedControl_led_command();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_
