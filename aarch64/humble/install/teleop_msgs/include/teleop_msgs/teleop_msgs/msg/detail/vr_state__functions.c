// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from teleop_msgs:msg/VRState.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/vr_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
teleop_msgs__msg__VRState__init(teleop_msgs__msg__VRState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    teleop_msgs__msg__VRState__fini(msg);
    return false;
  }
  // eyePose
  // l
  // r
  // leftJS
  // leftTrig
  // leftGrip
  // LThU
  // LTr
  // LG
  // X
  // Y
  // rightJS
  // rightTrig
  // rightGrip
  // RThU
  // RTr
  // RG
  // A
  // B
  return true;
}

void
teleop_msgs__msg__VRState__fini(teleop_msgs__msg__VRState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // eyePose
  // l
  // r
  // leftJS
  // leftTrig
  // leftGrip
  // LThU
  // LTr
  // LG
  // X
  // Y
  // rightJS
  // rightTrig
  // rightGrip
  // RThU
  // RTr
  // RG
  // A
  // B
}

bool
teleop_msgs__msg__VRState__are_equal(const teleop_msgs__msg__VRState * lhs, const teleop_msgs__msg__VRState * rhs)
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
  // eyePose
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->eyePose[i] != rhs->eyePose[i]) {
      return false;
    }
  }
  // l
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->l[i] != rhs->l[i]) {
      return false;
    }
  }
  // r
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->r[i] != rhs->r[i]) {
      return false;
    }
  }
  // leftJS
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->leftJS[i] != rhs->leftJS[i]) {
      return false;
    }
  }
  // leftTrig
  if (lhs->leftTrig != rhs->leftTrig) {
    return false;
  }
  // leftGrip
  if (lhs->leftGrip != rhs->leftGrip) {
    return false;
  }
  // LThU
  if (lhs->LThU != rhs->LThU) {
    return false;
  }
  // LTr
  if (lhs->LTr != rhs->LTr) {
    return false;
  }
  // LG
  if (lhs->LG != rhs->LG) {
    return false;
  }
  // X
  if (lhs->X != rhs->X) {
    return false;
  }
  // Y
  if (lhs->Y != rhs->Y) {
    return false;
  }
  // rightJS
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->rightJS[i] != rhs->rightJS[i]) {
      return false;
    }
  }
  // rightTrig
  if (lhs->rightTrig != rhs->rightTrig) {
    return false;
  }
  // rightGrip
  if (lhs->rightGrip != rhs->rightGrip) {
    return false;
  }
  // RThU
  if (lhs->RThU != rhs->RThU) {
    return false;
  }
  // RTr
  if (lhs->RTr != rhs->RTr) {
    return false;
  }
  // RG
  if (lhs->RG != rhs->RG) {
    return false;
  }
  // A
  if (lhs->A != rhs->A) {
    return false;
  }
  // B
  if (lhs->B != rhs->B) {
    return false;
  }
  return true;
}

bool
teleop_msgs__msg__VRState__copy(
  const teleop_msgs__msg__VRState * input,
  teleop_msgs__msg__VRState * output)
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
  // eyePose
  for (size_t i = 0; i < 16; ++i) {
    output->eyePose[i] = input->eyePose[i];
  }
  // l
  for (size_t i = 0; i < 16; ++i) {
    output->l[i] = input->l[i];
  }
  // r
  for (size_t i = 0; i < 16; ++i) {
    output->r[i] = input->r[i];
  }
  // leftJS
  for (size_t i = 0; i < 2; ++i) {
    output->leftJS[i] = input->leftJS[i];
  }
  // leftTrig
  output->leftTrig = input->leftTrig;
  // leftGrip
  output->leftGrip = input->leftGrip;
  // LThU
  output->LThU = input->LThU;
  // LTr
  output->LTr = input->LTr;
  // LG
  output->LG = input->LG;
  // X
  output->X = input->X;
  // Y
  output->Y = input->Y;
  // rightJS
  for (size_t i = 0; i < 2; ++i) {
    output->rightJS[i] = input->rightJS[i];
  }
  // rightTrig
  output->rightTrig = input->rightTrig;
  // rightGrip
  output->rightGrip = input->rightGrip;
  // RThU
  output->RThU = input->RThU;
  // RTr
  output->RTr = input->RTr;
  // RG
  output->RG = input->RG;
  // A
  output->A = input->A;
  // B
  output->B = input->B;
  return true;
}

teleop_msgs__msg__VRState *
teleop_msgs__msg__VRState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__VRState * msg = (teleop_msgs__msg__VRState *)allocator.allocate(sizeof(teleop_msgs__msg__VRState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(teleop_msgs__msg__VRState));
  bool success = teleop_msgs__msg__VRState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
teleop_msgs__msg__VRState__destroy(teleop_msgs__msg__VRState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    teleop_msgs__msg__VRState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
teleop_msgs__msg__VRState__Sequence__init(teleop_msgs__msg__VRState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__VRState * data = NULL;

  if (size) {
    data = (teleop_msgs__msg__VRState *)allocator.zero_allocate(size, sizeof(teleop_msgs__msg__VRState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = teleop_msgs__msg__VRState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        teleop_msgs__msg__VRState__fini(&data[i - 1]);
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
teleop_msgs__msg__VRState__Sequence__fini(teleop_msgs__msg__VRState__Sequence * array)
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
      teleop_msgs__msg__VRState__fini(&array->data[i]);
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

teleop_msgs__msg__VRState__Sequence *
teleop_msgs__msg__VRState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  teleop_msgs__msg__VRState__Sequence * array = (teleop_msgs__msg__VRState__Sequence *)allocator.allocate(sizeof(teleop_msgs__msg__VRState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = teleop_msgs__msg__VRState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
teleop_msgs__msg__VRState__Sequence__destroy(teleop_msgs__msg__VRState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    teleop_msgs__msg__VRState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
teleop_msgs__msg__VRState__Sequence__are_equal(const teleop_msgs__msg__VRState__Sequence * lhs, const teleop_msgs__msg__VRState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!teleop_msgs__msg__VRState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
teleop_msgs__msg__VRState__Sequence__copy(
  const teleop_msgs__msg__VRState__Sequence * input,
  teleop_msgs__msg__VRState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(teleop_msgs__msg__VRState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    teleop_msgs__msg__VRState * data =
      (teleop_msgs__msg__VRState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!teleop_msgs__msg__VRState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          teleop_msgs__msg__VRState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!teleop_msgs__msg__VRState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
