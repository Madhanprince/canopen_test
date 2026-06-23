// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/MenderClientStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/mender_client_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ota_client_state`
// Member `last_sync_with_server`
// Member `update_status`
#include "rosidl_runtime_c/string_functions.h"

bool
iris_interfaces__msg__MenderClientStatus__init(iris_interfaces__msg__MenderClientStatus * msg)
{
  if (!msg) {
    return false;
  }
  // ota_client_state
  if (!rosidl_runtime_c__String__init(&msg->ota_client_state)) {
    iris_interfaces__msg__MenderClientStatus__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->ota_client_state, "NA");
    if (!success) {
      goto abort_init_0;
    }
  }
  // last_sync_with_server
  if (!rosidl_runtime_c__String__init(&msg->last_sync_with_server)) {
    iris_interfaces__msg__MenderClientStatus__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->last_sync_with_server, "NA");
    if (!success) {
      goto abort_init_1;
    }
  }
  // download_available
  msg->download_available = false;
  // install_available
  msg->install_available = false;
  // reboot_required
  msg->reboot_required = false;
  // update_status
  if (!rosidl_runtime_c__String__init(&msg->update_status)) {
    iris_interfaces__msg__MenderClientStatus__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->update_status, "NA");
    if (!success) {
      goto abort_init_2;
    }
  }
  return true;
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->last_sync_with_server);
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->ota_client_state);
abort_init_0:
  return false;
}

void
iris_interfaces__msg__MenderClientStatus__fini(iris_interfaces__msg__MenderClientStatus * msg)
{
  if (!msg) {
    return;
  }
  // ota_client_state
  rosidl_runtime_c__String__fini(&msg->ota_client_state);
  // last_sync_with_server
  rosidl_runtime_c__String__fini(&msg->last_sync_with_server);
  // download_available
  // install_available
  // reboot_required
  // update_status
  rosidl_runtime_c__String__fini(&msg->update_status);
}

bool
iris_interfaces__msg__MenderClientStatus__are_equal(const iris_interfaces__msg__MenderClientStatus * lhs, const iris_interfaces__msg__MenderClientStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ota_client_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ota_client_state), &(rhs->ota_client_state)))
  {
    return false;
  }
  // last_sync_with_server
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_sync_with_server), &(rhs->last_sync_with_server)))
  {
    return false;
  }
  // download_available
  if (lhs->download_available != rhs->download_available) {
    return false;
  }
  // install_available
  if (lhs->install_available != rhs->install_available) {
    return false;
  }
  // reboot_required
  if (lhs->reboot_required != rhs->reboot_required) {
    return false;
  }
  // update_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->update_status), &(rhs->update_status)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__MenderClientStatus__copy(
  const iris_interfaces__msg__MenderClientStatus * input,
  iris_interfaces__msg__MenderClientStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // ota_client_state
  if (!rosidl_runtime_c__String__copy(
      &(input->ota_client_state), &(output->ota_client_state)))
  {
    return false;
  }
  // last_sync_with_server
  if (!rosidl_runtime_c__String__copy(
      &(input->last_sync_with_server), &(output->last_sync_with_server)))
  {
    return false;
  }
  // download_available
  output->download_available = input->download_available;
  // install_available
  output->install_available = input->install_available;
  // reboot_required
  output->reboot_required = input->reboot_required;
  // update_status
  if (!rosidl_runtime_c__String__copy(
      &(input->update_status), &(output->update_status)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__MenderClientStatus *
iris_interfaces__msg__MenderClientStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__MenderClientStatus * msg = (iris_interfaces__msg__MenderClientStatus *)allocator.allocate(sizeof(iris_interfaces__msg__MenderClientStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__MenderClientStatus));
  bool success = iris_interfaces__msg__MenderClientStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__MenderClientStatus__destroy(iris_interfaces__msg__MenderClientStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__MenderClientStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__MenderClientStatus__Sequence__init(iris_interfaces__msg__MenderClientStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__MenderClientStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__MenderClientStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__MenderClientStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__MenderClientStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__MenderClientStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__MenderClientStatus__Sequence__fini(iris_interfaces__msg__MenderClientStatus__Sequence * array)
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
      iris_interfaces__msg__MenderClientStatus__fini(&array->data[i]);
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

iris_interfaces__msg__MenderClientStatus__Sequence *
iris_interfaces__msg__MenderClientStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__MenderClientStatus__Sequence * array = (iris_interfaces__msg__MenderClientStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__MenderClientStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__MenderClientStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__MenderClientStatus__Sequence__destroy(iris_interfaces__msg__MenderClientStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__MenderClientStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__MenderClientStatus__Sequence__are_equal(const iris_interfaces__msg__MenderClientStatus__Sequence * lhs, const iris_interfaces__msg__MenderClientStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__MenderClientStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__MenderClientStatus__Sequence__copy(
  const iris_interfaces__msg__MenderClientStatus__Sequence * input,
  iris_interfaces__msg__MenderClientStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__MenderClientStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__MenderClientStatus * data =
      (iris_interfaces__msg__MenderClientStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__MenderClientStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__MenderClientStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__MenderClientStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
