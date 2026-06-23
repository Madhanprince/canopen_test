// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/ProcessManager.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__ProcessManager_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__ProcessManager_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProcessManager_Request_
{
  using Type = ProcessManager_Request_<ContainerAllocator>;

  explicit ProcessManager_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->package = "";
      this->executable = "";
      this->name_space = "";
      this->node_name = "";
      this->container_name = "";
      this->label = "";
    }
  }

  explicit ProcessManager_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : package(_alloc),
    executable(_alloc),
    name_space(_alloc),
    node_name(_alloc),
    container_name(_alloc),
    label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->package = "";
      this->executable = "";
      this->name_space = "";
      this->node_name = "";
      this->container_name = "";
      this->label = "";
    }
  }

  // field types and members
  using _package_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _package_type package;
  using _executable_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _executable_type executable;
  using _name_space_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_space_type name_space;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _container_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _container_name_type container_name;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;

  // setters for named parameter idiom
  Type & set__package(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->package = _arg;
    return *this;
  }
  Type & set__executable(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->executable = _arg;
    return *this;
  }
  Type & set__name_space(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name_space = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__container_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->container_name = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> START;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STOP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESTART;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> IS_ALIVE;

  // pointer types
  using RawPtr =
    iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__ProcessManager_Request
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__ProcessManager_Request
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessManager_Request_ & other) const
  {
    if (this->package != other.package) {
      return false;
    }
    if (this->executable != other.executable) {
      return false;
    }
    if (this->name_space != other.name_space) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->container_name != other.container_name) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessManager_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessManager_Request_

// alias to use template instance with default allocator
using ProcessManager_Request =
  iris_interfaces::srv::ProcessManager_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Request_<ContainerAllocator>::START = "START";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Request_<ContainerAllocator>::STOP = "STOP";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Request_<ContainerAllocator>::RESTART = "RESTART";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Request_<ContainerAllocator>::IS_ALIVE = "IS_ALIVE";

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__ProcessManager_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__ProcessManager_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProcessManager_Response_
{
  using Type = ProcessManager_Response_<ContainerAllocator>;

  explicit ProcessManager_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit ProcessManager_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SUCCESS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FAILED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EXISTS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DOESNT_EXIST;

  // pointer types
  using RawPtr =
    iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__ProcessManager_Response
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__ProcessManager_Response
    std::shared_ptr<iris_interfaces::srv::ProcessManager_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessManager_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessManager_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessManager_Response_

// alias to use template instance with default allocator
using ProcessManager_Response =
  iris_interfaces::srv::ProcessManager_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Response_<ContainerAllocator>::SUCCESS = "SUCCESS";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Response_<ContainerAllocator>::FAILED = "FAILED";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Response_<ContainerAllocator>::EXISTS = "EXISTS";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ProcessManager_Response_<ContainerAllocator>::DOESNT_EXIST = "DOESNT_EXIST";

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct ProcessManager
{
  using Request = iris_interfaces::srv::ProcessManager_Request;
  using Response = iris_interfaces::srv::ProcessManager_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__PROCESS_MANAGER__STRUCT_HPP_
