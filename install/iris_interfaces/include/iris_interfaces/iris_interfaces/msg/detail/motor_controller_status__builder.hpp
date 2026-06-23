// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/motor_controller_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorControllerStatus_right_motor
{
public:
  explicit Init_MotorControllerStatus_right_motor(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::MotorControllerStatus right_motor(::iris_interfaces::msg::MotorControllerStatus::_right_motor_type arg)
  {
    msg_.right_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_left_motor
{
public:
  explicit Init_MotorControllerStatus_left_motor(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  Init_MotorControllerStatus_right_motor left_motor(::iris_interfaces::msg::MotorControllerStatus::_left_motor_type arg)
  {
    msg_.left_motor = std::move(arg);
    return Init_MotorControllerStatus_right_motor(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_controller_nmt_state
{
public:
  explicit Init_MotorControllerStatus_controller_nmt_state(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  Init_MotorControllerStatus_left_motor controller_nmt_state(::iris_interfaces::msg::MotorControllerStatus::_controller_nmt_state_type arg)
  {
    msg_.controller_nmt_state = std::move(arg);
    return Init_MotorControllerStatus_left_motor(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_controller_alarm
{
public:
  explicit Init_MotorControllerStatus_controller_alarm(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  Init_MotorControllerStatus_controller_nmt_state controller_alarm(::iris_interfaces::msg::MotorControllerStatus::_controller_alarm_type arg)
  {
    msg_.controller_alarm = std::move(arg);
    return Init_MotorControllerStatus_controller_nmt_state(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_sto_status
{
public:
  explicit Init_MotorControllerStatus_sto_status(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  Init_MotorControllerStatus_controller_alarm sto_status(::iris_interfaces::msg::MotorControllerStatus::_sto_status_type arg)
  {
    msg_.sto_status = std::move(arg);
    return Init_MotorControllerStatus_controller_alarm(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_board_temperature
{
public:
  explicit Init_MotorControllerStatus_board_temperature(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  Init_MotorControllerStatus_sto_status board_temperature(::iris_interfaces::msg::MotorControllerStatus::_board_temperature_type arg)
  {
    msg_.board_temperature = std::move(arg);
    return Init_MotorControllerStatus_sto_status(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_input_voltage
{
public:
  explicit Init_MotorControllerStatus_input_voltage(::iris_interfaces::msg::MotorControllerStatus & msg)
  : msg_(msg)
  {}
  Init_MotorControllerStatus_board_temperature input_voltage(::iris_interfaces::msg::MotorControllerStatus::_input_voltage_type arg)
  {
    msg_.input_voltage = std::move(arg);
    return Init_MotorControllerStatus_board_temperature(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

class Init_MotorControllerStatus_software_version
{
public:
  Init_MotorControllerStatus_software_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControllerStatus_input_voltage software_version(::iris_interfaces::msg::MotorControllerStatus::_software_version_type arg)
  {
    msg_.software_version = std::move(arg);
    return Init_MotorControllerStatus_input_voltage(msg_);
  }

private:
  ::iris_interfaces::msg::MotorControllerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::MotorControllerStatus>()
{
  return iris_interfaces::msg::builder::Init_MotorControllerStatus_software_version();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__BUILDER_HPP_
