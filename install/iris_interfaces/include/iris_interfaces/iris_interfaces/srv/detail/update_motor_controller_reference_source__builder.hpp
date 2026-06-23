// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/UpdateMotorControllerReferenceSource.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_REFERENCE_SOURCE__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_REFERENCE_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/update_motor_controller_reference_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_UpdateMotorControllerReferenceSource_Request_reference_source
{
public:
  Init_UpdateMotorControllerReferenceSource_Request_reference_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Request reference_source(::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Request::_reference_source_type arg)
  {
    msg_.reference_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Request>()
{
  return iris_interfaces::srv::builder::Init_UpdateMotorControllerReferenceSource_Request_reference_source();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_UpdateMotorControllerReferenceSource_Response_response
{
public:
  Init_UpdateMotorControllerReferenceSource_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Response response(::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::UpdateMotorControllerReferenceSource_Response>()
{
  return iris_interfaces::srv::builder::Init_UpdateMotorControllerReferenceSource_Response_response();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_REFERENCE_SOURCE__BUILDER_HPP_
