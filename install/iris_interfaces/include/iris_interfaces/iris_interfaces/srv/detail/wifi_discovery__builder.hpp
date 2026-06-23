// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:srv/WifiDiscovery.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__BUILDER_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/srv/detail/wifi_discovery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_WifiDiscovery_Request_wifidiscovery
{
public:
  Init_WifiDiscovery_Request_wifidiscovery()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::srv::WifiDiscovery_Request wifidiscovery(::iris_interfaces::srv::WifiDiscovery_Request::_wifidiscovery_type arg)
  {
    msg_.wifidiscovery = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::WifiDiscovery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::WifiDiscovery_Request>()
{
  return iris_interfaces::srv::builder::Init_WifiDiscovery_Request_wifidiscovery();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace srv
{

namespace builder
{

class Init_WifiDiscovery_Response_discoverystatus
{
public:
  explicit Init_WifiDiscovery_Response_discoverystatus(::iris_interfaces::srv::WifiDiscovery_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::srv::WifiDiscovery_Response discoverystatus(::iris_interfaces::srv::WifiDiscovery_Response::_discoverystatus_type arg)
  {
    msg_.discoverystatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::srv::WifiDiscovery_Response msg_;
};

class Init_WifiDiscovery_Response_timestamp
{
public:
  Init_WifiDiscovery_Response_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiDiscovery_Response_discoverystatus timestamp(::iris_interfaces::srv::WifiDiscovery_Response::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_WifiDiscovery_Response_discoverystatus(msg_);
  }

private:
  ::iris_interfaces::srv::WifiDiscovery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::srv::WifiDiscovery_Response>()
{
  return iris_interfaces::srv::builder::Init_WifiDiscovery_Response_timestamp();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__BUILDER_HPP_
