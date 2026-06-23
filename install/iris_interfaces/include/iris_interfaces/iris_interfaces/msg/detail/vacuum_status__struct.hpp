// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/VacuumStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'squeeze_actuator'
#include "iris_interfaces/msg/detail/actuator_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__VacuumStatus __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__VacuumStatus __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VacuumStatus_
{
  using Type = VacuumStatus_<ContainerAllocator>;

  explicit VacuumStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : squeeze_actuator(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vacuum_motor_command = 0;
      this->vacuum_motor_status = 0;
    }
  }

  explicit VacuumStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : squeeze_actuator(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vacuum_motor_command = 0;
      this->vacuum_motor_status = 0;
    }
  }

  // field types and members
  using _vacuum_motor_command_type =
    uint8_t;
  _vacuum_motor_command_type vacuum_motor_command;
  using _vacuum_motor_status_type =
    uint8_t;
  _vacuum_motor_status_type vacuum_motor_status;
  using _squeeze_actuator_type =
    iris_interfaces::msg::ActuatorStatus_<ContainerAllocator>;
  _squeeze_actuator_type squeeze_actuator;

  // setters for named parameter idiom
  Type & set__vacuum_motor_command(
    const uint8_t & _arg)
  {
    this->vacuum_motor_command = _arg;
    return *this;
  }
  Type & set__vacuum_motor_status(
    const uint8_t & _arg)
  {
    this->vacuum_motor_status = _arg;
    return *this;
  }
  Type & set__squeeze_actuator(
    const iris_interfaces::msg::ActuatorStatus_<ContainerAllocator> & _arg)
  {
    this->squeeze_actuator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::VacuumStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::VacuumStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::VacuumStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::VacuumStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__VacuumStatus
    std::shared_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__VacuumStatus
    std::shared_ptr<iris_interfaces::msg::VacuumStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VacuumStatus_ & other) const
  {
    if (this->vacuum_motor_command != other.vacuum_motor_command) {
      return false;
    }
    if (this->vacuum_motor_status != other.vacuum_motor_status) {
      return false;
    }
    if (this->squeeze_actuator != other.squeeze_actuator) {
      return false;
    }
    return true;
  }
  bool operator!=(const VacuumStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VacuumStatus_

// alias to use template instance with default allocator
using VacuumStatus =
  iris_interfaces::msg::VacuumStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__STRUCT_HPP_
