// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from teleop_msgs:msg/VRState.idl
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
#include "teleop_msgs/msg/detail/vr_state__struct.h"
#include "teleop_msgs/msg/detail/vr_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool teleop_msgs__msg__vr_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("teleop_msgs.msg._vr_state.VRState", full_classname_dest, 33) == 0);
  }
  teleop_msgs__msg__VRState * ros_message = _ros_message;
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
  {  // eyePose
    PyObject * field = PyObject_GetAttrString(_pymsg, "eyePose");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 16;
      float * dest = ros_message->eyePose;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // l
    PyObject * field = PyObject_GetAttrString(_pymsg, "l");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 16;
      float * dest = ros_message->l;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 16;
      float * dest = ros_message->r;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // leftJS
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftJS");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 2;
      float * dest = ros_message->leftJS;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // leftTrig
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftTrig");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftTrig = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftGrip
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftGrip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftGrip = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // LThU
    PyObject * field = PyObject_GetAttrString(_pymsg, "LThU");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->LThU = (Py_True == field);
    Py_DECREF(field);
  }
  {  // LTr
    PyObject * field = PyObject_GetAttrString(_pymsg, "LTr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->LTr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // LG
    PyObject * field = PyObject_GetAttrString(_pymsg, "LG");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->LG = (Py_True == field);
    Py_DECREF(field);
  }
  {  // X
    PyObject * field = PyObject_GetAttrString(_pymsg, "X");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->X = (Py_True == field);
    Py_DECREF(field);
  }
  {  // Y
    PyObject * field = PyObject_GetAttrString(_pymsg, "Y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->Y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rightJS
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightJS");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 2;
      float * dest = ros_message->rightJS;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rightTrig
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightTrig");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightTrig = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightGrip
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightGrip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightGrip = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // RThU
    PyObject * field = PyObject_GetAttrString(_pymsg, "RThU");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->RThU = (Py_True == field);
    Py_DECREF(field);
  }
  {  // RTr
    PyObject * field = PyObject_GetAttrString(_pymsg, "RTr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->RTr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // RG
    PyObject * field = PyObject_GetAttrString(_pymsg, "RG");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->RG = (Py_True == field);
    Py_DECREF(field);
  }
  {  // A
    PyObject * field = PyObject_GetAttrString(_pymsg, "A");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->A = (Py_True == field);
    Py_DECREF(field);
  }
  {  // B
    PyObject * field = PyObject_GetAttrString(_pymsg, "B");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->B = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_msgs__msg__vr_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VRState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_msgs.msg._vr_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VRState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_msgs__msg__VRState * ros_message = (teleop_msgs__msg__VRState *)raw_ros_message;
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
  {  // eyePose
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "eyePose");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->eyePose[0]);
    memcpy(dst, src, 16 * sizeof(float));
    Py_DECREF(field);
  }
  {  // l
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "l");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->l[0]);
    memcpy(dst, src, 16 * sizeof(float));
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "r");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->r[0]);
    memcpy(dst, src, 16 * sizeof(float));
    Py_DECREF(field);
  }
  {  // leftJS
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "leftJS");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->leftJS[0]);
    memcpy(dst, src, 2 * sizeof(float));
    Py_DECREF(field);
  }
  {  // leftTrig
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftTrig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftTrig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftGrip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftGrip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftGrip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // LThU
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->LThU ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "LThU", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // LTr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->LTr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "LTr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // LG
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->LG ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "LG", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // X
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->X ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "X", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // Y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->Y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "Y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightJS
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rightJS");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->rightJS[0]);
    memcpy(dst, src, 2 * sizeof(float));
    Py_DECREF(field);
  }
  {  // rightTrig
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightTrig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightTrig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightGrip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightGrip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightGrip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // RThU
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->RThU ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "RThU", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // RTr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->RTr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "RTr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // RG
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->RG ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "RG", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // A
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->A ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "A", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // B
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->B ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "B", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
