// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'left_motor'
// Member 'right_motor'
#include "iris_interfaces/msg/detail/motor_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__MotorControllerStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__MotorControllerStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorControllerStatus_
{
  using Type = MotorControllerStatus_<ContainerAllocator>;

  explicit MotorControllerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_motor(_init),
    right_motor(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->software_version = "";
      this->input_voltage = 0.0f;
      this->board_temperature = 0;
      this->sto_status = "";
      this->controller_alarm = "";
      this->controller_nmt_state = "";
    }
  }

  explicit MotorControllerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : software_version(_alloc),
    sto_status(_alloc),
    controller_alarm(_alloc),
    controller_nmt_state(_alloc),
    left_motor(_alloc, _init),
    right_motor(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->software_version = "";
      this->input_voltage = 0.0f;
      this->board_temperature = 0;
      this->sto_status = "";
      this->controller_alarm = "";
      this->controller_nmt_state = "";
    }
  }

  // field types and members
  using _software_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_version_type software_version;
  using _input_voltage_type =
    float;
  _input_voltage_type input_voltage;
  using _board_temperature_type =
    uint8_t;
  _board_temperature_type board_temperature;
  using _sto_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sto_status_type sto_status;
  using _controller_alarm_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controller_alarm_type controller_alarm;
  using _controller_nmt_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controller_nmt_state_type controller_nmt_state;
  using _left_motor_type =
    iris_interfaces::msg::MotorStatus_<ContainerAllocator>;
  _left_motor_type left_motor;
  using _right_motor_type =
    iris_interfaces::msg::MotorStatus_<ContainerAllocator>;
  _right_motor_type right_motor;

  // setters for named parameter idiom
  Type & set__software_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->software_version = _arg;
    return *this;
  }
  Type & set__input_voltage(
    const float & _arg)
  {
    this->input_voltage = _arg;
    return *this;
  }
  Type & set__board_temperature(
    const uint8_t & _arg)
  {
    this->board_temperature = _arg;
    return *this;
  }
  Type & set__sto_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sto_status = _arg;
    return *this;
  }
  Type & set__controller_alarm(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controller_alarm = _arg;
    return *this;
  }
  Type & set__controller_nmt_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controller_nmt_state = _arg;
    return *this;
  }
  Type & set__left_motor(
    const iris_interfaces::msg::MotorStatus_<ContainerAllocator> & _arg)
  {
    this->left_motor = _arg;
    return *this;
  }
  Type & set__right_motor(
    const iris_interfaces::msg::MotorStatus_<ContainerAllocator> & _arg)
  {
    this->right_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__MotorControllerStatus
    std::shared_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__MotorControllerStatus
    std::shared_ptr<iris_interfaces::msg::MotorControllerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorControllerStatus_ & other) const
  {
    if (this->software_version != other.software_version) {
      return false;
    }
    if (this->input_voltage != other.input_voltage) {
      return false;
    }
    if (this->board_temperature != other.board_temperature) {
      return false;
    }
    if (this->sto_status != other.sto_status) {
      return false;
    }
    if (this->controller_alarm != other.controller_alarm) {
      return false;
    }
    if (this->controller_nmt_state != other.controller_nmt_state) {
      return false;
    }
    if (this->left_motor != other.left_motor) {
      return false;
    }
    if (this->right_motor != other.right_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorControllerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorControllerStatus_

// alias to use template instance with default allocator
using MotorControllerStatus =
  iris_interfaces::msg::MotorControllerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__MOTOR_CONTROLLER_STATUS__STRUCT_HPP_
