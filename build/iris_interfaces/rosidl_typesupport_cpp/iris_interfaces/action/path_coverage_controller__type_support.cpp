// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from iris_interfaces:action/PathCoverageController.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_Goal_type_support_ids_t;

static const _PathCoverageController_Goal_type_support_ids_t _PathCoverageController_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_Goal_type_support_symbol_names_t _PathCoverageController_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_Goal)),
  }
};

typedef struct _PathCoverageController_Goal_type_support_data_t
{
  void * data[2];
} _PathCoverageController_Goal_type_support_data_t;

static _PathCoverageController_Goal_type_support_data_t _PathCoverageController_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_Goal_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_Goal>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_Goal)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_Result_type_support_ids_t;

static const _PathCoverageController_Result_type_support_ids_t _PathCoverageController_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_Result_type_support_symbol_names_t _PathCoverageController_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_Result)),
  }
};

typedef struct _PathCoverageController_Result_type_support_data_t
{
  void * data[2];
} _PathCoverageController_Result_type_support_data_t;

static _PathCoverageController_Result_type_support_data_t _PathCoverageController_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_Result_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_Result>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_Result)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_Feedback_type_support_ids_t;

static const _PathCoverageController_Feedback_type_support_ids_t _PathCoverageController_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_Feedback_type_support_symbol_names_t _PathCoverageController_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_Feedback)),
  }
};

typedef struct _PathCoverageController_Feedback_type_support_data_t
{
  void * data[2];
} _PathCoverageController_Feedback_type_support_data_t;

static _PathCoverageController_Feedback_type_support_data_t _PathCoverageController_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_Feedback_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_Feedback>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_Feedback)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_SendGoal_Request_type_support_ids_t;

static const _PathCoverageController_SendGoal_Request_type_support_ids_t _PathCoverageController_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_SendGoal_Request_type_support_symbol_names_t _PathCoverageController_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_SendGoal_Request)),
  }
};

typedef struct _PathCoverageController_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PathCoverageController_SendGoal_Request_type_support_data_t;

static _PathCoverageController_SendGoal_Request_type_support_data_t _PathCoverageController_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_SendGoal_Request_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_SendGoal_Request>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_SendGoal_Request)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_SendGoal_Response_type_support_ids_t;

static const _PathCoverageController_SendGoal_Response_type_support_ids_t _PathCoverageController_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_SendGoal_Response_type_support_symbol_names_t _PathCoverageController_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_SendGoal_Response)),
  }
};

typedef struct _PathCoverageController_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PathCoverageController_SendGoal_Response_type_support_data_t;

static _PathCoverageController_SendGoal_Response_type_support_data_t _PathCoverageController_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_SendGoal_Response_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_SendGoal_Response>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_SendGoal_Response)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_SendGoal_type_support_ids_t;

static const _PathCoverageController_SendGoal_type_support_ids_t _PathCoverageController_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_SendGoal_type_support_symbol_names_t _PathCoverageController_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_SendGoal)),
  }
};

typedef struct _PathCoverageController_SendGoal_type_support_data_t
{
  void * data[2];
} _PathCoverageController_SendGoal_type_support_data_t;

static _PathCoverageController_SendGoal_type_support_data_t _PathCoverageController_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_SendGoal_service_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PathCoverageController_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<iris_interfaces::action::PathCoverageController_SendGoal>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<iris_interfaces::action::PathCoverageController_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_GetResult_Request_type_support_ids_t;

static const _PathCoverageController_GetResult_Request_type_support_ids_t _PathCoverageController_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_GetResult_Request_type_support_symbol_names_t _PathCoverageController_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_GetResult_Request)),
  }
};

typedef struct _PathCoverageController_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PathCoverageController_GetResult_Request_type_support_data_t;

static _PathCoverageController_GetResult_Request_type_support_data_t _PathCoverageController_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_GetResult_Request_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_GetResult_Request>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_GetResult_Request)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_GetResult_Response_type_support_ids_t;

static const _PathCoverageController_GetResult_Response_type_support_ids_t _PathCoverageController_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_GetResult_Response_type_support_symbol_names_t _PathCoverageController_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_GetResult_Response)),
  }
};

typedef struct _PathCoverageController_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PathCoverageController_GetResult_Response_type_support_data_t;

static _PathCoverageController_GetResult_Response_type_support_data_t _PathCoverageController_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_GetResult_Response_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_GetResult_Response>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_GetResult_Response)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_GetResult_type_support_ids_t;

static const _PathCoverageController_GetResult_type_support_ids_t _PathCoverageController_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_GetResult_type_support_symbol_names_t _PathCoverageController_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_GetResult)),
  }
};

typedef struct _PathCoverageController_GetResult_type_support_data_t
{
  void * data[2];
} _PathCoverageController_GetResult_type_support_data_t;

static _PathCoverageController_GetResult_type_support_data_t _PathCoverageController_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_GetResult_service_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PathCoverageController_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<iris_interfaces::action::PathCoverageController_GetResult>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<iris_interfaces::action::PathCoverageController_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathCoverageController_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathCoverageController_FeedbackMessage_type_support_ids_t;

static const _PathCoverageController_FeedbackMessage_type_support_ids_t _PathCoverageController_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathCoverageController_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathCoverageController_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathCoverageController_FeedbackMessage_type_support_symbol_names_t _PathCoverageController_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iris_interfaces, action, PathCoverageController_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iris_interfaces, action, PathCoverageController_FeedbackMessage)),
  }
};

typedef struct _PathCoverageController_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PathCoverageController_FeedbackMessage_type_support_data_t;

static _PathCoverageController_FeedbackMessage_type_support_data_t _PathCoverageController_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathCoverageController_FeedbackMessage_message_typesupport_map = {
  2,
  "iris_interfaces",
  &_PathCoverageController_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PathCoverageController_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PathCoverageController_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathCoverageController_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathCoverageController_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iris_interfaces::action::PathCoverageController_FeedbackMessage>()
{
  return &::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController_FeedbackMessage)() {
  return get_message_type_support_handle<iris_interfaces::action::PathCoverageController_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace iris_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PathCoverageController_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace iris_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<iris_interfaces::action::PathCoverageController>()
{
  using ::iris_interfaces::action::rosidl_typesupport_cpp::PathCoverageController_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PathCoverageController_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::iris_interfaces::action::PathCoverageController::Impl::SendGoalService>();
  PathCoverageController_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::iris_interfaces::action::PathCoverageController::Impl::GetResultService>();
  PathCoverageController_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::iris_interfaces::action::PathCoverageController::Impl::CancelGoalService>();
  PathCoverageController_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::iris_interfaces::action::PathCoverageController::Impl::FeedbackMessage>();
  PathCoverageController_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::iris_interfaces::action::PathCoverageController::Impl::GoalStatusMessage>();
  return &PathCoverageController_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, iris_interfaces, action, PathCoverageController)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<iris_interfaces::action::PathCoverageController>();
}

#ifdef __cplusplus
}
#endif
