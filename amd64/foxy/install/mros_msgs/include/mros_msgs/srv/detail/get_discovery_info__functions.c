// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mros_msgs:srv/GetDiscoveryInfo.idl
// generated code does not contain a copyright notice
#include "mros_msgs/srv/detail/get_discovery_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mros_msgs__srv__GetDiscoveryInfo_Request__init(mros_msgs__srv__GetDiscoveryInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mros_msgs__srv__GetDiscoveryInfo_Request__fini(mros_msgs__srv__GetDiscoveryInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mros_msgs__srv__GetDiscoveryInfo_Request__are_equal(const mros_msgs__srv__GetDiscoveryInfo_Request * lhs, const mros_msgs__srv__GetDiscoveryInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mros_msgs__srv__GetDiscoveryInfo_Request__copy(
  const mros_msgs__srv__GetDiscoveryInfo_Request * input,
  mros_msgs__srv__GetDiscoveryInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mros_msgs__srv__GetDiscoveryInfo_Request *
mros_msgs__srv__GetDiscoveryInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__srv__GetDiscoveryInfo_Request * msg = (mros_msgs__srv__GetDiscoveryInfo_Request *)allocator.allocate(sizeof(mros_msgs__srv__GetDiscoveryInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mros_msgs__srv__GetDiscoveryInfo_Request));
  bool success = mros_msgs__srv__GetDiscoveryInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mros_msgs__srv__GetDiscoveryInfo_Request__destroy(mros_msgs__srv__GetDiscoveryInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mros_msgs__srv__GetDiscoveryInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__init(mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__srv__GetDiscoveryInfo_Request * data = NULL;

  if (size) {
    data = (mros_msgs__srv__GetDiscoveryInfo_Request *)allocator.zero_allocate(size, sizeof(mros_msgs__srv__GetDiscoveryInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mros_msgs__srv__GetDiscoveryInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mros_msgs__srv__GetDiscoveryInfo_Request__fini(&data[i - 1]);
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
mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__fini(mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * array)
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
      mros_msgs__srv__GetDiscoveryInfo_Request__fini(&array->data[i]);
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

mros_msgs__srv__GetDiscoveryInfo_Request__Sequence *
mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * array = (mros_msgs__srv__GetDiscoveryInfo_Request__Sequence *)allocator.allocate(sizeof(mros_msgs__srv__GetDiscoveryInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__destroy(mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__are_equal(const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * lhs, const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mros_msgs__srv__GetDiscoveryInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mros_msgs__srv__GetDiscoveryInfo_Request__Sequence__copy(
  const mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * input,
  mros_msgs__srv__GetDiscoveryInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mros_msgs__srv__GetDiscoveryInfo_Request);
    mros_msgs__srv__GetDiscoveryInfo_Request * data =
      (mros_msgs__srv__GetDiscoveryInfo_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mros_msgs__srv__GetDiscoveryInfo_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mros_msgs__srv__GetDiscoveryInfo_Request__fini(&data[i]);
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
    if (!mros_msgs__srv__GetDiscoveryInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `nodes`
#include "mros_msgs/msg/detail/node_info__functions.h"
// Member `subscribers`
// Member `publishers`
// Member `services`
#include "mros_msgs/msg/detail/topic_info__functions.h"

bool
mros_msgs__srv__GetDiscoveryInfo_Response__init(mros_msgs__srv__GetDiscoveryInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // nodes
  if (!mros_msgs__msg__NodeInfo__Sequence__init(&msg->nodes, 0)) {
    mros_msgs__srv__GetDiscoveryInfo_Response__fini(msg);
    return false;
  }
  // subscribers
  if (!mros_msgs__msg__TopicInfo__Sequence__init(&msg->subscribers, 0)) {
    mros_msgs__srv__GetDiscoveryInfo_Response__fini(msg);
    return false;
  }
  // publishers
  if (!mros_msgs__msg__TopicInfo__Sequence__init(&msg->publishers, 0)) {
    mros_msgs__srv__GetDiscoveryInfo_Response__fini(msg);
    return false;
  }
  // services
  if (!mros_msgs__msg__TopicInfo__Sequence__init(&msg->services, 0)) {
    mros_msgs__srv__GetDiscoveryInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
mros_msgs__srv__GetDiscoveryInfo_Response__fini(mros_msgs__srv__GetDiscoveryInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // nodes
  mros_msgs__msg__NodeInfo__Sequence__fini(&msg->nodes);
  // subscribers
  mros_msgs__msg__TopicInfo__Sequence__fini(&msg->subscribers);
  // publishers
  mros_msgs__msg__TopicInfo__Sequence__fini(&msg->publishers);
  // services
  mros_msgs__msg__TopicInfo__Sequence__fini(&msg->services);
}

bool
mros_msgs__srv__GetDiscoveryInfo_Response__are_equal(const mros_msgs__srv__GetDiscoveryInfo_Response * lhs, const mros_msgs__srv__GetDiscoveryInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nodes
  if (!mros_msgs__msg__NodeInfo__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  // subscribers
  if (!mros_msgs__msg__TopicInfo__Sequence__are_equal(
      &(lhs->subscribers), &(rhs->subscribers)))
  {
    return false;
  }
  // publishers
  if (!mros_msgs__msg__TopicInfo__Sequence__are_equal(
      &(lhs->publishers), &(rhs->publishers)))
  {
    return false;
  }
  // services
  if (!mros_msgs__msg__TopicInfo__Sequence__are_equal(
      &(lhs->services), &(rhs->services)))
  {
    return false;
  }
  return true;
}

bool
mros_msgs__srv__GetDiscoveryInfo_Response__copy(
  const mros_msgs__srv__GetDiscoveryInfo_Response * input,
  mros_msgs__srv__GetDiscoveryInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // nodes
  if (!mros_msgs__msg__NodeInfo__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  // subscribers
  if (!mros_msgs__msg__TopicInfo__Sequence__copy(
      &(input->subscribers), &(output->subscribers)))
  {
    return false;
  }
  // publishers
  if (!mros_msgs__msg__TopicInfo__Sequence__copy(
      &(input->publishers), &(output->publishers)))
  {
    return false;
  }
  // services
  if (!mros_msgs__msg__TopicInfo__Sequence__copy(
      &(input->services), &(output->services)))
  {
    return false;
  }
  return true;
}

mros_msgs__srv__GetDiscoveryInfo_Response *
mros_msgs__srv__GetDiscoveryInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__srv__GetDiscoveryInfo_Response * msg = (mros_msgs__srv__GetDiscoveryInfo_Response *)allocator.allocate(sizeof(mros_msgs__srv__GetDiscoveryInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mros_msgs__srv__GetDiscoveryInfo_Response));
  bool success = mros_msgs__srv__GetDiscoveryInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mros_msgs__srv__GetDiscoveryInfo_Response__destroy(mros_msgs__srv__GetDiscoveryInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mros_msgs__srv__GetDiscoveryInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__init(mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__srv__GetDiscoveryInfo_Response * data = NULL;

  if (size) {
    data = (mros_msgs__srv__GetDiscoveryInfo_Response *)allocator.zero_allocate(size, sizeof(mros_msgs__srv__GetDiscoveryInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mros_msgs__srv__GetDiscoveryInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mros_msgs__srv__GetDiscoveryInfo_Response__fini(&data[i - 1]);
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
mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__fini(mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * array)
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
      mros_msgs__srv__GetDiscoveryInfo_Response__fini(&array->data[i]);
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

mros_msgs__srv__GetDiscoveryInfo_Response__Sequence *
mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * array = (mros_msgs__srv__GetDiscoveryInfo_Response__Sequence *)allocator.allocate(sizeof(mros_msgs__srv__GetDiscoveryInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__destroy(mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__are_equal(const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * lhs, const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mros_msgs__srv__GetDiscoveryInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mros_msgs__srv__GetDiscoveryInfo_Response__Sequence__copy(
  const mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * input,
  mros_msgs__srv__GetDiscoveryInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mros_msgs__srv__GetDiscoveryInfo_Response);
    mros_msgs__srv__GetDiscoveryInfo_Response * data =
      (mros_msgs__srv__GetDiscoveryInfo_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mros_msgs__srv__GetDiscoveryInfo_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mros_msgs__srv__GetDiscoveryInfo_Response__fini(&data[i]);
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
    if (!mros_msgs__srv__GetDiscoveryInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
