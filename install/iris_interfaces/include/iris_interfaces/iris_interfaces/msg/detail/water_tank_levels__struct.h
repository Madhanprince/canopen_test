// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/WaterTankLevels.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WaterTankLevels in the package iris_interfaces.
typedef struct iris_interfaces__msg__WaterTankLevels
{
  uint8_t fresh_water_tank_level;
  uint8_t dirty_water_tank_level;
} iris_interfaces__msg__WaterTankLevels;

// Struct for a sequence of iris_interfaces__msg__WaterTankLevels.
typedef struct iris_interfaces__msg__WaterTankLevels__Sequence
{
  iris_interfaces__msg__WaterTankLevels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__WaterTankLevels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__WATER_TANK_LEVELS__STRUCT_H_
