// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:srv/A2Command.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/srv/detail/a2_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
iris_interfaces__srv__A2Command_Request__init(iris_interfaces__srv__A2Command_Request * msg)
{
  if (!msg) {
    return false;
  }
  // brush_command
  // vacuum_command
  return true;
}

void
iris_interfaces__srv__A2Command_Request__fini(iris_interfaces__srv__A2Command_Request * msg)
{
  if (!msg) {
    return;
  }
  // brush_command
  // vacuum_command
}

bool
iris_interfaces__srv__A2Command_Request__are_equal(const iris_interfaces__srv__A2Command_Request * lhs, const iris_interfaces__srv__A2Command_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brush_command
  if (lhs->brush_command != rhs->brush_command) {
    return false;
  }
  // vacuum_command
  if (lhs->vacuum_command != rhs->vacuum_command) {
    return false;
  }
  return true;
}

bool
iris_interfaces__srv__A2Command_Request__copy(
  const iris_interfaces__srv__A2Command_Request * input,
  iris_interfaces__srv__A2Command_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // brush_command
  output->brush_command = input->brush_command;
  // vacuum_command
  output->vacuum_command = input->vacuum_command;
  return true;
}

iris_interfaces__srv__A2Command_Request *
iris_interfaces__srv__A2Command_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__A2Command_Request * msg = (iris_interfaces__srv__A2Command_Request *)allocator.allocate(sizeof(iris_interfaces__srv__A2Command_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__srv__A2Command_Request));
  bool success = iris_interfaces__srv__A2Command_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__srv__A2Command_Request__destroy(iris_interfaces__srv__A2Command_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__srv__A2Command_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__srv__A2Command_Request__Sequence__init(iris_interfaces__srv__A2Command_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__A2Command_Request * data = NULL;

  if (size) {
    data = (iris_interfaces__srv__A2Command_Request *)allocator.zero_allocate(size, sizeof(iris_interfaces__srv__A2Command_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__srv__A2Command_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__srv__A2Command_Request__fini(&data[i - 1]);
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
iris_interfaces__srv__A2Command_Request__Sequence__fini(iris_interfaces__srv__A2Command_Request__Sequence * array)
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
      iris_interfaces__srv__A2Command_Request__fini(&array->data[i]);
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

iris_interfaces__srv__A2Command_Request__Sequence *
iris_interfaces__srv__A2Command_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__A2Command_Request__Sequence * array = (iris_interfaces__srv__A2Command_Request__Sequence *)allocator.allocate(sizeof(iris_interfaces__srv__A2Command_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__srv__A2Command_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__srv__A2Command_Request__Sequence__destroy(iris_interfaces__srv__A2Command_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__srv__A2Command_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__srv__A2Command_Request__Sequence__are_equal(const iris_interfaces__srv__A2Command_Request__Sequence * lhs, const iris_interfaces__srv__A2Command_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__srv__A2Command_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__srv__A2Command_Request__Sequence__copy(
  const iris_interfaces__srv__A2Command_Request__Sequence * input,
  iris_interfaces__srv__A2Command_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__srv__A2Command_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__srv__A2Command_Request * data =
      (iris_interfaces__srv__A2Command_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__srv__A2Command_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__srv__A2Command_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__srv__A2Command_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
iris_interfaces__srv__A2Command_Response__init(iris_interfaces__srv__A2Command_Response * msg)
{
  if (!msg) {
    return false;
  }
  // brush_status
  // vacuum_status
  return true;
}

void
iris_interfaces__srv__A2Command_Response__fini(iris_interfaces__srv__A2Command_Response * msg)
{
  if (!msg) {
    return;
  }
  // brush_status
  // vacuum_status
}

bool
iris_interfaces__srv__A2Command_Response__are_equal(const iris_interfaces__srv__A2Command_Response * lhs, const iris_interfaces__srv__A2Command_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brush_status
  if (lhs->brush_status != rhs->brush_status) {
    return false;
  }
  // vacuum_status
  if (lhs->vacuum_status != rhs->vacuum_status) {
    return false;
  }
  return true;
}

bool
iris_interfaces__srv__A2Command_Response__copy(
  const iris_interfaces__srv__A2Command_Response * input,
  iris_interfaces__srv__A2Command_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // brush_status
  output->brush_status = input->brush_status;
  // vacuum_status
  output->vacuum_status = input->vacuum_status;
  return true;
}

iris_interfaces__srv__A2Command_Response *
iris_interfaces__srv__A2Command_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__A2Command_Response * msg = (iris_interfaces__srv__A2Command_Response *)allocator.allocate(sizeof(iris_interfaces__srv__A2Command_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__srv__A2Command_Response));
  bool success = iris_interfaces__srv__A2Command_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__srv__A2Command_Response__destroy(iris_interfaces__srv__A2Command_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__srv__A2Command_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__srv__A2Command_Response__Sequence__init(iris_interfaces__srv__A2Command_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__A2Command_Response * data = NULL;

  if (size) {
    data = (iris_interfaces__srv__A2Command_Response *)allocator.zero_allocate(size, sizeof(iris_interfaces__srv__A2Command_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__srv__A2Command_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__srv__A2Command_Response__fini(&data[i - 1]);
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
iris_interfaces__srv__A2Command_Response__Sequence__fini(iris_interfaces__srv__A2Command_Response__Sequence * array)
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
      iris_interfaces__srv__A2Command_Response__fini(&array->data[i]);
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

iris_interfaces__srv__A2Command_Response__Sequence *
iris_interfaces__srv__A2Command_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__srv__A2Command_Response__Sequence * array = (iris_interfaces__srv__A2Command_Response__Sequence *)allocator.allocate(sizeof(iris_interfaces__srv__A2Command_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__srv__A2Command_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__srv__A2Command_Response__Sequence__destroy(iris_interfaces__srv__A2Command_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__srv__A2Command_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__srv__A2Command_Response__Sequence__are_equal(const iris_interfaces__srv__A2Command_Response__Sequence * lhs, const iris_interfaces__srv__A2Command_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__srv__A2Command_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__srv__A2Command_Response__Sequence__copy(
  const iris_interfaces__srv__A2Command_Response__Sequence * input,
  iris_interfaces__srv__A2Command_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__srv__A2Command_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__srv__A2Command_Response * data =
      (iris_interfaces__srv__A2Command_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__srv__A2Command_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__srv__A2Command_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__srv__A2Command_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
