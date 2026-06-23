// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__MotorStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_state = "";
      this->motor_voltage = 0.0f;
      this->motor_current = 0.0f;
      this->demand_rpm = 0.0f;
      this->actual_rpm = 0.0f;
      this->overload_percentage = 0;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : brake_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_state = "";
      this->motor_voltage = 0.0f;
      this->motor_current = 0.0f;
      this->demand_rpm = 0.0f;
      this->actual_rpm = 0.0f;
      this->overload_percentage = 0;
    }
  }

  // field types and members
  using _brake_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _brake_state_type brake_state;
  using _motor_voltage_type =
    float;
  _motor_voltage_type motor_voltage;
  using _motor_current_type =
    float;
  _motor_current_type motor_current;
  using _demand_rpm_type =
    float;
  _demand_rpm_type demand_rpm;
  using _actual_rpm_type =
    float;
  _actual_rpm_type actual_rpm;
  using _overload_percentage_type =
    uint8_t;
  _overload_percentage_type overload_percentage;

  // setters for named parameter idiom
  Type & set__brake_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->brake_state = _arg;
    return *this;
  }
  Type & set__motor_voltage(
    const float & _arg)
  {
    this->motor_voltage = _arg;
    return *this;
  }
  Type & set__motor_current(
    const float & _arg)
  {
    this->motor_current = _arg;
    return *this;
  }
  Type & set__demand_rpm(
    const float & _arg)
  {
    this->demand_rpm = _arg;
    return *this;
  }
  Type & set__actual_rpm(
    const float & _arg)
  {
    this->actual_rpm = _arg;
    return *this;
  }
  Type & set__overload_percentage(
    const uint8_t & _arg)
  {
    this->overload_percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__MotorStatus
    std::shared_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__MotorStatus
    std::shared_ptr<iris_interfaces::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->brake_state != other.brake_state) {
      return false;
    }
    if (this->motor_voltage != other.motor_voltage) {
      return false;
    }
    if (this->motor_current != other.motor_current) {
      return false;
    }
    if (this->demand_rpm != other.demand_rpm) {
      return false;
    }
    if (this->actual_rpm != other.actual_rpm) {
      return false;
    }
    if (this->overload_percentage != other.overload_percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  iris_interfaces::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
