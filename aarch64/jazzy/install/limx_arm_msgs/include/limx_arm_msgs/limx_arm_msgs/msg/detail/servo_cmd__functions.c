// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limx_arm_msgs:msg/ServoCmd.idl
// generated code does not contain a copyright notice
#include "limx_arm_msgs/msg/detail/servo_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `functionName`
#include "rosidl_runtime_c/string_functions.h"

bool
limx_arm_msgs__msg__ServoCmd__init(limx_arm_msgs__msg__ServoCmd * msg)
{
  if (!msg) {
    return false;
  }
  // functionName
  if (!rosidl_runtime_c__String__init(&msg->functionName)) {
    limx_arm_msgs__msg__ServoCmd__fini(msg);
    return false;
  }
  // left_arm_pos
  // right_arm_pos
  return true;
}

void
limx_arm_msgs__msg__ServoCmd__fini(limx_arm_msgs__msg__ServoCmd * msg)
{
  if (!msg) {
    return;
  }
  // functionName
  rosidl_runtime_c__String__fini(&msg->functionName);
  // left_arm_pos
  // right_arm_pos
}

bool
limx_arm_msgs__msg__ServoCmd__are_equal(const limx_arm_msgs__msg__ServoCmd * lhs, const limx_arm_msgs__msg__ServoCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // functionName
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->functionName), &(rhs->functionName)))
  {
    return false;
  }
  // left_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->left_arm_pos[i] != rhs->left_arm_pos[i]) {
      return false;
    }
  }
  // right_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->right_arm_pos[i] != rhs->right_arm_pos[i]) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__msg__ServoCmd__copy(
  const limx_arm_msgs__msg__ServoCmd * input,
  limx_arm_msgs__msg__ServoCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // functionName
  if (!rosidl_runtime_c__String__copy(
      &(input->functionName), &(output->functionName)))
  {
    return false;
  }
  // left_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    output->left_arm_pos[i] = input->left_arm_pos[i];
  }
  // right_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    output->right_arm_pos[i] = input->right_arm_pos[i];
  }
  return true;
}

limx_arm_msgs__msg__ServoCmd *
limx_arm_msgs__msg__ServoCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__ServoCmd * msg = (limx_arm_msgs__msg__ServoCmd *)allocator.allocate(sizeof(limx_arm_msgs__msg__ServoCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__msg__ServoCmd));
  bool success = limx_arm_msgs__msg__ServoCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__msg__ServoCmd__destroy(limx_arm_msgs__msg__ServoCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__msg__ServoCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__msg__ServoCmd__Sequence__init(limx_arm_msgs__msg__ServoCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__ServoCmd * data = NULL;

  if (size) {
    data = (limx_arm_msgs__msg__ServoCmd *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__msg__ServoCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__msg__ServoCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__msg__ServoCmd__fini(&data[i - 1]);
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
limx_arm_msgs__msg__ServoCmd__Sequence__fini(limx_arm_msgs__msg__ServoCmd__Sequence * array)
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
      limx_arm_msgs__msg__ServoCmd__fini(&array->data[i]);
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

limx_arm_msgs__msg__ServoCmd__Sequence *
limx_arm_msgs__msg__ServoCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__msg__ServoCmd__Sequence * array = (limx_arm_msgs__msg__ServoCmd__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__msg__ServoCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__msg__ServoCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__msg__ServoCmd__Sequence__destroy(limx_arm_msgs__msg__ServoCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__msg__ServoCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__msg__ServoCmd__Sequence__are_equal(const limx_arm_msgs__msg__ServoCmd__Sequence * lhs, const limx_arm_msgs__msg__ServoCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__msg__ServoCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__msg__ServoCmd__Sequence__copy(
  const limx_arm_msgs__msg__ServoCmd__Sequence * input,
  limx_arm_msgs__msg__ServoCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__msg__ServoCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limx_arm_msgs__msg__ServoCmd * data =
      (limx_arm_msgs__msg__ServoCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__msg__ServoCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__msg__ServoCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limx_arm_msgs__msg__ServoCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
