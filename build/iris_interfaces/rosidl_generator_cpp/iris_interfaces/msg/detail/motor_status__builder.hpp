// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_overload_percentage
{
public:
  explicit Init_MotorStatus_overload_percentage(::iris_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::MotorStatus overload_percentage(::iris_interfaces::msg::MotorStatus::_overload_percentage_type arg)
  {
    msg_.overload_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_actual_rpm
{
public:
  explicit Init_MotorStatus_actual_rpm(::iris_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_overload_percentage actual_rpm(::iris_interfaces::msg::MotorStatus::_actual_rpm_type arg)
  {
    msg_.actual_rpm = std::move(arg);
    return Init_MotorStatus_overload_percentage(msg_);
  }

private:
  ::iris_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_demand_rpm
{
public:
  explicit Init_MotorStatus_demand_rpm(::iris_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_actual_rpm demand_rpm(::iris_interfaces::msg::MotorStatus::_demand_rpm_type arg)
  {
    msg_.demand_rpm = std::move(arg);
    return Init_MotorStatus_actual_rpm(msg_);
  }

private:
  ::iris_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_motor_current
{
public:
  explicit Init_MotorStatus_motor_current(::iris_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_demand_rpm motor_current(::iris_interfaces::msg::MotorStatus::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return Init_MotorStatus_demand_rpm(msg_);
  }

private:
  ::iris_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_motor_voltage
{
public:
  explicit Init_MotorStatus_motor_voltage(::iris_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_motor_current motor_voltage(::iris_interfaces::msg::MotorStatus::_motor_voltage_type arg)
  {
    msg_.motor_voltage = std::move(arg);
    return Init_MotorStatus_motor_current(msg_);
  }

private:
  ::iris_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_brake_state
{
public:
  Init_MotorStatus_brake_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_motor_voltage brake_state(::iris_interfaces::msg::MotorStatus::_brake_state_type arg)
  {
    msg_.brake_state = std::move(arg);
    return Init_MotorStatus_motor_voltage(msg_);
  }

private:
  ::iris_interfaces::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::MotorStatus>()
{
  return iris_interfaces::msg::builder::Init_MotorStatus_brake_state();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
