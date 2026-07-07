// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iris_interfaces:msg/MotorControllerStatus.idl
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
#include "iris_interfaces/msg/detail/motor_controller_status__struct.h"
#include "iris_interfaces/msg/detail/motor_controller_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool iris_interfaces__msg__motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iris_interfaces__msg__motor_status__convert_to_py(void * raw_ros_message);
bool iris_interfaces__msg__motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iris_interfaces__msg__motor_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool iris_interfaces__msg__motor_controller_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("iris_interfaces.msg._motor_controller_status.MotorControllerStatus", full_classname_dest, 66) == 0);
  }
  iris_interfaces__msg__MotorControllerStatus * ros_message = _ros_message;
  {  // software_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->software_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // input_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // board_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "board_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->board_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sto_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sto_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sto_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // controller_alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_alarm");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->controller_alarm, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // controller_nmt_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_nmt_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->controller_nmt_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // left_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor");
    if (!field) {
      return false;
    }
    if (!iris_interfaces__msg__motor_status__convert_from_py(field, &ros_message->left_motor)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor");
    if (!field) {
      return false;
    }
    if (!iris_interfaces__msg__motor_status__convert_from_py(field, &ros_message->right_motor)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iris_interfaces__msg__motor_controller_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorControllerStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iris_interfaces.msg._motor_controller_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorControllerStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iris_interfaces__msg__MotorControllerStatus * ros_message = (iris_interfaces__msg__MotorControllerStatus *)raw_ros_message;
  {  // software_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->software_version.data,
      strlen(ros_message->software_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->board_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sto_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sto_status.data,
      strlen(ros_message->sto_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sto_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_alarm
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->controller_alarm.data,
      strlen(ros_message->controller_alarm.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_nmt_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->controller_nmt_state.data,
      strlen(ros_message->controller_nmt_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_nmt_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor
    PyObject * field = NULL;
    field = iris_interfaces__msg__motor_status__convert_to_py(&ros_message->left_motor);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor
    PyObject * field = NULL;
    field = iris_interfaces__msg__motor_status__convert_to_py(&ros_message->right_motor);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
