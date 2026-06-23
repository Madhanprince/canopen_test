// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/RestartMotorController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/restart_motor_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_RestartMotorController_Request_restart_reason
{
public:
  Init_RestartMotorController_Request_restart_reason()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::RestartMotorController_Request restart_reason(::iris_interfaces::srv::RestartMotorController_Request::_restart_reason_type arg)
  {
    msg_.restart_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::RestartMotorController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::RestartMotorController_Request>()
{
  return iris_interfaces::srv::builder::Init_RestartMotorController_Request_restart_reason();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_RestartMotorController_Response_result
{
public:
  Init_RestartMotorController_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::RestartMotorController_Response result(::iris_interfaces::srv::RestartMotorController_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::RestartMotorController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::RestartMotorController_Response>()
{
  return iris_interfaces::srv::builder::Init_RestartMotorController_Response_result();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__BUILDER_HPP_
