// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/BrushStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/brush_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_BrushStatus_brush_actuator
{
public:
  explicit Init_BrushStatus_brush_actuator(::iris_interfaces::msg::BrushStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::BrushStatus brush_actuator(::iris_interfaces::msg::BrushStatus::_brush_actuator_type arg)
  {
    msg_.brush_actuator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::BrushStatus msg_;
};

class Init_BrushStatus_brush_motor_status
{
public:
  explicit Init_BrushStatus_brush_motor_status(::iris_interfaces::msg::BrushStatus & msg)
  : msg_(msg)
  {}
  Init_BrushStatus_brush_actuator brush_motor_status(::iris_interfaces::msg::BrushStatus::_brush_motor_status_type arg)
  {
    msg_.brush_motor_status = std::move(arg);
    return Init_BrushStatus_brush_actuator(msg_);
  }

private:
  ::iris_interfaces::msg::BrushStatus msg_;
};

class Init_BrushStatus_brush_motor_command
{
public:
  Init_BrushStatus_brush_motor_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrushStatus_brush_motor_status brush_motor_command(::iris_interfaces::msg::BrushStatus::_brush_motor_command_type arg)
  {
    msg_.brush_motor_command = std::move(arg);
    return Init_BrushStatus_brush_motor_status(msg_);
  }

private:
  ::iris_interfaces::msg::BrushStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::BrushStatus>()
{
  return iris_interfaces::msg::builder::Init_BrushStatus_brush_motor_command();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__BUILDER_HPP_
