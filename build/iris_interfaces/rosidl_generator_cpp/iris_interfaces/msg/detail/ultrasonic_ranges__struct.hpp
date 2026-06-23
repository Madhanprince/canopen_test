// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ultrasonic_1'
// Member 'ultrasonic_2'
// Member 'ultrasonic_3'
// Member 'ultrasonic_4'
#include "sensor_msgs/msg/detail/range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__UltrasonicRanges __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__UltrasonicRanges __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UltrasonicRanges_
{
  using Type = UltrasonicRanges_<ContainerAllocator>;

  explicit UltrasonicRanges_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ultrasonic_1(_init),
    ultrasonic_2(_init),
    ultrasonic_3(_init),
    ultrasonic_4(_init)
  {
    (void)_init;
  }

  explicit UltrasonicRanges_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ultrasonic_1(_alloc, _init),
    ultrasonic_2(_alloc, _init),
    ultrasonic_3(_alloc, _init),
    ultrasonic_4(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _ultrasonic_1_type =
    sensor_msgs::msg::Range_<ContainerAllocator>;
  _ultrasonic_1_type ultrasonic_1;
  using _ultrasonic_2_type =
    sensor_msgs::msg::Range_<ContainerAllocator>;
  _ultrasonic_2_type ultrasonic_2;
  using _ultrasonic_3_type =
    sensor_msgs::msg::Range_<ContainerAllocator>;
  _ultrasonic_3_type ultrasonic_3;
  using _ultrasonic_4_type =
    sensor_msgs::msg::Range_<ContainerAllocator>;
  _ultrasonic_4_type ultrasonic_4;

  // setters for named parameter idiom
  Type & set__ultrasonic_1(
    const sensor_msgs::msg::Range_<ContainerAllocator> & _arg)
  {
    this->ultrasonic_1 = _arg;
    return *this;
  }
  Type & set__ultrasonic_2(
    const sensor_msgs::msg::Range_<ContainerAllocator> & _arg)
  {
    this->ultrasonic_2 = _arg;
    return *this;
  }
  Type & set__ultrasonic_3(
    const sensor_msgs::msg::Range_<ContainerAllocator> & _arg)
  {
    this->ultrasonic_3 = _arg;
    return *this;
  }
  Type & set__ultrasonic_4(
    const sensor_msgs::msg::Range_<ContainerAllocator> & _arg)
  {
    this->ultrasonic_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__UltrasonicRanges
    std::shared_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__UltrasonicRanges
    std::shared_ptr<iris_interfaces::msg::UltrasonicRanges_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UltrasonicRanges_ & other) const
  {
    if (this->ultrasonic_1 != other.ultrasonic_1) {
      return false;
    }
    if (this->ultrasonic_2 != other.ultrasonic_2) {
      return false;
    }
    if (this->ultrasonic_3 != other.ultrasonic_3) {
      return false;
    }
    if (this->ultrasonic_4 != other.ultrasonic_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const UltrasonicRanges_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UltrasonicRanges_

// alias to use template instance with default allocator
using UltrasonicRanges =
  iris_interfaces::msg::UltrasonicRanges_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__ULTRASONIC_RANGES__STRUCT_HPP_
