// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/actuator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iris_interfaces__msg__ActuatorStatus__init(iris_interfaces__msg__ActuatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // moving_down
  // hold_down
  // moving_up
  // hold_up
  return true;
}

void
iris_interfaces__msg__ActuatorStatus__fini(iris_interfaces__msg__ActuatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // moving_down
  // hold_down
  // moving_up
  // hold_up
}

bool
iris_interfaces__msg__ActuatorStatus__are_equal(const iris_interfaces__msg__ActuatorStatus * lhs, const iris_interfaces__msg__ActuatorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // moving_down
  if (lhs->moving_down != rhs->moving_down) {
    return false;
  }
  // hold_down
  if (lhs->hold_down != rhs->hold_down) {
    return false;
  }
  // moving_up
  if (lhs->moving_up != rhs->moving_up) {
    return false;
  }
  // hold_up
  if (lhs->hold_up != rhs->hold_up) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__ActuatorStatus__copy(
  const iris_interfaces__msg__ActuatorStatus * input,
  iris_interfaces__msg__ActuatorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // moving_down
  output->moving_down = input->moving_down;
  // hold_down
  output->hold_down = input->hold_down;
  // moving_up
  output->moving_up = input->moving_up;
  // hold_up
  output->hold_up = input->hold_up;
  return true;
}

iris_interfaces__msg__ActuatorStatus *
iris_interfaces__msg__ActuatorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__ActuatorStatus * msg = (iris_interfaces__msg__ActuatorStatus *)allocator.allocate(sizeof(iris_interfaces__msg__ActuatorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__ActuatorStatus));
  bool success = iris_interfaces__msg__ActuatorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__ActuatorStatus__destroy(iris_interfaces__msg__ActuatorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__ActuatorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__ActuatorStatus__Sequence__init(iris_interfaces__msg__ActuatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__ActuatorStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__ActuatorStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__ActuatorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__ActuatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__ActuatorStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__ActuatorStatus__Sequence__fini(iris_interfaces__msg__ActuatorStatus__Sequence * array)
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
      iris_interfaces__msg__ActuatorStatus__fini(&array->data[i]);
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

iris_interfaces__msg__ActuatorStatus__Sequence *
iris_interfaces__msg__ActuatorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__ActuatorStatus__Sequence * array = (iris_interfaces__msg__ActuatorStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__ActuatorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__ActuatorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__ActuatorStatus__Sequence__destroy(iris_interfaces__msg__ActuatorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__ActuatorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__ActuatorStatus__Sequence__are_equal(const iris_interfaces__msg__ActuatorStatus__Sequence * lhs, const iris_interfaces__msg__ActuatorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__ActuatorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__ActuatorStatus__Sequence__copy(
  const iris_interfaces__msg__ActuatorStatus__Sequence * input,
  iris_interfaces__msg__ActuatorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__ActuatorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__ActuatorStatus * data =
      (iris_interfaces__msg__ActuatorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__ActuatorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__ActuatorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__ActuatorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
