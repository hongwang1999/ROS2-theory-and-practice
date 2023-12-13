// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:action/Nav.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/action/detail/nav__functions.h"
#include "base_interfaces_demo/action/detail/nav__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_Goal__init(message_memory);
}

void Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_member_array[3] = {
  {
    "goal_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Goal, goal_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Goal, goal_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Goal, goal_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_Goal",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_Goal),
  Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_member_array,  // message members
  Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_type_support_handle = {
  0,
  &Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_Goal)() {
  if (!Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_type_support_handle.typesupport_identifier) {
    Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_Goal__rosidl_typesupport_introspection_c__Nav_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_Result__init(message_memory);
}

void Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_member_array[3] = {
  {
    "turtle_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Result, turtle_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turtle_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Result, turtle_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turtle_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Result, turtle_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_Result",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_Result),
  Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_member_array,  // message members
  Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_type_support_handle = {
  0,
  &Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_Result)() {
  if (!Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_type_support_handle.typesupport_identifier) {
    Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_Result__rosidl_typesupport_introspection_c__Nav_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_Feedback__init(message_memory);
}

void Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_member_array[1] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_Feedback, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_Feedback",  // message name
  1,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_Feedback),
  Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_member_array,  // message members
  Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_type_support_handle = {
  0,
  &Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_Feedback)() {
  if (!Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_type_support_handle.typesupport_identifier) {
    Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_Feedback__rosidl_typesupport_introspection_c__Nav_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "base_interfaces_demo/action/nav.h"
// Member `goal`
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_SendGoal_Request__init(message_memory);
}

void Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_SendGoal_Request),
  Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_member_array,  // message members
  Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_type_support_handle = {
  0,
  &Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal_Request)() {
  Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_Goal)();
  if (!Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_SendGoal_Request__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_SendGoal_Response__init(message_memory);
}

void Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_SendGoal_Response),
  Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_member_array,  // message members
  Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_type_support_handle = {
  0,
  &Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal_Response)() {
  Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_SendGoal_Response__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_members = {
  "base_interfaces_demo__action",  // service namespace
  "Nav_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_type_support_handle = {
  0,
  &base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal)() {
  if (!base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_SendGoal_Response)()->data;
  }

  return &base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_GetResult_Request__init(message_memory);
}

void Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_GetResult_Request),
  Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_member_array,  // message members
  Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_type_support_handle = {
  0,
  &Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult_Request)() {
  Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_GetResult_Request__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "base_interfaces_demo/action/nav.h"
// Member `result`
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_GetResult_Response__init(message_memory);
}

void Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_GetResult_Response),
  Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_member_array,  // message members
  Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_type_support_handle = {
  0,
  &Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult_Response)() {
  Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_Result)();
  if (!Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_GetResult_Response__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_members = {
  "base_interfaces_demo__action",  // service namespace
  "Nav_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_type_support_handle = {
  0,
  &base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult)() {
  if (!base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_GetResult_Response)()->data;
  }

  return &base_interfaces_demo__action__detail__nav__rosidl_typesupport_introspection_c__Nav_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/nav__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "base_interfaces_demo/action/nav.h"
// Member `feedback`
// already included above
// #include "base_interfaces_demo/action/detail/nav__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Nav_FeedbackMessage__init(message_memory);
}

void Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Nav_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Nav_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Nav_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Nav_FeedbackMessage),
  Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_member_array,  // message members
  Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_type_support_handle = {
  0,
  &Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_FeedbackMessage)() {
  Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Nav_Feedback)();
  if (!Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Nav_FeedbackMessage__rosidl_typesupport_introspection_c__Nav_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
