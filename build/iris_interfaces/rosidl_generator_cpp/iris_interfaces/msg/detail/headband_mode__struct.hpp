// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/HeadbandMode.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__HeadbandMode __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__HeadbandMode __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadbandMode_
{
  using Type = HeadbandMode_<ContainerAllocator>;

  explicit HeadbandMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
    }
  }

  explicit HeadbandMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    float;
  _width_type width;

  // setters for named parameter idiom
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::HeadbandMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::HeadbandMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::HeadbandMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::HeadbandMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__HeadbandMode
    std::shared_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__HeadbandMode
    std::shared_ptr<iris_interfaces::msg::HeadbandMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadbandMode_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadbandMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadbandMode_

// alias to use template instance with default allocator
using HeadbandMode =
  iris_interfaces::msg::HeadbandMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__STRUCT_HPP_
