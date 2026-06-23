// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:srv/UpdateMotorControllerParameters.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/srv/detail/update_motor_controller_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Request__init(iris_interfaces__srv__UpdateMotorControllerParameters_Request * msg)
{
  if (!msg) {
    return false;
  }
  // save_existing_params
  return true;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Request__fini(iris_interfaces__srv__UpdateMotorControllerParameters_Request * msg)
{
  if (!msg) {
    return;
  }
  // save_existing_params
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Request__are_equal(const iris_interfaces__srv__UpdateMotorControllerParameters_Request * lhs, const iris_interfaces__srv__UpdateMotorControllerParameters_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // save_existing_params
  if (lhs->save_existing_params != rhs->save_existing_params) {
    return false;
  }
  return true;
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Request__copy(
  const iris_interfaces__srv__UpdateMotorControllerParameters_Request * input,
  iris_interfaces__srv__UpdateMotorControllerParameters_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // save_existing_params
  output->save_existing_params = input->save_existing_params;
  return true;
}

iris_interfaces__srv__UpdateMotorControllerParameters_Request *
iris_interfaces__srv__UpdateMotorControllerParameters_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__UpdateMotorControllerParameters_Request * msg = (iris_interfaces__srv__UpdateMotorControllerParameters_Request *)allocator.allocate(sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Request));
  bool success = iris_interfaces__srv__UpdateMotorControllerParameters_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Request__destroy(iris_interfaces__srv__UpdateMotorControllerParameters_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__srv__UpdateMotorControllerParameters_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__init(iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__UpdateMotorControllerParameters_Request * data = NULL;

  if (size) {
    data = (iris_interfaces__srv__UpdateMotorControllerParameters_Request *)allocator.zero_allocate(size, sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__srv__UpdateMotorControllerParameters_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__srv__UpdateMotorControllerParameters_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__fini(iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iris_interfaces__srv__UpdateMotorControllerParameters_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence *
iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * array = (iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence *)allocator.allocate(sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__destroy(iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__are_equal(const iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * lhs, const iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__srv__UpdateMotorControllerParameters_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence__copy(
  const iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * input,
  iris_interfaces__srv__UpdateMotorControllerParameters_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__srv__UpdateMotorControllerParameters_Request * data =
      (iris_interfaces__srv__UpdateMotorControllerParameters_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__srv__UpdateMotorControllerParameters_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__srv__UpdateMotorControllerParameters_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__srv__UpdateMotorControllerParameters_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Response__init(iris_interfaces__srv__UpdateMotorControllerParameters_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    iris_interfaces__srv__UpdateMotorControllerParameters_Response__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Response__fini(iris_interfaces__srv__UpdateMotorControllerParameters_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Response__are_equal(const iris_interfaces__srv__UpdateMotorControllerParameters_Response * lhs, const iris_interfaces__srv__UpdateMotorControllerParameters_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Response__copy(
  const iris_interfaces__srv__UpdateMotorControllerParameters_Response * input,
  iris_interfaces__srv__UpdateMotorControllerParameters_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

iris_interfaces__srv__UpdateMotorControllerParameters_Response *
iris_interfaces__srv__UpdateMotorControllerParameters_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__UpdateMotorControllerParameters_Response * msg = (iris_interfaces__srv__UpdateMotorControllerParameters_Response *)allocator.allocate(sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Response));
  bool success = iris_interfaces__srv__UpdateMotorControllerParameters_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Response__destroy(iris_interfaces__srv__UpdateMotorControllerParameters_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__srv__UpdateMotorControllerParameters_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__init(iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__UpdateMotorControllerParameters_Response * data = NULL;

  if (size) {
    data = (iris_interfaces__srv__UpdateMotorControllerParameters_Response *)allocator.zero_allocate(size, sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__srv__UpdateMotorControllerParameters_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__srv__UpdateMotorControllerParameters_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__fini(iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iris_interfaces__srv__UpdateMotorControllerParameters_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence *
iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * array = (iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence *)allocator.allocate(sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__destroy(iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__are_equal(const iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * lhs, const iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__srv__UpdateMotorControllerParameters_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence__copy(
  const iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * input,
  iris_interfaces__srv__UpdateMotorControllerParameters_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__srv__UpdateMotorControllerParameters_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__srv__UpdateMotorControllerParameters_Response * data =
      (iris_interfaces__srv__UpdateMotorControllerParameters_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__srv__UpdateMotorControllerParameters_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__srv__UpdateMotorControllerParameters_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__srv__UpdateMotorControllerParameters_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
