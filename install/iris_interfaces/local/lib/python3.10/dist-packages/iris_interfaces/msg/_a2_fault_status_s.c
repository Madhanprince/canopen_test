// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iris_interfaces:msg/A2FaultStatus.idl
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
#include "iris_interfaces/msg/detail/a2_fault_status__struct.h"
#include "iris_interfaces/msg/detail/a2_fault_status__functions.h"

bool iris_interfaces__msg__brush_faults__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iris_interfaces__msg__brush_faults__convert_to_py(void * raw_ros_message);
bool iris_interfaces__msg__vacuum_faults__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iris_interfaces__msg__vacuum_faults__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool iris_interfaces__msg__a2_fault_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("iris_interfaces.msg._a2_fault_status.A2FaultStatus", full_classname_dest, 50) == 0);
  }
  iris_interfaces__msg__A2FaultStatus * ros_message = _ros_message;
  {  // a2_fault_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "a2_fault_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->a2_fault_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brush
    PyObject * field = PyObject_GetAttrString(_pymsg, "brush");
    if (!field) {
      return false;
    }
    if (!iris_interfaces__msg__brush_faults__convert_from_py(field, &ros_message->brush)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vacuum
    PyObject * field = PyObject_GetAttrString(_pymsg, "vacuum");
    if (!field) {
      return false;
    }
    if (!iris_interfaces__msg__vacuum_faults__convert_from_py(field, &ros_message->vacuum)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // water_pump_digital_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_pump_digital_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->water_pump_digital_fault = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // detergent_pump_digital_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "detergent_pump_digital_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detergent_pump_digital_fault = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brush_vacuum_motor_driver_digital_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "brush_vacuum_motor_driver_digital_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brush_vacuum_motor_driver_digital_fault = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // water_and_detergent_pump_flow_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_and_detergent_pump_flow_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->water_and_detergent_pump_flow_fault = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iris_interfaces__msg__a2_fault_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of A2FaultStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iris_interfaces.msg._a2_fault_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "A2FaultStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iris_interfaces__msg__A2FaultStatus * ros_message = (iris_interfaces__msg__A2FaultStatus *)raw_ros_message;
  {  // a2_fault_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->a2_fault_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a2_fault_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brush
    PyObject * field = NULL;
    field = iris_interfaces__msg__brush_faults__convert_to_py(&ros_message->brush);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brush", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vacuum
    PyObject * field = NULL;
    field = iris_interfaces__msg__vacuum_faults__convert_to_py(&ros_message->vacuum);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vacuum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_pump_digital_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->water_pump_digital_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_pump_digital_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detergent_pump_digital_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->detergent_pump_digital_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detergent_pump_digital_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brush_vacuum_motor_driver_digital_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brush_vacuum_motor_driver_digital_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brush_vacuum_motor_driver_digital_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_and_detergent_pump_flow_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->water_and_detergent_pump_flow_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_and_detergent_pump_flow_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
