// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mros_msgs:msg/AshmemInfo.idl
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
#include "mros_msgs/msg/detail/ashmem_info__struct.h"
#include "mros_msgs/msg/detail/ashmem_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mros_msgs__msg__ashmem_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mros_msgs.msg._ashmem_info.AshmemInfo", full_classname_dest, 37) == 0);
  }
  mros_msgs__msg__AshmemInfo * ros_message = _ros_message;
  {  // topic_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->topic_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // topic_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->topic_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // message_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // message_md5sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_md5sum");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_md5sum, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // message_definition
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_definition");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message_definition, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // shm_seed
    PyObject * field = PyObject_GetAttrString(_pymsg, "shm_seed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shm_seed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // shm_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "shm_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shm_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // msg_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_size = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // identity
    PyObject * field = PyObject_GetAttrString(_pymsg, "identity");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'identity'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->identity), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->identity.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mros_msgs__msg__ashmem_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AshmemInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mros_msgs.msg._ashmem_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AshmemInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mros_msgs__msg__AshmemInfo * ros_message = (mros_msgs__msg__AshmemInfo *)raw_ros_message;
  {  // topic_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->topic_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // topic_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->topic_name.data,
      strlen(ros_message->topic_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_type.data,
      strlen(ros_message->message_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_md5sum
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_md5sum.data,
      strlen(ros_message->message_md5sum.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_md5sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_definition
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message_definition.data,
      strlen(ros_message->message_definition.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_definition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shm_seed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shm_seed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shm_seed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shm_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shm_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shm_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_size
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->msg_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // identity
    PyObject * field = NULL;
    size_t size = ros_message->identity.size;
    rosidl_runtime_c__String * src = ros_message->identity.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "identity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
