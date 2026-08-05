// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hand_msgs:msg/TactileState.idl
// generated code does not contain a copyright notice
#include "hand_msgs/msg/detail/tactile_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_force`
// Member `tangential_force`
// Member `direction_angle`
// Member `approximate_value`
// Member `tactile_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hand_msgs__msg__TactileState__init(hand_msgs__msg__TactileState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  // normal_force
  if (!rosidl_runtime_c__float__Sequence__init(&msg->normal_force, 0)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  // tangential_force
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tangential_force, 0)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  // direction_angle
  if (!rosidl_runtime_c__float__Sequence__init(&msg->direction_angle, 0)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  // approximate_value
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->approximate_value, 0)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  // tactile_state
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->tactile_state, 0)) {
    hand_msgs__msg__TactileState__fini(msg);
    return false;
  }
  return true;
}

void
hand_msgs__msg__TactileState__fini(hand_msgs__msg__TactileState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // normal_force
  rosidl_runtime_c__float__Sequence__fini(&msg->normal_force);
  // tangential_force
  rosidl_runtime_c__float__Sequence__fini(&msg->tangential_force);
  // direction_angle
  rosidl_runtime_c__float__Sequence__fini(&msg->direction_angle);
  // approximate_value
  rosidl_runtime_c__uint32__Sequence__fini(&msg->approximate_value);
  // tactile_state
  rosidl_runtime_c__uint16__Sequence__fini(&msg->tactile_state);
}

bool
hand_msgs__msg__TactileState__are_equal(const hand_msgs__msg__TactileState * lhs, const hand_msgs__msg__TactileState * rhs)
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
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // normal_force
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->normal_force), &(rhs->normal_force)))
  {
    return false;
  }
  // tangential_force
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tangential_force), &(rhs->tangential_force)))
  {
    return false;
  }
  // direction_angle
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->direction_angle), &(rhs->direction_angle)))
  {
    return false;
  }
  // approximate_value
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->approximate_value), &(rhs->approximate_value)))
  {
    return false;
  }
  // tactile_state
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->tactile_state), &(rhs->tactile_state)))
  {
    return false;
  }
  return true;
}

bool
hand_msgs__msg__TactileState__copy(
  const hand_msgs__msg__TactileState * input,
  hand_msgs__msg__TactileState * output)
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
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // normal_force
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->normal_force), &(output->normal_force)))
  {
    return false;
  }
  // tangential_force
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tangential_force), &(output->tangential_force)))
  {
    return false;
  }
  // direction_angle
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->direction_angle), &(output->direction_angle)))
  {
    return false;
  }
  // approximate_value
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->approximate_value), &(output->approximate_value)))
  {
    return false;
  }
  // tactile_state
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->tactile_state), &(output->tactile_state)))
  {
    return false;
  }
  return true;
}

hand_msgs__msg__TactileState *
hand_msgs__msg__TactileState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__TactileState * msg = (hand_msgs__msg__TactileState *)allocator.allocate(sizeof(hand_msgs__msg__TactileState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hand_msgs__msg__TactileState));
  bool success = hand_msgs__msg__TactileState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hand_msgs__msg__TactileState__destroy(hand_msgs__msg__TactileState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hand_msgs__msg__TactileState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hand_msgs__msg__TactileState__Sequence__init(hand_msgs__msg__TactileState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__TactileState * data = NULL;

  if (size) {
    data = (hand_msgs__msg__TactileState *)allocator.zero_allocate(size, sizeof(hand_msgs__msg__TactileState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hand_msgs__msg__TactileState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hand_msgs__msg__TactileState__fini(&data[i - 1]);
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
hand_msgs__msg__TactileState__Sequence__fini(hand_msgs__msg__TactileState__Sequence * array)
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
      hand_msgs__msg__TactileState__fini(&array->data[i]);
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

hand_msgs__msg__TactileState__Sequence *
hand_msgs__msg__TactileState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__TactileState__Sequence * array = (hand_msgs__msg__TactileState__Sequence *)allocator.allocate(sizeof(hand_msgs__msg__TactileState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hand_msgs__msg__TactileState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hand_msgs__msg__TactileState__Sequence__destroy(hand_msgs__msg__TactileState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hand_msgs__msg__TactileState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hand_msgs__msg__TactileState__Sequence__are_equal(const hand_msgs__msg__TactileState__Sequence * lhs, const hand_msgs__msg__TactileState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hand_msgs__msg__TactileState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hand_msgs__msg__TactileState__Sequence__copy(
  const hand_msgs__msg__TactileState__Sequence * input,
  hand_msgs__msg__TactileState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hand_msgs__msg__TactileState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hand_msgs__msg__TactileState * data =
      (hand_msgs__msg__TactileState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hand_msgs__msg__TactileState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hand_msgs__msg__TactileState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hand_msgs__msg__TactileState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
