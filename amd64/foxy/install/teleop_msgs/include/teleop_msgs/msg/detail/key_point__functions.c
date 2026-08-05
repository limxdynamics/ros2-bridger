// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/key_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
teleop_msgs__msg__KeyPoint__init(teleop_msgs__msg__KeyPoint * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    teleop_msgs__msg__KeyPoint__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    teleop_msgs__msg__KeyPoint__fini(msg);
    return false;
  }
  return true;
}

void
teleop_msgs__msg__KeyPoint__fini(teleop_msgs__msg__KeyPoint * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
teleop_msgs__msg__KeyPoint__are_equal(const teleop_msgs__msg__KeyPoint * lhs, const teleop_msgs__msg__KeyPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__KeyPoint__copy(
  const teleop_msgs__msg__KeyPoint * input,
  teleop_msgs__msg__KeyPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

teleop_msgs__msg__KeyPoint *
teleop_msgs__msg__KeyPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__KeyPoint * msg = (teleop_msgs__msg__KeyPoint *)allocator.allocate(sizeof(teleop_msgs__msg__KeyPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__KeyPoint));
  bool success = teleop_msgs__msg__KeyPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__KeyPoint__destroy(teleop_msgs__msg__KeyPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__KeyPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__KeyPoint__Sequence__init(teleop_msgs__msg__KeyPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__KeyPoint * data = NULL;

  if (size) {
    data = (teleop_msgs__msg__KeyPoint *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__KeyPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__KeyPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__KeyPoint__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
teleop_msgs__msg__KeyPoint__Sequence__fini(teleop_msgs__msg__KeyPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      teleop_msgs__msg__KeyPoint__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

teleop_msgs__msg__KeyPoint__Sequence *
teleop_msgs__msg__KeyPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__KeyPoint__Sequence * array = (teleop_msgs__msg__KeyPoint__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__KeyPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__KeyPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__KeyPoint__Sequence__destroy(teleop_msgs__msg__KeyPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__KeyPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__KeyPoint__Sequence__are_equal(const teleop_msgs__msg__KeyPoint__Sequence * lhs, const teleop_msgs__msg__KeyPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__KeyPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__KeyPoint__Sequence__copy(
  const teleop_msgs__msg__KeyPoint__Sequence * input,
  teleop_msgs__msg__KeyPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__KeyPoint);
    teleop_msgs__msg__KeyPoint * data =
      (teleop_msgs__msg__KeyPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__KeyPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__KeyPoint__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__KeyPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
