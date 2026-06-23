// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/VacuumStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/vacuum_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_VacuumStatus_squeeze_actuator
{
public:
  explicit Init_VacuumStatus_squeeze_actuator(::iris_interfaces::msg::VacuumStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::VacuumStatus squeeze_actuator(::iris_interfaces::msg::VacuumStatus::_squeeze_actuator_type arg)
  {
    msg_.squeeze_actuator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumStatus msg_;
};

class Init_VacuumStatus_vacuum_motor_status
{
public:
  explicit Init_VacuumStatus_vacuum_motor_status(::iris_interfaces::msg::VacuumStatus & msg)
  : msg_(msg)
  {}
  Init_VacuumStatus_squeeze_actuator vacuum_motor_status(::iris_interfaces::msg::VacuumStatus::_vacuum_motor_status_type arg)
  {
    msg_.vacuum_motor_status = std::move(arg);
    return Init_VacuumStatus_squeeze_actuator(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumStatus msg_;
};

class Init_VacuumStatus_vacuum_motor_command
{
public:
  Init_VacuumStatus_vacuum_motor_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VacuumStatus_vacuum_motor_status vacuum_motor_command(::iris_interfaces::msg::VacuumStatus::_vacuum_motor_command_type arg)
  {
    msg_.vacuum_motor_command = std::move(arg);
    return Init_VacuumStatus_vacuum_motor_status(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::VacuumStatus>()
{
  return iris_interfaces::msg::builder::Init_VacuumStatus_vacuum_motor_command();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__BUILDER_HPP_
