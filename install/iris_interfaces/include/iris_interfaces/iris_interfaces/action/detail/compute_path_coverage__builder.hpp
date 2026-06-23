// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iris_interfaces:action/ComputePathCoverage.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__BUILDER_HPP_
#define IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iris_interfaces/action/detail/compute_path_coverage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_Goal_headband_mode
{
public:
  explicit Init_ComputePathCoverage_Goal_headband_mode(::iris_interfaces::action::ComputePathCoverage_Goal & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::ComputePathCoverage_Goal headband_mode(::iris_interfaces::action::ComputePathCoverage_Goal::_headband_mode_type arg)
  {
    msg_.headband_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

class Init_ComputePathCoverage_Goal_mode
{
public:
  explicit Init_ComputePathCoverage_Goal_mode(::iris_interfaces::action::ComputePathCoverage_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Goal_headband_mode mode(::iris_interfaces::action::ComputePathCoverage_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ComputePathCoverage_Goal_headband_mode(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

class Init_ComputePathCoverage_Goal_reached_start
{
public:
  explicit Init_ComputePathCoverage_Goal_reached_start(::iris_interfaces::action::ComputePathCoverage_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Goal_mode reached_start(::iris_interfaces::action::ComputePathCoverage_Goal::_reached_start_type arg)
  {
    msg_.reached_start = std::move(arg);
    return Init_ComputePathCoverage_Goal_mode(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

class Init_ComputePathCoverage_Goal_goal_pose
{
public:
  explicit Init_ComputePathCoverage_Goal_goal_pose(::iris_interfaces::action::ComputePathCoverage_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Goal_reached_start goal_pose(::iris_interfaces::action::ComputePathCoverage_Goal::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_ComputePathCoverage_Goal_reached_start(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

class Init_ComputePathCoverage_Goal_polygon
{
public:
  explicit Init_ComputePathCoverage_Goal_polygon(::iris_interfaces::action::ComputePathCoverage_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Goal_goal_pose polygon(::iris_interfaces::action::ComputePathCoverage_Goal::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_ComputePathCoverage_Goal_goal_pose(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

class Init_ComputePathCoverage_Goal_frame_id
{
public:
  explicit Init_ComputePathCoverage_Goal_frame_id(::iris_interfaces::action::ComputePathCoverage_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Goal_polygon frame_id(::iris_interfaces::action::ComputePathCoverage_Goal::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ComputePathCoverage_Goal_polygon(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

class Init_ComputePathCoverage_Goal_generate_headband
{
public:
  Init_ComputePathCoverage_Goal_generate_headband()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathCoverage_Goal_frame_id generate_headband(::iris_interfaces::action::ComputePathCoverage_Goal::_generate_headband_type arg)
  {
    msg_.generate_headband = std::move(arg);
    return Init_ComputePathCoverage_Goal_frame_id(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_Goal>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_Goal_generate_headband();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_Result_velocities
{
public:
  explicit Init_ComputePathCoverage_Result_velocities(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::ComputePathCoverage_Result velocities(::iris_interfaces::action::ComputePathCoverage_Result::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_resolution
{
public:
  explicit Init_ComputePathCoverage_Result_resolution(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Result_velocities resolution(::iris_interfaces::action::ComputePathCoverage_Result::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_ComputePathCoverage_Result_velocities(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_result
{
public:
  explicit Init_ComputePathCoverage_Result_result(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Result_resolution result(::iris_interfaces::action::ComputePathCoverage_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_ComputePathCoverage_Result_resolution(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_planning_time
{
public:
  explicit Init_ComputePathCoverage_Result_planning_time(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Result_result planning_time(::iris_interfaces::action::ComputePathCoverage_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return Init_ComputePathCoverage_Result_result(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_edge_cleaning_path
{
public:
  explicit Init_ComputePathCoverage_Result_edge_cleaning_path(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Result_planning_time edge_cleaning_path(::iris_interfaces::action::ComputePathCoverage_Result::_edge_cleaning_path_type arg)
  {
    msg_.edge_cleaning_path = std::move(arg);
    return Init_ComputePathCoverage_Result_planning_time(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_cleaning_path
{
public:
  explicit Init_ComputePathCoverage_Result_cleaning_path(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Result_edge_cleaning_path cleaning_path(::iris_interfaces::action::ComputePathCoverage_Result::_cleaning_path_type arg)
  {
    msg_.cleaning_path = std::move(arg);
    return Init_ComputePathCoverage_Result_edge_cleaning_path(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_start_pose
{
public:
  explicit Init_ComputePathCoverage_Result_start_pose(::iris_interfaces::action::ComputePathCoverage_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathCoverage_Result_cleaning_path start_pose(::iris_interfaces::action::ComputePathCoverage_Result::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_ComputePathCoverage_Result_cleaning_path(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

class Init_ComputePathCoverage_Result_mode
{
public:
  Init_ComputePathCoverage_Result_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathCoverage_Result_start_pose mode(::iris_interfaces::action::ComputePathCoverage_Result::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ComputePathCoverage_Result_start_pose(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_Result>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_Result_mode();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_Feedback>()
{
  return ::iris_interfaces::action::ComputePathCoverage_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_SendGoal_Request_goal
{
public:
  explicit Init_ComputePathCoverage_SendGoal_Request_goal(::iris_interfaces::action::ComputePathCoverage_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::ComputePathCoverage_SendGoal_Request goal(::iris_interfaces::action::ComputePathCoverage_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_SendGoal_Request msg_;
};

class Init_ComputePathCoverage_SendGoal_Request_goal_id
{
public:
  Init_ComputePathCoverage_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathCoverage_SendGoal_Request_goal goal_id(::iris_interfaces::action::ComputePathCoverage_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathCoverage_SendGoal_Request_goal(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_SendGoal_Request>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_SendGoal_Request_goal_id();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_SendGoal_Response_stamp
{
public:
  explicit Init_ComputePathCoverage_SendGoal_Response_stamp(::iris_interfaces::action::ComputePathCoverage_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::ComputePathCoverage_SendGoal_Response stamp(::iris_interfaces::action::ComputePathCoverage_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_SendGoal_Response msg_;
};

class Init_ComputePathCoverage_SendGoal_Response_accepted
{
public:
  Init_ComputePathCoverage_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathCoverage_SendGoal_Response_stamp accepted(::iris_interfaces::action::ComputePathCoverage_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputePathCoverage_SendGoal_Response_stamp(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_SendGoal_Response>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_SendGoal_Response_accepted();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_GetResult_Request_goal_id
{
public:
  Init_ComputePathCoverage_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::iris_interfaces::action::ComputePathCoverage_GetResult_Request goal_id(::iris_interfaces::action::ComputePathCoverage_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_GetResult_Request>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_GetResult_Request_goal_id();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_GetResult_Response_result
{
public:
  explicit Init_ComputePathCoverage_GetResult_Response_result(::iris_interfaces::action::ComputePathCoverage_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::ComputePathCoverage_GetResult_Response result(::iris_interfaces::action::ComputePathCoverage_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_GetResult_Response msg_;
};

class Init_ComputePathCoverage_GetResult_Response_status
{
public:
  Init_ComputePathCoverage_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathCoverage_GetResult_Response_result status(::iris_interfaces::action::ComputePathCoverage_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputePathCoverage_GetResult_Response_result(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_GetResult_Response>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_GetResult_Response_status();
}

}  // namespace iris_interfaces


namespace iris_interfaces
{

namespace action
{

namespace builder
{

class Init_ComputePathCoverage_FeedbackMessage_feedback
{
public:
  explicit Init_ComputePathCoverage_FeedbackMessage_feedback(::iris_interfaces::action::ComputePathCoverage_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::iris_interfaces::action::ComputePathCoverage_FeedbackMessage feedback(::iris_interfaces::action::ComputePathCoverage_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_FeedbackMessage msg_;
};

class Init_ComputePathCoverage_FeedbackMessage_goal_id
{
public:
  Init_ComputePathCoverage_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathCoverage_FeedbackMessage_feedback goal_id(::iris_interfaces::action::ComputePathCoverage_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathCoverage_FeedbackMessage_feedback(msg_);
  }

private:
  ::iris_interfaces::action::ComputePathCoverage_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::iris_interfaces::action::ComputePathCoverage_FeedbackMessage>()
{
  return iris_interfaces::action::builder::Init_ComputePathCoverage_FeedbackMessage_goal_id();
}

}  // namespace iris_interfaces

#endif  // IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__BUILDER_HPP_
