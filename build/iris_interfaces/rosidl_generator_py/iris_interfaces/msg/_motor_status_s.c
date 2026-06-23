// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iris_interfaces:msg/MotorStatus.idl
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
#include "iris_interfaces/msg/detail/motor_status__struct.h"
#include "iris_interfaces/msg/detail/motor_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool iris_interfaces__msg__motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("iris_interfaces.msg._motor_status.MotorStatus", full_classname_dest, 45) == 0);
  }
  iris_interfaces__msg__MotorStatus * ros_message = _ros_message;
  {  // brake_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->brake_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // motor_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // demand_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "demand_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->demand_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // overload_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "overload_percentage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->overload_percentage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iris_interfaces__msg__motor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iris_interfaces.msg._motor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iris_interfaces__msg__MotorStatus * ros_message = (iris_interfaces__msg__MotorStatus *)raw_ros_message;
  {  // brake_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->brake_state.data,
      strlen(ros_message->brake_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // demand_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->demand_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "demand_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overload_percentage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->overload_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overload_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
