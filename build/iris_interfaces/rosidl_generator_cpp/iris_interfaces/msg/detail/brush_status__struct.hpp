// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/BrushStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'brush_actuator'
#include "iris_interfaces/msg/detail/actuator_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__BrushStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__BrushStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrushStatus_
{
  using Type = BrushStatus_<ContainerAllocator>;

  explicit BrushStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brush_actuator(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brush_motor_command = 0;
      this->brush_motor_status = 0;
    }
  }

  explicit BrushStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brush_actuator(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brush_motor_command = 0;
      this->brush_motor_status = 0;
    }
  }

  // field types and members
  using _brush_motor_command_type =
    uint8_t;
  _brush_motor_command_type brush_motor_command;
  using _brush_motor_status_type =
    uint8_t;
  _brush_motor_status_type brush_motor_status;
  using _brush_actuator_type =
    iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>;
  _brush_actuator_type brush_actuator;

  // setters for named parameter idiom
  Type & set__brush_motor_command(
    const uint8_t & _arg)
  {
    this->brush_motor_command = _arg;
    return *this;
  }
  Type & set__brush_motor_status(
    const uint8_t & _arg)
  {
    this->brush_motor_status = _arg;
    return *this;
  }
  Type & set__brush_actuator(
    const iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> & _arg)
  {
    this->brush_actuator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::BrushStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::BrushStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::BrushStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::BrushStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__BrushStatus
    std::shared_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__BrushStatus
    std::shared_ptr<iris_interfaces::msg::BrushStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrushStatus_ & other) const
  {
    if (this->brush_motor_command != other.brush_motor_command) {
      return false;
    }
    if (this->brush_motor_status != other.brush_motor_status) {
      return false;
    }
    if (this->brush_actuator != other.brush_actuator) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrushStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrushStatus_

// alias to use template instance with default allocator
using BrushStatus =
  iris_interfaces::msg::BrushStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__BRUSH_STATUS__STRUCT_HPP_
