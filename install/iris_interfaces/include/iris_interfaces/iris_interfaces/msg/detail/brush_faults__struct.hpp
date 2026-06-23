// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/BrushFaults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__BRUSH_FAULTS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__BRUSH_FAULTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__BrushFaults __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__BrushFaults __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrushFaults_
{
  using Type = BrushFaults_<ContainerAllocator>;

  explicit BrushFaults_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_digital_fault = 0;
      this->drive_brush_current_digital_fault = 0;
      this->overcurrent_analog_fault = 0;
      this->temperature_fault = 0;
      this->undercurrent_analog_fault = 0;
    }
  }

  explicit BrushFaults_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_digital_fault = 0;
      this->drive_brush_current_digital_fault = 0;
      this->overcurrent_analog_fault = 0;
      this->temperature_fault = 0;
      this->undercurrent_analog_fault = 0;
    }
  }

  // field types and members
  using _actuator_digital_fault_type =
    uint8_t;
  _actuator_digital_fault_type actuator_digital_fault;
  using _drive_brush_current_digital_fault_type =
    uint8_t;
  _drive_brush_current_digital_fault_type drive_brush_current_digital_fault;
  using _overcurrent_analog_fault_type =
    uint8_t;
  _overcurrent_analog_fault_type overcurrent_analog_fault;
  using _temperature_fault_type =
    uint8_t;
  _temperature_fault_type temperature_fault;
  using _undercurrent_analog_fault_type =
    uint8_t;
  _undercurrent_analog_fault_type undercurrent_analog_fault;

  // setters for named parameter idiom
  Type & set__actuator_digital_fault(
    const uint8_t & _arg)
  {
    this->actuator_digital_fault = _arg;
    return *this;
  }
  Type & set__drive_brush_current_digital_fault(
    const uint8_t & _arg)
  {
    this->drive_brush_current_digital_fault = _arg;
    return *this;
  }
  Type & set__overcurrent_analog_fault(
    const uint8_t & _arg)
  {
    this->overcurrent_analog_fault = _arg;
    return *this;
  }
  Type & set__temperature_fault(
    const uint8_t & _arg)
  {
    this->temperature_fault = _arg;
    return *this;
  }
  Type & set__undercurrent_analog_fault(
    const uint8_t & _arg)
  {
    this->undercurrent_analog_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::BrushFaults_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::BrushFaults_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::BrushFaults_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::BrushFaults_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__BrushFaults
    std::shared_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__BrushFaults
    std::shared_ptr<iris_interfaces::msg::BrushFaults_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrushFaults_ & other) const
  {
    if (this->actuator_digital_fault != other.actuator_digital_fault) {
      return false;
    }
    if (this->drive_brush_current_digital_fault != other.drive_brush_current_digital_fault) {
      return false;
    }
    if (this->overcurrent_analog_fault != other.overcurrent_analog_fault) {
      return false;
    }
    if (this->temperature_fault != other.temperature_fault) {
      return false;
    }
    if (this->undercurrent_analog_fault != other.undercurrent_analog_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrushFaults_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrushFaults_

// alias to use template instance with default allocator
using BrushFaults =
  iris_interfaces::msg::BrushFaults_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__BRUSH_FAULTS__STRUCT_HPP_
