// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/A2FaultStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A2_FAULT_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__A2_FAULT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/a2_fault_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_A2FaultStatus_water_and_detergent_pump_flow_fault
{
public:
  explicit Init_A2FaultStatus_water_and_detergent_pump_flow_fault(::iris_interfaces::msg::A2FaultStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::A2FaultStatus water_and_detergent_pump_flow_fault(::iris_interfaces::msg::A2FaultStatus::_water_and_detergent_pump_flow_fault_type arg)
  {
    msg_.water_and_detergent_pump_flow_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

class Init_A2FaultStatus_brush_vacuum_motor_driver_digital_fault
{
public:
  explicit Init_A2FaultStatus_brush_vacuum_motor_driver_digital_fault(::iris_interfaces::msg::A2FaultStatus & msg)
  : msg_(msg)
  {}
  Init_A2FaultStatus_water_and_detergent_pump_flow_fault brush_vacuum_motor_driver_digital_fault(::iris_interfaces::msg::A2FaultStatus::_brush_vacuum_motor_driver_digital_fault_type arg)
  {
    msg_.brush_vacuum_motor_driver_digital_fault = std::move(arg);
    return Init_A2FaultStatus_water_and_detergent_pump_flow_fault(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

class Init_A2FaultStatus_detergent_pump_digital_fault
{
public:
  explicit Init_A2FaultStatus_detergent_pump_digital_fault(::iris_interfaces::msg::A2FaultStatus & msg)
  : msg_(msg)
  {}
  Init_A2FaultStatus_brush_vacuum_motor_driver_digital_fault detergent_pump_digital_fault(::iris_interfaces::msg::A2FaultStatus::_detergent_pump_digital_fault_type arg)
  {
    msg_.detergent_pump_digital_fault = std::move(arg);
    return Init_A2FaultStatus_brush_vacuum_motor_driver_digital_fault(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

class Init_A2FaultStatus_water_pump_digital_fault
{
public:
  explicit Init_A2FaultStatus_water_pump_digital_fault(::iris_interfaces::msg::A2FaultStatus & msg)
  : msg_(msg)
  {}
  Init_A2FaultStatus_detergent_pump_digital_fault water_pump_digital_fault(::iris_interfaces::msg::A2FaultStatus::_water_pump_digital_fault_type arg)
  {
    msg_.water_pump_digital_fault = std::move(arg);
    return Init_A2FaultStatus_detergent_pump_digital_fault(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

class Init_A2FaultStatus_vacuum
{
public:
  explicit Init_A2FaultStatus_vacuum(::iris_interfaces::msg::A2FaultStatus & msg)
  : msg_(msg)
  {}
  Init_A2FaultStatus_water_pump_digital_fault vacuum(::iris_interfaces::msg::A2FaultStatus::_vacuum_type arg)
  {
    msg_.vacuum = std::move(arg);
    return Init_A2FaultStatus_water_pump_digital_fault(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

class Init_A2FaultStatus_brush
{
public:
  explicit Init_A2FaultStatus_brush(::iris_interfaces::msg::A2FaultStatus & msg)
  : msg_(msg)
  {}
  Init_A2FaultStatus_vacuum brush(::iris_interfaces::msg::A2FaultStatus::_brush_type arg)
  {
    msg_.brush = std::move(arg);
    return Init_A2FaultStatus_vacuum(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

class Init_A2FaultStatus_a2_fault_status
{
public:
  Init_A2FaultStatus_a2_fault_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_A2FaultStatus_brush a2_fault_status(::iris_interfaces::msg::A2FaultStatus::_a2_fault_status_type arg)
  {
    msg_.a2_fault_status = std::move(arg);
    return Init_A2FaultStatus_brush(msg_);
  }

private:
  ::iris_interfaces::msg::A2FaultStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::A2FaultStatus>()
{
  return iris_interfaces::msg::builder::Init_A2FaultStatus_a2_fault_status();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__A2_FAULT_STATUS__BUILDER_HPP_
