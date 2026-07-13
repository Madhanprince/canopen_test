// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/AlarmReset.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__AlarmReset_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__AlarmReset_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AlarmReset_Request_
{
  using Type = AlarmReset_Request_<ContainerAllocator>;

  explicit AlarmReset_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_alarm = 0;
    }
  }

  explicit AlarmReset_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_alarm = 0;
    }
  }

  // field types and members
  using _reset_alarm_type =
    uint8_t;
  _reset_alarm_type reset_alarm;

  // setters for named parameter idiom
  Type & set__reset_alarm(
    const uint8_t & _arg)
  {
    this->reset_alarm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__AlarmReset_Request
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__AlarmReset_Request
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlarmReset_Request_ & other) const
  {
    if (this->reset_alarm != other.reset_alarm) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlarmReset_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlarmReset_Request_

// alias to use template instance with default allocator
using AlarmReset_Request =
  iris_interfaces::srv::AlarmReset_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__AlarmReset_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__AlarmReset_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AlarmReset_Response_
{
  using Type = AlarmReset_Response_<ContainerAllocator>;

  explicit AlarmReset_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respones = "";
    }
  }

  explicit AlarmReset_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : respones(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->respones = "";
    }
  }

  // field types and members
  using _respones_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _respones_type respones;

  // setters for named parameter idiom
  Type & set__respones(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->respones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__AlarmReset_Response
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__AlarmReset_Response
    std::shared_ptr<iris_interfaces::srv::AlarmReset_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlarmReset_Response_ & other) const
  {
    if (this->respones != other.respones) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlarmReset_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlarmReset_Response_

// alias to use template instance with default allocator
using AlarmReset_Response =
  iris_interfaces::srv::AlarmReset_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct AlarmReset
{
  using Request = iris_interfaces::srv::AlarmReset_Request;
  using Response = iris_interfaces::srv::AlarmReset_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__ALARM_RESET__STRUCT_HPP_
