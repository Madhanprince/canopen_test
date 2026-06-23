// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/FollowPathResult.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/follow_path_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_FollowPathResult_result
{
public:
  Init_FollowPathResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::msg::FollowPathResult result(::iris_interfaces::msg::FollowPathResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::FollowPathResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::FollowPathResult>()
{
  return iris_interfaces::msg::builder::Init_FollowPathResult_result();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__FOLLOW_PATH_RESULT__BUILDER_HPP_
