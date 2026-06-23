// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/a2_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_A2Command_pump_flow_rate
{
public:
  Init_A2Command_pump_flow_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::msg::A2Command pump_flow_rate(::iris_interfaces::msg::A2Command::_pump_flow_rate_type arg)
  {
    msg_.pump_flow_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::A2Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::A2Command>()
{
  return iris_interfaces::msg::builder::Init_A2Command_pump_flow_rate();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__BUILDER_HPP_
