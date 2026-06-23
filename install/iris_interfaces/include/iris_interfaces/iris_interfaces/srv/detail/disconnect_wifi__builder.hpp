// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/DisconnectWifi.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__DISCONNECT_WIFI__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__DISCONNECT_WIFI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/disconnect_wifi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_DisconnectWifi_Request_ssid
{
public:
  Init_DisconnectWifi_Request_ssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::DisconnectWifi_Request ssid(::iris_interfaces::srv::DisconnectWifi_Request::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::DisconnectWifi_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::DisconnectWifi_Request>()
{
  return iris_interfaces::srv::builder::Init_DisconnectWifi_Request_ssid();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_DisconnectWifi_Response_status
{
public:
  Init_DisconnectWifi_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::DisconnectWifi_Response status(::iris_interfaces::srv::DisconnectWifi_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::DisconnectWifi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::DisconnectWifi_Response>()
{
  return iris_interfaces::srv::builder::Init_DisconnectWifi_Response_status();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__DISCONNECT_WIFI__BUILDER_HPP_
