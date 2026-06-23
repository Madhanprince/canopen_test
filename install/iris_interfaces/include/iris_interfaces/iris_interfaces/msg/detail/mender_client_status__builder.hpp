// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/MenderClientStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/mender_client_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_MenderClientStatus_update_status
{
public:
  explicit Init_MenderClientStatus_update_status(::iris_interfaces::msg::MenderClientStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::MenderClientStatus update_status(::iris_interfaces::msg::MenderClientStatus::_update_status_type arg)
  {
    msg_.update_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::MenderClientStatus msg_;
};

class Init_MenderClientStatus_reboot_required
{
public:
  explicit Init_MenderClientStatus_reboot_required(::iris_interfaces::msg::MenderClientStatus & msg)
  : msg_(msg)
  {}
  Init_MenderClientStatus_update_status reboot_required(::iris_interfaces::msg::MenderClientStatus::_reboot_required_type arg)
  {
    msg_.reboot_required = std::move(arg);
    return Init_MenderClientStatus_update_status(msg_);
  }

private:
  ::iris_interfaces::msg::MenderClientStatus msg_;
};

class Init_MenderClientStatus_install_available
{
public:
  explicit Init_MenderClientStatus_install_available(::iris_interfaces::msg::MenderClientStatus & msg)
  : msg_(msg)
  {}
  Init_MenderClientStatus_reboot_required install_available(::iris_interfaces::msg::MenderClientStatus::_install_available_type arg)
  {
    msg_.install_available = std::move(arg);
    return Init_MenderClientStatus_reboot_required(msg_);
  }

private:
  ::iris_interfaces::msg::MenderClientStatus msg_;
};

class Init_MenderClientStatus_download_available
{
public:
  explicit Init_MenderClientStatus_download_available(::iris_interfaces::msg::MenderClientStatus & msg)
  : msg_(msg)
  {}
  Init_MenderClientStatus_install_available download_available(::iris_interfaces::msg::MenderClientStatus::_download_available_type arg)
  {
    msg_.download_available = std::move(arg);
    return Init_MenderClientStatus_install_available(msg_);
  }

private:
  ::iris_interfaces::msg::MenderClientStatus msg_;
};

class Init_MenderClientStatus_last_sync_with_server
{
public:
  explicit Init_MenderClientStatus_last_sync_with_server(::iris_interfaces::msg::MenderClientStatus & msg)
  : msg_(msg)
  {}
  Init_MenderClientStatus_download_available last_sync_with_server(::iris_interfaces::msg::MenderClientStatus::_last_sync_with_server_type arg)
  {
    msg_.last_sync_with_server = std::move(arg);
    return Init_MenderClientStatus_download_available(msg_);
  }

private:
  ::iris_interfaces::msg::MenderClientStatus msg_;
};

class Init_MenderClientStatus_ota_client_state
{
public:
  Init_MenderClientStatus_ota_client_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MenderClientStatus_last_sync_with_server ota_client_state(::iris_interfaces::msg::MenderClientStatus::_ota_client_state_type arg)
  {
    msg_.ota_client_state = std::move(arg);
    return Init_MenderClientStatus_last_sync_with_server(msg_);
  }

private:
  ::iris_interfaces::msg::MenderClientStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::MenderClientStatus>()
{
  return iris_interfaces::msg::builder::Init_MenderClientStatus_ota_client_state();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__BUILDER_HPP_
