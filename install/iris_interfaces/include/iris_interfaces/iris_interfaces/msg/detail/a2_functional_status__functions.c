// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/A2FunctionalStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/a2_functional_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `brush`
#include "iris_interfaces/msg/detail/brush_status__functions.h"
// Member `vacuum`
#include "iris_interfaces/msg/detail/vacuum_status__functions.h"

bool
iris_interfaces__msg__A2FunctionalStatus__init(iris_interfaces__msg__A2FunctionalStatus * msg)
{
  if (!msg) {
    return false;
  }
  // brush
  if (!iris_interfaces__msg__BrushStatus__init(&msg->brush)) {
    iris_interfaces__msg__A2FunctionalStatus__fini(msg);
    return false;
  }
  // vacuum
  if (!iris_interfaces__msg__VacuumStatus__init(&msg->vacuum)) {
    iris_interfaces__msg__A2FunctionalStatus__fini(msg);
    return false;
  }
  // water_pump
  // detergent_pump
  return true;
}

void
iris_interfaces__msg__A2FunctionalStatus__fini(iris_interfaces__msg__A2FunctionalStatus * msg)
{
  if (!msg) {
    return;
  }
  // brush
  iris_interfaces__msg__BrushStatus__fini(&msg->brush);
  // vacuum
  iris_interfaces__msg__VacuumStatus__fini(&msg->vacuum);
  // water_pump
  // detergent_pump
}

bool
iris_interfaces__msg__A2FunctionalStatus__are_equal(const iris_interfaces__msg__A2FunctionalStatus * lhs, const iris_interfaces__msg__A2FunctionalStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brush
  if (!iris_interfaces__msg__BrushStatus__are_equal(
      &(lhs->brush), &(rhs->brush)))
  {
    return false;
  }
  // vacuum
  if (!iris_interfaces__msg__VacuumStatus__are_equal(
      &(lhs->vacuum), &(rhs->vacuum)))
  {
    return false;
  }
  // water_pump
  if (lhs->water_pump != rhs->water_pump) {
    return false;
  }
  // detergent_pump
  if (lhs->detergent_pump != rhs->detergent_pump) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__A2FunctionalStatus__copy(
  const iris_interfaces__msg__A2FunctionalStatus * input,
  iris_interfaces__msg__A2FunctionalStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // brush
  if (!iris_interfaces__msg__BrushStatus__copy(
      &(input->brush), &(output->brush)))
  {
    return false;
  }
  // vacuum
  if (!iris_interfaces__msg__VacuumStatus__copy(
      &(input->vacuum), &(output->vacuum)))
  {
    return false;
  }
  // water_pump
  output->water_pump = input->water_pump;
  // detergent_pump
  output->detergent_pump = input->detergent_pump;
  return true;
}

iris_interfaces__msg__A2FunctionalStatus *
iris_interfaces__msg__A2FunctionalStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__A2FunctionalStatus * msg = (iris_interfaces__msg__A2FunctionalStatus *)allocator.allocate(sizeof(iris_interfaces__msg__A2FunctionalStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__A2FunctionalStatus));
  bool success = iris_interfaces__msg__A2FunctionalStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__A2FunctionalStatus__destroy(iris_interfaces__msg__A2FunctionalStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__A2FunctionalStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__A2FunctionalStatus__Sequence__init(iris_interfaces__msg__A2FunctionalStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__A2FunctionalStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__A2FunctionalStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__A2FunctionalStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__A2FunctionalStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__A2FunctionalStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__A2FunctionalStatus__Sequence__fini(iris_interfaces__msg__A2FunctionalStatus__Sequence * array)
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
      iris_interfaces__msg__A2FunctionalStatus__fini(&array->data[i]);
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

iris_interfaces__msg__A2FunctionalStatus__Sequence *
iris_interfaces__msg__A2FunctionalStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__A2FunctionalStatus__Sequence * array = (iris_interfaces__msg__A2FunctionalStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__A2FunctionalStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__A2FunctionalStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__A2FunctionalStatus__Sequence__destroy(iris_interfaces__msg__A2FunctionalStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__A2FunctionalStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__A2FunctionalStatus__Sequence__are_equal(const iris_interfaces__msg__A2FunctionalStatus__Sequence * lhs, const iris_interfaces__msg__A2FunctionalStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__A2FunctionalStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__A2FunctionalStatus__Sequence__copy(
  const iris_interfaces__msg__A2FunctionalStatus__Sequence * input,
  iris_interfaces__msg__A2FunctionalStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__A2FunctionalStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__A2FunctionalStatus * data =
      (iris_interfaces__msg__A2FunctionalStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__A2FunctionalStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__A2FunctionalStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__A2FunctionalStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
