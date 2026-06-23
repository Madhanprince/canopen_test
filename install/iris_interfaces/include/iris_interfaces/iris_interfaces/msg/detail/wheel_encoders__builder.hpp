// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/wheel_encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelEncoders_right_wheel_ticks
{
public:
  explicit Init_WheelEncoders_right_wheel_ticks(::iris_interfaces::msg::WheelEncoders & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::WheelEncoders right_wheel_ticks(::iris_interfaces::msg::WheelEncoders::_right_wheel_ticks_type arg)
  {
    msg_.right_wheel_ticks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::WheelEncoders msg_;
};

class Init_WheelEncoders_left_wheel_ticks
{
public:
  Init_WheelEncoders_left_wheel_ticks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelEncoders_right_wheel_ticks left_wheel_ticks(::iris_interfaces::msg::WheelEncoders::_left_wheel_ticks_type arg)
  {
    msg_.left_wheel_ticks = std::move(arg);
    return Init_WheelEncoders_right_wheel_ticks(msg_);
  }

private:
  ::iris_interfaces::msg::WheelEncoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::WheelEncoders>()
{
  return iris_interfaces::msg::builder::Init_WheelEncoders_left_wheel_ticks();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_
