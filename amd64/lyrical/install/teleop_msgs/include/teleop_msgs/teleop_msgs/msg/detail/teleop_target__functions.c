// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/TeleopTarget.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/teleop_target__functions.h"

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
// Member `source_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
teleop_msgs__msg__TeleopTarget__init(teleop_msgs__msg__TeleopTarget * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    teleop_msgs__msg__TeleopTarget__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    teleop_msgs__msg__TeleopTarget__fini(msg);
    return false;
  }
  // validity
  // source_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->source_stamp)) {
    teleop_msgs__msg__TeleopTarget__fini(msg);
    return false;
  }
  return true;
}

void
teleop_msgs__msg__TeleopTarget__fini(teleop_msgs__msg__TeleopTarget * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // validity
  // source_stamp
  builtin_interfaces__msg__Time__fini(&msg->source_stamp);
}

bool
teleop_msgs__msg__TeleopTarget__are_equal(const teleop_msgs__msg__TeleopTarget * lhs, const teleop_msgs__msg__TeleopTarget * rhs)
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
  // validity
  if (lhs->validity != rhs->validity) {
    return false;
  }
  // source_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->source_stamp), &(rhs->source_stamp)))
  {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__TeleopTarget__copy(
  const teleop_msgs__msg__TeleopTarget * input,
  teleop_msgs__msg__TeleopTarget * output)
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
  // validity
  output->validity = input->validity;
  // source_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->source_stamp), &(output->source_stamp)))
  {
    return false;
  }
  return true;
}

teleop_msgs__msg__TeleopTarget *
teleop_msgs__msg__TeleopTarget__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopTarget * msg = (teleop_msgs__msg__TeleopTarget *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__TeleopTarget));
  bool success = teleop_msgs__msg__TeleopTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__TeleopTarget__destroy(teleop_msgs__msg__TeleopTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__TeleopTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__TeleopTarget__Sequence__init(teleop_msgs__msg__TeleopTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopTarget * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(teleop_msgs__msg__TeleopTarget)) {
      return false;
    }
    data = (teleop_msgs__msg__TeleopTarget *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__TeleopTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__TeleopTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__TeleopTarget__fini(&data[i - 1]);
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
teleop_msgs__msg__TeleopTarget__Sequence__fini(teleop_msgs__msg__TeleopTarget__Sequence * array)
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
      teleop_msgs__msg__TeleopTarget__fini(&array->data[i]);
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

teleop_msgs__msg__TeleopTarget__Sequence *
teleop_msgs__msg__TeleopTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopTarget__Sequence * array = (teleop_msgs__msg__TeleopTarget__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__TeleopTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__TeleopTarget__Sequence__destroy(teleop_msgs__msg__TeleopTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__TeleopTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__TeleopTarget__Sequence__are_equal(const teleop_msgs__msg__TeleopTarget__Sequence * lhs, const teleop_msgs__msg__TeleopTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__TeleopTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__TeleopTarget__Sequence__copy(
  const teleop_msgs__msg__TeleopTarget__Sequence * input,
  teleop_msgs__msg__TeleopTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(teleop_msgs__msg__TeleopTarget)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__TeleopTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__msg__TeleopTarget * data =
      (teleop_msgs__msg__TeleopTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__TeleopTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__TeleopTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__TeleopTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
