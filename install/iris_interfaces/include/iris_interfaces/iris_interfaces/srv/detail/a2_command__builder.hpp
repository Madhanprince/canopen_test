// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/a2_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_A2Command_Request_vacuum_command
{
public:
  explicit Init_A2Command_Request_vacuum_command(::iris_interfaces::srv::A2Command_Request & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::A2Command_Request vacuum_command(::iris_interfaces::srv::A2Command_Request::_vacuum_command_type arg)
  {
    msg_.vacuum_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::A2Command_Request msg_;
};

class Init_A2Command_Request_brush_command
{
public:
  Init_A2Command_Request_brush_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_A2Command_Request_vacuum_command brush_command(::iris_interfaces::srv::A2Command_Request::_brush_command_type arg)
  {
    msg_.brush_command = std::move(arg);
    return Init_A2Command_Request_vacuum_command(msg_);
  }

private:
  ::iris_interfaces::srv::A2Command_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::A2Command_Request>()
{
  return iris_interfaces::srv::builder::Init_A2Command_Request_brush_command();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_A2Command_Response_vacuum_status
{
public:
  explicit Init_A2Command_Response_vacuum_status(::iris_interfaces::srv::A2Command_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::A2Command_Response vacuum_status(::iris_interfaces::srv::A2Command_Response::_vacuum_status_type arg)
  {
    msg_.vacuum_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::A2Command_Response msg_;
};

class Init_A2Command_Response_brush_status
{
public:
  Init_A2Command_Response_brush_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_A2Command_Response_vacuum_status brush_status(::iris_interfaces::srv::A2Command_Response::_brush_status_type arg)
  {
    msg_.brush_status = std::move(arg);
    return Init_A2Command_Response_vacuum_status(msg_);
  }

private:
  ::iris_interfaces::srv::A2Command_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::A2Command_Response>()
{
  return iris_interfaces::srv::builder::Init_A2Command_Response_brush_status();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__BUILDER_HPP_
