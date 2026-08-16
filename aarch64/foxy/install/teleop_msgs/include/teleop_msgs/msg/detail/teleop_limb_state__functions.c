// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/TeleopLimbState.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/teleop_limb_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
teleop_msgs__msg__TeleopLimbState__init(teleop_msgs__msg__TeleopLimbState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    teleop_msgs__msg__TeleopLimbState__fini(msg);
    return false;
  }
  // following
  // ee_closure_enabled
  // ee_gesture_index
  return true;
}

void
teleop_msgs__msg__TeleopLimbState__fini(teleop_msgs__msg__TeleopLimbState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // following
  // ee_closure_enabled
  // ee_gesture_index
}

bool
teleop_msgs__msg__TeleopLimbState__are_equal(const teleop_msgs__msg__TeleopLimbState * lhs, const teleop_msgs__msg__TeleopLimbState * rhs)
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
  // following
  if (lhs->following != rhs->following) {
    return false;
  }
  // ee_closure_enabled
  if (lhs->ee_closure_enabled != rhs->ee_closure_enabled) {
    return false;
  }
  // ee_gesture_index
  if (lhs->ee_gesture_index != rhs->ee_gesture_index) {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__TeleopLimbState__copy(
  const teleop_msgs__msg__TeleopLimbState * input,
  teleop_msgs__msg__TeleopLimbState * output)
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
  // following
  output->following = input->following;
  // ee_closure_enabled
  output->ee_closure_enabled = input->ee_closure_enabled;
  // ee_gesture_index
  output->ee_gesture_index = input->ee_gesture_index;
  return true;
}

teleop_msgs__msg__TeleopLimbState *
teleop_msgs__msg__TeleopLimbState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopLimbState * msg = (teleop_msgs__msg__TeleopLimbState *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopLimbState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__TeleopLimbState));
  bool success = teleop_msgs__msg__TeleopLimbState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__TeleopLimbState__destroy(teleop_msgs__msg__TeleopLimbState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__TeleopLimbState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__TeleopLimbState__Sequence__init(teleop_msgs__msg__TeleopLimbState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopLimbState * data = NULL;

  if (size) {
    data = (teleop_msgs__msg__TeleopLimbState *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__TeleopLimbState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__TeleopLimbState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__TeleopLimbState__fini(&data[i - 1]);
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
teleop_msgs__msg__TeleopLimbState__Sequence__fini(teleop_msgs__msg__TeleopLimbState__Sequence * array)
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
      teleop_msgs__msg__TeleopLimbState__fini(&array->data[i]);
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

teleop_msgs__msg__TeleopLimbState__Sequence *
teleop_msgs__msg__TeleopLimbState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__TeleopLimbState__Sequence * array = (teleop_msgs__msg__TeleopLimbState__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__TeleopLimbState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__TeleopLimbState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__TeleopLimbState__Sequence__destroy(teleop_msgs__msg__TeleopLimbState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__TeleopLimbState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__TeleopLimbState__Sequence__are_equal(const teleop_msgs__msg__TeleopLimbState__Sequence * lhs, const teleop_msgs__msg__TeleopLimbState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__TeleopLimbState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__TeleopLimbState__Sequence__copy(
  const teleop_msgs__msg__TeleopLimbState__Sequence * input,
  teleop_msgs__msg__TeleopLimbState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__TeleopLimbState);
    teleop_msgs__msg__TeleopLimbState * data =
      (teleop_msgs__msg__TeleopLimbState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__TeleopLimbState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__TeleopLimbState__fini(&data[i]);
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
    if (!teleop_msgs__msg__TeleopLimbState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
