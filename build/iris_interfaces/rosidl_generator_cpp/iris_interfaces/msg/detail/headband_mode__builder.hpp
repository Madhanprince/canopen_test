// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/HeadbandMode.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/headband_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_HeadbandMode_width
{
public:
  Init_HeadbandMode_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::msg::HeadbandMode width(::iris_interfaces::msg::HeadbandMode::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::HeadbandMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::HeadbandMode>()
{
  return iris_interfaces::msg::builder::Init_HeadbandMode_width();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__BUILDER_HPP_
