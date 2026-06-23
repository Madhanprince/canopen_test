// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/BrushStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/brush_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brush_actuator`
#include "iris_interfaces/msg/detail/actuator_status__functions.h"

bool
iris_interfaces__msg__BrushStatus__init(iris_interfaces__msg__BrushStatus * msg)
{
  if (!msg) {
    return false;
  }
  // brush_motor_command
  // brush_motor_status
  // brush_actuator
  if (!iris_interfaces__msg__ActuatorStatus__init(&msg->brush_actuator)) {
    iris_interfaces__msg__BrushStatus__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__msg__BrushStatus__fini(iris_interfaces__msg__BrushStatus * msg)
{
  if (!msg) {
    return;
  }
  // brush_motor_command
  // brush_motor_status
  // brush_actuator
  iris_interfaces__msg__ActuatorStatus__fini(&msg->brush_actuator);
}

bool
iris_interfaces__msg__BrushStatus__are_equal(const iris_interfaces__msg__BrushStatus * lhs, const iris_interfaces__msg__BrushStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brush_motor_command
  if (lhs->brush_motor_command != rhs->brush_motor_command) {
    return false;
  }
  // brush_motor_status
  if (lhs->brush_motor_status != rhs->brush_motor_status) {
    return false;
  }
  // brush_actuator
  if (!iris_interfaces__msg__ActuatorStatus__are_equal(
      &(lhs->brush_actuator), &(rhs->brush_actuator)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__BrushStatus__copy(
  const iris_interfaces__msg__BrushStatus * input,
  iris_interfaces__msg__BrushStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // brush_motor_command
  output->brush_motor_command = input->brush_motor_command;
  // brush_motor_status
  output->brush_motor_status = input->brush_motor_status;
  // brush_actuator
  if (!iris_interfaces__msg__ActuatorStatus__copy(
      &(input->brush_actuator), &(output->brush_actuator)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__BrushStatus *
iris_interfaces__msg__BrushStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__BrushStatus * msg = (iris_interfaces__msg__BrushStatus *)allocator.allocate(sizeof(iris_interfaces__msg__BrushStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__BrushStatus));
  bool success = iris_interfaces__msg__BrushStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__BrushStatus__destroy(iris_interfaces__msg__BrushStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__BrushStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__BrushStatus__Sequence__init(iris_interfaces__msg__BrushStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__BrushStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__BrushStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__BrushStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__BrushStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__BrushStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__BrushStatus__Sequence__fini(iris_interfaces__msg__BrushStatus__Sequence * array)
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
      iris_interfaces__msg__BrushStatus__fini(&array->data[i]);
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

iris_interfaces__msg__BrushStatus__Sequence *
iris_interfaces__msg__BrushStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__BrushStatus__Sequence * array = (iris_interfaces__msg__BrushStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__BrushStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__BrushStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__BrushStatus__Sequence__destroy(iris_interfaces__msg__BrushStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__BrushStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__BrushStatus__Sequence__are_equal(const iris_interfaces__msg__BrushStatus__Sequence * lhs, const iris_interfaces__msg__BrushStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__BrushStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__BrushStatus__Sequence__copy(
  const iris_interfaces__msg__BrushStatus__Sequence * input,
  iris_interfaces__msg__BrushStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__BrushStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__BrushStatus * data =
      (iris_interfaces__msg__BrushStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__BrushStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__BrushStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__BrushStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
