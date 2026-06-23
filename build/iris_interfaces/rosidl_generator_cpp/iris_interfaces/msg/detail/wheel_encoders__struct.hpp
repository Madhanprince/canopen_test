// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__WheelEncoders __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__WheelEncoders __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelEncoders_
{
  using Type = WheelEncoders_<ContainerAllocator>;

  explicit WheelEncoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_wheel_ticks = 0l;
      this->right_wheel_ticks = 0l;
    }
  }

  explicit WheelEncoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_wheel_ticks = 0l;
      this->right_wheel_ticks = 0l;
    }
  }

  // field types and members
  using _left_wheel_ticks_type =
    int32_t;
  _left_wheel_ticks_type left_wheel_ticks;
  using _right_wheel_ticks_type =
    int32_t;
  _right_wheel_ticks_type right_wheel_ticks;

  // setters for named parameter idiom
  Type & set__left_wheel_ticks(
    const int32_t & _arg)
  {
    this->left_wheel_ticks = _arg;
    return *this;
  }
  Type & set__right_wheel_ticks(
    const int32_t & _arg)
  {
    this->right_wheel_ticks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::WheelEncoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::WheelEncoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::WheelEncoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::WheelEncoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__WheelEncoders
    std::shared_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__WheelEncoders
    std::shared_ptr<iris_interfaces::msg::WheelEncoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelEncoders_ & other) const
  {
    if (this->left_wheel_ticks != other.left_wheel_ticks) {
      return false;
    }
    if (this->right_wheel_ticks != other.right_wheel_ticks) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelEncoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelEncoders_

// alias to use template instance with default allocator
using WheelEncoders =
  iris_interfaces::msg::WheelEncoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_
