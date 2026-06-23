// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
// generated code does not contain a copyright notice
#include "iris_interfaces/msg/detail/motor_controller_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `software_version`
// Member `sto_status`
// Member `controller_alarm`
// Member `controller_nmt_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_motor`
// Member `right_motor`
#include "iris_interfaces/msg/detail/motor_status__functions.h"

bool
iris_interfaces__msg__MotorControllerStatus__init(iris_interfaces__msg__MotorControllerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__init(&msg->software_version)) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
    return false;
  }
  // input_voltage
  // board_temperature
  // sto_status
  if (!rosidl_runtime_c__String__init(&msg->sto_status)) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
    return false;
  }
  // controller_alarm
  if (!rosidl_runtime_c__String__init(&msg->controller_alarm)) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
    return false;
  }
  // controller_nmt_state
  if (!rosidl_runtime_c__String__init(&msg->controller_nmt_state)) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
    return false;
  }
  // left_motor
  if (!iris_interfaces__msg__MotorStatus__init(&msg->left_motor)) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
    return false;
  }
  // right_motor
  if (!iris_interfaces__msg__MotorStatus__init(&msg->right_motor)) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
    return false;
  }
  return true;
}

void
iris_interfaces__msg__MotorControllerStatus__fini(iris_interfaces__msg__MotorControllerStatus * msg)
{
  if (!msg) {
    return;
  }
  // software_version
  rosidl_runtime_c__String__fini(&msg->software_version);
  // input_voltage
  // board_temperature
  // sto_status
  rosidl_runtime_c__String__fini(&msg->sto_status);
  // controller_alarm
  rosidl_runtime_c__String__fini(&msg->controller_alarm);
  // controller_nmt_state
  rosidl_runtime_c__String__fini(&msg->controller_nmt_state);
  // left_motor
  iris_interfaces__msg__MotorStatus__fini(&msg->left_motor);
  // right_motor
  iris_interfaces__msg__MotorStatus__fini(&msg->right_motor);
}

bool
iris_interfaces__msg__MotorControllerStatus__are_equal(const iris_interfaces__msg__MotorControllerStatus * lhs, const iris_interfaces__msg__MotorControllerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->software_version), &(rhs->software_version)))
  {
    return false;
  }
  // input_voltage
  if (lhs->input_voltage != rhs->input_voltage) {
    return false;
  }
  // board_temperature
  if (lhs->board_temperature != rhs->board_temperature) {
    return false;
  }
  // sto_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sto_status), &(rhs->sto_status)))
  {
    return false;
  }
  // controller_alarm
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller_alarm), &(rhs->controller_alarm)))
  {
    return false;
  }
  // controller_nmt_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller_nmt_state), &(rhs->controller_nmt_state)))
  {
    return false;
  }
  // left_motor
  if (!iris_interfaces__msg__MotorStatus__are_equal(
      &(lhs->left_motor), &(rhs->left_motor)))
  {
    return false;
  }
  // right_motor
  if (!iris_interfaces__msg__MotorStatus__are_equal(
      &(lhs->right_motor), &(rhs->right_motor)))
  {
    return false;
  }
  return true;
}

bool
iris_interfaces__msg__MotorControllerStatus__copy(
  const iris_interfaces__msg__MotorControllerStatus * input,
  iris_interfaces__msg__MotorControllerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->software_version), &(output->software_version)))
  {
    return false;
  }
  // input_voltage
  output->input_voltage = input->input_voltage;
  // board_temperature
  output->board_temperature = input->board_temperature;
  // sto_status
  if (!rosidl_runtime_c__String__copy(
      &(input->sto_status), &(output->sto_status)))
  {
    return false;
  }
  // controller_alarm
  if (!rosidl_runtime_c__String__copy(
      &(input->controller_alarm), &(output->controller_alarm)))
  {
    return false;
  }
  // controller_nmt_state
  if (!rosidl_runtime_c__String__copy(
      &(input->controller_nmt_state), &(output->controller_nmt_state)))
  {
    return false;
  }
  // left_motor
  if (!iris_interfaces__msg__MotorStatus__copy(
      &(input->left_motor), &(output->left_motor)))
  {
    return false;
  }
  // right_motor
  if (!iris_interfaces__msg__MotorStatus__copy(
      &(input->right_motor), &(output->right_motor)))
  {
    return false;
  }
  return true;
}

iris_interfaces__msg__MotorControllerStatus *
iris_interfaces__msg__MotorControllerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__MotorControllerStatus * msg = (iris_interfaces__msg__MotorControllerStatus *)allocator.allocate(sizeof(iris_interfaces__msg__MotorControllerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iris_interfaces__msg__MotorControllerStatus));
  bool success = iris_interfaces__msg__MotorControllerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iris_interfaces__msg__MotorControllerStatus__destroy(iris_interfaces__msg__MotorControllerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iris_interfaces__msg__MotorControllerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iris_interfaces__msg__MotorControllerStatus__Sequence__init(iris_interfaces__msg__MotorControllerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__MotorControllerStatus * data = NULL;

  if (size) {
    data = (iris_interfaces__msg__MotorControllerStatus *)allocator.zero_allocate(size, sizeof(iris_interfaces__msg__MotorControllerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iris_interfaces__msg__MotorControllerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iris_interfaces__msg__MotorControllerStatus__fini(&data[i - 1]);
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
iris_interfaces__msg__MotorControllerStatus__Sequence__fini(iris_interfaces__msg__MotorControllerStatus__Sequence * array)
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
      iris_interfaces__msg__MotorControllerStatus__fini(&array->data[i]);
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

iris_interfaces__msg__MotorControllerStatus__Sequence *
iris_interfaces__msg__MotorControllerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iris_interfaces__msg__MotorControllerStatus__Sequence * array = (iris_interfaces__msg__MotorControllerStatus__Sequence *)allocator.allocate(sizeof(iris_interfaces__msg__MotorControllerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iris_interfaces__msg__MotorControllerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iris_interfaces__msg__MotorControllerStatus__Sequence__destroy(iris_interfaces__msg__MotorControllerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iris_interfaces__msg__MotorControllerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iris_interfaces__msg__MotorControllerStatus__Sequence__are_equal(const iris_interfaces__msg__MotorControllerStatus__Sequence * lhs, const iris_interfaces__msg__MotorControllerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iris_interfaces__msg__MotorControllerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iris_interfaces__msg__MotorControllerStatus__Sequence__copy(
  const iris_interfaces__msg__MotorControllerStatus__Sequence * input,
  iris_interfaces__msg__MotorControllerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iris_interfaces__msg__MotorControllerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iris_interfaces__msg__MotorControllerStatus * data =
      (iris_interfaces__msg__MotorControllerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iris_interfaces__msg__MotorControllerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iris_interfaces__msg__MotorControllerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iris_interfaces__msg__MotorControllerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
