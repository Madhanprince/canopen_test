// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/A2Command.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__A2Command_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__A2Command_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct A2Command_Request_
{
  using Type = A2Command_Request_<ContainerAllocator>;

  explicit A2Command_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brush_command = 0;
      this->vacuum_command = 0;
    }
  }

  explicit A2Command_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brush_command = 0;
      this->vacuum_command = 0;
    }
  }

  // field types and members
  using _brush_command_type =
    uint8_t;
  _brush_command_type brush_command;
  using _vacuum_command_type =
    uint8_t;
  _vacuum_command_type vacuum_command;

  // setters for named parameter idiom
  Type & set__brush_command(
    const uint8_t & _arg)
  {
    this->brush_command = _arg;
    return *this;
  }
  Type & set__vacuum_command(
    const uint8_t & _arg)
  {
    this->vacuum_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::A2Command_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::A2Command_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::A2Command_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::A2Command_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__A2Command_Request
    std::shared_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__A2Command_Request
    std::shared_ptr<iris_interfaces::srv::A2Command_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const A2Command_Request_ & other) const
  {
    if (this->brush_command != other.brush_command) {
      return false;
    }
    if (this->vacuum_command != other.vacuum_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const A2Command_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct A2Command_Request_

// alias to use template instance with default allocator
using A2Command_Request =
  iris_interfaces::srv::A2Command_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__A2Command_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__A2Command_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct A2Command_Response_
{
  using Type = A2Command_Response_<ContainerAllocator>;

  explicit A2Command_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brush_status = 0;
      this->vacuum_status = 0;
    }
  }

  explicit A2Command_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brush_status = 0;
      this->vacuum_status = 0;
    }
  }

  // field types and members
  using _brush_status_type =
    uint8_t;
  _brush_status_type brush_status;
  using _vacuum_status_type =
    uint8_t;
  _vacuum_status_type vacuum_status;

  // setters for named parameter idiom
  Type & set__brush_status(
    const uint8_t & _arg)
  {
    this->brush_status = _arg;
    return *this;
  }
  Type & set__vacuum_status(
    const uint8_t & _arg)
  {
    this->vacuum_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::A2Command_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::A2Command_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::A2Command_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::A2Command_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__A2Command_Response
    std::shared_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__A2Command_Response
    std::shared_ptr<iris_interfaces::srv::A2Command_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const A2Command_Response_ & other) const
  {
    if (this->brush_status != other.brush_status) {
      return false;
    }
    if (this->vacuum_status != other.vacuum_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const A2Command_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct A2Command_Response_

// alias to use template instance with default allocator
using A2Command_Response =
  iris_interfaces::srv::A2Command_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct A2Command
{
  using Request = iris_interfaces::srv::A2Command_Request;
  using Response = iris_interfaces::srv::A2Command_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__A2_COMMAND__STRUCT_HPP_
