// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iris_interfaces:action/ComputePathCoverage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
#include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
#include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygon`
#include "geometry_msgs/msg/polygon.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"
// Member `goal_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `mode`
#include "iris_interfaces/msg/navigation_mode.h"
// Member `mode`
#include "iris_interfaces/msg/detail/navigation_mode__rosidl_typesupport_introspection_c.h"
// Member `headband_mode`
#include "iris_interfaces/msg/headband_mode.h"
// Member `headband_mode`
#include "iris_interfaces/msg/detail/headband_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_Goal__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_member_array[7] = {
  {
    "generate_headband",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, generate_headband),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, polygon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reached_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, reached_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "headband_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Goal, headband_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_Goal",  // message name
  7,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_Goal),
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_Goal)() {
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, msg, NavigationMode)();
  iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, msg, HeadbandMode)();
  if (!iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_Goal__rosidl_typesupport_introspection_c__ComputePathCoverage_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `mode`
// already included above
// #include "iris_interfaces/msg/navigation_mode.h"
// Member `mode`
// already included above
// #include "iris_interfaces/msg/detail/navigation_mode__rosidl_typesupport_introspection_c.h"
// Member `start_pose`
// already included above
// #include "geometry_msgs/msg/pose_stamped.h"
// Member `start_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `cleaning_path`
// Member `edge_cleaning_path`
#include "nav_msgs/msg/path.h"
// Member `cleaning_path`
// Member `edge_cleaning_path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `planning_time`
#include "builtin_interfaces/msg/duration.h"
// Member `planning_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_Result__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_Result__fini(message_memory);
}

size_t iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__size_function__ComputePathCoverage_Result__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__get_const_function__ComputePathCoverage_Result__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__get_function__ComputePathCoverage_Result__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__fetch_function__ComputePathCoverage_Result__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__get_const_function__ComputePathCoverage_Result__velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__assign_function__ComputePathCoverage_Result__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__get_function__ComputePathCoverage_Result__velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__resize_function__ComputePathCoverage_Result__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array[8] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, start_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cleaning_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, cleaning_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edge_cleaning_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, edge_cleaning_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Result, velocities),  // bytes offset in struct
    NULL,  // default value
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__size_function__ComputePathCoverage_Result__velocities,  // size() function pointer
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__get_const_function__ComputePathCoverage_Result__velocities,  // get_const(index) function pointer
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__get_function__ComputePathCoverage_Result__velocities,  // get(index) function pointer
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__fetch_function__ComputePathCoverage_Result__velocities,  // fetch(index, &value) function pointer
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__assign_function__ComputePathCoverage_Result__velocities,  // assign(index, value) function pointer
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__resize_function__ComputePathCoverage_Result__velocities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_Result",  // message name
  8,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_Result),
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_Result)() {
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, msg, NavigationMode)();
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_Result__rosidl_typesupport_introspection_c__ComputePathCoverage_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_Feedback__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_Feedback",  // message name
  1,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_Feedback),
  iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_Feedback)() {
  if (!iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_Feedback__rosidl_typesupport_introspection_c__ComputePathCoverage_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "iris_interfaces/action/compute_path_coverage.h"
// Member `goal`
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_SendGoal_Request),
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal_Request)() {
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_Goal)();
  if (!iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_SendGoal_Response),
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal_Response)() {
  iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_members = {
  "iris_interfaces__action",  // service namespace
  "ComputePathCoverage_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_type_support_handle = {
  0,
  &iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal)() {
  if (!iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_SendGoal_Response)()->data;
  }

  return &iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_GetResult_Request__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_GetResult_Request),
  iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult_Request)() {
  iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "iris_interfaces/action/compute_path_coverage.h"
// Member `result`
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_GetResult_Response__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_GetResult_Response),
  iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult_Response)() {
  iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_Result)();
  if (!iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_members = {
  "iris_interfaces__action",  // service namespace
  "ComputePathCoverage_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_type_support_handle = {
  0,
  &iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult)() {
  if (!iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_GetResult_Response)()->data;
  }

  return &iris_interfaces__action__detail__compute_path_coverage__rosidl_typesupport_introspection_c__ComputePathCoverage_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iris_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__functions.h"
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "iris_interfaces/action/compute_path_coverage.h"
// Member `feedback`
// already included above
// #include "iris_interfaces/action/detail/compute_path_coverage__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__init(message_memory);
}

void iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_fini_function(void * message_memory)
{
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iris_interfaces__action__ComputePathCoverage_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_members = {
  "iris_interfaces__action",  // message namespace
  "ComputePathCoverage_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(iris_interfaces__action__ComputePathCoverage_FeedbackMessage),
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_member_array,  // message members
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_type_support_handle = {
  0,
  &iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iris_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_FeedbackMessage)() {
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iris_interfaces, action, ComputePathCoverage_Feedback)();
  if (!iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iris_interfaces__action__ComputePathCoverage_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathCoverage_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
