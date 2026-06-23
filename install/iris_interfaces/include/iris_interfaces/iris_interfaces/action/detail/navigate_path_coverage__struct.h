// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:action/NavigatePathCoverage.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__NAVIGATE_PATH_COVERAGE__STRUCT_H_
#define IRIS_INTERFACES__ACTION__DETAIL__NAVIGATE_PATH_COVERAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon_frame_id'
// Member 'behavior_tree'
#include "rosidl_runtime_c/string.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'mode'
#include "iris_interfaces/msg/detail/navigation_mode__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_Goal
{
  rosidl_runtime_c__String polygon_frame_id;
  geometry_msgs__msg__Polygon polygon;
  geometry_msgs__msg__PoseStamped goal_pose;
  rosidl_runtime_c__String behavior_tree;
  iris_interfaces__msg__NavigationMode mode;
} iris_interfaces__action__NavigatePathCoverage_Goal;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_Goal.
typedef struct iris_interfaces__action__NavigatePathCoverage_Goal__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  iris_interfaces__action__NavigatePathCoverage_Result__NONE = 0
};

/// Constant 'INVALID_POLYGON_POINTS'.
enum
{
  iris_interfaces__action__NavigatePathCoverage_Result__INVALID_POLYGON_POINTS = 1
};

/// Constant 'INVALID_COORD_POINTS'.
enum
{
  iris_interfaces__action__NavigatePathCoverage_Result__INVALID_COORD_POINTS = 2
};

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_Result
{
  uint16_t result;
} iris_interfaces__action__NavigatePathCoverage_Result;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_Result.
typedef struct iris_interfaces__action__NavigatePathCoverage_Result__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'navigation_time'
// Member 'estimated_time_remaining'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_Feedback
{
  geometry_msgs__msg__PoseStamped current_pose;
  builtin_interfaces__msg__Duration navigation_time;
  builtin_interfaces__msg__Duration estimated_time_remaining;
  float distance_remaining;
} iris_interfaces__action__NavigatePathCoverage_Feedback;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_Feedback.
typedef struct iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "iris_interfaces/action/detail/navigate_path_coverage__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  iris_interfaces__action__NavigatePathCoverage_Goal goal;
} iris_interfaces__action__NavigatePathCoverage_SendGoal_Request;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_SendGoal_Request.
typedef struct iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} iris_interfaces__action__NavigatePathCoverage_SendGoal_Response;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_SendGoal_Response.
typedef struct iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} iris_interfaces__action__NavigatePathCoverage_GetResult_Request;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_GetResult_Request.
typedef struct iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "iris_interfaces/action/detail/navigate_path_coverage__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_GetResult_Response
{
  int8_t status;
  iris_interfaces__action__NavigatePathCoverage_Result result;
} iris_interfaces__action__NavigatePathCoverage_GetResult_Response;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_GetResult_Response.
typedef struct iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "iris_interfaces/action/detail/navigate_path_coverage__struct.h"

/// Struct defined in action/NavigatePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__NavigatePathCoverage_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  iris_interfaces__action__NavigatePathCoverage_Feedback feedback;
} iris_interfaces__action__NavigatePathCoverage_FeedbackMessage;

// Struct for a sequence of iris_interfaces__action__NavigatePathCoverage_FeedbackMessage.
typedef struct iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence
{
  iris_interfaces__action__NavigatePathCoverage_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__NavigatePathCoverage_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__ACTION__DETAIL__NAVIGATE_PATH_COVERAGE__STRUCT_H_
