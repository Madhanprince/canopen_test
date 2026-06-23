// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/SystemSoftwareStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__SystemSoftwareStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__SystemSoftwareStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemSoftwareStatus_
{
  using Type = SystemSoftwareStatus_<ContainerAllocator>;

  explicit SystemSoftwareStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->current_software_name = "NA";
      this->current_boot_slot = "NA";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->current_software_name = "";
      this->current_boot_slot = "";
    }
  }

  explicit SystemSoftwareStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_software_name(_alloc),
    current_boot_slot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->current_software_name = "NA";
      this->current_boot_slot = "NA";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->current_software_name = "";
      this->current_boot_slot = "";
    }
  }

  // field types and members
  using _current_software_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_software_name_type current_software_name;
  using _current_boot_slot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_boot_slot_type current_boot_slot;

  // setters for named parameter idiom
  Type & set__current_software_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_software_name = _arg;
    return *this;
  }
  Type & set__current_boot_slot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_boot_slot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__SystemSoftwareStatus
    std::shared_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__SystemSoftwareStatus
    std::shared_ptr<iris_interfaces::msg::SystemSoftwareStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemSoftwareStatus_ & other) const
  {
    if (this->current_software_name != other.current_software_name) {
      return false;
    }
    if (this->current_boot_slot != other.current_boot_slot) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemSoftwareStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemSoftwareStatus_

// alias to use template instance with default allocator
using SystemSoftwareStatus =
  iris_interfaces::msg::SystemSoftwareStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__SYSTEM_SOFTWARE_STATUS__STRUCT_HPP_
