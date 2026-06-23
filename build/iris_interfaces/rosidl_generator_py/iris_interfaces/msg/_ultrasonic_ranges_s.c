// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iris_interfaces:msg/UltrasonicRanges.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "iris_interfaces/msg/detail/ultrasonic_ranges__struct.h"
#include "iris_interfaces/msg/detail/ultrasonic_ranges__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__range__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__range__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__range__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__range__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__range__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__range__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__range__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__range__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool iris_interfaces__msg__ultrasonic_ranges__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("iris_interfaces.msg._ultrasonic_ranges.UltrasonicRanges", full_classname_dest, 55) == 0);
  }
  iris_interfaces__msg__UltrasonicRanges * ros_message = _ros_message;
  {  // ultrasonic_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic_1");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__range__convert_from_py(field, &ros_message->ultrasonic_1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ultrasonic_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic_2");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__range__convert_from_py(field, &ros_message->ultrasonic_2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ultrasonic_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic_3");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__range__convert_from_py(field, &ros_message->ultrasonic_3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ultrasonic_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic_4");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__range__convert_from_py(field, &ros_message->ultrasonic_4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iris_interfaces__msg__ultrasonic_ranges__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UltrasonicRanges */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iris_interfaces.msg._ultrasonic_ranges");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UltrasonicRanges");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iris_interfaces__msg__UltrasonicRanges * ros_message = (iris_interfaces__msg__UltrasonicRanges *)raw_ros_message;
  {  // ultrasonic_1
    PyObject * field = NULL;
    field = sensor_msgs__msg__range__convert_to_py(&ros_message->ultrasonic_1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ultrasonic_2
    PyObject * field = NULL;
    field = sensor_msgs__msg__range__convert_to_py(&ros_message->ultrasonic_2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ultrasonic_3
    PyObject * field = NULL;
    field = sensor_msgs__msg__range__convert_to_py(&ros_message->ultrasonic_3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ultrasonic_4
    PyObject * field = NULL;
    field = sensor_msgs__msg__range__convert_to_py(&ros_message->ultrasonic_4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
