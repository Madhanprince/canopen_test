// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/WaterTankLevels.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/water_tank_levels__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iris_interfaces__msg__WaterTankLevels__init(iris_interfaces__msg__WaterTankLevels * msg)
{
  if (!msg) {
    return false;
  }
  // fresh_water_tank_level
  // dirty_water_tank_level
  return true;
}

void
iris_interfaces__msg__WaterTankLevels__fini(iris_interfaces__msg__WaterTankLevels * msg)
{
  if (!msg) {
    return;
  }
  // fresh_water_tank_level
  // dirty_water_tank_level
}

bool
iris_interfaces__msg__WaterTankLevels__are_equal(const iris_interfaces__msg__WaterTankLevels * lhs, const iris_interfaces__msg__WaterTankLevels * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fresh_water_tank_level
  if (lhs->fresh_water_tank_level != rhs->fresh_water_tank_level) {
    return false;
  }
  // dirty_water_tank_level
  if (lhs->dirty_water_tank_level != rhs->dirty_water_tank_level) {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__WaterTankLevels__copy(
  const iris_interfaces__msg__WaterTankLevels * input,
  iris_interfaces__msg__WaterTankLevels * output)
{
  if (!input || !output) {
    return false;
  }
  // fresh_water_tank_level
  output->fresh_water_tank_level = input->fresh_water_tank_level;
  // dirty_water_tank_level
  output->dirty_water_tank_level = input->dirty_water_tank_level;
  return true;
}

iris_interfaces__msg__WaterTankLevels *
iris_interfaces__msg__WaterTankLevels__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WaterTankLevels * msg = (iris_interfaces__msg__WaterTankLevels *)allocator.allocate(sizeof(iris_interfaces__msg__WaterTankLevels), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__WaterTankLevels));
  bool success = iris_interfaces__msg__WaterTankLevels__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__WaterTankLevels__destroy(iris_interfaces__msg__WaterTankLevels * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__WaterTankLevels__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__WaterTankLevels__Sequence__init(iris_interfaces__msg__WaterTankLevels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WaterTankLevels * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__WaterTankLevels *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__WaterTankLevels), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__WaterTankLevels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__WaterTankLevels__fini(&data[i - 1]);
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
iris_interfaces__msg__WaterTankLevels__Sequence__fini(iris_interfaces__msg__WaterTankLevels__Sequence * array)
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
      iris_interfaces__msg__WaterTankLevels__fini(&array->data[i]);
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

iris_interfaces__msg__WaterTankLevels__Sequence *
iris_interfaces__msg__WaterTankLevels__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__WaterTankLevels__Sequence * array = (iris_interfaces__msg__WaterTankLevels__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__WaterTankLevels__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__WaterTankLevels__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__WaterTankLevels__Sequence__destroy(iris_interfaces__msg__WaterTankLevels__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__WaterTankLevels__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__WaterTankLevels__Sequence__are_equal(const iris_interfaces__msg__WaterTankLevels__Sequence * lhs, const iris_interfaces__msg__WaterTankLevels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__WaterTankLevels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__WaterTankLevels__Sequence__copy(
  const iris_interfaces__msg__WaterTankLevels__Sequence * input,
  iris_interfaces__msg__WaterTankLevels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__WaterTankLevels);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__WaterTankLevels * data =
      (iris_interfaces__msg__WaterTankLevels *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__WaterTankLevels__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__WaterTankLevels__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__WaterTankLevels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
