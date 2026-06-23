// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/WheelEncoders.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/wheel_encoders__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iris_interfaces__msg__WheelEncoders__init(iris_interfaces__msg__WheelEncoders * msg)
{
  if (!msg) {
    return false;
  }
  // left_wheel_ticks
  // right_wheel_ticks
  return true;
}

void
iris_interfaces__msg__WheelEncoders__fini(iris_interfaces__msg__WheelEncoders * msg)
{
  if (!msg) {
    return;
  }
  // left_wheel_ticks
  // right_wheel_ticks
}

bool
iris_interfaces__msg__WheelEncoders__are_equal(const iris_interfaces__msg__WheelEncoders * lhs, const iris_interfaces__msg__WheelEncoders * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_wheel_ticks
  if (lhs->left_wheel_ticks != rhs->left_wheel_ticks) {
    return false;
  }
  // right_wheel_ticks
  if (lhs->right_wheel_ticks != rhs->right_wheel_ticks) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__WheelEncoders__copy(
  const iris_interfaces__msg__WheelEncoders * input,
  iris_interfaces__msg__WheelEncoders * output)
{
  if (!input || !output) {
    return false;
  }
  // left_wheel_ticks
  output->left_wheel_ticks = input->left_wheel_ticks;
  // right_wheel_ticks
  output->right_wheel_ticks = input->right_wheel_ticks;
  return true;
}

iris_interfaces__msg__WheelEncoders *
iris_interfaces__msg__WheelEncoders__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WheelEncoders * msg = (iris_interfaces__msg__WheelEncoders *)allocator.allocate(sizeof(iris_interfaces__msg__WheelEncoders), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__WheelEncoders));
  bool success = iris_interfaces__msg__WheelEncoders__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__WheelEncoders__destroy(iris_interfaces__msg__WheelEncoders * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__WheelEncoders__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__WheelEncoders__Sequence__init(iris_interfaces__msg__WheelEncoders__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WheelEncoders * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__WheelEncoders *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__WheelEncoders), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__WheelEncoders__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__WheelEncoders__fini(&data[i - 1]);
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
iris_interfaces__msg__WheelEncoders__Sequence__fini(iris_interfaces__msg__WheelEncoders__Sequence * array)
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
      iris_interfaces__msg__WheelEncoders__fini(&array->data[i]);
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

iris_interfaces__msg__WheelEncoders__Sequence *
iris_interfaces__msg__WheelEncoders__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WheelEncoders__Sequence * array = (iris_interfaces__msg__WheelEncoders__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__WheelEncoders__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__WheelEncoders__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__WheelEncoders__Sequence__destroy(iris_interfaces__msg__WheelEncoders__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__WheelEncoders__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__WheelEncoders__Sequence__are_equal(const iris_interfaces__msg__WheelEncoders__Sequence * lhs, const iris_interfaces__msg__WheelEncoders__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__WheelEncoders__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__WheelEncoders__Sequence__copy(
  const iris_interfaces__msg__WheelEncoders__Sequence * input,
  iris_interfaces__msg__WheelEncoders__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__WheelEncoders);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__WheelEncoders * data =
      (iris_interfaces__msg__WheelEncoders *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__WheelEncoders__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__WheelEncoders__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__WheelEncoders__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
