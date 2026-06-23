// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/NavigationMode.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/navigation_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
iris_interfaces__msg__NavigationMode__init(iris_interfaces__msg__NavigationMode * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    iris_interfaces__msg__NavigationMode__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__msg__NavigationMode__fini(iris_interfaces__msg__NavigationMode * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
}

bool
iris_interfaces__msg__NavigationMode__are_equal(const iris_interfaces__msg__NavigationMode * lhs, const iris_interfaces__msg__NavigationMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__NavigationMode__copy(
  const iris_interfaces__msg__NavigationMode * input,
  iris_interfaces__msg__NavigationMode * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__NavigationMode *
iris_interfaces__msg__NavigationMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__NavigationMode * msg = (iris_interfaces__msg__NavigationMode *)allocator.allocate(sizeof(iris_interfaces__msg__NavigationMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__NavigationMode));
  bool success = iris_interfaces__msg__NavigationMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__NavigationMode__destroy(iris_interfaces__msg__NavigationMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__NavigationMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__NavigationMode__Sequence__init(iris_interfaces__msg__NavigationMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__NavigationMode * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__NavigationMode *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__NavigationMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__NavigationMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__NavigationMode__fini(&data[i - 1]);
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
iris_interfaces__msg__NavigationMode__Sequence__fini(iris_interfaces__msg__NavigationMode__Sequence * array)
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
      iris_interfaces__msg__NavigationMode__fini(&array->data[i]);
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

iris_interfaces__msg__NavigationMode__Sequence *
iris_interfaces__msg__NavigationMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__NavigationMode__Sequence * array = (iris_interfaces__msg__NavigationMode__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__NavigationMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__NavigationMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__NavigationMode__Sequence__destroy(iris_interfaces__msg__NavigationMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__NavigationMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__NavigationMode__Sequence__are_equal(const iris_interfaces__msg__NavigationMode__Sequence * lhs, const iris_interfaces__msg__NavigationMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__NavigationMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__NavigationMode__Sequence__copy(
  const iris_interfaces__msg__NavigationMode__Sequence * input,
  iris_interfaces__msg__NavigationMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__NavigationMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__NavigationMode * data =
      (iris_interfaces__msg__NavigationMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__NavigationMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__NavigationMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__NavigationMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
