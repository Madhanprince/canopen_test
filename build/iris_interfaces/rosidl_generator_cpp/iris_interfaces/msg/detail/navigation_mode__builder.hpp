// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/NavigationMode.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__NAVIGATION_MODE__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__NAVIGATION_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/navigation_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_NavigationMode_mode
{
public:
  Init_NavigationMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::msg::NavigationMode mode(::iris_interfaces::msg::NavigationMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::NavigationMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::NavigationMode>()
{
  return iris_interfaces::msg::builder::Init_NavigationMode_mode();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__NAVIGATION_MODE__BUILDER_HPP_
