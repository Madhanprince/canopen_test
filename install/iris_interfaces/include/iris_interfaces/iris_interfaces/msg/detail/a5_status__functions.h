// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iris_interfaces:msg/A5Status.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__FUNCTIONS_H_
#define IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iris_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "iris_interfaces/msg/detail/a5_status__struct.h"

/// Initialize msg/A5Status message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__msg__A5Status
 * )) before or use
 * iris_interfaces__msg__A5Status__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__A5Status__init(iris_interfaces__msg__A5Status * msg);

/// Finalize msg/A5Status message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__A5Status__fini(iris_interfaces__msg__A5Status * msg);

/// Create msg/A5Status message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__msg__A5Status__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__msg__A5Status *
iris_interfaces__msg__A5Status__create();

/// Destroy msg/A5Status message.
/**
 * It calls
 * iris_interfaces__msg__A5Status__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__A5Status__destroy(iris_interfaces__msg__A5Status * msg);

/// Check for msg/A5Status message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__A5Status__are_equal(const iris_interfaces__msg__A5Status * lhs, const iris_interfaces__msg__A5Status * rhs);

/// Copy a msg/A5Status message.
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
iris_interfaces__msg__A5Status__copy(
  const iris_interfaces__msg__A5Status * input,
  iris_interfaces__msg__A5Status * output);

/// Initialize array of msg/A5Status messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__msg__A5Status__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__A5Status__Sequence__init(iris_interfaces__msg__A5Status__Sequence * array, size_t size);

/// Finalize array of msg/A5Status messages.
/**
 * It calls
 * iris_interfaces__msg__A5Status__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__A5Status__Sequence__fini(iris_interfaces__msg__A5Status__Sequence * array);

/// Create array of msg/A5Status messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__msg__A5Status__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__msg__A5Status__Sequence *
iris_interfaces__msg__A5Status__Sequence__create(size_t size);

/// Destroy array of msg/A5Status messages.
/**
 * It calls
 * iris_interfaces__msg__A5Status__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__msg__A5Status__Sequence__destroy(iris_interfaces__msg__A5Status__Sequence * array);

/// Check for msg/A5Status message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__msg__A5Status__Sequence__are_equal(const iris_interfaces__msg__A5Status__Sequence * lhs, const iris_interfaces__msg__A5Status__Sequence * rhs);

/// Copy an array of msg/A5Status messages.
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
iris_interfaces__msg__A5Status__Sequence__copy(
  const iris_interfaces__msg__A5Status__Sequence * input,
  iris_interfaces__msg__A5Status__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__MSG__DETAIL__A5_STATUS__FUNCTIONS_H_
