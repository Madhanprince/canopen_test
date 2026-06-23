// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from iris_interfaces:action/PathCoverageController.idl
// generated code does not contain a copyright notice

#ifndef IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__FUNCTIONS_H_
#define IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "iris_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "iris_interfaces/action/detail/path_coverage_controller__struct.h"

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_Goal
 * )) before or use
 * iris_interfaces__action__PathCoverageController_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Goal__init(iris_interfaces__action__PathCoverageController_Goal * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Goal__fini(iris_interfaces__action__PathCoverageController_Goal * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_Goal *
iris_interfaces__action__PathCoverageController_Goal__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Goal__destroy(iris_interfaces__action__PathCoverageController_Goal * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Goal__are_equal(const iris_interfaces__action__PathCoverageController_Goal * lhs, const iris_interfaces__action__PathCoverageController_Goal * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_Goal__copy(
  const iris_interfaces__action__PathCoverageController_Goal * input,
  iris_interfaces__action__PathCoverageController_Goal * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Goal__Sequence__init(iris_interfaces__action__PathCoverageController_Goal__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Goal__Sequence__fini(iris_interfaces__action__PathCoverageController_Goal__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_Goal__Sequence *
iris_interfaces__action__PathCoverageController_Goal__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Goal__Sequence__destroy(iris_interfaces__action__PathCoverageController_Goal__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Goal__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_Goal__Sequence * lhs, const iris_interfaces__action__PathCoverageController_Goal__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_Goal__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_Goal__Sequence * input,
  iris_interfaces__action__PathCoverageController_Goal__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_Result
 * )) before or use
 * iris_interfaces__action__PathCoverageController_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Result__init(iris_interfaces__action__PathCoverageController_Result * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Result__fini(iris_interfaces__action__PathCoverageController_Result * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_Result *
iris_interfaces__action__PathCoverageController_Result__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Result__destroy(iris_interfaces__action__PathCoverageController_Result * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Result__are_equal(const iris_interfaces__action__PathCoverageController_Result * lhs, const iris_interfaces__action__PathCoverageController_Result * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_Result__copy(
  const iris_interfaces__action__PathCoverageController_Result * input,
  iris_interfaces__action__PathCoverageController_Result * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Result__Sequence__init(iris_interfaces__action__PathCoverageController_Result__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Result__Sequence__fini(iris_interfaces__action__PathCoverageController_Result__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_Result__Sequence *
iris_interfaces__action__PathCoverageController_Result__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Result__Sequence__destroy(iris_interfaces__action__PathCoverageController_Result__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Result__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_Result__Sequence * lhs, const iris_interfaces__action__PathCoverageController_Result__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_Result__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_Result__Sequence * input,
  iris_interfaces__action__PathCoverageController_Result__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_Feedback
 * )) before or use
 * iris_interfaces__action__PathCoverageController_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Feedback__init(iris_interfaces__action__PathCoverageController_Feedback * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Feedback__fini(iris_interfaces__action__PathCoverageController_Feedback * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_Feedback *
iris_interfaces__action__PathCoverageController_Feedback__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Feedback__destroy(iris_interfaces__action__PathCoverageController_Feedback * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Feedback__are_equal(const iris_interfaces__action__PathCoverageController_Feedback * lhs, const iris_interfaces__action__PathCoverageController_Feedback * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_Feedback__copy(
  const iris_interfaces__action__PathCoverageController_Feedback * input,
  iris_interfaces__action__PathCoverageController_Feedback * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Feedback__Sequence__init(iris_interfaces__action__PathCoverageController_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Feedback__Sequence__fini(iris_interfaces__action__PathCoverageController_Feedback__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_Feedback__Sequence *
iris_interfaces__action__PathCoverageController_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_Feedback__Sequence__destroy(iris_interfaces__action__PathCoverageController_Feedback__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_Feedback__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_Feedback__Sequence * lhs, const iris_interfaces__action__PathCoverageController_Feedback__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_Feedback__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_Feedback__Sequence * input,
  iris_interfaces__action__PathCoverageController_Feedback__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_SendGoal_Request
 * )) before or use
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__init(iris_interfaces__action__PathCoverageController_SendGoal_Request * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(iris_interfaces__action__PathCoverageController_SendGoal_Request * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_SendGoal_Request *
iris_interfaces__action__PathCoverageController_SendGoal_Request__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Request__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Request * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Request * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Request * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_SendGoal_Request__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Request * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Request * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__init(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__fini(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence *
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_SendGoal_Response
 * )) before or use
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__init(iris_interfaces__action__PathCoverageController_SendGoal_Response * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(iris_interfaces__action__PathCoverageController_SendGoal_Response * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_SendGoal_Response *
iris_interfaces__action__PathCoverageController_SendGoal_Response__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Response__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Response * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Response * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Response * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_SendGoal_Response__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Response * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Response * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__init(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__fini(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence *
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_GetResult_Request
 * )) before or use
 * iris_interfaces__action__PathCoverageController_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Request__init(iris_interfaces__action__PathCoverageController_GetResult_Request * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Request__fini(iris_interfaces__action__PathCoverageController_GetResult_Request * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_GetResult_Request *
iris_interfaces__action__PathCoverageController_GetResult_Request__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Request__destroy(iris_interfaces__action__PathCoverageController_GetResult_Request * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Request__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Request * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Request * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_GetResult_Request__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Request * input,
  iris_interfaces__action__PathCoverageController_GetResult_Request * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__init(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__fini(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence *
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__destroy(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * input,
  iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_GetResult_Response
 * )) before or use
 * iris_interfaces__action__PathCoverageController_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Response__init(iris_interfaces__action__PathCoverageController_GetResult_Response * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Response__fini(iris_interfaces__action__PathCoverageController_GetResult_Response * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_GetResult_Response *
iris_interfaces__action__PathCoverageController_GetResult_Response__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Response__destroy(iris_interfaces__action__PathCoverageController_GetResult_Response * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Response__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Response * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Response * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_GetResult_Response__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Response * input,
  iris_interfaces__action__PathCoverageController_GetResult_Response * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__init(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__fini(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence *
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__destroy(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * input,
  iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * output);

/// Initialize action/PathCoverageController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iris_interfaces__action__PathCoverageController_FeedbackMessage
 * )) before or use
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__init(iris_interfaces__action__PathCoverageController_FeedbackMessage * msg);

/// Finalize action/PathCoverageController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(iris_interfaces__action__PathCoverageController_FeedbackMessage * msg);

/// Create action/PathCoverageController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_FeedbackMessage *
iris_interfaces__action__PathCoverageController_FeedbackMessage__create();

/// Destroy action/PathCoverageController message.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_FeedbackMessage__destroy(iris_interfaces__action__PathCoverageController_FeedbackMessage * msg);

/// Check for action/PathCoverageController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__are_equal(const iris_interfaces__action__PathCoverageController_FeedbackMessage * lhs, const iris_interfaces__action__PathCoverageController_FeedbackMessage * rhs);

/// Copy a action/PathCoverageController message.
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
iris_interfaces__action__PathCoverageController_FeedbackMessage__copy(
  const iris_interfaces__action__PathCoverageController_FeedbackMessage * input,
  iris_interfaces__action__PathCoverageController_FeedbackMessage * output);

/// Initialize array of action/PathCoverageController messages.
/**
 * It allocates the memory for the number of elements and calls
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__init(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__fini(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array);

/// Create array of action/PathCoverageController messages.
/**
 * It allocates the memory for the array and calls
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence *
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PathCoverageController messages.
/**
 * It calls
 * iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
void
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__destroy(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array);

/// Check for action/PathCoverageController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_iris_interfaces
bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * lhs, const iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/PathCoverageController messages.
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
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * input,
  iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRIS_INTERFACES__ACTION__DETAIL__PATH_COVERAGE_CONTROLLER__FUNCTIONS_H_
