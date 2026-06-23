// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/ProcessManager.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/process_manager__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_ProcessManager_Request_label
{
public:
  explicit Init_ProcessManager_Request_label(::iris_interfaces::srv::ProcessManager_Request & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::ProcessManager_Request label(::iris_interfaces::srv::ProcessManager_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Request msg_;
};

class Init_ProcessManager_Request_container_name
{
public:
  explicit Init_ProcessManager_Request_container_name(::iris_interfaces::srv::ProcessManager_Request & msg)
  : msg_(msg)
  {}
  Init_ProcessManager_Request_label container_name(::iris_interfaces::srv::ProcessManager_Request::_container_name_type arg)
  {
    msg_.container_name = std::move(arg);
    return Init_ProcessManager_Request_label(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Request msg_;
};

class Init_ProcessManager_Request_node_name
{
public:
  explicit Init_ProcessManager_Request_node_name(::iris_interfaces::srv::ProcessManager_Request & msg)
  : msg_(msg)
  {}
  Init_ProcessManager_Request_container_name node_name(::iris_interfaces::srv::ProcessManager_Request::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_ProcessManager_Request_container_name(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Request msg_;
};

class Init_ProcessManager_Request_name_space
{
public:
  explicit Init_ProcessManager_Request_name_space(::iris_interfaces::srv::ProcessManager_Request & msg)
  : msg_(msg)
  {}
  Init_ProcessManager_Request_node_name name_space(::iris_interfaces::srv::ProcessManager_Request::_name_space_type arg)
  {
    msg_.name_space = std::move(arg);
    return Init_ProcessManager_Request_node_name(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Request msg_;
};

class Init_ProcessManager_Request_executable
{
public:
  explicit Init_ProcessManager_Request_executable(::iris_interfaces::srv::ProcessManager_Request & msg)
  : msg_(msg)
  {}
  Init_ProcessManager_Request_name_space executable(::iris_interfaces::srv::ProcessManager_Request::_executable_type arg)
  {
    msg_.executable = std::move(arg);
    return Init_ProcessManager_Request_name_space(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Request msg_;
};

class Init_ProcessManager_Request_package
{
public:
  Init_ProcessManager_Request_package()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessManager_Request_executable package(::iris_interfaces::srv::ProcessManager_Request::_package_type arg)
  {
    msg_.package = std::move(arg);
    return Init_ProcessManager_Request_executable(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::ProcessManager_Request>()
{
  return iris_interfaces::srv::builder::Init_ProcessManager_Request_package();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_ProcessManager_Response_response
{
public:
  Init_ProcessManager_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::ProcessManager_Response response(::iris_interfaces::srv::ProcessManager_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::ProcessManager_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::ProcessManager_Response>()
{
  return iris_interfaces::srv::builder::Init_ProcessManager_Response_response();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__BUILDER_HPP_
