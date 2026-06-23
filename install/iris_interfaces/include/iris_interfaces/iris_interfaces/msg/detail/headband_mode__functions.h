// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iris_interfaces:msg/HeadbandMode.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__FUNCTIONS_H_
#define IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iris_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "iris_interfaces/msg/detail/headband_mode__struct.h"

/// Initialize msg/HeadbandMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__msg__HeadbandMode
 * )) before or use
 * iris_interfaces__msg__HeadbandMode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__HeadbandMode__init(iris_interfaces__msg__HeadbandMode * msg);

/// Finalize msg/HeadbandMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__HeadbandMode__fini(iris_interfaces__msg__HeadbandMode * msg);

/// Create msg/HeadbandMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__msg__HeadbandMode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__msg__HeadbandMode *
iris_interfaces__msg__HeadbandMode__create();

/// Destroy msg/HeadbandMode message.
/**
 * It calls
 * iris_interfaces__msg__HeadbandMode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__HeadbandMode__destroy(iris_interfaces__msg__HeadbandMode * msg);

/// Check for msg/HeadbandMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__HeadbandMode__are_equal(const iris_interfaces__msg__HeadbandMode * lhs, const iris_interfaces__msg__HeadbandMode * rhs);

/// Copy a msg/HeadbandMode message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__HeadbandMode__copy(
  const iris_interfaces__msg__HeadbandMode * input,
  iris_interfaces__msg__HeadbandMode * output);

/// Initialize array of msg/HeadbandMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__msg__HeadbandMode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__HeadbandMode__Sequence__init(iris_interfaces__msg__HeadbandMode__Sequence * array, size_t size);

/// Finalize array of msg/HeadbandMode messages.
/**
 * It calls
 * iris_interfaces__msg__HeadbandMode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__HeadbandMode__Sequence__fini(iris_interfaces__msg__HeadbandMode__Sequence * array);

/// Create array of msg/HeadbandMode messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__msg__HeadbandMode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__msg__HeadbandMode__Sequence *
iris_interfaces__msg__HeadbandMode__Sequence__create(size_t size);

/// Destroy array of msg/HeadbandMode messages.
/**
 * It calls
 * iris_interfaces__msg__HeadbandMode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__HeadbandMode__Sequence__destroy(iris_interfaces__msg__HeadbandMode__Sequence * array);

/// Check for msg/HeadbandMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__HeadbandMode__Sequence__are_equal(const iris_interfaces__msg__HeadbandMode__Sequence * lhs, const iris_interfaces__msg__HeadbandMode__Sequence * rhs);

/// Copy an array of msg/HeadbandMode messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__HeadbandMode__Sequence__copy(
  const iris_interfaces__msg__HeadbandMode__Sequence * input,
  iris_interfaces__msg__HeadbandMode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__HEADBAND_MODE__FUNCTIONS_H_
