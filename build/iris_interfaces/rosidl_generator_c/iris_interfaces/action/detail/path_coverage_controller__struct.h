// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:action/PathCoverageController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__STRUCT_H_
#define IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velocities'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'cleaning_point'
// Member 'edge_cleaning_point'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_Goal
{
  float resolution;
  rosidl_runtime_c__float__Sequence velocities;
  nav_msgs__msg__Path cleaning_point;
  nav_msgs__msg__Path edge_cleaning_point;
} iris_interfaces__action__PathCoverageController_Goal;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_Goal.
typedef struct iris_interfaces__action__PathCoverageController_Goal__Sequence
{
  iris_interfaces__action__PathCoverageController_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  iris_interfaces__action__PathCoverageController_Result__NONE = 0
};

/// Constant 'PATH_GENERATION_FAILED'.
enum
{
  iris_interfaces__action__PathCoverageController_Result__PATH_GENERATION_FAILED = 1
};

/// Constant 'CONTROL_GENERATION_FAILED'.
enum
{
  iris_interfaces__action__PathCoverageController_Result__CONTROL_GENERATION_FAILED = 2
};

/// Constant 'NO_CLEANING_POINT'.
enum
{
  iris_interfaces__action__PathCoverageController_Result__NO_CLEANING_POINT = 3
};

/// Constant 'CANCELLATION_REQUESTED'.
enum
{
  iris_interfaces__action__PathCoverageController_Result__CANCELLATION_REQUESTED = 4
};

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_Result
{
  uint16_t result;
} iris_interfaces__action__PathCoverageController_Result;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_Result.
typedef struct iris_interfaces__action__PathCoverageController_Result__Sequence
{
  iris_interfaces__action__PathCoverageController_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_Feedback
{
  geometry_msgs__msg__PoseStamped current_target_pose;
  builtin_interfaces__msg__Duration navigation_time;
  builtin_interfaces__msg__Duration estimated_time_remaining;
  float distance_remaining;
} iris_interfaces__action__PathCoverageController_Feedback;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_Feedback.
typedef struct iris_interfaces__action__PathCoverageController_Feedback__Sequence
{
  iris_interfaces__action__PathCoverageController_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "iris_interfaces/action/detail/path_coverage_controller__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  iris_interfaces__action__PathCoverageController_Goal goal;
} iris_interfaces__action__PathCoverageController_SendGoal_Request;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_SendGoal_Request.
typedef struct iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence
{
  iris_interfaces__action__PathCoverageController_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} iris_interfaces__action__PathCoverageController_SendGoal_Response;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_SendGoal_Response.
typedef struct iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence
{
  iris_interfaces__action__PathCoverageController_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} iris_interfaces__action__PathCoverageController_GetResult_Request;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_GetResult_Request.
typedef struct iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence
{
  iris_interfaces__action__PathCoverageController_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_GetResult_Response
{
  int8_t status;
  iris_interfaces__action__PathCoverageController_Result result;
} iris_interfaces__action__PathCoverageController_GetResult_Response;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_GetResult_Response.
typedef struct iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence
{
  iris_interfaces__action__PathCoverageController_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.h"

/// Struct defined in action/PathCoverageController in the package iris_interfaces.
typedef struct iris_interfaces__action__PathCoverageController_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  iris_interfaces__action__PathCoverageController_Feedback feedback;
} iris_interfaces__action__PathCoverageController_FeedbackMessage;

// Struct for a sequence of iris_interfaces__action__PathCoverageController_FeedbackMessage.
typedef struct iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence
{
  iris_interfaces__action__PathCoverageController_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__STRUCT_H_
