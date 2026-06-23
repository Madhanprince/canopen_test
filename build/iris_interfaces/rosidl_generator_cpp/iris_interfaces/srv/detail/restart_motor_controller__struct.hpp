// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/RestartMotorController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__RestartMotorController_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__RestartMotorController_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RestartMotorController_Request_
{
  using Type = RestartMotorController_Request_<ContainerAllocator>;

  explicit RestartMotorController_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restart_reason = "";
    }
  }

  explicit RestartMotorController_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : restart_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restart_reason = "";
    }
  }

  // field types and members
  using _restart_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _restart_reason_type restart_reason;

  // setters for named parameter idiom
  Type & set__restart_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->restart_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__RestartMotorController_Request
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__RestartMotorController_Request
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestartMotorController_Request_ & other) const
  {
    if (this->restart_reason != other.restart_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestartMotorController_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestartMotorController_Request_

// alias to use template instance with default allocator
using RestartMotorController_Request =
  iris_interfaces::srv::RestartMotorController_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__RestartMotorController_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__RestartMotorController_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RestartMotorController_Response_
{
  using Type = RestartMotorController_Response_<ContainerAllocator>;

  explicit RestartMotorController_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit RestartMotorController_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__RestartMotorController_Response
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__RestartMotorController_Response
    std::shared_ptr<iris_interfaces::srv::RestartMotorController_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestartMotorController_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestartMotorController_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestartMotorController_Response_

// alias to use template instance with default allocator
using RestartMotorController_Response =
  iris_interfaces::srv::RestartMotorController_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct RestartMotorController
{
  using Request = iris_interfaces::srv::RestartMotorController_Request;
  using Response = iris_interfaces::srv::RestartMotorController_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__RESTART_MOTOR_CONTROLLER__STRUCT_HPP_
