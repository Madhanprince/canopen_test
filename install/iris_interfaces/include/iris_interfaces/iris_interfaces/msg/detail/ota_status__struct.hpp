// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/OTAStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'system_software_info'
#include "iris_interfaces/msg/detail/system_software_status__struct.hpp"
// Member 'mender_client_status'
#include "iris_interfaces/msg/detail/mender_client_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__OTAStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__OTAStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OTAStatus_
{
  using Type = OTAStatus_<ContainerAllocator>;

  explicit OTAStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_software_info(_init),
    mender_client_status(_init)
  {
    (void)_init;
  }

  explicit OTAStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_software_info(_alloc, _init),
    mender_client_status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _system_software_info_type =
    iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>;
  _system_software_info_type system_software_info;
  using _mender_client_status_type =
    iris_interfaces::msg::MenderClientStatus_<ContainerAllocator>;
  _mender_client_status_type mender_client_status;

  // setters for named parameter idiom
  Type & set__system_software_info(
    const iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> & _arg)
  {
    this->system_software_info = _arg;
    return *this;
  }
  Type & set__mender_client_status(
    const iris_interfaces::msg::MenderClientStatus_<ContainerAllocator> & _arg)
  {
    this->mender_client_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::OTAStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::OTAStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::OTAStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::OTAStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__OTAStatus
    std::shared_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__OTAStatus
    std::shared_ptr<iris_interfaces::msg::OTAStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OTAStatus_ & other) const
  {
    if (this->system_software_info != other.system_software_info) {
      return false;
    }
    if (this->mender_client_status != other.mender_client_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const OTAStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OTAStatus_

// alias to use template instance with default allocator
using OTAStatus =
  iris_interfaces::msg::OTAStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__OTA_STATUS__STRUCT_HPP_
