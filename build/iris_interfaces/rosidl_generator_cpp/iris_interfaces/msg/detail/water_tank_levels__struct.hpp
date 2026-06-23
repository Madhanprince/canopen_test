// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:msg/WaterTankLevels.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__STRUCT_HPP_
#define IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__msg__WaterTankLevels __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__msg__WaterTankLevels __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaterTankLevels_
{
  using Type = WaterTankLevels_<ContainerAllocator>;

  explicit WaterTankLevels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fresh_water_tank_level = 0;
      this->dirty_water_tank_level = 0;
    }
  }

  explicit WaterTankLevels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fresh_water_tank_level = 0;
      this->dirty_water_tank_level = 0;
    }
  }

  // field types and members
  using _fresh_water_tank_level_type =
    uint8_t;
  _fresh_water_tank_level_type fresh_water_tank_level;
  using _dirty_water_tank_level_type =
    uint8_t;
  _dirty_water_tank_level_type dirty_water_tank_level;

  // setters for named parameter idiom
  Type & set__fresh_water_tank_level(
    const uint8_t & _arg)
  {
    this->fresh_water_tank_level = _arg;
    return *this;
  }
  Type & set__dirty_water_tank_level(
    const uint8_t & _arg)
  {
    this->dirty_water_tank_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::msg::WaterTankLevels_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::msg::WaterTankLevels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::WaterTankLevels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::msg::WaterTankLevels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__msg__WaterTankLevels
    std::shared_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__msg__WaterTankLevels
    std::shared_ptr<iris_interfaces::msg::WaterTankLevels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaterTankLevels_ & other) const
  {
    if (this->fresh_water_tank_level != other.fresh_water_tank_level) {
      return false;
    }
    if (this->dirty_water_tank_level != other.dirty_water_tank_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaterTankLevels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaterTankLevels_

// alias to use template instance with default allocator
using WaterTankLevels =
  iris_interfaces::msg::WaterTankLevels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__STRUCT_HPP_
