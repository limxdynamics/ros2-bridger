// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hand_msgs:msg/TactileHandState.idl
// generated code does not contain a copyright notice
#include "hand_msgs/msg/detail/tactile_hand_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `hand_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_state`
#include "hand_msgs/msg/detail/hand_msg__functions.h"
// Member `hand_tactile_state`
#include "hand_msgs/msg/detail/tactile_state__functions.h"

bool
hand_msgs__msg__TactileHandState__init(hand_msgs__msg__TactileHandState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hand_msgs__msg__TactileHandState__fini(msg);
    return false;
  }
  // hand_type
  if (!rosidl_runtime_c__String__init(&msg->hand_type)) {
    hand_msgs__msg__TactileHandState__fini(msg);
    return false;
  }
  // ctrl_mode
  // hand_state
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__HandMsg__init(&msg->hand_state[i])) {
      hand_msgs__msg__TactileHandState__fini(msg);
      return false;
    }
  }
  // hand_tactile_state
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__TactileState__init(&msg->hand_tactile_state[i])) {
      hand_msgs__msg__TactileHandState__fini(msg);
      return false;
    }
  }
  return true;
}

void
hand_msgs__msg__TactileHandState__fini(hand_msgs__msg__TactileHandState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hand_type
  rosidl_runtime_c__String__fini(&msg->hand_type);
  // ctrl_mode
  // hand_state
  for (size_t i = 0; i < 2; ++i) {
    hand_msgs__msg__HandMsg__fini(&msg->hand_state[i]);
  }
  // hand_tactile_state
  for (size_t i = 0; i < 2; ++i) {
    hand_msgs__msg__TactileState__fini(&msg->hand_tactile_state[i]);
  }
}

bool
hand_msgs__msg__TactileHandState__are_equal(const hand_msgs__msg__TactileHandState * lhs, const hand_msgs__msg__TactileHandState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // hand_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_type), &(rhs->hand_type)))
  {
    return false;
  }
  // ctrl_mode
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->ctrl_mode[i] != rhs->ctrl_mode[i]) {
      return false;
    }
  }
  // hand_state
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__HandMsg__are_equal(
        &(lhs->hand_state[i]), &(rhs->hand_state[i])))
    {
      return false;
    }
  }
  // hand_tactile_state
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__TactileState__are_equal(
        &(lhs->hand_tactile_state[i]), &(rhs->hand_tactile_state[i])))
    {
      return false;
    }
  }
  return true;
}

bool
hand_msgs__msg__TactileHandState__copy(
  const hand_msgs__msg__TactileHandState * input,
  hand_msgs__msg__TactileHandState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // hand_type
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_type), &(output->hand_type)))
  {
    return false;
  }
  // ctrl_mode
  for (size_t i = 0; i < 2; ++i) {
    output->ctrl_mode[i] = input->ctrl_mode[i];
  }
  // hand_state
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__HandMsg__copy(
        &(input->hand_state[i]), &(output->hand_state[i])))
    {
      return false;
    }
  }
  // hand_tactile_state
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__TactileState__copy(
        &(input->hand_tactile_state[i]), &(output->hand_tactile_state[i])))
    {
      return false;
    }
  }
  return true;
}

hand_msgs__msg__TactileHandState *
hand_msgs__msg__TactileHandState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__TactileHandState * msg = (hand_msgs__msg__TactileHandState *)allocator.allocate(sizeof(hand_msgs__msg__TactileHandState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hand_msgs__msg__TactileHandState));
  bool success = hand_msgs__msg__TactileHandState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hand_msgs__msg__TactileHandState__destroy(hand_msgs__msg__TactileHandState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hand_msgs__msg__TactileHandState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hand_msgs__msg__TactileHandState__Sequence__init(hand_msgs__msg__TactileHandState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__TactileHandState * data = NULL;

  if (size) {
    data = (hand_msgs__msg__TactileHandState *)allocator.zero_allocate(size, sizeof(hand_msgs__msg__TactileHandState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hand_msgs__msg__TactileHandState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hand_msgs__msg__TactileHandState__fini(&data[i - 1]);
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
hand_msgs__msg__TactileHandState__Sequence__fini(hand_msgs__msg__TactileHandState__Sequence * array)
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
      hand_msgs__msg__TactileHandState__fini(&array->data[i]);
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

hand_msgs__msg__TactileHandState__Sequence *
hand_msgs__msg__TactileHandState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__TactileHandState__Sequence * array = (hand_msgs__msg__TactileHandState__Sequence *)allocator.allocate(sizeof(hand_msgs__msg__TactileHandState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hand_msgs__msg__TactileHandState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hand_msgs__msg__TactileHandState__Sequence__destroy(hand_msgs__msg__TactileHandState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hand_msgs__msg__TactileHandState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hand_msgs__msg__TactileHandState__Sequence__are_equal(const hand_msgs__msg__TactileHandState__Sequence * lhs, const hand_msgs__msg__TactileHandState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hand_msgs__msg__TactileHandState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hand_msgs__msg__TactileHandState__Sequence__copy(
  const hand_msgs__msg__TactileHandState__Sequence * input,
  hand_msgs__msg__TactileHandState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hand_msgs__msg__TactileHandState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hand_msgs__msg__TactileHandState * data =
      (hand_msgs__msg__TactileHandState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hand_msgs__msg__TactileHandState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hand_msgs__msg__TactileHandState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hand_msgs__msg__TactileHandState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
