// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:srv/UpdateMotorControllerParameters.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_PARAMETERS__STRUCT_HPP_
#define IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateMotorControllerParameters_Request_
{
  using Type = UpdateMotorControllerParameters_Request_<ContainerAllocator>;

  explicit UpdateMotorControllerParameters_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save_existing_params = 0;
    }
  }

  explicit UpdateMotorControllerParameters_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save_existing_params = 0;
    }
  }

  // field types and members
  using _save_existing_params_type =
    uint8_t;
  _save_existing_params_type save_existing_params;

  // setters for named parameter idiom
  Type & set__save_existing_params(
    const uint8_t & _arg)
  {
    this->save_existing_params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Request
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Request
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateMotorControllerParameters_Request_ & other) const
  {
    if (this->save_existing_params != other.save_existing_params) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateMotorControllerParameters_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateMotorControllerParameters_Request_

// alias to use template instance with default allocator
using UpdateMotorControllerParameters_Request =
  iris_interfaces::srv::UpdateMotorControllerParameters_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateMotorControllerParameters_Response_
{
  using Type = UpdateMotorControllerParameters_Response_<ContainerAllocator>;

  explicit UpdateMotorControllerParameters_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit UpdateMotorControllerParameters_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Response
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__srv__UpdateMotorControllerParameters_Response
    std::shared_ptr<iris_interfaces::srv::UpdateMotorControllerParameters_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateMotorControllerParameters_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateMotorControllerParameters_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateMotorControllerParameters_Response_

// alias to use template instance with default allocator
using UpdateMotorControllerParameters_Response =
  iris_interfaces::srv::UpdateMotorControllerParameters_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace srv
{

struct UpdateMotorControllerParameters
{
  using Request = iris_interfaces::srv::UpdateMotorControllerParameters_Request;
  using Response = iris_interfaces::srv::UpdateMotorControllerParameters_Response;
};

}  // namespace srv

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__SRV__DETAIL__UPDATE_MOTOR_CONTROLLER_PARAMETERS__STRUCT_HPP_
