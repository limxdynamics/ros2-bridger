// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limx_arm_msgs:msg/arm_status.idl
// generated code does not contain a copyright notice
#include "limx_arm_msgs/msg/detail/arm_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left_joints`
// Member `right_joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
limx_arm_msgs__msg__arm_status__init(limx_arm_msgs__msg__arm_status * msg)
{
  if (!msg) {
    return false;
  }
  // left_joints
  if (!rosidl_runtime_c__double__Sequence__init(&msg->left_joints, 0)) {
    limx_arm_msgs__msg__arm_status__fini(msg);
    return false;
  }
  // right_joints
  if (!rosidl_runtime_c__double__Sequence__init(&msg->right_joints, 0)) {
    limx_arm_msgs__msg__arm_status__fini(msg);
    return false;
  }
  // left_endEffector
  // right_endEffector
  // ik_statu
  return true;
}

void
limx_arm_msgs__msg__arm_status__fini(limx_arm_msgs__msg__arm_status * msg)
{
  if (!msg) {
    return;
  }
  // left_joints
  rosidl_runtime_c__double__Sequence__fini(&msg->left_joints);
  // right_joints
  rosidl_runtime_c__double__Sequence__fini(&msg->right_joints);
  // left_endEffector
  // right_endEffector
  // ik_statu
}

bool
limx_arm_msgs__msg__arm_status__are_equal(const limx_arm_msgs__msg__arm_status * lhs, const limx_arm_msgs__msg__arm_status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_joints
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->left_joints), &(rhs->left_joints)))
  {
    return false;
  }
  // right_joints
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->right_joints), &(rhs->right_joints)))
  {
    return false;
  }
  // left_endEffector
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->left_endEffector[i] != rhs->left_endEffector[i]) {
      return false;
    }
  }
  // right_endEffector
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->right_endEffector[i] != rhs->right_endEffector[i]) {
      return false;
    }
  }
  // ik_statu
  if (lhs->ik_statu != rhs->ik_statu) {
    return false;
  }
  return true;
}

bool
limx_arm_msgs__msg__arm_status__copy(
  const limx_arm_msgs__msg__arm_status * input,
  limx_arm_msgs__msg__arm_status * output)
{
  if (!input || !output) {
    return false;
  }
  // left_joints
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->left_joints), &(output->left_joints)))
  {
    return false;
  }
  // right_joints
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->right_joints), &(output->right_joints)))
  {
    return false;
  }
  // left_endEffector
  for (size_t i = 0; i < 7; ++i) {
    output->left_endEffector[i] = input->left_endEffector[i];
  }
  // right_endEffector
  for (size_t i = 0; i < 7; ++i) {
    output->right_endEffector[i] = input->right_endEffector[i];
  }
  // ik_statu
  output->ik_statu = input->ik_statu;
  return true;
}

limx_arm_msgs__msg__arm_status *
limx_arm_msgs__msg__arm_status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__arm_status * msg = (limx_arm_msgs__msg__arm_status *)allocator.allocate(sizeof(limx_arm_msgs__msg__arm_status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__msg__arm_status));
  bool success = limx_arm_msgs__msg__arm_status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__msg__arm_status__destroy(limx_arm_msgs__msg__arm_status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__msg__arm_status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__msg__arm_status__Sequence__init(limx_arm_msgs__msg__arm_status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__arm_status * data = NULL;

  if (size) {
    data = (limx_arm_msgs__msg__arm_status *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__msg__arm_status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__msg__arm_status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__msg__arm_status__fini(&data[i - 1]);
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
limx_arm_msgs__msg__arm_status__Sequence__fini(limx_arm_msgs__msg__arm_status__Sequence * array)
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
      limx_arm_msgs__msg__arm_status__fini(&array->data[i]);
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

limx_arm_msgs__msg__arm_status__Sequence *
limx_arm_msgs__msg__arm_status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__arm_status__Sequence * array = (limx_arm_msgs__msg__arm_status__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__msg__arm_status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__msg__arm_status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__msg__arm_status__Sequence__destroy(limx_arm_msgs__msg__arm_status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__msg__arm_status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__msg__arm_status__Sequence__are_equal(const limx_arm_msgs__msg__arm_status__Sequence * lhs, const limx_arm_msgs__msg__arm_status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__msg__arm_status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__msg__arm_status__Sequence__copy(
  const limx_arm_msgs__msg__arm_status__Sequence * input,
  limx_arm_msgs__msg__arm_status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__msg__arm_status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limx_arm_msgs__msg__arm_status * data =
      (limx_arm_msgs__msg__arm_status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__msg__arm_status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__msg__arm_status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limx_arm_msgs__msg__arm_status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
