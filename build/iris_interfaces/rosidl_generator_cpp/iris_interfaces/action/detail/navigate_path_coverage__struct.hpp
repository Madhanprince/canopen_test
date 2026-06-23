// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:action/NavigatePathCoverage.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__NAVIGATE_PATH_COVERAGE__STRUCT_HPP_
#define IRIS_INTERFACES__ACTION__DETAIL__NAVIGATE_PATH_COVERAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'mode'
#include "iris_interfaces/msg/detail/navigation_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Goal __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Goal __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_Goal_
{
  using Type = NavigatePathCoverage_Goal_<ContainerAllocator>;

  explicit NavigatePathCoverage_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_init),
    goal_pose(_init),
    mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->polygon_frame_id = "";
      this->behavior_tree = "";
    }
  }

  explicit NavigatePathCoverage_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon_frame_id(_alloc),
    polygon(_alloc, _init),
    goal_pose(_alloc, _init),
    behavior_tree(_alloc),
    mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->polygon_frame_id = "";
      this->behavior_tree = "";
    }
  }

  // field types and members
  using _polygon_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _polygon_frame_id_type polygon_frame_id;
  using _polygon_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _polygon_type polygon;
  using _goal_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_pose_type goal_pose;
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_tree_type behavior_tree;
  using _mode_type =
    iris_interfaces::msg::NavigationMode_<ContainerAllocator>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__polygon_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->polygon_frame_id = _arg;
    return *this;
  }
  Type & set__polygon(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->polygon = _arg;
    return *this;
  }
  Type & set__goal_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal_pose = _arg;
    return *this;
  }
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }
  Type & set__mode(
    const iris_interfaces::msg::NavigationMode_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Goal
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Goal
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_Goal_ & other) const
  {
    if (this->polygon_frame_id != other.polygon_frame_id) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_Goal_

// alias to use template instance with default allocator
using NavigatePathCoverage_Goal =
  iris_interfaces::action::NavigatePathCoverage_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Result __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Result __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_Result_
{
  using Type = NavigatePathCoverage_Result_<ContainerAllocator>;

  explicit NavigatePathCoverage_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit NavigatePathCoverage_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint16_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const uint16_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NONE =
    0u;
  static constexpr uint16_t INVALID_POLYGON_POINTS =
    1u;
  static constexpr uint16_t INVALID_COORD_POINTS =
    2u;

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Result
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Result
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_Result_

// alias to use template instance with default allocator
using NavigatePathCoverage_Result =
  iris_interfaces::action::NavigatePathCoverage_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t NavigatePathCoverage_Result_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t NavigatePathCoverage_Result_<ContainerAllocator>::INVALID_POLYGON_POINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t NavigatePathCoverage_Result_<ContainerAllocator>::INVALID_COORD_POINTS;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Feedback __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_Feedback_
{
  using Type = NavigatePathCoverage_Feedback_<ContainerAllocator>;

  explicit NavigatePathCoverage_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    navigation_time(_init),
    estimated_time_remaining(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_remaining = 0.0f;
    }
  }

  explicit NavigatePathCoverage_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc, _init),
    navigation_time(_alloc, _init),
    estimated_time_remaining(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_remaining = 0.0f;
    }
  }

  // field types and members
  using _current_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _navigation_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _navigation_time_type navigation_time;
  using _estimated_time_remaining_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _estimated_time_remaining_type estimated_time_remaining;
  using _distance_remaining_type =
    float;
  _distance_remaining_type distance_remaining;

  // setters for named parameter idiom
  Type & set__current_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__navigation_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->navigation_time = _arg;
    return *this;
  }
  Type & set__estimated_time_remaining(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->estimated_time_remaining = _arg;
    return *this;
  }
  Type & set__distance_remaining(
    const float & _arg)
  {
    this->distance_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Feedback
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_Feedback
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->navigation_time != other.navigation_time) {
      return false;
    }
    if (this->estimated_time_remaining != other.estimated_time_remaining) {
      return false;
    }
    if (this->distance_remaining != other.distance_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_Feedback_

// alias to use template instance with default allocator
using NavigatePathCoverage_Feedback =
  iris_interfaces::action::NavigatePathCoverage_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "iris_interfaces/action/detail/navigate_path_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_SendGoal_Request_
{
  using Type = NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>;

  explicit NavigatePathCoverage_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigatePathCoverage_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const iris_interfaces::action::NavigatePathCoverage_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Request
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Request
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_SendGoal_Request_

// alias to use template instance with default allocator
using NavigatePathCoverage_SendGoal_Request =
  iris_interfaces::action::NavigatePathCoverage_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_SendGoal_Response_
{
  using Type = NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>;

  explicit NavigatePathCoverage_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigatePathCoverage_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Response
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_SendGoal_Response
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_SendGoal_Response_

// alias to use template instance with default allocator
using NavigatePathCoverage_SendGoal_Response =
  iris_interfaces::action::NavigatePathCoverage_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace action
{

struct NavigatePathCoverage_SendGoal
{
  using Request = iris_interfaces::action::NavigatePathCoverage_SendGoal_Request;
  using Response = iris_interfaces::action::NavigatePathCoverage_SendGoal_Response;
};

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_GetResult_Request_
{
  using Type = NavigatePathCoverage_GetResult_Request_<ContainerAllocator>;

  explicit NavigatePathCoverage_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigatePathCoverage_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Request
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Request
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_GetResult_Request_

// alias to use template instance with default allocator
using NavigatePathCoverage_GetResult_Request =
  iris_interfaces::action::NavigatePathCoverage_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "iris_interfaces/action/detail/navigate_path_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_GetResult_Response_
{
  using Type = NavigatePathCoverage_GetResult_Response_<ContainerAllocator>;

  explicit NavigatePathCoverage_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigatePathCoverage_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const iris_interfaces::action::NavigatePathCoverage_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Response
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_GetResult_Response
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_GetResult_Response_

// alias to use template instance with default allocator
using NavigatePathCoverage_GetResult_Response =
  iris_interfaces::action::NavigatePathCoverage_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace action
{

struct NavigatePathCoverage_GetResult
{
  using Request = iris_interfaces::action::NavigatePathCoverage_GetResult_Request;
  using Response = iris_interfaces::action::NavigatePathCoverage_GetResult_Response;
};

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "iris_interfaces/action/detail/navigate_path_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__NavigatePathCoverage_FeedbackMessage __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigatePathCoverage_FeedbackMessage_
{
  using Type = NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>;

  explicit NavigatePathCoverage_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigatePathCoverage_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const iris_interfaces::action::NavigatePathCoverage_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_FeedbackMessage
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__NavigatePathCoverage_FeedbackMessage
    std::shared_ptr<iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatePathCoverage_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatePathCoverage_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatePathCoverage_FeedbackMessage_

// alias to use template instance with default allocator
using NavigatePathCoverage_FeedbackMessage =
  iris_interfaces::action::NavigatePathCoverage_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace iris_interfaces
{

namespace action
{

struct NavigatePathCoverage
{
  /// The goal message defined in the action definition.
  using Goal = iris_interfaces::action::NavigatePathCoverage_Goal;
  /// The result message defined in the action definition.
  using Result = iris_interfaces::action::NavigatePathCoverage_Result;
  /// The feedback message defined in the action definition.
  using Feedback = iris_interfaces::action::NavigatePathCoverage_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = iris_interfaces::action::NavigatePathCoverage_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = iris_interfaces::action::NavigatePathCoverage_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = iris_interfaces::action::NavigatePathCoverage_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigatePathCoverage NavigatePathCoverage;

}  // namespace action

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__ACTION__DETAIL__NAVIGATE_PATH_COVERAGE__STRUCT_HPP_
