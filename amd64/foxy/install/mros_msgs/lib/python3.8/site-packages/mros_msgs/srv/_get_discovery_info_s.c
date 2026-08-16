// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
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
#include "mros_msgs/srv/detail/get_discovery_info__struct.h"
#include "mros_msgs/srv/detail/get_discovery_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mros_msgs__srv__get_discovery_info__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("mros_msgs.srv._get_discovery_info.GetDiscoveryInfo_Request", full_classname_dest, 58) == 0);
  }
  mros_msgs__srv__GetDiscoveryInfo_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mros_msgs__srv__get_discovery_info__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetDiscoveryInfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mros_msgs.srv._get_discovery_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetDiscoveryInfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__struct.h"
// already included above
// #include "mros_msgs/srv/detail/get_discovery_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mros_msgs/msg/detail/node_info__functions.h"
#include "mros_msgs/msg/detail/topic_info__functions.h"
// end nested array functions include
bool mros_msgs__msg__node_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mros_msgs__msg__node_info__convert_to_py(void * raw_ros_message);
bool mros_msgs__msg__topic_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mros_msgs__msg__topic_info__convert_to_py(void * raw_ros_message);
bool mros_msgs__msg__topic_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mros_msgs__msg__topic_info__convert_to_py(void * raw_ros_message);
bool mros_msgs__msg__topic_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mros_msgs__msg__topic_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mros_msgs__srv__get_discovery_info__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("mros_msgs.srv._get_discovery_info.GetDiscoveryInfo_Response", full_classname_dest, 59) == 0);
  }
  mros_msgs__srv__GetDiscoveryInfo_Response * ros_message = _ros_message;
  {  // nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nodes'");
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
    if (!mros_msgs__msg__NodeInfo__Sequence__init(&(ros_message->nodes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mros_msgs__msg__NodeInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mros_msgs__msg__NodeInfo * dest = ros_message->nodes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mros_msgs__msg__node_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // subscribers
    PyObject * field = PyObject_GetAttrString(_pymsg, "subscribers");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'subscribers'");
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
    if (!mros_msgs__msg__TopicInfo__Sequence__init(&(ros_message->subscribers), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mros_msgs__msg__TopicInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mros_msgs__msg__TopicInfo * dest = ros_message->subscribers.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mros_msgs__msg__topic_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // publishers
    PyObject * field = PyObject_GetAttrString(_pymsg, "publishers");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'publishers'");
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
    if (!mros_msgs__msg__TopicInfo__Sequence__init(&(ros_message->publishers), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mros_msgs__msg__TopicInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mros_msgs__msg__TopicInfo * dest = ros_message->publishers.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mros_msgs__msg__topic_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // services
    PyObject * field = PyObject_GetAttrString(_pymsg, "services");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'services'");
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
    if (!mros_msgs__msg__TopicInfo__Sequence__init(&(ros_message->services), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mros_msgs__msg__TopicInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mros_msgs__msg__TopicInfo * dest = ros_message->services.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mros_msgs__msg__topic_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mros_msgs__srv__get_discovery_info__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetDiscoveryInfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mros_msgs.srv._get_discovery_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetDiscoveryInfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mros_msgs__srv__GetDiscoveryInfo_Response * ros_message = (mros_msgs__srv__GetDiscoveryInfo_Response *)raw_ros_message;
  {  // nodes
    PyObject * field = NULL;
    size_t size = ros_message->nodes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mros_msgs__msg__NodeInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nodes.data[i]);
      PyObject * pyitem = mros_msgs__msg__node_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subscribers
    PyObject * field = NULL;
    size_t size = ros_message->subscribers.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mros_msgs__msg__TopicInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->subscribers.data[i]);
      PyObject * pyitem = mros_msgs__msg__topic_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "subscribers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // publishers
    PyObject * field = NULL;
    size_t size = ros_message->publishers.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mros_msgs__msg__TopicInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->publishers.data[i]);
      PyObject * pyitem = mros_msgs__msg__topic_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "publishers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // services
    PyObject * field = NULL;
    size_t size = ros_message->services.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mros_msgs__msg__TopicInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->services.data[i]);
      PyObject * pyitem = mros_msgs__msg__topic_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "services", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
