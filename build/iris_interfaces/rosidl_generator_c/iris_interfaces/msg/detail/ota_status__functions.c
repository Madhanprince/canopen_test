// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/OTAStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/ota_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_software_info`
#include "iris_interfaces/msg/detail/system_software_status__functions.h"
// Member `mender_client_status`
#include "iris_interfaces/msg/detail/mender_client_status__functions.h"

bool
iris_interfaces__msg__OTAStatus__init(iris_interfaces__msg__OTAStatus * msg)
{
  if (!msg) {
    return false;
  }
  // system_software_info
  if (!iris_interfaces__msg__SystemSoftwareStatus__init(&msg->system_software_info)) {
    iris_interfaces__msg__OTAStatus__fini(msg);
    return false;
  }
  // mender_client_status
  if (!iris_interfaces__msg__MenderClientStatus__init(&msg->mender_client_status)) {
    iris_interfaces__msg__OTAStatus__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__msg__OTAStatus__fini(iris_interfaces__msg__OTAStatus * msg)
{
  if (!msg) {
    return;
  }
  // system_software_info
  iris_interfaces__msg__SystemSoftwareStatus__fini(&msg->system_software_info);
  // mender_client_status
  iris_interfaces__msg__MenderClientStatus__fini(&msg->mender_client_status);
}

bool
iris_interfaces__msg__OTAStatus__are_equal(const iris_interfaces__msg__OTAStatus * lhs, const iris_interfaces__msg__OTAStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // system_software_info
  if (!iris_interfaces__msg__SystemSoftwareStatus__are_equal(
      &(lhs->system_software_info), &(rhs->system_software_info)))
  {
    return false;
  }
  // mender_client_status
  if (!iris_interfaces__msg__MenderClientStatus__are_equal(
      &(lhs->mender_client_status), &(rhs->mender_client_status)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__OTAStatus__copy(
  const iris_interfaces__msg__OTAStatus * input,
  iris_interfaces__msg__OTAStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // system_software_info
  if (!iris_interfaces__msg__SystemSoftwareStatus__copy(
      &(input->system_software_info), &(output->system_software_info)))
  {
    return false;
  }
  // mender_client_status
  if (!iris_interfaces__msg__MenderClientStatus__copy(
      &(input->mender_client_status), &(output->mender_client_status)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__OTAStatus *
iris_interfaces__msg__OTAStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__OTAStatus * msg = (iris_interfaces__msg__OTAStatus *)allocator.allocate(sizeof(iris_interfaces__msg__OTAStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__OTAStatus));
  bool success = iris_interfaces__msg__OTAStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__OTAStatus__destroy(iris_interfaces__msg__OTAStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__OTAStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__OTAStatus__Sequence__init(iris_interfaces__msg__OTAStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__OTAStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__OTAStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__OTAStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__OTAStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__OTAStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__OTAStatus__Sequence__fini(iris_interfaces__msg__OTAStatus__Sequence * array)
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
      iris_interfaces__msg__OTAStatus__fini(&array->data[i]);
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

iris_interfaces__msg__OTAStatus__Sequence *
iris_interfaces__msg__OTAStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__OTAStatus__Sequence * array = (iris_interfaces__msg__OTAStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__OTAStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__OTAStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__OTAStatus__Sequence__destroy(iris_interfaces__msg__OTAStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__OTAStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__OTAStatus__Sequence__are_equal(const iris_interfaces__msg__OTAStatus__Sequence * lhs, const iris_interfaces__msg__OTAStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__OTAStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__OTAStatus__Sequence__copy(
  const iris_interfaces__msg__OTAStatus__Sequence * input,
  iris_interfaces__msg__OTAStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__OTAStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__OTAStatus * data =
      (iris_interfaces__msg__OTAStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__OTAStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__OTAStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__OTAStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
