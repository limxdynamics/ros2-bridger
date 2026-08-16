// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
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
#include "teleop_msgs/msg/detail/teleop_limb_state__struct.h"
#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool teleop_msgs__msg__teleop_limb_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("teleop_msgs.msg._teleop_limb_state.TeleopLimbState", full_classname_dest, 50) == 0);
  }
  teleop_msgs__msg__TeleopLimbState * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // following
    PyObject * field = PyObject_GetAttrString(_pymsg, "following");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->following = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ee_closure_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_closure_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ee_closure_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ee_gesture_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "ee_gesture_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ee_gesture_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_msgs__msg__teleop_limb_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TeleopLimbState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_msgs.msg._teleop_limb_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TeleopLimbState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_msgs__msg__TeleopLimbState * ros_message = (teleop_msgs__msg__TeleopLimbState *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // following
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->following ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "following", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_closure_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ee_closure_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_closure_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ee_gesture_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ee_gesture_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ee_gesture_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
