// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/LedControl.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/led_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iris_interfaces__msg__LedControl__init(iris_interfaces__msg__LedControl * msg)
{
  if (!msg) {
    return false;
  }
  // led_command
  // left_indicator
  // right_indicator
  return true;
}

void
iris_interfaces__msg__LedControl__fini(iris_interfaces__msg__LedControl * msg)
{
  if (!msg) {
    return;
  }
  // led_command
  // left_indicator
  // right_indicator
}

bool
iris_interfaces__msg__LedControl__are_equal(const iris_interfaces__msg__LedControl * lhs, const iris_interfaces__msg__LedControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_command
  if (lhs->led_command != rhs->led_command) {
    return false;
  }
  // left_indicator
  if (lhs->left_indicator != rhs->left_indicator) {
    return false;
  }
  // right_indicator
  if (lhs->right_indicator != rhs->right_indicator) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__LedControl__copy(
  const iris_interfaces__msg__LedControl * input,
  iris_interfaces__msg__LedControl * output)
{
  if (!input || !output) {
    return false;
  }
  // led_command
  output->led_command = input->led_command;
  // left_indicator
  output->left_indicator = input->left_indicator;
  // right_indicator
  output->right_indicator = input->right_indicator;
  return true;
}

iris_interfaces__msg__LedControl *
iris_interfaces__msg__LedControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__LedControl * msg = (iris_interfaces__msg__LedControl *)allocator.allocate(sizeof(iris_interfaces__msg__LedControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__LedControl));
  bool success = iris_interfaces__msg__LedControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__LedControl__destroy(iris_interfaces__msg__LedControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__LedControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__LedControl__Sequence__init(iris_interfaces__msg__LedControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__LedControl * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__LedControl *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__LedControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__LedControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__LedControl__fini(&data[i - 1]);
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
iris_interfaces__msg__LedControl__Sequence__fini(iris_interfaces__msg__LedControl__Sequence * array)
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
      iris_interfaces__msg__LedControl__fini(&array->data[i]);
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

iris_interfaces__msg__LedControl__Sequence *
iris_interfaces__msg__LedControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__LedControl__Sequence * array = (iris_interfaces__msg__LedControl__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__LedControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__LedControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__LedControl__Sequence__destroy(iris_interfaces__msg__LedControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__LedControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__LedControl__Sequence__are_equal(const iris_interfaces__msg__LedControl__Sequence * lhs, const iris_interfaces__msg__LedControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__LedControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__LedControl__Sequence__copy(
  const iris_interfaces__msg__LedControl__Sequence * input,
  iris_interfaces__msg__LedControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__LedControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__LedControl * data =
      (iris_interfaces__msg__LedControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__LedControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__LedControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__LedControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
