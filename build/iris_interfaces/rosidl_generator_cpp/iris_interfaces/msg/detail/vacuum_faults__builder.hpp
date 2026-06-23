// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/VacuumFaults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/vacuum_faults__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_VacuumFaults_undercurrent_analog_fault
{
public:
  explicit Init_VacuumFaults_undercurrent_analog_fault(::iris_interfaces::msg::VacuumFaults & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::VacuumFaults undercurrent_analog_fault(::iris_interfaces::msg::VacuumFaults::_undercurrent_analog_fault_type arg)
  {
    msg_.undercurrent_analog_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumFaults msg_;
};

class Init_VacuumFaults_overcurrent_analog_fault
{
public:
  explicit Init_VacuumFaults_overcurrent_analog_fault(::iris_interfaces::msg::VacuumFaults & msg)
  : msg_(msg)
  {}
  Init_VacuumFaults_undercurrent_analog_fault overcurrent_analog_fault(::iris_interfaces::msg::VacuumFaults::_overcurrent_analog_fault_type arg)
  {
    msg_.overcurrent_analog_fault = std::move(arg);
    return Init_VacuumFaults_undercurrent_analog_fault(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumFaults msg_;
};

class Init_VacuumFaults_drive_brush_current_digital_fault
{
public:
  explicit Init_VacuumFaults_drive_brush_current_digital_fault(::iris_interfaces::msg::VacuumFaults & msg)
  : msg_(msg)
  {}
  Init_VacuumFaults_overcurrent_analog_fault drive_brush_current_digital_fault(::iris_interfaces::msg::VacuumFaults::_drive_brush_current_digital_fault_type arg)
  {
    msg_.drive_brush_current_digital_fault = std::move(arg);
    return Init_VacuumFaults_overcurrent_analog_fault(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumFaults msg_;
};

class Init_VacuumFaults_squeeze_actuator_digital_fault
{
public:
  Init_VacuumFaults_squeeze_actuator_digital_fault()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VacuumFaults_drive_brush_current_digital_fault squeeze_actuator_digital_fault(::iris_interfaces::msg::VacuumFaults::_squeeze_actuator_digital_fault_type arg)
  {
    msg_.squeeze_actuator_digital_fault = std::move(arg);
    return Init_VacuumFaults_drive_brush_current_digital_fault(msg_);
  }

private:
  ::iris_interfaces::msg::VacuumFaults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::VacuumFaults>()
{
  return iris_interfaces::msg::builder::Init_VacuumFaults_squeeze_actuator_digital_fault();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__BUILDER_HPP_
