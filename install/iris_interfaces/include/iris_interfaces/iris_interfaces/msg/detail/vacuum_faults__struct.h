// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/VacuumFaults.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VacuumFaults in the package iris_interfaces.
typedef struct iris_interfaces__msg__VacuumFaults
{
  uint8_t squeeze_actuator_digital_fault;
  uint8_t drive_brush_current_digital_fault;
  uint8_t overcurrent_analog_fault;
  uint8_t undercurrent_analog_fault;
} iris_interfaces__msg__VacuumFaults;

// Struct for a sequence of iris_interfaces__msg__VacuumFaults.
typedef struct iris_interfaces__msg__VacuumFaults__Sequence
{
  iris_interfaces__msg__VacuumFaults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__VacuumFaults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__VACUUM_FAULTS__STRUCT_H_
