// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:srv/AddInts.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/srv/detail/add_ints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/srv/detail/add_ints__struct.h"
#include "base_interfaces_demo/srv/detail/add_ints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AddInts_Request__ros_msg_type = base_interfaces_demo__srv__AddInts_Request;

static bool _AddInts_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddInts_Request__ros_msg_type * ros_message = static_cast<const _AddInts_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num1
  {
    cdr << ros_message->num1;
  }

  // Field name: num2
  {
    cdr << ros_message->num2;
  }

  return true;
}

static bool _AddInts_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddInts_Request__ros_msg_type * ros_message = static_cast<_AddInts_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num1
  {
    cdr >> ros_message->num1;
  }

  // Field name: num2
  {
    cdr >> ros_message->num2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__srv__AddInts_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddInts_Request__ros_msg_type * ros_message = static_cast<const _AddInts_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num1
  {
    size_t item_size = sizeof(ros_message->num1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num2
  {
    size_t item_size = sizeof(ros_message->num2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddInts_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__srv__AddInts_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__srv__AddInts_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: num1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AddInts_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__srv__AddInts_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddInts_Request = {
  "base_interfaces_demo::srv",
  "AddInts_Request",
  _AddInts_Request__cdr_serialize,
  _AddInts_Request__cdr_deserialize,
  _AddInts_Request__get_serialized_size,
  _AddInts_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddInts_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddInts_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, srv, AddInts_Request)() {
  return &_AddInts_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__struct.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AddInts_Response__ros_msg_type = base_interfaces_demo__srv__AddInts_Response;

static bool _AddInts_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddInts_Response__ros_msg_type * ros_message = static_cast<const _AddInts_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr << ros_message->sum;
  }

  return true;
}

static bool _AddInts_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddInts_Response__ros_msg_type * ros_message = static_cast<_AddInts_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr >> ros_message->sum;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__srv__AddInts_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddInts_Response__ros_msg_type * ros_message = static_cast<const _AddInts_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t item_size = sizeof(ros_message->sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddInts_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__srv__AddInts_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__srv__AddInts_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AddInts_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__srv__AddInts_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddInts_Response = {
  "base_interfaces_demo::srv",
  "AddInts_Response",
  _AddInts_Response__cdr_serialize,
  _AddInts_Response__cdr_deserialize,
  _AddInts_Response__get_serialized_size,
  _AddInts_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddInts_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddInts_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, srv, AddInts_Response)() {
  return &_AddInts_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/srv/add_ints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddInts__callbacks = {
  "base_interfaces_demo::srv",
  "AddInts",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, srv, AddInts_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, srv, AddInts_Response)(),
};

static rosidl_service_type_support_t AddInts__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddInts__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, srv, AddInts)() {
  return &AddInts__handle;
}

#if defined(__cplusplus)
}
#endif
