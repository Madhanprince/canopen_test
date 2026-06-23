// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iris_interfaces:action/ComputePathCoverage.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__STRUCT_HPP_
#define IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__STRUCT_HPP_

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
// Member 'headband_mode'
#include "iris_interfaces/msg/detail/headband_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_Goal __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_Goal __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_Goal_
{
  using Type = ComputePathCoverage_Goal_<ContainerAllocator>;

  explicit ComputePathCoverage_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : polygon(_init),
    goal_pose(_init),
    mode(_init),
    headband_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generate_headband = false;
      this->frame_id = "";
      this->reached_start = false;
    }
  }

  explicit ComputePathCoverage_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    polygon(_alloc, _init),
    goal_pose(_alloc, _init),
    mode(_alloc, _init),
    headband_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generate_headband = false;
      this->frame_id = "";
      this->reached_start = false;
    }
  }

  // field types and members
  using _generate_headband_type =
    bool;
  _generate_headband_type generate_headband;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _polygon_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _polygon_type polygon;
  using _goal_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_pose_type goal_pose;
  using _reached_start_type =
    bool;
  _reached_start_type reached_start;
  using _mode_type =
    iris_interfaces::msg::NavigationMode_<ContainerAllocator>;
  _mode_type mode;
  using _headband_mode_type =
    iris_interfaces::msg::HeadbandMode_<ContainerAllocator>;
  _headband_mode_type headband_mode;

  // setters for named parameter idiom
  Type & set__generate_headband(
    const bool & _arg)
  {
    this->generate_headband = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
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
  Type & set__reached_start(
    const bool & _arg)
  {
    this->reached_start = _arg;
    return *this;
  }
  Type & set__mode(
    const iris_interfaces::msg::NavigationMode_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__headband_mode(
    const iris_interfaces::msg::HeadbandMode_<ContainerAllocator> & _arg)
  {
    this->headband_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_Goal
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_Goal
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_Goal_ & other) const
  {
    if (this->generate_headband != other.generate_headband) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->polygon != other.polygon) {
      return false;
    }
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    if (this->reached_start != other.reached_start) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->headband_mode != other.headband_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_Goal_

// alias to use template instance with default allocator
using ComputePathCoverage_Goal =
  iris_interfaces::action::ComputePathCoverage_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'mode'
// already included above
// #include "iris_interfaces/msg/detail/navigation_mode__struct.hpp"
// Member 'start_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'cleaning_path'
// Member 'edge_cleaning_path'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_Result __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_Result __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_Result_
{
  using Type = ComputePathCoverage_Result_<ContainerAllocator>;

  explicit ComputePathCoverage_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_init),
    start_pose(_init),
    cleaning_path(_init),
    edge_cleaning_path(_init),
    planning_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->resolution = 0.0f;
    }
  }

  explicit ComputePathCoverage_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc, _init),
    start_pose(_alloc, _init),
    cleaning_path(_alloc, _init),
    edge_cleaning_path(_alloc, _init),
    planning_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
      this->resolution = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    iris_interfaces::msg::NavigationMode_<ContainerAllocator>;
  _mode_type mode;
  using _start_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_pose_type start_pose;
  using _cleaning_path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _cleaning_path_type cleaning_path;
  using _edge_cleaning_path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _edge_cleaning_path_type edge_cleaning_path;
  using _planning_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _planning_time_type planning_time;
  using _result_type =
    uint16_t;
  _result_type result;
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocities_type velocities;

  // setters for named parameter idiom
  Type & set__mode(
    const iris_interfaces::msg::NavigationMode_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__start_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start_pose = _arg;
    return *this;
  }
  Type & set__cleaning_path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->cleaning_path = _arg;
    return *this;
  }
  Type & set__edge_cleaning_path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->edge_cleaning_path = _arg;
    return *this;
  }
  Type & set__planning_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }
  Type & set__result(
    const uint16_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NONE =
    0u;
  static constexpr uint16_t INVALID_POLYGON_POINTS =
    1000u;
  static constexpr uint16_t SWATH_GENERATION_FAILED =
    1001u;
  static constexpr uint16_t ROUTE_GENERATION_FAILED =
    1002u;
  static constexpr uint16_t PATH_GENERATION_FAILED =
    1003u;

  // pointer types
  using RawPtr =
    iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_Result
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_Result
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_Result_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->start_pose != other.start_pose) {
      return false;
    }
    if (this->cleaning_path != other.cleaning_path) {
      return false;
    }
    if (this->edge_cleaning_path != other.edge_cleaning_path) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_Result_

// alias to use template instance with default allocator
using ComputePathCoverage_Result =
  iris_interfaces::action::ComputePathCoverage_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ComputePathCoverage_Result_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ComputePathCoverage_Result_<ContainerAllocator>::INVALID_POLYGON_POINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ComputePathCoverage_Result_<ContainerAllocator>::SWATH_GENERATION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ComputePathCoverage_Result_<ContainerAllocator>::ROUTE_GENERATION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ComputePathCoverage_Result_<ContainerAllocator>::PATH_GENERATION_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace iris_interfaces


#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_Feedback __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_Feedback_
{
  using Type = ComputePathCoverage_Feedback_<ContainerAllocator>;

  explicit ComputePathCoverage_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ComputePathCoverage_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_Feedback
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_Feedback
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_Feedback_

// alias to use template instance with default allocator
using ComputePathCoverage_Feedback =
  iris_interfaces::action::ComputePathCoverage_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "iris_interfaces/action/detail/compute_path_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_SendGoal_Request_
{
  using Type = ComputePathCoverage_SendGoal_Request_<ContainerAllocator>;

  explicit ComputePathCoverage_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ComputePathCoverage_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const iris_interfaces::action::ComputePathCoverage_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Request
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Request
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_SendGoal_Request_

// alias to use template instance with default allocator
using ComputePathCoverage_SendGoal_Request =
  iris_interfaces::action::ComputePathCoverage_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_SendGoal_Response_
{
  using Type = ComputePathCoverage_SendGoal_Response_<ContainerAllocator>;

  explicit ComputePathCoverage_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ComputePathCoverage_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Response
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_SendGoal_Response
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_SendGoal_Response_

// alias to use template instance with default allocator
using ComputePathCoverage_SendGoal_Response =
  iris_interfaces::action::ComputePathCoverage_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace action
{

struct ComputePathCoverage_SendGoal
{
  using Request = iris_interfaces::action::ComputePathCoverage_SendGoal_Request;
  using Response = iris_interfaces::action::ComputePathCoverage_SendGoal_Response;
};

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Request __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_GetResult_Request_
{
  using Type = ComputePathCoverage_GetResult_Request_<ContainerAllocator>;

  explicit ComputePathCoverage_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ComputePathCoverage_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Request
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Request
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_GetResult_Request_

// alias to use template instance with default allocator
using ComputePathCoverage_GetResult_Request =
  iris_interfaces::action::ComputePathCoverage_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Response __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_GetResult_Response_
{
  using Type = ComputePathCoverage_GetResult_Response_<ContainerAllocator>;

  explicit ComputePathCoverage_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ComputePathCoverage_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const iris_interfaces::action::ComputePathCoverage_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Response
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_GetResult_Response
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_GetResult_Response_

// alias to use template instance with default allocator
using ComputePathCoverage_GetResult_Response =
  iris_interfaces::action::ComputePathCoverage_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace iris_interfaces

namespace iris_interfaces
{

namespace action
{

struct ComputePathCoverage_GetResult
{
  using Request = iris_interfaces::action::ComputePathCoverage_GetResult_Request;
  using Response = iris_interfaces::action::ComputePathCoverage_GetResult_Response;
};

}  // namespace action

}  // namespace iris_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__iris_interfaces__action__ComputePathCoverage_FeedbackMessage __declspec(deprecated)
#endif

namespace iris_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathCoverage_FeedbackMessage_
{
  using Type = ComputePathCoverage_FeedbackMessage_<ContainerAllocator>;

  explicit ComputePathCoverage_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ComputePathCoverage_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const iris_interfaces::action::ComputePathCoverage_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_FeedbackMessage
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iris_interfaces__action__ComputePathCoverage_FeedbackMessage
    std::shared_ptr<iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathCoverage_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathCoverage_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathCoverage_FeedbackMessage_

// alias to use template instance with default allocator
using ComputePathCoverage_FeedbackMessage =
  iris_interfaces::action::ComputePathCoverage_FeedbackMessage_<std::allocator<void>>;

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

struct ComputePathCoverage
{
  /// The goal message defined in the action definition.
  using Goal = iris_interfaces::action::ComputePathCoverage_Goal;
  /// The result message defined in the action definition.
  using Result = iris_interfaces::action::ComputePathCoverage_Result;
  /// The feedback message defined in the action definition.
  using Feedback = iris_interfaces::action::ComputePathCoverage_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = iris_interfaces::action::ComputePathCoverage_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = iris_interfaces::action::ComputePathCoverage_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = iris_interfaces::action::ComputePathCoverage_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ComputePathCoverage ComputePathCoverage;

}  // namespace action

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__STRUCT_HPP_
