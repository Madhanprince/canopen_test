// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__LedControl __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__LedControl __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedControl_
{
  using Type = LedControl_<ContainerAllocator>;

  explicit LedControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_command = 0;
      this->left_indicator = 0;
      this->right_indicator = 0;
    }
  }

  explicit LedControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_command = 0;
      this->left_indicator = 0;
      this->right_indicator = 0;
    }
  }

  // field types and members
  using _led_command_type =
    uint8_t;
  _led_command_type led_command;
  using _left_indicator_type =
    uint8_t;
  _left_indicator_type left_indicator;
  using _right_indicator_type =
    uint8_t;
  _right_indicator_type right_indicator;

  // setters for named parameter idiom
  Type & set__led_command(
    const uint8_t & _arg)
  {
    this->led_command = _arg;
    return *this;
  }
  Type & set__left_indicator(
    const uint8_t & _arg)
  {
    this->left_indicator = _arg;
    return *this;
  }
  Type & set__right_indicator(
    const uint8_t & _arg)
  {
    this->right_indicator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t BOOTUP_WAIT =
    1u;
  static constexpr uint8_t STANDY =
    2u;
  static constexpr uint8_t RUNNING =
    3u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    4u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    iris_interfaces::msg::LedControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::LedControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::LedControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::LedControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__LedControl
    std::shared_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__LedControl
    std::shared_ptr<iris_interfaces::msg::LedControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedControl_ & other) const
  {
    if (this->led_command != other.led_command) {
      return false;
    }
    if (this->left_indicator != other.left_indicator) {
      return false;
    }
    if (this->right_indicator != other.right_indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedControl_

// alias to use template instance with default allocator
using LedControl =
  iris_interfaces::msg::LedControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::BOOTUP_WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::STANDY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_
