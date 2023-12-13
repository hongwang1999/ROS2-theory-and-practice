// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:action/Nav.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/action/detail/nav__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
base_interfaces_demo__action__Nav_Goal__init(base_interfaces_demo__action__Nav_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_x
  // goal_y
  // goal_theta
  return true;
}

void
base_interfaces_demo__action__Nav_Goal__fini(base_interfaces_demo__action__Nav_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_x
  // goal_y
  // goal_theta
}

base_interfaces_demo__action__Nav_Goal *
base_interfaces_demo__action__Nav_Goal__create()
{
  base_interfaces_demo__action__Nav_Goal * msg = (base_interfaces_demo__action__Nav_Goal *)malloc(sizeof(base_interfaces_demo__action__Nav_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_Goal));
  bool success = base_interfaces_demo__action__Nav_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_Goal__destroy(base_interfaces_demo__action__Nav_Goal * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_Goal__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_Goal__Sequence__init(base_interfaces_demo__action__Nav_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_Goal * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_Goal *)calloc(size, sizeof(base_interfaces_demo__action__Nav_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_Goal__Sequence__fini(base_interfaces_demo__action__Nav_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_Goal__Sequence *
base_interfaces_demo__action__Nav_Goal__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_Goal__Sequence * array = (base_interfaces_demo__action__Nav_Goal__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_Goal__Sequence__destroy(base_interfaces_demo__action__Nav_Goal__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
base_interfaces_demo__action__Nav_Result__init(base_interfaces_demo__action__Nav_Result * msg)
{
  if (!msg) {
    return false;
  }
  // turtle_x
  // turtle_y
  // turtle_theta
  return true;
}

void
base_interfaces_demo__action__Nav_Result__fini(base_interfaces_demo__action__Nav_Result * msg)
{
  if (!msg) {
    return;
  }
  // turtle_x
  // turtle_y
  // turtle_theta
}

base_interfaces_demo__action__Nav_Result *
base_interfaces_demo__action__Nav_Result__create()
{
  base_interfaces_demo__action__Nav_Result * msg = (base_interfaces_demo__action__Nav_Result *)malloc(sizeof(base_interfaces_demo__action__Nav_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_Result));
  bool success = base_interfaces_demo__action__Nav_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_Result__destroy(base_interfaces_demo__action__Nav_Result * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_Result__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_Result__Sequence__init(base_interfaces_demo__action__Nav_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_Result * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_Result *)calloc(size, sizeof(base_interfaces_demo__action__Nav_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_Result__Sequence__fini(base_interfaces_demo__action__Nav_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_Result__Sequence *
base_interfaces_demo__action__Nav_Result__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_Result__Sequence * array = (base_interfaces_demo__action__Nav_Result__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_Result__Sequence__destroy(base_interfaces_demo__action__Nav_Result__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_Result__Sequence__fini(array);
  }
  free(array);
}


bool
base_interfaces_demo__action__Nav_Feedback__init(base_interfaces_demo__action__Nav_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
base_interfaces_demo__action__Nav_Feedback__fini(base_interfaces_demo__action__Nav_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

base_interfaces_demo__action__Nav_Feedback *
base_interfaces_demo__action__Nav_Feedback__create()
{
  base_interfaces_demo__action__Nav_Feedback * msg = (base_interfaces_demo__action__Nav_Feedback *)malloc(sizeof(base_interfaces_demo__action__Nav_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_Feedback));
  bool success = base_interfaces_demo__action__Nav_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_Feedback__destroy(base_interfaces_demo__action__Nav_Feedback * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_Feedback__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_Feedback__Sequence__init(base_interfaces_demo__action__Nav_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_Feedback * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_Feedback *)calloc(size, sizeof(base_interfaces_demo__action__Nav_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_Feedback__Sequence__fini(base_interfaces_demo__action__Nav_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_Feedback__Sequence *
base_interfaces_demo__action__Nav_Feedback__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_Feedback__Sequence * array = (base_interfaces_demo__action__Nav_Feedback__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_Feedback__Sequence__destroy(base_interfaces_demo__action__Nav_Feedback__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"

bool
base_interfaces_demo__action__Nav_SendGoal_Request__init(base_interfaces_demo__action__Nav_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_interfaces_demo__action__Nav_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!base_interfaces_demo__action__Nav_Goal__init(&msg->goal)) {
    base_interfaces_demo__action__Nav_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces_demo__action__Nav_SendGoal_Request__fini(base_interfaces_demo__action__Nav_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  base_interfaces_demo__action__Nav_Goal__fini(&msg->goal);
}

base_interfaces_demo__action__Nav_SendGoal_Request *
base_interfaces_demo__action__Nav_SendGoal_Request__create()
{
  base_interfaces_demo__action__Nav_SendGoal_Request * msg = (base_interfaces_demo__action__Nav_SendGoal_Request *)malloc(sizeof(base_interfaces_demo__action__Nav_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_SendGoal_Request));
  bool success = base_interfaces_demo__action__Nav_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_SendGoal_Request__destroy(base_interfaces_demo__action__Nav_SendGoal_Request * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_SendGoal_Request__Sequence__init(base_interfaces_demo__action__Nav_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_SendGoal_Request * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_SendGoal_Request *)calloc(size, sizeof(base_interfaces_demo__action__Nav_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_SendGoal_Request__Sequence__fini(base_interfaces_demo__action__Nav_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_SendGoal_Request__Sequence *
base_interfaces_demo__action__Nav_SendGoal_Request__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_SendGoal_Request__Sequence * array = (base_interfaces_demo__action__Nav_SendGoal_Request__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_SendGoal_Request__Sequence__destroy(base_interfaces_demo__action__Nav_SendGoal_Request__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
base_interfaces_demo__action__Nav_SendGoal_Response__init(base_interfaces_demo__action__Nav_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    base_interfaces_demo__action__Nav_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces_demo__action__Nav_SendGoal_Response__fini(base_interfaces_demo__action__Nav_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

base_interfaces_demo__action__Nav_SendGoal_Response *
base_interfaces_demo__action__Nav_SendGoal_Response__create()
{
  base_interfaces_demo__action__Nav_SendGoal_Response * msg = (base_interfaces_demo__action__Nav_SendGoal_Response *)malloc(sizeof(base_interfaces_demo__action__Nav_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_SendGoal_Response));
  bool success = base_interfaces_demo__action__Nav_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_SendGoal_Response__destroy(base_interfaces_demo__action__Nav_SendGoal_Response * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_SendGoal_Response__Sequence__init(base_interfaces_demo__action__Nav_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_SendGoal_Response * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_SendGoal_Response *)calloc(size, sizeof(base_interfaces_demo__action__Nav_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_SendGoal_Response__Sequence__fini(base_interfaces_demo__action__Nav_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_SendGoal_Response__Sequence *
base_interfaces_demo__action__Nav_SendGoal_Response__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_SendGoal_Response__Sequence * array = (base_interfaces_demo__action__Nav_SendGoal_Response__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_SendGoal_Response__Sequence__destroy(base_interfaces_demo__action__Nav_SendGoal_Response__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
base_interfaces_demo__action__Nav_GetResult_Request__init(base_interfaces_demo__action__Nav_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_interfaces_demo__action__Nav_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces_demo__action__Nav_GetResult_Request__fini(base_interfaces_demo__action__Nav_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

base_interfaces_demo__action__Nav_GetResult_Request *
base_interfaces_demo__action__Nav_GetResult_Request__create()
{
  base_interfaces_demo__action__Nav_GetResult_Request * msg = (base_interfaces_demo__action__Nav_GetResult_Request *)malloc(sizeof(base_interfaces_demo__action__Nav_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_GetResult_Request));
  bool success = base_interfaces_demo__action__Nav_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_GetResult_Request__destroy(base_interfaces_demo__action__Nav_GetResult_Request * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_GetResult_Request__Sequence__init(base_interfaces_demo__action__Nav_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_GetResult_Request * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_GetResult_Request *)calloc(size, sizeof(base_interfaces_demo__action__Nav_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_GetResult_Request__Sequence__fini(base_interfaces_demo__action__Nav_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_GetResult_Request__Sequence *
base_interfaces_demo__action__Nav_GetResult_Request__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_GetResult_Request__Sequence * array = (base_interfaces_demo__action__Nav_GetResult_Request__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_GetResult_Request__Sequence__destroy(base_interfaces_demo__action__Nav_GetResult_Request__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"

bool
base_interfaces_demo__action__Nav_GetResult_Response__init(base_interfaces_demo__action__Nav_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!base_interfaces_demo__action__Nav_Result__init(&msg->result)) {
    base_interfaces_demo__action__Nav_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces_demo__action__Nav_GetResult_Response__fini(base_interfaces_demo__action__Nav_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  base_interfaces_demo__action__Nav_Result__fini(&msg->result);
}

base_interfaces_demo__action__Nav_GetResult_Response *
base_interfaces_demo__action__Nav_GetResult_Response__create()
{
  base_interfaces_demo__action__Nav_GetResult_Response * msg = (base_interfaces_demo__action__Nav_GetResult_Response *)malloc(sizeof(base_interfaces_demo__action__Nav_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_GetResult_Response));
  bool success = base_interfaces_demo__action__Nav_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_GetResult_Response__destroy(base_interfaces_demo__action__Nav_GetResult_Response * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_GetResult_Response__Sequence__init(base_interfaces_demo__action__Nav_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_GetResult_Response * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_GetResult_Response *)calloc(size, sizeof(base_interfaces_demo__action__Nav_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_GetResult_Response__Sequence__fini(base_interfaces_demo__action__Nav_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_GetResult_Response__Sequence *
base_interfaces_demo__action__Nav_GetResult_Response__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_GetResult_Response__Sequence * array = (base_interfaces_demo__action__Nav_GetResult_Response__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_GetResult_Response__Sequence__destroy(base_interfaces_demo__action__Nav_GetResult_Response__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"

bool
base_interfaces_demo__action__Nav_FeedbackMessage__init(base_interfaces_demo__action__Nav_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_interfaces_demo__action__Nav_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!base_interfaces_demo__action__Nav_Feedback__init(&msg->feedback)) {
    base_interfaces_demo__action__Nav_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces_demo__action__Nav_FeedbackMessage__fini(base_interfaces_demo__action__Nav_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  base_interfaces_demo__action__Nav_Feedback__fini(&msg->feedback);
}

base_interfaces_demo__action__Nav_FeedbackMessage *
base_interfaces_demo__action__Nav_FeedbackMessage__create()
{
  base_interfaces_demo__action__Nav_FeedbackMessage * msg = (base_interfaces_demo__action__Nav_FeedbackMessage *)malloc(sizeof(base_interfaces_demo__action__Nav_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__action__Nav_FeedbackMessage));
  bool success = base_interfaces_demo__action__Nav_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__action__Nav_FeedbackMessage__destroy(base_interfaces_demo__action__Nav_FeedbackMessage * msg)
{
  if (msg) {
    base_interfaces_demo__action__Nav_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
base_interfaces_demo__action__Nav_FeedbackMessage__Sequence__init(base_interfaces_demo__action__Nav_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  base_interfaces_demo__action__Nav_FeedbackMessage * data = NULL;
  if (size) {
    data = (base_interfaces_demo__action__Nav_FeedbackMessage *)calloc(size, sizeof(base_interfaces_demo__action__Nav_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__action__Nav_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__action__Nav_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__action__Nav_FeedbackMessage__Sequence__fini(base_interfaces_demo__action__Nav_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__action__Nav_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__action__Nav_FeedbackMessage__Sequence *
base_interfaces_demo__action__Nav_FeedbackMessage__Sequence__create(size_t size)
{
  base_interfaces_demo__action__Nav_FeedbackMessage__Sequence * array = (base_interfaces_demo__action__Nav_FeedbackMessage__Sequence *)malloc(sizeof(base_interfaces_demo__action__Nav_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__action__Nav_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__action__Nav_FeedbackMessage__Sequence__destroy(base_interfaces_demo__action__Nav_FeedbackMessage__Sequence * array)
{
  if (array) {
    base_interfaces_demo__action__Nav_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
