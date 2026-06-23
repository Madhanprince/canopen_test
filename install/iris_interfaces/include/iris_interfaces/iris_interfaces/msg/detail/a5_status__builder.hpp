// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/A5Status.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/a5_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_A5Status_mode_and_status
{
public:
  Init_A5Status_mode_and_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::msg::A5Status mode_and_status(::iris_interfaces::msg::A5Status::_mode_and_status_type arg)
  {
    msg_.mode_and_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::A5Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::A5Status>()
{
  return iris_interfaces::msg::builder::Init_A5Status_mode_and_status();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__BUILDER_HPP_
