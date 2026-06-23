// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iris_interfaces:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__STRUCT_H_
#define IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  iris_interfaces__msg__LedControl__OFF = 0
};

/// Constant 'BOOTUP_WAIT'.
enum
{
  iris_interfaces__msg__LedControl__BOOTUP_WAIT = 1
};

/// Constant 'STANDY'.
enum
{
  iris_interfaces__msg__LedControl__STANDY = 2
};

/// Constant 'RUNNING'.
enum
{
  iris_interfaces__msg__LedControl__RUNNING = 3
};

/// Constant 'ERROR'.
enum
{
  iris_interfaces__msg__LedControl__ERROR = 4
};

/// Struct defined in msg/LedControl in the package iris_interfaces.
/**
  * Led command could be any of the following:
  * OFF, BOOTUP_WAIT, STANDBY, RUNNING, ERROR
 */
typedef struct iris_interfaces__msg__LedControl
{
  uint8_t led_command;
  uint8_t left_indicator;
  uint8_t right_indicator;
} iris_interfaces__msg__LedControl;

// Struct for a sequence of iris_interfaces__msg__LedControl.
typedef struct iris_interfaces__msg__LedControl__Sequence
{
  iris_interfaces__msg__LedControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iris_interfaces__msg__LedControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__LED_CONTROL__STRUCT_H_
