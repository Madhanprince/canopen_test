// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:action/ComputePathCoverage.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__STRUCT_H_
#define IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'mode'
#include "iris_interfaces/msg/detail/navigation_mode__struct.h"
// Member 'headband_mode'
#include "iris_interfaces/msg/detail/headband_mode__struct.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_Goal
{
  bool generate_headband;
  rosidl_runtime_c__String frame_id;
  geometry_msgs__msg__Polygon polygon;
  geometry_msgs__msg__PoseStamped goal_pose;
  bool reached_start;
  iris_interfaces__msg__NavigationMode mode;
  iris_interfaces__msg__HeadbandMode headband_mode;
} iris_interfaces__action__ComputePathCoverage_Goal;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_Goal.
typedef struct iris_interfaces__action__ComputePathCoverage_Goal__Sequence
{
  iris_interfaces__action__ComputePathCoverage_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  iris_interfaces__action__ComputePathCoverage_Result__NONE = 0
};

/// Constant 'INVALID_POLYGON_POINTS'.
enum
{
  iris_interfaces__action__ComputePathCoverage_Result__INVALID_POLYGON_POINTS = 1000
};

/// Constant 'SWATH_GENERATION_FAILED'.
enum
{
  iris_interfaces__action__ComputePathCoverage_Result__SWATH_GENERATION_FAILED = 1001
};

/// Constant 'ROUTE_GENERATION_FAILED'.
enum
{
  iris_interfaces__action__ComputePathCoverage_Result__ROUTE_GENERATION_FAILED = 1002
};

/// Constant 'PATH_GENERATION_FAILED'.
enum
{
  iris_interfaces__action__ComputePathCoverage_Result__PATH_GENERATION_FAILED = 1003
};

// Include directives for member types
// Member 'mode'
// already included above
// #include "iris_interfaces/msg/detail/navigation_mode__struct.h"
// Member 'start_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'cleaning_path'
// Member 'edge_cleaning_path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_Result
{
  iris_interfaces__msg__NavigationMode mode;
  geometry_msgs__msg__PoseStamped start_pose;
  nav_msgs__msg__Path cleaning_path;
  nav_msgs__msg__Path edge_cleaning_path;
  builtin_interfaces__msg__Duration planning_time;
  uint16_t result;
  float resolution;
  rosidl_runtime_c__float__Sequence velocities;
} iris_interfaces__action__ComputePathCoverage_Result;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_Result.
typedef struct iris_interfaces__action__ComputePathCoverage_Result__Sequence
{
  iris_interfaces__action__ComputePathCoverage_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} iris_interfaces__action__ComputePathCoverage_Feedback;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_Feedback.
typedef struct iris_interfaces__action__ComputePathCoverage_Feedback__Sequence
{
  iris_interfaces__action__ComputePathCoverage_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "iris_interfaces/action/detail/compute_path_coverage__struct.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  iris_interfaces__action__ComputePathCoverage_Goal goal;
} iris_interfaces__action__ComputePathCoverage_SendGoal_Request;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_SendGoal_Request.
typedef struct iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence
{
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} iris_interfaces__action__ComputePathCoverage_SendGoal_Response;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_SendGoal_Response.
typedef struct iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence
{
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} iris_interfaces__action__ComputePathCoverage_GetResult_Request;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_GetResult_Request.
typedef struct iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence
{
  iris_interfaces__action__ComputePathCoverage_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_GetResult_Response
{
  int8_t status;
  iris_interfaces__action__ComputePathCoverage_Result result;
} iris_interfaces__action__ComputePathCoverage_GetResult_Response;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_GetResult_Response.
typedef struct iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence
{
  iris_interfaces__action__ComputePathCoverage_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"

/// Struct defined in action/ComputePathCoverage in the package iris_interfaces.
typedef struct iris_interfaces__action__ComputePathCoverage_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  iris_interfaces__action__ComputePathCoverage_Feedback feedback;
} iris_interfaces__action__ComputePathCoverage_FeedbackMessage;

// Struct for a sequence of iris_interfaces__action__ComputePathCoverage_FeedbackMessage.
typedef struct iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence
{
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__action__ComputePathCoverage_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__ACTION__DETAIL__COMPUTE_PATH_COVERAGE__STRUCT_H_
