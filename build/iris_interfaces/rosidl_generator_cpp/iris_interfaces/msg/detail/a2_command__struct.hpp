// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__A2Command __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__A2Command __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct A2Command_
{
  using Type = A2Command_<ContainerAllocator>;

  explicit A2Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_flow_rate = 0;
    }
  }

  explicit A2Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_flow_rate = 0;
    }
  }

  // field types and members
  using _pump_flow_rate_type =
    uint8_t;
  _pump_flow_rate_type pump_flow_rate;

  // setters for named parameter idiom
  Type & set__pump_flow_rate(
    const uint8_t & _arg)
  {
    this->pump_flow_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::A2Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::A2Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::A2Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::A2Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__A2Command
    std::shared_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__A2Command
    std::shared_ptr<iris_interfaces::msg::A2Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const A2Command_ & other) const
  {
    if (this->pump_flow_rate != other.pump_flow_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const A2Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct A2Command_

// alias to use template instance with default allocator
using A2Command =
  iris_interfaces::msg::A2Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__A2_COMMAND__STRUCT_HPP_
