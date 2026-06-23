// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:msg/SystemSoftwareStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__BUILDER_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/msg/detail/system_software_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemSoftwareStatus_current_boot_slot
{
public:
  explicit Init_SystemSoftwareStatus_current_boot_slot(::iris_interfaces::msg::SystemSoftwareStatus & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::msg::SystemSoftwareStatus current_boot_slot(::iris_interfaces::msg::SystemSoftwareStatus::_current_boot_slot_type arg)
  {
    msg_.current_boot_slot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::msg::SystemSoftwareStatus msg_;
};

class Init_SystemSoftwareStatus_current_software_name
{
public:
  Init_SystemSoftwareStatus_current_software_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemSoftwareStatus_current_boot_slot current_software_name(::iris_interfaces::msg::SystemSoftwareStatus::_current_software_name_type arg)
  {
    msg_.current_software_name = std::move(arg);
    return Init_SystemSoftwareStatus_current_boot_slot(msg_);
  }

private:
  ::iris_interfaces::msg::SystemSoftwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::msg::SystemSoftwareStatus>()
{
  return iris_interfaces::msg::builder::Init_SystemSoftwareStatus_current_software_name();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__BUILDER_HPP_
