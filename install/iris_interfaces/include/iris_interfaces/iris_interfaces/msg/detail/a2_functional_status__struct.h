// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/A2FunctionalStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A2_FUNCTIONAL_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__A2_FUNCTIONAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'brush'
#include "iris_interfaces/msg/detail/brush_status__struct.h"
// Member 'vacuum'
#include "iris_interfaces/msg/detail/vacuum_status__struct.h"

/// Struct defined in msg/A2FunctionalStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__A2FunctionalStatus
{
  iris_interfaces__msg__BrushStatus brush;
  iris_interfaces__msg__VacuumStatus vacuum;
  uint8_t water_pump;
  uint8_t detergent_pump;
} iris_interfaces__msg__A2FunctionalStatus;

// Struct for a sequence of iris_interfaces__msg__A2FunctionalStatus.
typedef struct iris_interfaces__msg__A2FunctionalStatus__Sequence
{
  iris_interfaces__msg__A2FunctionalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__A2FunctionalStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__A2_FUNCTIONAL_STATUS__STRUCT_H_
