// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tron2_manipulation:srv/arm_move.idl
// generated code does not contain a copyright notice
#include "tron2_manipulation/srv/detail/arm_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tron2_manipulation__srv__arm_move_Request__init(tron2_manipulation__srv__arm_move_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_arm_pos
  // right_arm_pos
  // speed
  return true;
}

void
tron2_manipulation__srv__arm_move_Request__fini(tron2_manipulation__srv__arm_move_Request * msg)
{
  if (!msg) {
    return;
  }
  // left_arm_pos
  // right_arm_pos
  // speed
}

bool
tron2_manipulation__srv__arm_move_Request__are_equal(const tron2_manipulation__srv__arm_move_Request * lhs, const tron2_manipulation__srv__arm_move_Request * rhs)
{
  if (!lhs || !rhs) {
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
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
tron2_manipulation__srv__arm_move_Request__copy(
  const tron2_manipulation__srv__arm_move_Request * input,
  tron2_manipulation__srv__arm_move_Request * output)
{
  if (!input || !output) {
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
  // speed
  output->speed = input->speed;
  return true;
}

tron2_manipulation__srv__arm_move_Request *
tron2_manipulation__srv__arm_move_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__srv__arm_move_Request * msg = (tron2_manipulation__srv__arm_move_Request *)allocator.allocate(sizeof(tron2_manipulation__srv__arm_move_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tron2_manipulation__srv__arm_move_Request));
  bool success = tron2_manipulation__srv__arm_move_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tron2_manipulation__srv__arm_move_Request__destroy(tron2_manipulation__srv__arm_move_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tron2_manipulation__srv__arm_move_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tron2_manipulation__srv__arm_move_Request__Sequence__init(tron2_manipulation__srv__arm_move_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__srv__arm_move_Request * data = NULL;

  if (size) {
    data = (tron2_manipulation__srv__arm_move_Request *)allocator.zero_allocate(size, sizeof(tron2_manipulation__srv__arm_move_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tron2_manipulation__srv__arm_move_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tron2_manipulation__srv__arm_move_Request__fini(&data[i - 1]);
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
tron2_manipulation__srv__arm_move_Request__Sequence__fini(tron2_manipulation__srv__arm_move_Request__Sequence * array)
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
      tron2_manipulation__srv__arm_move_Request__fini(&array->data[i]);
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

tron2_manipulation__srv__arm_move_Request__Sequence *
tron2_manipulation__srv__arm_move_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__srv__arm_move_Request__Sequence * array = (tron2_manipulation__srv__arm_move_Request__Sequence *)allocator.allocate(sizeof(tron2_manipulation__srv__arm_move_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tron2_manipulation__srv__arm_move_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tron2_manipulation__srv__arm_move_Request__Sequence__destroy(tron2_manipulation__srv__arm_move_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tron2_manipulation__srv__arm_move_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tron2_manipulation__srv__arm_move_Request__Sequence__are_equal(const tron2_manipulation__srv__arm_move_Request__Sequence * lhs, const tron2_manipulation__srv__arm_move_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tron2_manipulation__srv__arm_move_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tron2_manipulation__srv__arm_move_Request__Sequence__copy(
  const tron2_manipulation__srv__arm_move_Request__Sequence * input,
  tron2_manipulation__srv__arm_move_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tron2_manipulation__srv__arm_move_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tron2_manipulation__srv__arm_move_Request * data =
      (tron2_manipulation__srv__arm_move_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tron2_manipulation__srv__arm_move_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tron2_manipulation__srv__arm_move_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tron2_manipulation__srv__arm_move_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tron2_manipulation__srv__arm_move_Response__init(tron2_manipulation__srv__arm_move_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
tron2_manipulation__srv__arm_move_Response__fini(tron2_manipulation__srv__arm_move_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
tron2_manipulation__srv__arm_move_Response__are_equal(const tron2_manipulation__srv__arm_move_Response * lhs, const tron2_manipulation__srv__arm_move_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
tron2_manipulation__srv__arm_move_Response__copy(
  const tron2_manipulation__srv__arm_move_Response * input,
  tron2_manipulation__srv__arm_move_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

tron2_manipulation__srv__arm_move_Response *
tron2_manipulation__srv__arm_move_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__srv__arm_move_Response * msg = (tron2_manipulation__srv__arm_move_Response *)allocator.allocate(sizeof(tron2_manipulation__srv__arm_move_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tron2_manipulation__srv__arm_move_Response));
  bool success = tron2_manipulation__srv__arm_move_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tron2_manipulation__srv__arm_move_Response__destroy(tron2_manipulation__srv__arm_move_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tron2_manipulation__srv__arm_move_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tron2_manipulation__srv__arm_move_Response__Sequence__init(tron2_manipulation__srv__arm_move_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__srv__arm_move_Response * data = NULL;

  if (size) {
    data = (tron2_manipulation__srv__arm_move_Response *)allocator.zero_allocate(size, sizeof(tron2_manipulation__srv__arm_move_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tron2_manipulation__srv__arm_move_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tron2_manipulation__srv__arm_move_Response__fini(&data[i - 1]);
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
tron2_manipulation__srv__arm_move_Response__Sequence__fini(tron2_manipulation__srv__arm_move_Response__Sequence * array)
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
      tron2_manipulation__srv__arm_move_Response__fini(&array->data[i]);
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

tron2_manipulation__srv__arm_move_Response__Sequence *
tron2_manipulation__srv__arm_move_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__srv__arm_move_Response__Sequence * array = (tron2_manipulation__srv__arm_move_Response__Sequence *)allocator.allocate(sizeof(tron2_manipulation__srv__arm_move_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tron2_manipulation__srv__arm_move_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tron2_manipulation__srv__arm_move_Response__Sequence__destroy(tron2_manipulation__srv__arm_move_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tron2_manipulation__srv__arm_move_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tron2_manipulation__srv__arm_move_Response__Sequence__are_equal(const tron2_manipulation__srv__arm_move_Response__Sequence * lhs, const tron2_manipulation__srv__arm_move_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tron2_manipulation__srv__arm_move_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tron2_manipulation__srv__arm_move_Response__Sequence__copy(
  const tron2_manipulation__srv__arm_move_Response__Sequence * input,
  tron2_manipulation__srv__arm_move_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tron2_manipulation__srv__arm_move_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tron2_manipulation__srv__arm_move_Response * data =
      (tron2_manipulation__srv__arm_move_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tron2_manipulation__srv__arm_move_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tron2_manipulation__srv__arm_move_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tron2_manipulation__srv__arm_move_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
