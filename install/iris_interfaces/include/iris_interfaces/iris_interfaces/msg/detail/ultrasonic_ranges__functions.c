// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/ultrasonic_ranges__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ultrasonic_1`
// Member `ultrasonic_2`
// Member `ultrasonic_3`
// Member `ultrasonic_4`
#include "sensor_msgs/msg/detail/range__functions.h"

bool
iris_interfaces__msg__UltrasonicRanges__init(iris_interfaces__msg__UltrasonicRanges * msg)
{
  if (!msg) {
    return false;
  }
  // ultrasonic_1
  if (!sensor_msgs__msg__Range__init(&msg->ultrasonic_1)) {
    iris_interfaces__msg__UltrasonicRanges__fini(msg);
    return false;
  }
  // ultrasonic_2
  if (!sensor_msgs__msg__Range__init(&msg->ultrasonic_2)) {
    iris_interfaces__msg__UltrasonicRanges__fini(msg);
    return false;
  }
  // ultrasonic_3
  if (!sensor_msgs__msg__Range__init(&msg->ultrasonic_3)) {
    iris_interfaces__msg__UltrasonicRanges__fini(msg);
    return false;
  }
  // ultrasonic_4
  if (!sensor_msgs__msg__Range__init(&msg->ultrasonic_4)) {
    iris_interfaces__msg__UltrasonicRanges__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__msg__UltrasonicRanges__fini(iris_interfaces__msg__UltrasonicRanges * msg)
{
  if (!msg) {
    return;
  }
  // ultrasonic_1
  sensor_msgs__msg__Range__fini(&msg->ultrasonic_1);
  // ultrasonic_2
  sensor_msgs__msg__Range__fini(&msg->ultrasonic_2);
  // ultrasonic_3
  sensor_msgs__msg__Range__fini(&msg->ultrasonic_3);
  // ultrasonic_4
  sensor_msgs__msg__Range__fini(&msg->ultrasonic_4);
}

bool
iris_interfaces__msg__UltrasonicRanges__are_equal(const iris_interfaces__msg__UltrasonicRanges * lhs, const iris_interfaces__msg__UltrasonicRanges * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ultrasonic_1
  if (!sensor_msgs__msg__Range__are_equal(
      &(lhs->ultrasonic_1), &(rhs->ultrasonic_1)))
  {
    return false;
  }
  // ultrasonic_2
  if (!sensor_msgs__msg__Range__are_equal(
      &(lhs->ultrasonic_2), &(rhs->ultrasonic_2)))
  {
    return false;
  }
  // ultrasonic_3
  if (!sensor_msgs__msg__Range__are_equal(
      &(lhs->ultrasonic_3), &(rhs->ultrasonic_3)))
  {
    return false;
  }
  // ultrasonic_4
  if (!sensor_msgs__msg__Range__are_equal(
      &(lhs->ultrasonic_4), &(rhs->ultrasonic_4)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__UltrasonicRanges__copy(
  const iris_interfaces__msg__UltrasonicRanges * input,
  iris_interfaces__msg__UltrasonicRanges * output)
{
  if (!input || !output) {
    return false;
  }
  // ultrasonic_1
  if (!sensor_msgs__msg__Range__copy(
      &(input->ultrasonic_1), &(output->ultrasonic_1)))
  {
    return false;
  }
  // ultrasonic_2
  if (!sensor_msgs__msg__Range__copy(
      &(input->ultrasonic_2), &(output->ultrasonic_2)))
  {
    return false;
  }
  // ultrasonic_3
  if (!sensor_msgs__msg__Range__copy(
      &(input->ultrasonic_3), &(output->ultrasonic_3)))
  {
    return false;
  }
  // ultrasonic_4
  if (!sensor_msgs__msg__Range__copy(
      &(input->ultrasonic_4), &(output->ultrasonic_4)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__UltrasonicRanges *
iris_interfaces__msg__UltrasonicRanges__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__UltrasonicRanges * msg = (iris_interfaces__msg__UltrasonicRanges *)allocator.allocate(sizeof(iris_interfaces__msg__UltrasonicRanges), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__UltrasonicRanges));
  bool success = iris_interfaces__msg__UltrasonicRanges__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__UltrasonicRanges__destroy(iris_interfaces__msg__UltrasonicRanges * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__UltrasonicRanges__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__UltrasonicRanges__Sequence__init(iris_interfaces__msg__UltrasonicRanges__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__UltrasonicRanges * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__UltrasonicRanges *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__UltrasonicRanges), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__UltrasonicRanges__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__UltrasonicRanges__fini(&data[i - 1]);
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
iris_interfaces__msg__UltrasonicRanges__Sequence__fini(iris_interfaces__msg__UltrasonicRanges__Sequence * array)
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
      iris_interfaces__msg__UltrasonicRanges__fini(&array->data[i]);
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

iris_interfaces__msg__UltrasonicRanges__Sequence *
iris_interfaces__msg__UltrasonicRanges__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__UltrasonicRanges__Sequence * array = (iris_interfaces__msg__UltrasonicRanges__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__UltrasonicRanges__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__UltrasonicRanges__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__UltrasonicRanges__Sequence__destroy(iris_interfaces__msg__UltrasonicRanges__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__UltrasonicRanges__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__UltrasonicRanges__Sequence__are_equal(const iris_interfaces__msg__UltrasonicRanges__Sequence * lhs, const iris_interfaces__msg__UltrasonicRanges__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__UltrasonicRanges__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__UltrasonicRanges__Sequence__copy(
  const iris_interfaces__msg__UltrasonicRanges__Sequence * input,
  iris_interfaces__msg__UltrasonicRanges__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__UltrasonicRanges);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__UltrasonicRanges * data =
      (iris_interfaces__msg__UltrasonicRanges *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__UltrasonicRanges__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__UltrasonicRanges__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__UltrasonicRanges__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
