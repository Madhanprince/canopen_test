// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/MenderClientStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__MenderClientStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__MenderClientStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MenderClientStatus_
{
  using Type = MenderClientStatus_<ContainerAllocator>;

  explicit MenderClientStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->ota_client_state = "NA";
      this->last_sync_with_server = "NA";
      this->download_available = false;
      this->install_available = false;
      this->reboot_required = false;
      this->update_status = "NA";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->ota_client_state = "";
      this->last_sync_with_server = "";
      this->download_available = false;
      this->install_available = false;
      this->reboot_required = false;
      this->update_status = "";
    }
  }

  explicit MenderClientStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ota_client_state(_alloc),
    last_sync_with_server(_alloc),
    update_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->ota_client_state = "NA";
      this->last_sync_with_server = "NA";
      this->download_available = false;
      this->install_available = false;
      this->reboot_required = false;
      this->update_status = "NA";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->ota_client_state = "";
      this->last_sync_with_server = "";
      this->download_available = false;
      this->install_available = false;
      this->reboot_required = false;
      this->update_status = "";
    }
  }

  // field types and members
  using _ota_client_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ota_client_state_type ota_client_state;
  using _last_sync_with_server_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_sync_with_server_type last_sync_with_server;
  using _download_available_type =
    bool;
  _download_available_type download_available;
  using _install_available_type =
    bool;
  _install_available_type install_available;
  using _reboot_required_type =
    bool;
  _reboot_required_type reboot_required;
  using _update_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _update_status_type update_status;

  // setters for named parameter idiom
  Type & set__ota_client_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ota_client_state = _arg;
    return *this;
  }
  Type & set__last_sync_with_server(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_sync_with_server = _arg;
    return *this;
  }
  Type & set__download_available(
    const bool & _arg)
  {
    this->download_available = _arg;
    return *this;
  }
  Type & set__install_available(
    const bool & _arg)
  {
    this->install_available = _arg;
    return *this;
  }
  Type & set__reboot_required(
    const bool & _arg)
  {
    this->reboot_required = _arg;
    return *this;
  }
  Type & set__update_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->update_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__MenderClientStatus
    std::shared_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__MenderClientStatus
    std::shared_ptr<iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MenderClientStatus_ & other) const
  {
    if (this->ota_client_state != other.ota_client_state) {
      return false;
    }
    if (this->last_sync_with_server != other.last_sync_with_server) {
      return false;
    }
    if (this->download_available != other.download_available) {
      return false;
    }
    if (this->install_available != other.install_available) {
      return false;
    }
    if (this->reboot_required != other.reboot_required) {
      return false;
    }
    if (this->update_status != other.update_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MenderClientStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MenderClientStatus_

// alias to use template instance with default allocator
using MenderClientStatus =
  iris_interfaces::msg::MenderClientStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__MENDER_CLIENT_STATUS__STRUCT_HPP_
