// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__ActuatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__ActuatorStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorStatus_
{
  using Type = ActuatorStatus_<ContainerAllocator>;

  explicit ActuatorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_down = 0;
      this->hold_down = 0;
      this->moving_up = 0;
      this->hold_up = 0;
    }
  }

  explicit ActuatorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_down = 0;
      this->hold_down = 0;
      this->moving_up = 0;
      this->hold_up = 0;
    }
  }

  // field types and members
  using _moving_down_type =
    uint8_t;
  _moving_down_type moving_down;
  using _hold_down_type =
    uint8_t;
  _hold_down_type hold_down;
  using _moving_up_type =
    uint8_t;
  _moving_up_type moving_up;
  using _hold_up_type =
    uint8_t;
  _hold_up_type hold_up;

  // setters for named parameter idiom
  Type & set__moving_down(
    const uint8_t & _arg)
  {
    this->moving_down = _arg;
    return *this;
  }
  Type & set__hold_down(
    const uint8_t & _arg)
  {
    this->hold_down = _arg;
    return *this;
  }
  Type & set__moving_up(
    const uint8_t & _arg)
  {
    this->moving_up = _arg;
    return *this;
  }
  Type & set__hold_up(
    const uint8_t & _arg)
  {
    this->hold_up = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__ActuatorStatus
    std::shared_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__ActuatorStatus
    std::shared_ptr<iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorStatus_ & other) const
  {
    if (this->moving_down != other.moving_down) {
      return false;
    }
    if (this->hold_down != other.hold_down) {
      return false;
    }
    if (this->moving_up != other.moving_up) {
      return false;
    }
    if (this->hold_up != other.hold_up) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorStatus_

// alias to use template instance with default allocator
using ActuatorStatus =
  iris_interfaces::msg::ActuatorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__STRUCT_HPP_
