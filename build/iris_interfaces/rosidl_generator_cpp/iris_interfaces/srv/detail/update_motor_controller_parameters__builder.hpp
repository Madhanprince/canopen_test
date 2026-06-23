// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/UpdateMotorControllerParameters.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_PARAMETERS__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/update_motor_controller_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_UpdateMotorControllerParameters_Request_save_existing_params
{
public:
  Init_UpdateMotorControllerParameters_Request_save_existing_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::UpdateMotorControllerParameters_Request save_existing_params(::iris_interfaces::srv::UpdateMotorControllerParameters_Request::_save_existing_params_type arg)
  {
    msg_.save_existing_params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::UpdateMotorControllerParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::UpdateMotorControllerParameters_Request>()
{
  return iris_interfaces::srv::builder::Init_UpdateMotorControllerParameters_Request_save_existing_params();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_UpdateMotorControllerParameters_Response_result
{
public:
  Init_UpdateMotorControllerParameters_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::UpdateMotorControllerParameters_Response result(::iris_interfaces::srv::UpdateMotorControllerParameters_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::UpdateMotorControllerParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::UpdateMotorControllerParameters_Response>()
{
  return iris_interfaces::srv::builder::Init_UpdateMotorControllerParameters_Response_result();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_PARAMETERS__BUILDER_HPP_
