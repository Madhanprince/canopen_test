// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/AlarmReset.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/alarm_reset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_AlarmReset_Request_reset_alarm
{
public:
  Init_AlarmReset_Request_reset_alarm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::AlarmReset_Request reset_alarm(::iris_interfaces::srv::AlarmReset_Request::_reset_alarm_type arg)
  {
    msg_.reset_alarm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::AlarmReset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::AlarmReset_Request>()
{
  return iris_interfaces::srv::builder::Init_AlarmReset_Request_reset_alarm();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_AlarmReset_Response_respones
{
public:
  Init_AlarmReset_Response_respones()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::AlarmReset_Response respones(::iris_interfaces::srv::AlarmReset_Response::_respones_type arg)
  {
    msg_.respones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::AlarmReset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::AlarmReset_Response>()
{
  return iris_interfaces::srv::builder::Init_AlarmReset_Response_respones();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__BUILDER_HPP_
