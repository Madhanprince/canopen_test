// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/actuator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorStatus_hold_up
{
public:
  explicit Init_ActuatorStatus_hold_up(::iris_interfaces::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::ActuatorStatus hold_up(::iris_interfaces::msg::ActuatorStatus::_hold_up_type arg)
  {
    msg_.hold_up = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_moving_up
{
public:
  explicit Init_ActuatorStatus_moving_up(::iris_interfaces::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  Init_ActuatorStatus_hold_up moving_up(::iris_interfaces::msg::ActuatorStatus::_moving_up_type arg)
  {
    msg_.moving_up = std::move(arg);
    return Init_ActuatorStatus_hold_up(msg_);
  }

private:
  ::iris_interfaces::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_hold_down
{
public:
  explicit Init_ActuatorStatus_hold_down(::iris_interfaces::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  Init_ActuatorStatus_moving_up hold_down(::iris_interfaces::msg::ActuatorStatus::_hold_down_type arg)
  {
    msg_.hold_down = std::move(arg);
    return Init_ActuatorStatus_moving_up(msg_);
  }

private:
  ::iris_interfaces::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_moving_down
{
public:
  Init_ActuatorStatus_moving_down()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorStatus_hold_down moving_down(::iris_interfaces::msg::ActuatorStatus::_moving_down_type arg)
  {
    msg_.moving_down = std::move(arg);
    return Init_ActuatorStatus_hold_down(msg_);
  }

private:
  ::iris_interfaces::msg::ActuatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::ActuatorStatus>()
{
  return iris_interfaces::msg::builder::Init_ActuatorStatus_moving_down();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_
