// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:action/PathCoverageController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__BUILDER_HPP_
#define IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_Goal_edge_cleaning_point
{
public:
  explicit Init_PathCoverageController_Goal_edge_cleaning_point(::iris_interfaces::action::PathCoverageController_Goal & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::PathCoverageController_Goal edge_cleaning_point(::iris_interfaces::action::PathCoverageController_Goal::_edge_cleaning_point_type arg)
  {
    msg_.edge_cleaning_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Goal msg_;
};

class Init_PathCoverageController_Goal_cleaning_point
{
public:
  explicit Init_PathCoverageController_Goal_cleaning_point(::iris_interfaces::action::PathCoverageController_Goal & msg)
  : msg_(msg)
  {}
  Init_PathCoverageController_Goal_edge_cleaning_point cleaning_point(::iris_interfaces::action::PathCoverageController_Goal::_cleaning_point_type arg)
  {
    msg_.cleaning_point = std::move(arg);
    return Init_PathCoverageController_Goal_edge_cleaning_point(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Goal msg_;
};

class Init_PathCoverageController_Goal_velocities
{
public:
  explicit Init_PathCoverageController_Goal_velocities(::iris_interfaces::action::PathCoverageController_Goal & msg)
  : msg_(msg)
  {}
  Init_PathCoverageController_Goal_cleaning_point velocities(::iris_interfaces::action::PathCoverageController_Goal::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_PathCoverageController_Goal_cleaning_point(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Goal msg_;
};

class Init_PathCoverageController_Goal_resolution
{
public:
  Init_PathCoverageController_Goal_resolution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCoverageController_Goal_velocities resolution(::iris_interfaces::action::PathCoverageController_Goal::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_PathCoverageController_Goal_velocities(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_Goal>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_Goal_resolution();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_Result_result
{
public:
  Init_PathCoverageController_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::action::PathCoverageController_Result result(::iris_interfaces::action::PathCoverageController_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_Result>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_Result_result();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_Feedback_distance_remaining
{
public:
  explicit Init_PathCoverageController_Feedback_distance_remaining(::iris_interfaces::action::PathCoverageController_Feedback & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::PathCoverageController_Feedback distance_remaining(::iris_interfaces::action::PathCoverageController_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Feedback msg_;
};

class Init_PathCoverageController_Feedback_estimated_time_remaining
{
public:
  explicit Init_PathCoverageController_Feedback_estimated_time_remaining(::iris_interfaces::action::PathCoverageController_Feedback & msg)
  : msg_(msg)
  {}
  Init_PathCoverageController_Feedback_distance_remaining estimated_time_remaining(::iris_interfaces::action::PathCoverageController_Feedback::_estimated_time_remaining_type arg)
  {
    msg_.estimated_time_remaining = std::move(arg);
    return Init_PathCoverageController_Feedback_distance_remaining(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Feedback msg_;
};

class Init_PathCoverageController_Feedback_navigation_time
{
public:
  explicit Init_PathCoverageController_Feedback_navigation_time(::iris_interfaces::action::PathCoverageController_Feedback & msg)
  : msg_(msg)
  {}
  Init_PathCoverageController_Feedback_estimated_time_remaining navigation_time(::iris_interfaces::action::PathCoverageController_Feedback::_navigation_time_type arg)
  {
    msg_.navigation_time = std::move(arg);
    return Init_PathCoverageController_Feedback_estimated_time_remaining(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Feedback msg_;
};

class Init_PathCoverageController_Feedback_current_target_pose
{
public:
  Init_PathCoverageController_Feedback_current_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCoverageController_Feedback_navigation_time current_target_pose(::iris_interfaces::action::PathCoverageController_Feedback::_current_target_pose_type arg)
  {
    msg_.current_target_pose = std::move(arg);
    return Init_PathCoverageController_Feedback_navigation_time(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_Feedback>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_Feedback_current_target_pose();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_SendGoal_Request_goal
{
public:
  explicit Init_PathCoverageController_SendGoal_Request_goal(::iris_interfaces::action::PathCoverageController_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::PathCoverageController_SendGoal_Request goal(::iris_interfaces::action::PathCoverageController_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_SendGoal_Request msg_;
};

class Init_PathCoverageController_SendGoal_Request_goal_id
{
public:
  Init_PathCoverageController_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCoverageController_SendGoal_Request_goal goal_id(::iris_interfaces::action::PathCoverageController_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PathCoverageController_SendGoal_Request_goal(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_SendGoal_Request>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_SendGoal_Request_goal_id();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_SendGoal_Response_stamp
{
public:
  explicit Init_PathCoverageController_SendGoal_Response_stamp(::iris_interfaces::action::PathCoverageController_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::PathCoverageController_SendGoal_Response stamp(::iris_interfaces::action::PathCoverageController_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_SendGoal_Response msg_;
};

class Init_PathCoverageController_SendGoal_Response_accepted
{
public:
  Init_PathCoverageController_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCoverageController_SendGoal_Response_stamp accepted(::iris_interfaces::action::PathCoverageController_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PathCoverageController_SendGoal_Response_stamp(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_SendGoal_Response>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_SendGoal_Response_accepted();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_GetResult_Request_goal_id
{
public:
  Init_PathCoverageController_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::action::PathCoverageController_GetResult_Request goal_id(::iris_interfaces::action::PathCoverageController_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_GetResult_Request>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_GetResult_Request_goal_id();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_GetResult_Response_result
{
public:
  explicit Init_PathCoverageController_GetResult_Response_result(::iris_interfaces::action::PathCoverageController_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::PathCoverageController_GetResult_Response result(::iris_interfaces::action::PathCoverageController_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_GetResult_Response msg_;
};

class Init_PathCoverageController_GetResult_Response_status
{
public:
  Init_PathCoverageController_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCoverageController_GetResult_Response_result status(::iris_interfaces::action::PathCoverageController_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PathCoverageController_GetResult_Response_result(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_GetResult_Response>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_GetResult_Response_status();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_PathCoverageController_FeedbackMessage_feedback
{
public:
  explicit Init_PathCoverageController_FeedbackMessage_feedback(::iris_interfaces::action::PathCoverageController_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::PathCoverageController_FeedbackMessage feedback(::iris_interfaces::action::PathCoverageController_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_FeedbackMessage msg_;
};

class Init_PathCoverageController_FeedbackMessage_goal_id
{
public:
  Init_PathCoverageController_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCoverageController_FeedbackMessage_feedback goal_id(::iris_interfaces::action::PathCoverageController_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PathCoverageController_FeedbackMessage_feedback(msg_);
  }

private:
  ::iris_interfaces::action::PathCoverageController_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::PathCoverageController_FeedbackMessage>()
{
  return iris_interfaces::action::builder::Init_PathCoverageController_FeedbackMessage_goal_id();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__BUILDER_HPP_
