// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/WifiDiscovery.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__WifiDiscovery_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__WifiDiscovery_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiDiscovery_Request_
{
  using Type = WifiDiscovery_Request_<ContainerAllocator>;

  explicit WifiDiscovery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wifidiscovery = "";
    }
  }

  explicit WifiDiscovery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wifidiscovery(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wifidiscovery = "";
    }
  }

  // field types and members
  using _wifidiscovery_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wifidiscovery_type wifidiscovery;

  // setters for named parameter idiom
  Type & set__wifidiscovery(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wifidiscovery = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__WifiDiscovery_Request
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__WifiDiscovery_Request
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiDiscovery_Request_ & other) const
  {
    if (this->wifidiscovery != other.wifidiscovery) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiDiscovery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiDiscovery_Request_

// alias to use template instance with default allocator
using WifiDiscovery_Request =
  iris_interfaces::srv::WifiDiscovery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__WifiDiscovery_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__WifiDiscovery_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiDiscovery_Response_
{
  using Type = WifiDiscovery_Response_<ContainerAllocator>;

  explicit WifiDiscovery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0l;
      this->discoverystatus = "";
    }
  }

  explicit WifiDiscovery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : discoverystatus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0l;
      this->discoverystatus = "";
    }
  }

  // field types and members
  using _timestamp_type =
    int32_t;
  _timestamp_type timestamp;
  using _discoverystatus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _discoverystatus_type discoverystatus;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__discoverystatus(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->discoverystatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__WifiDiscovery_Response
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__WifiDiscovery_Response
    std::shared_ptr<iris_interfaces::srv::WifiDiscovery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiDiscovery_Response_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->discoverystatus != other.discoverystatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiDiscovery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiDiscovery_Response_

// alias to use template instance with default allocator
using WifiDiscovery_Response =
  iris_interfaces::srv::WifiDiscovery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct WifiDiscovery
{
  using Request = iris_interfaces::srv::WifiDiscovery_Request;
  using Response = iris_interfaces::srv::WifiDiscovery_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__WIFI_DISCOVERY__STRUCT_HPP_
