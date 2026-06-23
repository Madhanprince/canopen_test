// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/StateManager.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__STATE_MANAGER__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__STATE_MANAGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/state_manager__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_StateManager_Request_state
{
public:
  explicit Init_StateManager_Request_state(::iris_interfaces::srv::StateManager_Request & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::StateManager_Request state(::iris_interfaces::srv::StateManager_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::StateManager_Request msg_;
};

class Init_StateManager_Request_component_name
{
public:
  Init_StateManager_Request_component_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateManager_Request_state component_name(::iris_interfaces::srv::StateManager_Request::_component_name_type arg)
  {
    msg_.component_name = std::move(arg);
    return Init_StateManager_Request_state(msg_);
  }

private:
  ::iris_interfaces::srv::StateManager_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::StateManager_Request>()
{
  return iris_interfaces::srv::builder::Init_StateManager_Request_component_name();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_StateManager_Response_result_description
{
public:
  explicit Init_StateManager_Response_result_description(::iris_interfaces::srv::StateManager_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::StateManager_Response result_description(::iris_interfaces::srv::StateManager_Response::_result_description_type arg)
  {
    msg_.result_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::StateManager_Response msg_;
};

class Init_StateManager_Response_result
{
public:
  Init_StateManager_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateManager_Response_result_description result(::iris_interfaces::srv::StateManager_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_StateManager_Response_result_description(msg_);
  }

private:
  ::iris_interfaces::srv::StateManager_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::StateManager_Response>()
{
  return iris_interfaces::srv::builder::Init_StateManager_Response_result();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__STATE_MANAGER__BUILDER_HPP_
