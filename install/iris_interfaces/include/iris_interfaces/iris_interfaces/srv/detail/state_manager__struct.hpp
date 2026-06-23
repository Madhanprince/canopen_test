// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/StateManager.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__STATE_MANAGER__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__STATE_MANAGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__StateManager_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__StateManager_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StateManager_Request_
{
  using Type = StateManager_Request_<ContainerAllocator>;

  explicit StateManager_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->component_name = "";
      this->state = "";
    }
  }

  explicit StateManager_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : component_name(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->component_name = "";
      this->state = "";
    }
  }

  // field types and members
  using _component_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _component_name_type component_name;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__component_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->component_name = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CREATE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ACTIVATE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DEACTIVATE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CLEANUP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DESTROY;

  // pointer types
  using RawPtr =
    iris_interfaces::srv::StateManager_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::StateManager_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::StateManager_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::StateManager_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__StateManager_Request
    std::shared_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__StateManager_Request
    std::shared_ptr<iris_interfaces::srv::StateManager_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateManager_Request_ & other) const
  {
    if (this->component_name != other.component_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateManager_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateManager_Request_

// alias to use template instance with default allocator
using StateManager_Request =
  iris_interfaces::srv::StateManager_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Request_<ContainerAllocator>::CREATE = "create";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Request_<ContainerAllocator>::ACTIVATE = "activate";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Request_<ContainerAllocator>::DEACTIVATE = "deactivate";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Request_<ContainerAllocator>::CLEANUP = "cleanup";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Request_<ContainerAllocator>::DESTROY = "destroy";

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__StateManager_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__StateManager_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StateManager_Response_
{
  using Type = StateManager_Response_<ContainerAllocator>;

  explicit StateManager_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->result_description = "";
    }
  }

  explicit StateManager_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc),
    result_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->result_description = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;
  using _result_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_description_type result_description;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__result_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_description = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SUCCESS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FAILED;

  // pointer types
  using RawPtr =
    iris_interfaces::srv::StateManager_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::StateManager_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::StateManager_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::StateManager_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__StateManager_Response
    std::shared_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__StateManager_Response
    std::shared_ptr<iris_interfaces::srv::StateManager_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateManager_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->result_description != other.result_description) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateManager_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateManager_Response_

// alias to use template instance with default allocator
using StateManager_Response =
  iris_interfaces::srv::StateManager_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Response_<ContainerAllocator>::SUCCESS = "success";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateManager_Response_<ContainerAllocator>::FAILED = "failed";

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct StateManager
{
  using Request = iris_interfaces::srv::StateManager_Request;
  using Response = iris_interfaces::srv::StateManager_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__STATE_MANAGER__STRUCT_HPP_
