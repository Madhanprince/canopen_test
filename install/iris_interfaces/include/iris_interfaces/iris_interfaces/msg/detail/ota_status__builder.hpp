// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/OTAStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/ota_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_OTAStatus_mender_client_status
{
public:
  explicit Init_OTAStatus_mender_client_status(::iris_interfaces::msg::OTAStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::OTAStatus mender_client_status(::iris_interfaces::msg::OTAStatus::_mender_client_status_type arg)
  {
    msg_.mender_client_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::OTAStatus msg_;
};

class Init_OTAStatus_system_software_info
{
public:
  Init_OTAStatus_system_software_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OTAStatus_mender_client_status system_software_info(::iris_interfaces::msg::OTAStatus::_system_software_info_type arg)
  {
    msg_.system_software_info = std::move(arg);
    return Init_OTAStatus_mender_client_status(msg_);
  }

private:
  ::iris_interfaces::msg::OTAStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::OTAStatus>()
{
  return iris_interfaces::msg::builder::Init_OTAStatus_system_software_info();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__BUILDER_HPP_
