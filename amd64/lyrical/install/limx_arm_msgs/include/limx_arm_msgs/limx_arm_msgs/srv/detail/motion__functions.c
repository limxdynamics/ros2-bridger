// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limx_arm_msgs:srv/motion.idl
// generated code does not contain a copyright notice
#include "limx_arm_msgs/srv/detail/motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
limx_arm_msgs__srv__motion_Request__init(limx_arm_msgs__srv__motion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_arm_pos
  // right_arm_pos
  // duration_time
  return true;
}

void
limx_arm_msgs__srv__motion_Request__fini(limx_arm_msgs__srv__motion_Request * msg)
{
  if (!msg) {
    return;
  }
  // left_arm_pos
  // right_arm_pos
  // duration_time
}

bool
limx_arm_msgs__srv__motion_Request__are_equal(const limx_arm_msgs__srv__motion_Request * lhs, const limx_arm_msgs__srv__motion_Request * rhs)
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
  // duration_time
  if (lhs->duration_time != rhs->duration_time) {
    return false;
  }
  return true;
}

bool
limx_arm_msgs__srv__motion_Request__copy(
  const limx_arm_msgs__srv__motion_Request * input,
  limx_arm_msgs__srv__motion_Request * output)
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
  // duration_time
  output->duration_time = input->duration_time;
  return true;
}

limx_arm_msgs__srv__motion_Request *
limx_arm_msgs__srv__motion_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Request * msg = (limx_arm_msgs__srv__motion_Request *)allocator.allocate(sizeof(limx_arm_msgs__srv__motion_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__srv__motion_Request));
  bool success = limx_arm_msgs__srv__motion_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__srv__motion_Request__destroy(limx_arm_msgs__srv__motion_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__srv__motion_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__srv__motion_Request__Sequence__init(limx_arm_msgs__srv__motion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(limx_arm_msgs__srv__motion_Request)) {
      return false;
    }
    data = (limx_arm_msgs__srv__motion_Request *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__srv__motion_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__srv__motion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__srv__motion_Request__fini(&data[i - 1]);
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
limx_arm_msgs__srv__motion_Request__Sequence__fini(limx_arm_msgs__srv__motion_Request__Sequence * array)
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
      limx_arm_msgs__srv__motion_Request__fini(&array->data[i]);
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

limx_arm_msgs__srv__motion_Request__Sequence *
limx_arm_msgs__srv__motion_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Request__Sequence * array = (limx_arm_msgs__srv__motion_Request__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__srv__motion_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__srv__motion_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__srv__motion_Request__Sequence__destroy(limx_arm_msgs__srv__motion_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__srv__motion_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__srv__motion_Request__Sequence__are_equal(const limx_arm_msgs__srv__motion_Request__Sequence * lhs, const limx_arm_msgs__srv__motion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__srv__motion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__srv__motion_Request__Sequence__copy(
  const limx_arm_msgs__srv__motion_Request__Sequence * input,
  limx_arm_msgs__srv__motion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(limx_arm_msgs__srv__motion_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__srv__motion_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limx_arm_msgs__srv__motion_Request * data =
      (limx_arm_msgs__srv__motion_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__srv__motion_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__srv__motion_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limx_arm_msgs__srv__motion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
limx_arm_msgs__srv__motion_Response__init(limx_arm_msgs__srv__motion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
limx_arm_msgs__srv__motion_Response__fini(limx_arm_msgs__srv__motion_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
limx_arm_msgs__srv__motion_Response__are_equal(const limx_arm_msgs__srv__motion_Response * lhs, const limx_arm_msgs__srv__motion_Response * rhs)
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
limx_arm_msgs__srv__motion_Response__copy(
  const limx_arm_msgs__srv__motion_Response * input,
  limx_arm_msgs__srv__motion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

limx_arm_msgs__srv__motion_Response *
limx_arm_msgs__srv__motion_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Response * msg = (limx_arm_msgs__srv__motion_Response *)allocator.allocate(sizeof(limx_arm_msgs__srv__motion_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__srv__motion_Response));
  bool success = limx_arm_msgs__srv__motion_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__srv__motion_Response__destroy(limx_arm_msgs__srv__motion_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__srv__motion_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__srv__motion_Response__Sequence__init(limx_arm_msgs__srv__motion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(limx_arm_msgs__srv__motion_Response)) {
      return false;
    }
    data = (limx_arm_msgs__srv__motion_Response *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__srv__motion_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__srv__motion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__srv__motion_Response__fini(&data[i - 1]);
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
limx_arm_msgs__srv__motion_Response__Sequence__fini(limx_arm_msgs__srv__motion_Response__Sequence * array)
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
      limx_arm_msgs__srv__motion_Response__fini(&array->data[i]);
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

limx_arm_msgs__srv__motion_Response__Sequence *
limx_arm_msgs__srv__motion_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Response__Sequence * array = (limx_arm_msgs__srv__motion_Response__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__srv__motion_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__srv__motion_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__srv__motion_Response__Sequence__destroy(limx_arm_msgs__srv__motion_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__srv__motion_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__srv__motion_Response__Sequence__are_equal(const limx_arm_msgs__srv__motion_Response__Sequence * lhs, const limx_arm_msgs__srv__motion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__srv__motion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__srv__motion_Response__Sequence__copy(
  const limx_arm_msgs__srv__motion_Response__Sequence * input,
  limx_arm_msgs__srv__motion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(limx_arm_msgs__srv__motion_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__srv__motion_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limx_arm_msgs__srv__motion_Response * data =
      (limx_arm_msgs__srv__motion_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__srv__motion_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__srv__motion_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limx_arm_msgs__srv__motion_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "limx_arm_msgs/srv/detail/motion__functions.h"

bool
limx_arm_msgs__srv__motion_Event__init(limx_arm_msgs__srv__motion_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    limx_arm_msgs__srv__motion_Event__fini(msg);
    return false;
  }
  // request
  if (!limx_arm_msgs__srv__motion_Request__Sequence__init(&msg->request, 0)) {
    limx_arm_msgs__srv__motion_Event__fini(msg);
    return false;
  }
  // response
  if (!limx_arm_msgs__srv__motion_Response__Sequence__init(&msg->response, 0)) {
    limx_arm_msgs__srv__motion_Event__fini(msg);
    return false;
  }
  return true;
}

void
limx_arm_msgs__srv__motion_Event__fini(limx_arm_msgs__srv__motion_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  limx_arm_msgs__srv__motion_Request__Sequence__fini(&msg->request);
  // response
  limx_arm_msgs__srv__motion_Response__Sequence__fini(&msg->response);
}

bool
limx_arm_msgs__srv__motion_Event__are_equal(const limx_arm_msgs__srv__motion_Event * lhs, const limx_arm_msgs__srv__motion_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!limx_arm_msgs__srv__motion_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!limx_arm_msgs__srv__motion_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
limx_arm_msgs__srv__motion_Event__copy(
  const limx_arm_msgs__srv__motion_Event * input,
  limx_arm_msgs__srv__motion_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!limx_arm_msgs__srv__motion_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!limx_arm_msgs__srv__motion_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

limx_arm_msgs__srv__motion_Event *
limx_arm_msgs__srv__motion_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Event * msg = (limx_arm_msgs__srv__motion_Event *)allocator.allocate(sizeof(limx_arm_msgs__srv__motion_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limx_arm_msgs__srv__motion_Event));
  bool success = limx_arm_msgs__srv__motion_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limx_arm_msgs__srv__motion_Event__destroy(limx_arm_msgs__srv__motion_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limx_arm_msgs__srv__motion_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limx_arm_msgs__srv__motion_Event__Sequence__init(limx_arm_msgs__srv__motion_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(limx_arm_msgs__srv__motion_Event)) {
      return false;
    }
    data = (limx_arm_msgs__srv__motion_Event *)allocator.zero_allocate(size, sizeof(limx_arm_msgs__srv__motion_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limx_arm_msgs__srv__motion_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limx_arm_msgs__srv__motion_Event__fini(&data[i - 1]);
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
limx_arm_msgs__srv__motion_Event__Sequence__fini(limx_arm_msgs__srv__motion_Event__Sequence * array)
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
      limx_arm_msgs__srv__motion_Event__fini(&array->data[i]);
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

limx_arm_msgs__srv__motion_Event__Sequence *
limx_arm_msgs__srv__motion_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limx_arm_msgs__srv__motion_Event__Sequence * array = (limx_arm_msgs__srv__motion_Event__Sequence *)allocator.allocate(sizeof(limx_arm_msgs__srv__motion_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limx_arm_msgs__srv__motion_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limx_arm_msgs__srv__motion_Event__Sequence__destroy(limx_arm_msgs__srv__motion_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limx_arm_msgs__srv__motion_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limx_arm_msgs__srv__motion_Event__Sequence__are_equal(const limx_arm_msgs__srv__motion_Event__Sequence * lhs, const limx_arm_msgs__srv__motion_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limx_arm_msgs__srv__motion_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limx_arm_msgs__srv__motion_Event__Sequence__copy(
  const limx_arm_msgs__srv__motion_Event__Sequence * input,
  limx_arm_msgs__srv__motion_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(limx_arm_msgs__srv__motion_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(limx_arm_msgs__srv__motion_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limx_arm_msgs__srv__motion_Event * data =
      (limx_arm_msgs__srv__motion_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limx_arm_msgs__srv__motion_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limx_arm_msgs__srv__motion_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limx_arm_msgs__srv__motion_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
