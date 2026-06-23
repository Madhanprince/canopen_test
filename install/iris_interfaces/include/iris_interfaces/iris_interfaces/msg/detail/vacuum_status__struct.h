// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/VacuumStatus.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'squeeze_actuator'
#include "iris_interfaces/msg/detail/actuator_status__struct.h"

/// Struct defined in msg/VacuumStatus in the package iris_interfaces.
typedef struct iris_interfaces__msg__VacuumStatus
{
  uint8_t vacuum_motor_command;
  uint8_t vacuum_motor_status;
  iris_interfaces__msg__ActuatorStatus squeeze_actuator;
} iris_interfaces__msg__VacuumStatus;

// Struct for a sequence of iris_interfaces__msg__VacuumStatus.
typedef struct iris_interfaces__msg__VacuumStatus__Sequence
{
  iris_interfaces__msg__VacuumStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__VacuumStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__VACUUM_STATUS__STRUCT_H_
