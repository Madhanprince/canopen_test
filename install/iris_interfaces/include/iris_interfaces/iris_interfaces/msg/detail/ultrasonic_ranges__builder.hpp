// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/ultrasonic_ranges__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_UltrasonicRanges_ultrasonic_4
{
public:
  explicit Init_UltrasonicRanges_ultrasonic_4(::iris_interfaces::msg::UltrasonicRanges & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::UltrasonicRanges ultrasonic_4(::iris_interfaces::msg::UltrasonicRanges::_ultrasonic_4_type arg)
  {
    msg_.ultrasonic_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::UltrasonicRanges msg_;
};

class Init_UltrasonicRanges_ultrasonic_3
{
public:
  explicit Init_UltrasonicRanges_ultrasonic_3(::iris_interfaces::msg::UltrasonicRanges & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRanges_ultrasonic_4 ultrasonic_3(::iris_interfaces::msg::UltrasonicRanges::_ultrasonic_3_type arg)
  {
    msg_.ultrasonic_3 = std::move(arg);
    return Init_UltrasonicRanges_ultrasonic_4(msg_);
  }

private:
  ::iris_interfaces::msg::UltrasonicRanges msg_;
};

class Init_UltrasonicRanges_ultrasonic_2
{
public:
  explicit Init_UltrasonicRanges_ultrasonic_2(::iris_interfaces::msg::UltrasonicRanges & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRanges_ultrasonic_3 ultrasonic_2(::iris_interfaces::msg::UltrasonicRanges::_ultrasonic_2_type arg)
  {
    msg_.ultrasonic_2 = std::move(arg);
    return Init_UltrasonicRanges_ultrasonic_3(msg_);
  }

private:
  ::iris_interfaces::msg::UltrasonicRanges msg_;
};

class Init_UltrasonicRanges_ultrasonic_1
{
public:
  Init_UltrasonicRanges_ultrasonic_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UltrasonicRanges_ultrasonic_2 ultrasonic_1(::iris_interfaces::msg::UltrasonicRanges::_ultrasonic_1_type arg)
  {
    msg_.ultrasonic_1 = std::move(arg);
    return Init_UltrasonicRanges_ultrasonic_2(msg_);
  }

private:
  ::iris_interfaces::msg::UltrasonicRanges msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::UltrasonicRanges>()
{
  return iris_interfaces::msg::builder::Init_UltrasonicRanges_ultrasonic_1();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__BUILDER_HPP_
