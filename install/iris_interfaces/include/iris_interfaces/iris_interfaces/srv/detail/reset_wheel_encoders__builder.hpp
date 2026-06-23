// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/ResetWheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__RESET_WHEEL_ENCODERS__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__RESET_WHEEL_ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/reset_wheel_encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::ResetWheelEncoders_Request>()
{
  return ::iris_interfaces::srv::ResetWheelEncoders_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetWheelEncoders_Response_result
{
public:
  Init_ResetWheelEncoders_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::ResetWheelEncoders_Response result(::iris_interfaces::srv::ResetWheelEncoders_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::ResetWheelEncoders_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::ResetWheelEncoders_Response>()
{
  return iris_interfaces::srv::builder::Init_ResetWheelEncoders_Response_result();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__RESET_WHEEL_ENCODERS__BUILDER_HPP_
