// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/VacuumFaults.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/vacuum_faults__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iris_interfaces__msg__VacuumFaults__init(iris_interfaces__msg__VacuumFaults * msg)
{
  if (!msg) {
    return false;
  }
  // squeeze_actuator_digital_fault
  // drive_brush_current_digital_fault
  // overcurrent_analog_fault
  // undercurrent_analog_fault
  return true;
}

void
iris_interfaces__msg__VacuumFaults__fini(iris_interfaces__msg__VacuumFaults * msg)
{
  if (!msg) {
    return;
  }
  // squeeze_actuator_digital_fault
  // drive_brush_current_digital_fault
  // overcurrent_analog_fault
  // undercurrent_analog_fault
}

bool
iris_interfaces__msg__VacuumFaults__are_equal(const iris_interfaces__msg__VacuumFaults * lhs, const iris_interfaces__msg__VacuumFaults * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // squeeze_actuator_digital_fault
  if (lhs->squeeze_actuator_digital_fault != rhs->squeeze_actuator_digital_fault) {
    return false;
  }
  // drive_brush_current_digital_fault
  if (lhs->drive_brush_current_digital_fault != rhs->drive_brush_current_digital_fault) {
    return false;
  }
  // overcurrent_analog_fault
  if (lhs->overcurrent_analog_fault != rhs->overcurrent_analog_fault) {
    return false;
  }
  // undercurrent_analog_fault
  if (lhs->undercurrent_analog_fault != rhs->undercurrent_analog_fault) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__VacuumFaults__copy(
  const iris_interfaces__msg__VacuumFaults * input,
  iris_interfaces__msg__VacuumFaults * output)
{
  if (!input || !output) {
    return false;
  }
  // squeeze_actuator_digital_fault
  output->squeeze_actuator_digital_fault = input->squeeze_actuator_digital_fault;
  // drive_brush_current_digital_fault
  output->drive_brush_current_digital_fault = input->drive_brush_current_digital_fault;
  // overcurrent_analog_fault
  output->overcurrent_analog_fault = input->overcurrent_analog_fault;
  // undercurrent_analog_fault
  output->undercurrent_analog_fault = input->undercurrent_analog_fault;
  return true;
}

iris_interfaces__msg__VacuumFaults *
iris_interfaces__msg__VacuumFaults__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__VacuumFaults * msg = (iris_interfaces__msg__VacuumFaults *)allocator.allocate(sizeof(iris_interfaces__msg__VacuumFaults), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__VacuumFaults));
  bool success = iris_interfaces__msg__VacuumFaults__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__VacuumFaults__destroy(iris_interfaces__msg__VacuumFaults * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__VacuumFaults__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__VacuumFaults__Sequence__init(iris_interfaces__msg__VacuumFaults__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__VacuumFaults * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__VacuumFaults *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__VacuumFaults), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__VacuumFaults__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__VacuumFaults__fini(&data[i - 1]);
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
iris_interfaces__msg__VacuumFaults__Sequence__fini(iris_interfaces__msg__VacuumFaults__Sequence * array)
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
      iris_interfaces__msg__VacuumFaults__fini(&array->data[i]);
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

iris_interfaces__msg__VacuumFaults__Sequence *
iris_interfaces__msg__VacuumFaults__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__VacuumFaults__Sequence * array = (iris_interfaces__msg__VacuumFaults__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__VacuumFaults__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__VacuumFaults__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__VacuumFaults__Sequence__destroy(iris_interfaces__msg__VacuumFaults__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__VacuumFaults__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__VacuumFaults__Sequence__are_equal(const iris_interfaces__msg__VacuumFaults__Sequence * lhs, const iris_interfaces__msg__VacuumFaults__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__VacuumFaults__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__VacuumFaults__Sequence__copy(
  const iris_interfaces__msg__VacuumFaults__Sequence * input,
  iris_interfaces__msg__VacuumFaults__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__VacuumFaults);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__VacuumFaults * data =
      (iris_interfaces__msg__VacuumFaults *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__VacuumFaults__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__VacuumFaults__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__VacuumFaults__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
