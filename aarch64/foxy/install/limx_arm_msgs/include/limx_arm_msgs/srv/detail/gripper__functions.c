// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limx_arm_msgs:srv/gripper.idl
// generated code does not contain a copyright notice
#include "limx_arm_msgs/srv/detail/gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
limx_arm_msgs__srv__gripper_Request__init(limx_arm_msgs__srv__gripper_Request * msg)
{
  if (!msg) {
    return false;
  }
  // initial
  // dis
  // force
  return true;
}

void
limx_arm_msgs__srv__gripper_Request__fini(limx_arm_msgs__srv__gripper_Request * msg)
{
  if (!msg) {
    return;
  }
  // initial
  // dis
  // force
}

bool
limx_arm_msgs__srv__gripper_Request__are_equal(const limx_arm_msgs__srv__gripper_Request * lhs, const limx_arm_msgs__srv__gripper_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // initial
  if (lhs->initial != rhs->initial) {
    return false;
  }
  // dis
  if (lhs->dis != rhs->dis) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  return true;
}

bool
limx_arm_msgs__srv__gripper_Request__copy(
  const limx_arm_msgs__srv__gripper_Request * input,
  limx_arm_msgs__srv__gripper_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // initial
  output->initial = input->initial;
  // dis
  output->dis = input->dis;
  // force
  output->force = input->force;
  return true;
}

limx_arm_msgs__srv__gripper_Request *
limx_arm_msgs__srv__gripper_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__gripper_Request * msg = (limx_arm_msgs__srv__gripper_Request *)allocator.allocate(sizeof(limx_arm_msgs__srv__gripper_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__srv__gripper_Request));
  bool success = limx_arm_msgs__srv__gripper_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__srv__gripper_Request__destroy(limx_arm_msgs__srv__gripper_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__srv__gripper_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__srv__gripper_Request__Sequence__init(limx_arm_msgs__srv__gripper_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__gripper_Request * data = NULL;

  if (size) {
    data = (limx_arm_msgs__srv__gripper_Request *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__srv__gripper_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__srv__gripper_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__srv__gripper_Request__fini(&data[i - 1]);
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
limx_arm_msgs__srv__gripper_Request__Sequence__fini(limx_arm_msgs__srv__gripper_Request__Sequence * array)
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
      limx_arm_msgs__srv__gripper_Request__fini(&array->data[i]);
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

limx_arm_msgs__srv__gripper_Request__Sequence *
limx_arm_msgs__srv__gripper_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__gripper_Request__Sequence * array = (limx_arm_msgs__srv__gripper_Request__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__srv__gripper_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__srv__gripper_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__srv__gripper_Request__Sequence__destroy(limx_arm_msgs__srv__gripper_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__srv__gripper_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__srv__gripper_Request__Sequence__are_equal(const limx_arm_msgs__srv__gripper_Request__Sequence * lhs, const limx_arm_msgs__srv__gripper_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__srv__gripper_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__srv__gripper_Request__Sequence__copy(
  const limx_arm_msgs__srv__gripper_Request__Sequence * input,
  limx_arm_msgs__srv__gripper_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__srv__gripper_Request);
    limx_arm_msgs__srv__gripper_Request * data =
      (limx_arm_msgs__srv__gripper_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__srv__gripper_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__srv__gripper_Request__fini(&data[i]);
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
    if (!limx_arm_msgs__srv__gripper_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
limx_arm_msgs__srv__gripper_Response__init(limx_arm_msgs__srv__gripper_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
limx_arm_msgs__srv__gripper_Response__fini(limx_arm_msgs__srv__gripper_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
limx_arm_msgs__srv__gripper_Response__are_equal(const limx_arm_msgs__srv__gripper_Response * lhs, const limx_arm_msgs__srv__gripper_Response * rhs)
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
limx_arm_msgs__srv__gripper_Response__copy(
  const limx_arm_msgs__srv__gripper_Response * input,
  limx_arm_msgs__srv__gripper_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

limx_arm_msgs__srv__gripper_Response *
limx_arm_msgs__srv__gripper_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__gripper_Response * msg = (limx_arm_msgs__srv__gripper_Response *)allocator.allocate(sizeof(limx_arm_msgs__srv__gripper_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__srv__gripper_Response));
  bool success = limx_arm_msgs__srv__gripper_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__srv__gripper_Response__destroy(limx_arm_msgs__srv__gripper_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__srv__gripper_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__srv__gripper_Response__Sequence__init(limx_arm_msgs__srv__gripper_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__gripper_Response * data = NULL;

  if (size) {
    data = (limx_arm_msgs__srv__gripper_Response *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__srv__gripper_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__srv__gripper_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__srv__gripper_Response__fini(&data[i - 1]);
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
limx_arm_msgs__srv__gripper_Response__Sequence__fini(limx_arm_msgs__srv__gripper_Response__Sequence * array)
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
      limx_arm_msgs__srv__gripper_Response__fini(&array->data[i]);
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

limx_arm_msgs__srv__gripper_Response__Sequence *
limx_arm_msgs__srv__gripper_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__gripper_Response__Sequence * array = (limx_arm_msgs__srv__gripper_Response__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__srv__gripper_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__srv__gripper_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__srv__gripper_Response__Sequence__destroy(limx_arm_msgs__srv__gripper_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__srv__gripper_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__srv__gripper_Response__Sequence__are_equal(const limx_arm_msgs__srv__gripper_Response__Sequence * lhs, const limx_arm_msgs__srv__gripper_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__srv__gripper_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__srv__gripper_Response__Sequence__copy(
  const limx_arm_msgs__srv__gripper_Response__Sequence * input,
  limx_arm_msgs__srv__gripper_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__srv__gripper_Response);
    limx_arm_msgs__srv__gripper_Response * data =
      (limx_arm_msgs__srv__gripper_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__srv__gripper_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__srv__gripper_Response__fini(&data[i]);
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
    if (!limx_arm_msgs__srv__gripper_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
