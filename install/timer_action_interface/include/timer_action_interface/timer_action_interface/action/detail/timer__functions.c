// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from timer_action_interface:action/Timer.idl
// generated code does not contain a copyright notice
#include "timer_action_interface/action/detail/timer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
timer_action_interface__action__Timer_Goal__init(timer_action_interface__action__Timer_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // time_to_wait
  return true;
}

void
timer_action_interface__action__Timer_Goal__fini(timer_action_interface__action__Timer_Goal * msg)
{
  if (!msg) {
    return;
  }
  // time_to_wait
}

bool
timer_action_interface__action__Timer_Goal__are_equal(const timer_action_interface__action__Timer_Goal * lhs, const timer_action_interface__action__Timer_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_to_wait
  if (lhs->time_to_wait != rhs->time_to_wait) {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_Goal__copy(
  const timer_action_interface__action__Timer_Goal * input,
  timer_action_interface__action__Timer_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // time_to_wait
  output->time_to_wait = input->time_to_wait;
  return true;
}

timer_action_interface__action__Timer_Goal *
timer_action_interface__action__Timer_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Goal * msg = (timer_action_interface__action__Timer_Goal *)allocator.allocate(sizeof(timer_action_interface__action__Timer_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_Goal));
  bool success = timer_action_interface__action__Timer_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_Goal__destroy(timer_action_interface__action__Timer_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_Goal__Sequence__init(timer_action_interface__action__Timer_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Goal * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_Goal *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_Goal__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_Goal__Sequence__fini(timer_action_interface__action__Timer_Goal__Sequence * array)
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
      timer_action_interface__action__Timer_Goal__fini(&array->data[i]);
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

timer_action_interface__action__Timer_Goal__Sequence *
timer_action_interface__action__Timer_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Goal__Sequence * array = (timer_action_interface__action__Timer_Goal__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_Goal__Sequence__destroy(timer_action_interface__action__Timer_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_Goal__Sequence__are_equal(const timer_action_interface__action__Timer_Goal__Sequence * lhs, const timer_action_interface__action__Timer_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_Goal__Sequence__copy(
  const timer_action_interface__action__Timer_Goal__Sequence * input,
  timer_action_interface__action__Timer_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_Goal * data =
      (timer_action_interface__action__Timer_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
timer_action_interface__action__Timer_Result__init(timer_action_interface__action__Timer_Result * msg)
{
  if (!msg) {
    return false;
  }
  // time_elapsed
  // updates_sent
  return true;
}

void
timer_action_interface__action__Timer_Result__fini(timer_action_interface__action__Timer_Result * msg)
{
  if (!msg) {
    return;
  }
  // time_elapsed
  // updates_sent
}

bool
timer_action_interface__action__Timer_Result__are_equal(const timer_action_interface__action__Timer_Result * lhs, const timer_action_interface__action__Timer_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_elapsed
  if (lhs->time_elapsed != rhs->time_elapsed) {
    return false;
  }
  // updates_sent
  if (lhs->updates_sent != rhs->updates_sent) {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_Result__copy(
  const timer_action_interface__action__Timer_Result * input,
  timer_action_interface__action__Timer_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // time_elapsed
  output->time_elapsed = input->time_elapsed;
  // updates_sent
  output->updates_sent = input->updates_sent;
  return true;
}

timer_action_interface__action__Timer_Result *
timer_action_interface__action__Timer_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Result * msg = (timer_action_interface__action__Timer_Result *)allocator.allocate(sizeof(timer_action_interface__action__Timer_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_Result));
  bool success = timer_action_interface__action__Timer_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_Result__destroy(timer_action_interface__action__Timer_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_Result__Sequence__init(timer_action_interface__action__Timer_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Result * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_Result *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_Result__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_Result__Sequence__fini(timer_action_interface__action__Timer_Result__Sequence * array)
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
      timer_action_interface__action__Timer_Result__fini(&array->data[i]);
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

timer_action_interface__action__Timer_Result__Sequence *
timer_action_interface__action__Timer_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Result__Sequence * array = (timer_action_interface__action__Timer_Result__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_Result__Sequence__destroy(timer_action_interface__action__Timer_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_Result__Sequence__are_equal(const timer_action_interface__action__Timer_Result__Sequence * lhs, const timer_action_interface__action__Timer_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_Result__Sequence__copy(
  const timer_action_interface__action__Timer_Result__Sequence * input,
  timer_action_interface__action__Timer_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_Result * data =
      (timer_action_interface__action__Timer_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
timer_action_interface__action__Timer_Feedback__init(timer_action_interface__action__Timer_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // time_elapsed
  // time_remaining
  return true;
}

void
timer_action_interface__action__Timer_Feedback__fini(timer_action_interface__action__Timer_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // time_elapsed
  // time_remaining
}

bool
timer_action_interface__action__Timer_Feedback__are_equal(const timer_action_interface__action__Timer_Feedback * lhs, const timer_action_interface__action__Timer_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_elapsed
  if (lhs->time_elapsed != rhs->time_elapsed) {
    return false;
  }
  // time_remaining
  if (lhs->time_remaining != rhs->time_remaining) {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_Feedback__copy(
  const timer_action_interface__action__Timer_Feedback * input,
  timer_action_interface__action__Timer_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // time_elapsed
  output->time_elapsed = input->time_elapsed;
  // time_remaining
  output->time_remaining = input->time_remaining;
  return true;
}

timer_action_interface__action__Timer_Feedback *
timer_action_interface__action__Timer_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Feedback * msg = (timer_action_interface__action__Timer_Feedback *)allocator.allocate(sizeof(timer_action_interface__action__Timer_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_Feedback));
  bool success = timer_action_interface__action__Timer_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_Feedback__destroy(timer_action_interface__action__Timer_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_Feedback__Sequence__init(timer_action_interface__action__Timer_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Feedback * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_Feedback *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_Feedback__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_Feedback__Sequence__fini(timer_action_interface__action__Timer_Feedback__Sequence * array)
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
      timer_action_interface__action__Timer_Feedback__fini(&array->data[i]);
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

timer_action_interface__action__Timer_Feedback__Sequence *
timer_action_interface__action__Timer_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_Feedback__Sequence * array = (timer_action_interface__action__Timer_Feedback__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_Feedback__Sequence__destroy(timer_action_interface__action__Timer_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_Feedback__Sequence__are_equal(const timer_action_interface__action__Timer_Feedback__Sequence * lhs, const timer_action_interface__action__Timer_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_Feedback__Sequence__copy(
  const timer_action_interface__action__Timer_Feedback__Sequence * input,
  timer_action_interface__action__Timer_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_Feedback * data =
      (timer_action_interface__action__Timer_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "timer_action_interface/action/detail/timer__functions.h"

bool
timer_action_interface__action__Timer_SendGoal_Request__init(timer_action_interface__action__Timer_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    timer_action_interface__action__Timer_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!timer_action_interface__action__Timer_Goal__init(&msg->goal)) {
    timer_action_interface__action__Timer_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
timer_action_interface__action__Timer_SendGoal_Request__fini(timer_action_interface__action__Timer_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  timer_action_interface__action__Timer_Goal__fini(&msg->goal);
}

bool
timer_action_interface__action__Timer_SendGoal_Request__are_equal(const timer_action_interface__action__Timer_SendGoal_Request * lhs, const timer_action_interface__action__Timer_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!timer_action_interface__action__Timer_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_SendGoal_Request__copy(
  const timer_action_interface__action__Timer_SendGoal_Request * input,
  timer_action_interface__action__Timer_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!timer_action_interface__action__Timer_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

timer_action_interface__action__Timer_SendGoal_Request *
timer_action_interface__action__Timer_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_SendGoal_Request * msg = (timer_action_interface__action__Timer_SendGoal_Request *)allocator.allocate(sizeof(timer_action_interface__action__Timer_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_SendGoal_Request));
  bool success = timer_action_interface__action__Timer_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_SendGoal_Request__destroy(timer_action_interface__action__Timer_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_SendGoal_Request__Sequence__init(timer_action_interface__action__Timer_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_SendGoal_Request * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_SendGoal_Request *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_SendGoal_Request__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_SendGoal_Request__Sequence__fini(timer_action_interface__action__Timer_SendGoal_Request__Sequence * array)
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
      timer_action_interface__action__Timer_SendGoal_Request__fini(&array->data[i]);
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

timer_action_interface__action__Timer_SendGoal_Request__Sequence *
timer_action_interface__action__Timer_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_SendGoal_Request__Sequence * array = (timer_action_interface__action__Timer_SendGoal_Request__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_SendGoal_Request__Sequence__destroy(timer_action_interface__action__Timer_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_SendGoal_Request__Sequence__are_equal(const timer_action_interface__action__Timer_SendGoal_Request__Sequence * lhs, const timer_action_interface__action__Timer_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_SendGoal_Request__Sequence__copy(
  const timer_action_interface__action__Timer_SendGoal_Request__Sequence * input,
  timer_action_interface__action__Timer_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_SendGoal_Request * data =
      (timer_action_interface__action__Timer_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
timer_action_interface__action__Timer_SendGoal_Response__init(timer_action_interface__action__Timer_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    timer_action_interface__action__Timer_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
timer_action_interface__action__Timer_SendGoal_Response__fini(timer_action_interface__action__Timer_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
timer_action_interface__action__Timer_SendGoal_Response__are_equal(const timer_action_interface__action__Timer_SendGoal_Response * lhs, const timer_action_interface__action__Timer_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_SendGoal_Response__copy(
  const timer_action_interface__action__Timer_SendGoal_Response * input,
  timer_action_interface__action__Timer_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

timer_action_interface__action__Timer_SendGoal_Response *
timer_action_interface__action__Timer_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_SendGoal_Response * msg = (timer_action_interface__action__Timer_SendGoal_Response *)allocator.allocate(sizeof(timer_action_interface__action__Timer_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_SendGoal_Response));
  bool success = timer_action_interface__action__Timer_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_SendGoal_Response__destroy(timer_action_interface__action__Timer_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_SendGoal_Response__Sequence__init(timer_action_interface__action__Timer_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_SendGoal_Response * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_SendGoal_Response *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_SendGoal_Response__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_SendGoal_Response__Sequence__fini(timer_action_interface__action__Timer_SendGoal_Response__Sequence * array)
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
      timer_action_interface__action__Timer_SendGoal_Response__fini(&array->data[i]);
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

timer_action_interface__action__Timer_SendGoal_Response__Sequence *
timer_action_interface__action__Timer_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_SendGoal_Response__Sequence * array = (timer_action_interface__action__Timer_SendGoal_Response__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_SendGoal_Response__Sequence__destroy(timer_action_interface__action__Timer_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_SendGoal_Response__Sequence__are_equal(const timer_action_interface__action__Timer_SendGoal_Response__Sequence * lhs, const timer_action_interface__action__Timer_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_SendGoal_Response__Sequence__copy(
  const timer_action_interface__action__Timer_SendGoal_Response__Sequence * input,
  timer_action_interface__action__Timer_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_SendGoal_Response * data =
      (timer_action_interface__action__Timer_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
timer_action_interface__action__Timer_GetResult_Request__init(timer_action_interface__action__Timer_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    timer_action_interface__action__Timer_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
timer_action_interface__action__Timer_GetResult_Request__fini(timer_action_interface__action__Timer_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
timer_action_interface__action__Timer_GetResult_Request__are_equal(const timer_action_interface__action__Timer_GetResult_Request * lhs, const timer_action_interface__action__Timer_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_GetResult_Request__copy(
  const timer_action_interface__action__Timer_GetResult_Request * input,
  timer_action_interface__action__Timer_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

timer_action_interface__action__Timer_GetResult_Request *
timer_action_interface__action__Timer_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_GetResult_Request * msg = (timer_action_interface__action__Timer_GetResult_Request *)allocator.allocate(sizeof(timer_action_interface__action__Timer_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_GetResult_Request));
  bool success = timer_action_interface__action__Timer_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_GetResult_Request__destroy(timer_action_interface__action__Timer_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_GetResult_Request__Sequence__init(timer_action_interface__action__Timer_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_GetResult_Request * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_GetResult_Request *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_GetResult_Request__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_GetResult_Request__Sequence__fini(timer_action_interface__action__Timer_GetResult_Request__Sequence * array)
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
      timer_action_interface__action__Timer_GetResult_Request__fini(&array->data[i]);
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

timer_action_interface__action__Timer_GetResult_Request__Sequence *
timer_action_interface__action__Timer_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_GetResult_Request__Sequence * array = (timer_action_interface__action__Timer_GetResult_Request__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_GetResult_Request__Sequence__destroy(timer_action_interface__action__Timer_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_GetResult_Request__Sequence__are_equal(const timer_action_interface__action__Timer_GetResult_Request__Sequence * lhs, const timer_action_interface__action__Timer_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_GetResult_Request__Sequence__copy(
  const timer_action_interface__action__Timer_GetResult_Request__Sequence * input,
  timer_action_interface__action__Timer_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_GetResult_Request * data =
      (timer_action_interface__action__Timer_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "timer_action_interface/action/detail/timer__functions.h"

bool
timer_action_interface__action__Timer_GetResult_Response__init(timer_action_interface__action__Timer_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!timer_action_interface__action__Timer_Result__init(&msg->result)) {
    timer_action_interface__action__Timer_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
timer_action_interface__action__Timer_GetResult_Response__fini(timer_action_interface__action__Timer_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  timer_action_interface__action__Timer_Result__fini(&msg->result);
}

bool
timer_action_interface__action__Timer_GetResult_Response__are_equal(const timer_action_interface__action__Timer_GetResult_Response * lhs, const timer_action_interface__action__Timer_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!timer_action_interface__action__Timer_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_GetResult_Response__copy(
  const timer_action_interface__action__Timer_GetResult_Response * input,
  timer_action_interface__action__Timer_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!timer_action_interface__action__Timer_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

timer_action_interface__action__Timer_GetResult_Response *
timer_action_interface__action__Timer_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_GetResult_Response * msg = (timer_action_interface__action__Timer_GetResult_Response *)allocator.allocate(sizeof(timer_action_interface__action__Timer_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_GetResult_Response));
  bool success = timer_action_interface__action__Timer_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_GetResult_Response__destroy(timer_action_interface__action__Timer_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_GetResult_Response__Sequence__init(timer_action_interface__action__Timer_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_GetResult_Response * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_GetResult_Response *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_GetResult_Response__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_GetResult_Response__Sequence__fini(timer_action_interface__action__Timer_GetResult_Response__Sequence * array)
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
      timer_action_interface__action__Timer_GetResult_Response__fini(&array->data[i]);
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

timer_action_interface__action__Timer_GetResult_Response__Sequence *
timer_action_interface__action__Timer_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_GetResult_Response__Sequence * array = (timer_action_interface__action__Timer_GetResult_Response__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_GetResult_Response__Sequence__destroy(timer_action_interface__action__Timer_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_GetResult_Response__Sequence__are_equal(const timer_action_interface__action__Timer_GetResult_Response__Sequence * lhs, const timer_action_interface__action__Timer_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_GetResult_Response__Sequence__copy(
  const timer_action_interface__action__Timer_GetResult_Response__Sequence * input,
  timer_action_interface__action__Timer_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_GetResult_Response * data =
      (timer_action_interface__action__Timer_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "timer_action_interface/action/detail/timer__functions.h"

bool
timer_action_interface__action__Timer_FeedbackMessage__init(timer_action_interface__action__Timer_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    timer_action_interface__action__Timer_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!timer_action_interface__action__Timer_Feedback__init(&msg->feedback)) {
    timer_action_interface__action__Timer_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
timer_action_interface__action__Timer_FeedbackMessage__fini(timer_action_interface__action__Timer_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  timer_action_interface__action__Timer_Feedback__fini(&msg->feedback);
}

bool
timer_action_interface__action__Timer_FeedbackMessage__are_equal(const timer_action_interface__action__Timer_FeedbackMessage * lhs, const timer_action_interface__action__Timer_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!timer_action_interface__action__Timer_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
timer_action_interface__action__Timer_FeedbackMessage__copy(
  const timer_action_interface__action__Timer_FeedbackMessage * input,
  timer_action_interface__action__Timer_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!timer_action_interface__action__Timer_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

timer_action_interface__action__Timer_FeedbackMessage *
timer_action_interface__action__Timer_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_FeedbackMessage * msg = (timer_action_interface__action__Timer_FeedbackMessage *)allocator.allocate(sizeof(timer_action_interface__action__Timer_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(timer_action_interface__action__Timer_FeedbackMessage));
  bool success = timer_action_interface__action__Timer_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
timer_action_interface__action__Timer_FeedbackMessage__destroy(timer_action_interface__action__Timer_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    timer_action_interface__action__Timer_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
timer_action_interface__action__Timer_FeedbackMessage__Sequence__init(timer_action_interface__action__Timer_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_FeedbackMessage * data = NULL;

  if (size) {
    data = (timer_action_interface__action__Timer_FeedbackMessage *)allocator.zero_allocate(size, sizeof(timer_action_interface__action__Timer_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = timer_action_interface__action__Timer_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        timer_action_interface__action__Timer_FeedbackMessage__fini(&data[i - 1]);
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
timer_action_interface__action__Timer_FeedbackMessage__Sequence__fini(timer_action_interface__action__Timer_FeedbackMessage__Sequence * array)
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
      timer_action_interface__action__Timer_FeedbackMessage__fini(&array->data[i]);
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

timer_action_interface__action__Timer_FeedbackMessage__Sequence *
timer_action_interface__action__Timer_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  timer_action_interface__action__Timer_FeedbackMessage__Sequence * array = (timer_action_interface__action__Timer_FeedbackMessage__Sequence *)allocator.allocate(sizeof(timer_action_interface__action__Timer_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = timer_action_interface__action__Timer_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
timer_action_interface__action__Timer_FeedbackMessage__Sequence__destroy(timer_action_interface__action__Timer_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    timer_action_interface__action__Timer_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
timer_action_interface__action__Timer_FeedbackMessage__Sequence__are_equal(const timer_action_interface__action__Timer_FeedbackMessage__Sequence * lhs, const timer_action_interface__action__Timer_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!timer_action_interface__action__Timer_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
timer_action_interface__action__Timer_FeedbackMessage__Sequence__copy(
  const timer_action_interface__action__Timer_FeedbackMessage__Sequence * input,
  timer_action_interface__action__Timer_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(timer_action_interface__action__Timer_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    timer_action_interface__action__Timer_FeedbackMessage * data =
      (timer_action_interface__action__Timer_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!timer_action_interface__action__Timer_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          timer_action_interface__action__Timer_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!timer_action_interface__action__Timer_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
