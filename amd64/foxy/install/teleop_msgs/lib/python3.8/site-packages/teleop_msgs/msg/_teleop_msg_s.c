// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from teleop_msgs:msg/TeleopMsg.idl
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
#include "teleop_msgs/msg/detail/teleop_msg__struct.h"
#include "teleop_msgs/msg/detail/teleop_msg__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "teleop_msgs/msg/detail/key_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool teleop_msgs__msg__key_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * teleop_msgs__msg__key_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool controller_msgs__msg__joint_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * controller_msgs__msg__joint_cmd__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool teleop_msgs__msg__teleop_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("teleop_msgs.msg._teleop_msg.TeleopMsg", full_classname_dest, 37) == 0);
  }
  teleop_msgs__msg__TeleopMsg * ros_message = _ros_message;
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
  {  // world
    PyObject * field = PyObject_GetAttrString(_pymsg, "world");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->world)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // anchors
    PyObject * field = PyObject_GetAttrString(_pymsg, "anchors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'anchors'");
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
    if (!teleop_msgs__msg__KeyPoint__Sequence__init(&(ros_message->anchors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create teleop_msgs__msg__KeyPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    teleop_msgs__msg__KeyPoint * dest = ros_message->anchors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!teleop_msgs__msg__key_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // joint_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_cmd");
    if (!field) {
      return false;
    }
    if (!controller_msgs__msg__joint_cmd__convert_from_py(field, &ros_message->joint_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_msgs__msg__teleop_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TeleopMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_msgs.msg._teleop_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TeleopMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_msgs__msg__TeleopMsg * ros_message = (teleop_msgs__msg__TeleopMsg *)raw_ros_message;
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
  {  // world
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->world);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "world", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anchors
    PyObject * field = NULL;
    size_t size = ros_message->anchors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    teleop_msgs__msg__KeyPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->anchors.data[i]);
      PyObject * pyitem = teleop_msgs__msg__key_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "anchors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_cmd
    PyObject * field = NULL;
    field = controller_msgs__msg__joint_cmd__convert_to_py(&ros_message->joint_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
