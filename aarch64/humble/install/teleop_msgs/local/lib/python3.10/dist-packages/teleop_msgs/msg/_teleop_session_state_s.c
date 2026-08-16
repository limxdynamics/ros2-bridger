// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from teleop_msgs:msg/TeleopSessionState.idl
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
#include "teleop_msgs/msg/detail/teleop_session_state__struct.h"
#include "teleop_msgs/msg/detail/teleop_session_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool teleop_msgs__msg__teleop_limb_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * teleop_msgs__msg__teleop_limb_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool teleop_msgs__msg__teleop_session_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("teleop_msgs.msg._teleop_session_state.TeleopSessionState", full_classname_dest, 56) == 0);
  }
  teleop_msgs__msg__TeleopSessionState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // schema_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "schema_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->schema_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // session_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "session_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->session_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // limbs
    PyObject * field = PyObject_GetAttrString(_pymsg, "limbs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'limbs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!teleop_msgs__msg__TeleopLimbState__Sequence__init(&(ros_message->limbs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create teleop_msgs__msg__TeleopLimbState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    teleop_msgs__msg__TeleopLimbState * dest = ros_message->limbs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!teleop_msgs__msg__teleop_limb_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // reanchor_epoch
    PyObject * field = PyObject_GetAttrString(_pymsg, "reanchor_epoch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reanchor_epoch = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // retarget_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "retarget_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->retarget_required = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fault_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fault_detail
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_detail");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->fault_detail, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_msgs__msg__teleop_session_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TeleopSessionState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_msgs.msg._teleop_session_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TeleopSessionState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_msgs__msg__TeleopSessionState * ros_message = (teleop_msgs__msg__TeleopSessionState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // schema_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->schema_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "schema_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // session_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->session_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "session_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode.data,
      strlen(ros_message->mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limbs
    PyObject * field = NULL;
    size_t size = ros_message->limbs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    teleop_msgs__msg__TeleopLimbState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->limbs.data[i]);
      PyObject * pyitem = teleop_msgs__msg__teleop_limb_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "limbs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reanchor_epoch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reanchor_epoch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reanchor_epoch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // retarget_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->retarget_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "retarget_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fault_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_detail
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->fault_detail.data,
      strlen(ros_message->fault_detail.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_detail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
