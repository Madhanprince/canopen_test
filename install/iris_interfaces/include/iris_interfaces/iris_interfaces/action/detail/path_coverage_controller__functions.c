// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:action/PathCoverageController.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/action/detail/path_coverage_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cleaning_point`
// Member `edge_cleaning_point`
#include "nav_msgs/msg/detail/path__functions.h"

bool
iris_interfaces__action__PathCoverageController_Goal__init(iris_interfaces__action__PathCoverageController_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // resolution
  // velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocities, 0)) {
    iris_interfaces__action__PathCoverageController_Goal__fini(msg);
    return false;
  }
  // cleaning_point
  if (!nav_msgs__msg__Path__init(&msg->cleaning_point)) {
    iris_interfaces__action__PathCoverageController_Goal__fini(msg);
    return false;
  }
  // edge_cleaning_point
  if (!nav_msgs__msg__Path__init(&msg->edge_cleaning_point)) {
    iris_interfaces__action__PathCoverageController_Goal__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__action__PathCoverageController_Goal__fini(iris_interfaces__action__PathCoverageController_Goal * msg)
{
  if (!msg) {
    return;
  }
  // resolution
  // velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->velocities);
  // cleaning_point
  nav_msgs__msg__Path__fini(&msg->cleaning_point);
  // edge_cleaning_point
  nav_msgs__msg__Path__fini(&msg->edge_cleaning_point);
}

bool
iris_interfaces__action__PathCoverageController_Goal__are_equal(const iris_interfaces__action__PathCoverageController_Goal * lhs, const iris_interfaces__action__PathCoverageController_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->velocities), &(rhs->velocities)))
  {
    return false;
  }
  // cleaning_point
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->cleaning_point), &(rhs->cleaning_point)))
  {
    return false;
  }
  // edge_cleaning_point
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->edge_cleaning_point), &(rhs->edge_cleaning_point)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_Goal__copy(
  const iris_interfaces__action__PathCoverageController_Goal * input,
  iris_interfaces__action__PathCoverageController_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->velocities), &(output->velocities)))
  {
    return false;
  }
  // cleaning_point
  if (!nav_msgs__msg__Path__copy(
      &(input->cleaning_point), &(output->cleaning_point)))
  {
    return false;
  }
  // edge_cleaning_point
  if (!nav_msgs__msg__Path__copy(
      &(input->edge_cleaning_point), &(output->edge_cleaning_point)))
  {
    return false;
  }
  return true;
}

iris_interfaces__action__PathCoverageController_Goal *
iris_interfaces__action__PathCoverageController_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Goal * msg = (iris_interfaces__action__PathCoverageController_Goal *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_Goal));
  bool success = iris_interfaces__action__PathCoverageController_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_Goal__destroy(iris_interfaces__action__PathCoverageController_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_Goal__Sequence__init(iris_interfaces__action__PathCoverageController_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Goal * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_Goal *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_Goal__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_Goal__Sequence__fini(iris_interfaces__action__PathCoverageController_Goal__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_Goal__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_Goal__Sequence *
iris_interfaces__action__PathCoverageController_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Goal__Sequence * array = (iris_interfaces__action__PathCoverageController_Goal__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_Goal__Sequence__destroy(iris_interfaces__action__PathCoverageController_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_Goal__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_Goal__Sequence * lhs, const iris_interfaces__action__PathCoverageController_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_Goal__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_Goal__Sequence * input,
  iris_interfaces__action__PathCoverageController_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_Goal * data =
      (iris_interfaces__action__PathCoverageController_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
iris_interfaces__action__PathCoverageController_Result__init(iris_interfaces__action__PathCoverageController_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
iris_interfaces__action__PathCoverageController_Result__fini(iris_interfaces__action__PathCoverageController_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
iris_interfaces__action__PathCoverageController_Result__are_equal(const iris_interfaces__action__PathCoverageController_Result * lhs, const iris_interfaces__action__PathCoverageController_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_Result__copy(
  const iris_interfaces__action__PathCoverageController_Result * input,
  iris_interfaces__action__PathCoverageController_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

iris_interfaces__action__PathCoverageController_Result *
iris_interfaces__action__PathCoverageController_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Result * msg = (iris_interfaces__action__PathCoverageController_Result *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_Result));
  bool success = iris_interfaces__action__PathCoverageController_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_Result__destroy(iris_interfaces__action__PathCoverageController_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_Result__Sequence__init(iris_interfaces__action__PathCoverageController_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Result * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_Result *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_Result__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_Result__Sequence__fini(iris_interfaces__action__PathCoverageController_Result__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_Result__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_Result__Sequence *
iris_interfaces__action__PathCoverageController_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Result__Sequence * array = (iris_interfaces__action__PathCoverageController_Result__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_Result__Sequence__destroy(iris_interfaces__action__PathCoverageController_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_Result__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_Result__Sequence * lhs, const iris_interfaces__action__PathCoverageController_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_Result__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_Result__Sequence * input,
  iris_interfaces__action__PathCoverageController_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_Result * data =
      (iris_interfaces__action__PathCoverageController_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `navigation_time`
// Member `estimated_time_remaining`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
iris_interfaces__action__PathCoverageController_Feedback__init(iris_interfaces__action__PathCoverageController_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_target_pose)) {
    iris_interfaces__action__PathCoverageController_Feedback__fini(msg);
    return false;
  }
  // navigation_time
  if (!builtin_interfaces__msg__Duration__init(&msg->navigation_time)) {
    iris_interfaces__action__PathCoverageController_Feedback__fini(msg);
    return false;
  }
  // estimated_time_remaining
  if (!builtin_interfaces__msg__Duration__init(&msg->estimated_time_remaining)) {
    iris_interfaces__action__PathCoverageController_Feedback__fini(msg);
    return false;
  }
  // distance_remaining
  return true;
}

void
iris_interfaces__action__PathCoverageController_Feedback__fini(iris_interfaces__action__PathCoverageController_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->current_target_pose);
  // navigation_time
  builtin_interfaces__msg__Duration__fini(&msg->navigation_time);
  // estimated_time_remaining
  builtin_interfaces__msg__Duration__fini(&msg->estimated_time_remaining);
  // distance_remaining
}

bool
iris_interfaces__action__PathCoverageController_Feedback__are_equal(const iris_interfaces__action__PathCoverageController_Feedback * lhs, const iris_interfaces__action__PathCoverageController_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_target_pose), &(rhs->current_target_pose)))
  {
    return false;
  }
  // navigation_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->navigation_time), &(rhs->navigation_time)))
  {
    return false;
  }
  // estimated_time_remaining
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->estimated_time_remaining), &(rhs->estimated_time_remaining)))
  {
    return false;
  }
  // distance_remaining
  if (lhs->distance_remaining != rhs->distance_remaining) {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_Feedback__copy(
  const iris_interfaces__action__PathCoverageController_Feedback * input,
  iris_interfaces__action__PathCoverageController_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_target_pose), &(output->current_target_pose)))
  {
    return false;
  }
  // navigation_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->navigation_time), &(output->navigation_time)))
  {
    return false;
  }
  // estimated_time_remaining
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->estimated_time_remaining), &(output->estimated_time_remaining)))
  {
    return false;
  }
  // distance_remaining
  output->distance_remaining = input->distance_remaining;
  return true;
}

iris_interfaces__action__PathCoverageController_Feedback *
iris_interfaces__action__PathCoverageController_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Feedback * msg = (iris_interfaces__action__PathCoverageController_Feedback *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_Feedback));
  bool success = iris_interfaces__action__PathCoverageController_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_Feedback__destroy(iris_interfaces__action__PathCoverageController_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_Feedback__Sequence__init(iris_interfaces__action__PathCoverageController_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Feedback * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_Feedback *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_Feedback__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_Feedback__Sequence__fini(iris_interfaces__action__PathCoverageController_Feedback__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_Feedback__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_Feedback__Sequence *
iris_interfaces__action__PathCoverageController_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_Feedback__Sequence * array = (iris_interfaces__action__PathCoverageController_Feedback__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_Feedback__Sequence__destroy(iris_interfaces__action__PathCoverageController_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_Feedback__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_Feedback__Sequence * lhs, const iris_interfaces__action__PathCoverageController_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_Feedback__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_Feedback__Sequence * input,
  iris_interfaces__action__PathCoverageController_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_Feedback * data =
      (iris_interfaces__action__PathCoverageController_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__functions.h"

bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__init(iris_interfaces__action__PathCoverageController_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!iris_interfaces__action__PathCoverageController_Goal__init(&msg->goal)) {
    iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(iris_interfaces__action__PathCoverageController_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  iris_interfaces__action__PathCoverageController_Goal__fini(&msg->goal);
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Request * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!iris_interfaces__action__PathCoverageController_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Request * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!iris_interfaces__action__PathCoverageController_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

iris_interfaces__action__PathCoverageController_SendGoal_Request *
iris_interfaces__action__PathCoverageController_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_SendGoal_Request * msg = (iris_interfaces__action__PathCoverageController_SendGoal_Request *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Request));
  bool success = iris_interfaces__action__PathCoverageController_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_SendGoal_Request__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__init(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_SendGoal_Request * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_SendGoal_Request *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__fini(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence *
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array = (iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_SendGoal_Request * data =
      (iris_interfaces__action__PathCoverageController_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__init(iris_interfaces__action__PathCoverageController_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(iris_interfaces__action__PathCoverageController_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Response * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Response * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

iris_interfaces__action__PathCoverageController_SendGoal_Response *
iris_interfaces__action__PathCoverageController_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_SendGoal_Response * msg = (iris_interfaces__action__PathCoverageController_SendGoal_Response *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Response));
  bool success = iris_interfaces__action__PathCoverageController_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_SendGoal_Response__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__init(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_SendGoal_Response * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_SendGoal_Response *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__fini(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence *
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array = (iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__destroy(iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * lhs, const iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * input,
  iris_interfaces__action__PathCoverageController_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_SendGoal_Response * data =
      (iris_interfaces__action__PathCoverageController_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
iris_interfaces__action__PathCoverageController_GetResult_Request__init(iris_interfaces__action__PathCoverageController_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    iris_interfaces__action__PathCoverageController_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__action__PathCoverageController_GetResult_Request__fini(iris_interfaces__action__PathCoverageController_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Request__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Request * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Request__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Request * input,
  iris_interfaces__action__PathCoverageController_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

iris_interfaces__action__PathCoverageController_GetResult_Request *
iris_interfaces__action__PathCoverageController_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_GetResult_Request * msg = (iris_interfaces__action__PathCoverageController_GetResult_Request *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_GetResult_Request));
  bool success = iris_interfaces__action__PathCoverageController_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_GetResult_Request__destroy(iris_interfaces__action__PathCoverageController_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__init(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_GetResult_Request * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_GetResult_Request *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_GetResult_Request__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__fini(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_GetResult_Request__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence *
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array = (iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__destroy(iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * input,
  iris_interfaces__action__PathCoverageController_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_GetResult_Request * data =
      (iris_interfaces__action__PathCoverageController_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__functions.h"

bool
iris_interfaces__action__PathCoverageController_GetResult_Response__init(iris_interfaces__action__PathCoverageController_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!iris_interfaces__action__PathCoverageController_Result__init(&msg->result)) {
    iris_interfaces__action__PathCoverageController_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__action__PathCoverageController_GetResult_Response__fini(iris_interfaces__action__PathCoverageController_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  iris_interfaces__action__PathCoverageController_Result__fini(&msg->result);
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Response__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Response * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!iris_interfaces__action__PathCoverageController_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Response__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Response * input,
  iris_interfaces__action__PathCoverageController_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!iris_interfaces__action__PathCoverageController_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

iris_interfaces__action__PathCoverageController_GetResult_Response *
iris_interfaces__action__PathCoverageController_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_GetResult_Response * msg = (iris_interfaces__action__PathCoverageController_GetResult_Response *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_GetResult_Response));
  bool success = iris_interfaces__action__PathCoverageController_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_GetResult_Response__destroy(iris_interfaces__action__PathCoverageController_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__init(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_GetResult_Response * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_GetResult_Response *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_GetResult_Response__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__fini(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_GetResult_Response__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence *
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array = (iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__destroy(iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * lhs, const iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * input,
  iris_interfaces__action__PathCoverageController_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_GetResult_Response * data =
      (iris_interfaces__action__PathCoverageController_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "iris_interfaces/action/detail/path_coverage_controller__functions.h"

bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__init(iris_interfaces__action__PathCoverageController_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!iris_interfaces__action__PathCoverageController_Feedback__init(&msg->feedback)) {
    iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(iris_interfaces__action__PathCoverageController_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  iris_interfaces__action__PathCoverageController_Feedback__fini(&msg->feedback);
}

bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__are_equal(const iris_interfaces__action__PathCoverageController_FeedbackMessage * lhs, const iris_interfaces__action__PathCoverageController_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!iris_interfaces__action__PathCoverageController_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__copy(
  const iris_interfaces__action__PathCoverageController_FeedbackMessage * input,
  iris_interfaces__action__PathCoverageController_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!iris_interfaces__action__PathCoverageController_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

iris_interfaces__action__PathCoverageController_FeedbackMessage *
iris_interfaces__action__PathCoverageController_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_FeedbackMessage * msg = (iris_interfaces__action__PathCoverageController_FeedbackMessage *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__action__PathCoverageController_FeedbackMessage));
  bool success = iris_interfaces__action__PathCoverageController_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__action__PathCoverageController_FeedbackMessage__destroy(iris_interfaces__action__PathCoverageController_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__init(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_FeedbackMessage * data = NULL;

  if (size) {
    data = (iris_interfaces__action__PathCoverageController_FeedbackMessage *)allocator.zero_allocate(size, sizeof(iris_interfaces__action__PathCoverageController_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__action__PathCoverageController_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(&data[i - 1]);
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
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__fini(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array)
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
      iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(&array->data[i]);
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

iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence *
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array = (iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence *)allocator.allocate(sizeof(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__destroy(iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__are_equal(const iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * lhs, const iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence__copy(
  const iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * input,
  iris_interfaces__action__PathCoverageController_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__action__PathCoverageController_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__action__PathCoverageController_FeedbackMessage * data =
      (iris_interfaces__action__PathCoverageController_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__action__PathCoverageController_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__action__PathCoverageController_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__action__PathCoverageController_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
