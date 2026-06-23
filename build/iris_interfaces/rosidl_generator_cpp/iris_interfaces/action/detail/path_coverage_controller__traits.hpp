// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iris_interfaces:action/PathCoverageController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__TRAITS_HPP_
#define IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cleaning_point'
// Member 'edge_cleaning_point'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cleaning_point
  {
    out << "cleaning_point: ";
    to_flow_style_yaml(msg.cleaning_point, out);
    out << ", ";
  }

  // member: edge_cleaning_point
  {
    out << "edge_cleaning_point: ";
    to_flow_style_yaml(msg.edge_cleaning_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cleaning_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleaning_point:\n";
    to_block_style_yaml(msg.cleaning_point, out, indentation + 2);
  }

  // member: edge_cleaning_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_cleaning_point:\n";
    to_block_style_yaml(msg.edge_cleaning_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_Goal & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_Goal>()
{
  return "iris_interfaces::action::PathCoverageController_Goal";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_Goal>()
{
  return "iris_interfaces/action/PathCoverageController_Goal";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_Result & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_Result>()
{
  return "iris_interfaces::action::PathCoverageController_Result";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_Result>()
{
  return "iris_interfaces/action/PathCoverageController_Result";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_target_pose
  {
    out << "current_target_pose: ";
    to_flow_style_yaml(msg.current_target_pose, out);
    out << ", ";
  }

  // member: navigation_time
  {
    out << "navigation_time: ";
    to_flow_style_yaml(msg.navigation_time, out);
    out << ", ";
  }

  // member: estimated_time_remaining
  {
    out << "estimated_time_remaining: ";
    to_flow_style_yaml(msg.estimated_time_remaining, out);
    out << ", ";
  }

  // member: distance_remaining
  {
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_target_pose:\n";
    to_block_style_yaml(msg.current_target_pose, out, indentation + 2);
  }

  // member: navigation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigation_time:\n";
    to_block_style_yaml(msg.navigation_time, out, indentation + 2);
  }

  // member: estimated_time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_time_remaining:\n";
    to_block_style_yaml(msg.estimated_time_remaining, out, indentation + 2);
  }

  // member: distance_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_Feedback & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_Feedback>()
{
  return "iris_interfaces::action::PathCoverageController_Feedback";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_Feedback>()
{
  return "iris_interfaces/action/PathCoverageController_Feedback";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "iris_interfaces/action/detail/path_coverage_controller__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_SendGoal_Request & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_SendGoal_Request>()
{
  return "iris_interfaces::action::PathCoverageController_SendGoal_Request";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_SendGoal_Request>()
{
  return "iris_interfaces/action/PathCoverageController_SendGoal_Request";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<iris_interfaces::action::PathCoverageController_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<iris_interfaces::action::PathCoverageController_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_SendGoal_Response & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_SendGoal_Response>()
{
  return "iris_interfaces::action::PathCoverageController_SendGoal_Response";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_SendGoal_Response>()
{
  return "iris_interfaces/action/PathCoverageController_SendGoal_Response";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_SendGoal>()
{
  return "iris_interfaces::action::PathCoverageController_SendGoal";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_SendGoal>()
{
  return "iris_interfaces/action/PathCoverageController_SendGoal";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::action::PathCoverageController_SendGoal_Request>::value &&
    has_fixed_size<iris_interfaces::action::PathCoverageController_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::action::PathCoverageController_SendGoal_Request>::value &&
    has_bounded_size<iris_interfaces::action::PathCoverageController_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::action::PathCoverageController_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::action::PathCoverageController_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::action::PathCoverageController_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_GetResult_Request & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_GetResult_Request>()
{
  return "iris_interfaces::action::PathCoverageController_GetResult_Request";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_GetResult_Request>()
{
  return "iris_interfaces/action/PathCoverageController_GetResult_Request";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_GetResult_Response & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_GetResult_Response>()
{
  return "iris_interfaces::action::PathCoverageController_GetResult_Response";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_GetResult_Response>()
{
  return "iris_interfaces/action/PathCoverageController_GetResult_Response";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<iris_interfaces::action::PathCoverageController_Result>::value> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<iris_interfaces::action::PathCoverageController_Result>::value> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_GetResult>()
{
  return "iris_interfaces::action::PathCoverageController_GetResult";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_GetResult>()
{
  return "iris_interfaces/action/PathCoverageController_GetResult";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<iris_interfaces::action::PathCoverageController_GetResult_Request>::value &&
    has_fixed_size<iris_interfaces::action::PathCoverageController_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<iris_interfaces::action::PathCoverageController_GetResult_Request>::value &&
    has_bounded_size<iris_interfaces::action::PathCoverageController_GetResult_Response>::value
  >
{
};

template<>
struct is_service<iris_interfaces::action::PathCoverageController_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<iris_interfaces::action::PathCoverageController_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iris_interfaces::action::PathCoverageController_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__traits.hpp"

namespace iris_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PathCoverageController_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCoverageController_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCoverageController_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iris_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iris_interfaces::action::PathCoverageController_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  iris_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iris_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const iris_interfaces::action::PathCoverageController_FeedbackMessage & msg)
{
  return iris_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<iris_interfaces::action::PathCoverageController_FeedbackMessage>()
{
  return "iris_interfaces::action::PathCoverageController_FeedbackMessage";
}

template<>
inline const char * name<iris_interfaces::action::PathCoverageController_FeedbackMessage>()
{
  return "iris_interfaces/action/PathCoverageController_FeedbackMessage";
}

template<>
struct has_fixed_size<iris_interfaces::action::PathCoverageController_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<iris_interfaces::action::PathCoverageController_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<iris_interfaces::action::PathCoverageController_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<iris_interfaces::action::PathCoverageController_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<iris_interfaces::action::PathCoverageController_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<iris_interfaces::action::PathCoverageController>
  : std::true_type
{
};

template<>
struct is_action_goal<iris_interfaces::action::PathCoverageController_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<iris_interfaces::action::PathCoverageController_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<iris_interfaces::action::PathCoverageController_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__TRAITS_HPP_
