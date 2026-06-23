// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/SystemSoftwareStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/system_software_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_software_name`
// Member `current_boot_slot`
#include "rosidl_runtime_c/string_functions.h"

bool
iris_interfaces__msg__SystemSoftwareStatus__init(iris_interfaces__msg__SystemSoftwareStatus * msg)
{
  if (!msg) {
    return false;
  }
  // current_software_name
  if (!rosidl_runtime_c__String__init(&msg->current_software_name)) {
    iris_interfaces__msg__SystemSoftwareStatus__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->current_software_name, "NA");
    if (!success) {
      goto abort_init_0;
    }
  }
  // current_boot_slot
  if (!rosidl_runtime_c__String__init(&msg->current_boot_slot)) {
    iris_interfaces__msg__SystemSoftwareStatus__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->current_boot_slot, "NA");
    if (!success) {
      goto abort_init_1;
    }
  }
  return true;
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->current_software_name);
abort_init_0:
  return false;
}

void
iris_interfaces__msg__SystemSoftwareStatus__fini(iris_interfaces__msg__SystemSoftwareStatus * msg)
{
  if (!msg) {
    return;
  }
  // current_software_name
  rosidl_runtime_c__String__fini(&msg->current_software_name);
  // current_boot_slot
  rosidl_runtime_c__String__fini(&msg->current_boot_slot);
}

bool
iris_interfaces__msg__SystemSoftwareStatus__are_equal(const iris_interfaces__msg__SystemSoftwareStatus * lhs, const iris_interfaces__msg__SystemSoftwareStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_software_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_software_name), &(rhs->current_software_name)))
  {
    return false;
  }
  // current_boot_slot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_boot_slot), &(rhs->current_boot_slot)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__SystemSoftwareStatus__copy(
  const iris_interfaces__msg__SystemSoftwareStatus * input,
  iris_interfaces__msg__SystemSoftwareStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // current_software_name
  if (!rosidl_runtime_c__String__copy(
      &(input->current_software_name), &(output->current_software_name)))
  {
    return false;
  }
  // current_boot_slot
  if (!rosidl_runtime_c__String__copy(
      &(input->current_boot_slot), &(output->current_boot_slot)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__SystemSoftwareStatus *
iris_interfaces__msg__SystemSoftwareStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__SystemSoftwareStatus * msg = (iris_interfaces__msg__SystemSoftwareStatus *)allocator.allocate(sizeof(iris_interfaces__msg__SystemSoftwareStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__SystemSoftwareStatus));
  bool success = iris_interfaces__msg__SystemSoftwareStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__SystemSoftwareStatus__destroy(iris_interfaces__msg__SystemSoftwareStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__SystemSoftwareStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__SystemSoftwareStatus__Sequence__init(iris_interfaces__msg__SystemSoftwareStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__SystemSoftwareStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__SystemSoftwareStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__SystemSoftwareStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__SystemSoftwareStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__SystemSoftwareStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__SystemSoftwareStatus__Sequence__fini(iris_interfaces__msg__SystemSoftwareStatus__Sequence * array)
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
      iris_interfaces__msg__SystemSoftwareStatus__fini(&array->data[i]);
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

iris_interfaces__msg__SystemSoftwareStatus__Sequence *
iris_interfaces__msg__SystemSoftwareStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__SystemSoftwareStatus__Sequence * array = (iris_interfaces__msg__SystemSoftwareStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__SystemSoftwareStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__SystemSoftwareStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__SystemSoftwareStatus__Sequence__destroy(iris_interfaces__msg__SystemSoftwareStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__SystemSoftwareStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__SystemSoftwareStatus__Sequence__are_equal(const iris_interfaces__msg__SystemSoftwareStatus__Sequence * lhs, const iris_interfaces__msg__SystemSoftwareStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__SystemSoftwareStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__SystemSoftwareStatus__Sequence__copy(
  const iris_interfaces__msg__SystemSoftwareStatus__Sequence * input,
  iris_interfaces__msg__SystemSoftwareStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__SystemSoftwareStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__SystemSoftwareStatus * data =
      (iris_interfaces__msg__SystemSoftwareStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__SystemSoftwareStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__SystemSoftwareStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__SystemSoftwareStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
