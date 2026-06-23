// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/WheelCommandSpeed.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/wheel_command_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iris_interfaces__msg__WheelCommandSpeed__init(iris_interfaces__msg__WheelCommandSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // left_wheel
  // right_wheel
  return true;
}

void
iris_interfaces__msg__WheelCommandSpeed__fini(iris_interfaces__msg__WheelCommandSpeed * msg)
{
  if (!msg) {
    return;
  }
  // left_wheel
  // right_wheel
}

bool
iris_interfaces__msg__WheelCommandSpeed__are_equal(const iris_interfaces__msg__WheelCommandSpeed * lhs, const iris_interfaces__msg__WheelCommandSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_wheel
  if (lhs->left_wheel != rhs->left_wheel) {
    return false;
  }
  // right_wheel
  if (lhs->right_wheel != rhs->right_wheel) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__WheelCommandSpeed__copy(
  const iris_interfaces__msg__WheelCommandSpeed * input,
  iris_interfaces__msg__WheelCommandSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // left_wheel
  output->left_wheel = input->left_wheel;
  // right_wheel
  output->right_wheel = input->right_wheel;
  return true;
}

iris_interfaces__msg__WheelCommandSpeed *
iris_interfaces__msg__WheelCommandSpeed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WheelCommandSpeed * msg = (iris_interfaces__msg__WheelCommandSpeed *)allocator.allocate(sizeof(iris_interfaces__msg__WheelCommandSpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__WheelCommandSpeed));
  bool success = iris_interfaces__msg__WheelCommandSpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__WheelCommandSpeed__destroy(iris_interfaces__msg__WheelCommandSpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__WheelCommandSpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__WheelCommandSpeed__Sequence__init(iris_interfaces__msg__WheelCommandSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WheelCommandSpeed * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__WheelCommandSpeed *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__WheelCommandSpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__WheelCommandSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__WheelCommandSpeed__fini(&data[i - 1]);
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
iris_interfaces__msg__WheelCommandSpeed__Sequence__fini(iris_interfaces__msg__WheelCommandSpeed__Sequence * array)
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
      iris_interfaces__msg__WheelCommandSpeed__fini(&array->data[i]);
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

iris_interfaces__msg__WheelCommandSpeed__Sequence *
iris_interfaces__msg__WheelCommandSpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WheelCommandSpeed__Sequence * array = (iris_interfaces__msg__WheelCommandSpeed__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__WheelCommandSpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__WheelCommandSpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__WheelCommandSpeed__Sequence__destroy(iris_interfaces__msg__WheelCommandSpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__WheelCommandSpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__WheelCommandSpeed__Sequence__are_equal(const iris_interfaces__msg__WheelCommandSpeed__Sequence * lhs, const iris_interfaces__msg__WheelCommandSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__WheelCommandSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__WheelCommandSpeed__Sequence__copy(
  const iris_interfaces__msg__WheelCommandSpeed__Sequence * input,
  iris_interfaces__msg__WheelCommandSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__WheelCommandSpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__WheelCommandSpeed * data =
      (iris_interfaces__msg__WheelCommandSpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__WheelCommandSpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__WheelCommandSpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__WheelCommandSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
