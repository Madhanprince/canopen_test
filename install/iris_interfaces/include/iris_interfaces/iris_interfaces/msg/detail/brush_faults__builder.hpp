// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/BrushFaults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__BRUSH_FAULTS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__BRUSH_FAULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/brush_faults__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_BrushFaults_undercurrent_analog_fault
{
public:
  explicit Init_BrushFaults_undercurrent_analog_fault(::iris_interfaces::msg::BrushFaults & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::BrushFaults undercurrent_analog_fault(::iris_interfaces::msg::BrushFaults::_undercurrent_analog_fault_type arg)
  {
    msg_.undercurrent_analog_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::BrushFaults msg_;
};

class Init_BrushFaults_temperature_fault
{
public:
  explicit Init_BrushFaults_temperature_fault(::iris_interfaces::msg::BrushFaults & msg)
  : msg_(msg)
  {}
  Init_BrushFaults_undercurrent_analog_fault temperature_fault(::iris_interfaces::msg::BrushFaults::_temperature_fault_type arg)
  {
    msg_.temperature_fault = std::move(arg);
    return Init_BrushFaults_undercurrent_analog_fault(msg_);
  }

private:
  ::iris_interfaces::msg::BrushFaults msg_;
};

class Init_BrushFaults_overcurrent_analog_fault
{
public:
  explicit Init_BrushFaults_overcurrent_analog_fault(::iris_interfaces::msg::BrushFaults & msg)
  : msg_(msg)
  {}
  Init_BrushFaults_temperature_fault overcurrent_analog_fault(::iris_interfaces::msg::BrushFaults::_overcurrent_analog_fault_type arg)
  {
    msg_.overcurrent_analog_fault = std::move(arg);
    return Init_BrushFaults_temperature_fault(msg_);
  }

private:
  ::iris_interfaces::msg::BrushFaults msg_;
};

class Init_BrushFaults_drive_brush_current_digital_fault
{
public:
  explicit Init_BrushFaults_drive_brush_current_digital_fault(::iris_interfaces::msg::BrushFaults & msg)
  : msg_(msg)
  {}
  Init_BrushFaults_overcurrent_analog_fault drive_brush_current_digital_fault(::iris_interfaces::msg::BrushFaults::_drive_brush_current_digital_fault_type arg)
  {
    msg_.drive_brush_current_digital_fault = std::move(arg);
    return Init_BrushFaults_overcurrent_analog_fault(msg_);
  }

private:
  ::iris_interfaces::msg::BrushFaults msg_;
};

class Init_BrushFaults_actuator_digital_fault
{
public:
  Init_BrushFaults_actuator_digital_fault()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrushFaults_drive_brush_current_digital_fault actuator_digital_fault(::iris_interfaces::msg::BrushFaults::_actuator_digital_fault_type arg)
  {
    msg_.actuator_digital_fault = std::move(arg);
    return Init_BrushFaults_drive_brush_current_digital_fault(msg_);
  }

private:
  ::iris_interfaces::msg::BrushFaults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::BrushFaults>()
{
  return iris_interfaces::msg::builder::Init_BrushFaults_actuator_digital_fault();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__BRUSH_FAULTS__BUILDER_HPP_
