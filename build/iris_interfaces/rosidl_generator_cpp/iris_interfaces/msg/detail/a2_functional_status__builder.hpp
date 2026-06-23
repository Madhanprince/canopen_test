// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/A2FunctionalStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A2_FUNCTIONAL_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__A2_FUNCTIONAL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/a2_functional_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_A2FunctionalStatus_detergent_pump
{
public:
  explicit Init_A2FunctionalStatus_detergent_pump(::iris_interfaces::msg::A2FunctionalStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::A2FunctionalStatus detergent_pump(::iris_interfaces::msg::A2FunctionalStatus::_detergent_pump_type arg)
  {
    msg_.detergent_pump = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::A2FunctionalStatus msg_;
};

class Init_A2FunctionalStatus_water_pump
{
public:
  explicit Init_A2FunctionalStatus_water_pump(::iris_interfaces::msg::A2FunctionalStatus & msg)
  : msg_(msg)
  {}
  Init_A2FunctionalStatus_detergent_pump water_pump(::iris_interfaces::msg::A2FunctionalStatus::_water_pump_type arg)
  {
    msg_.water_pump = std::move(arg);
    return Init_A2FunctionalStatus_detergent_pump(msg_);
  }

private:
  ::iris_interfaces::msg::A2FunctionalStatus msg_;
};

class Init_A2FunctionalStatus_vacuum
{
public:
  explicit Init_A2FunctionalStatus_vacuum(::iris_interfaces::msg::A2FunctionalStatus & msg)
  : msg_(msg)
  {}
  Init_A2FunctionalStatus_water_pump vacuum(::iris_interfaces::msg::A2FunctionalStatus::_vacuum_type arg)
  {
    msg_.vacuum = std::move(arg);
    return Init_A2FunctionalStatus_water_pump(msg_);
  }

private:
  ::iris_interfaces::msg::A2FunctionalStatus msg_;
};

class Init_A2FunctionalStatus_brush
{
public:
  Init_A2FunctionalStatus_brush()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_A2FunctionalStatus_vacuum brush(::iris_interfaces::msg::A2FunctionalStatus::_brush_type arg)
  {
    msg_.brush = std::move(arg);
    return Init_A2FunctionalStatus_vacuum(msg_);
  }

private:
  ::iris_interfaces::msg::A2FunctionalStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::A2FunctionalStatus>()
{
  return iris_interfaces::msg::builder::Init_A2FunctionalStatus_brush();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__A2_FUNCTIONAL_STATUS__BUILDER_HPP_
