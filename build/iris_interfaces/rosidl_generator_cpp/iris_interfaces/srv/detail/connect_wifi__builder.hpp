// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/ConnectWifi.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__CONNECT_WIFI__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__CONNECT_WIFI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/connect_wifi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConnectWifi_Request_password
{
public:
  explicit Init_ConnectWifi_Request_password(::iris_interfaces::srv::ConnectWifi_Request & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::ConnectWifi_Request password(::iris_interfaces::srv::ConnectWifi_Request::_password_type arg)
  {
    msg_.password = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::ConnectWifi_Request msg_;
};

class Init_ConnectWifi_Request_ssid
{
public:
  Init_ConnectWifi_Request_ssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectWifi_Request_password ssid(::iris_interfaces::srv::ConnectWifi_Request::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_ConnectWifi_Request_password(msg_);
  }

private:
  ::iris_interfaces::srv::ConnectWifi_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::ConnectWifi_Request>()
{
  return iris_interfaces::srv::builder::Init_ConnectWifi_Request_ssid();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_ConnectWifi_Response_status
{
public:
  Init_ConnectWifi_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::ConnectWifi_Response status(::iris_interfaces::srv::ConnectWifi_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::ConnectWifi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::ConnectWifi_Response>()
{
  return iris_interfaces::srv::builder::Init_ConnectWifi_Response_status();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__CONNECT_WIFI__BUILDER_HPP_
