// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:action/Progress.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__TRAITS_HPP_

#include "base_interfaces_demo/action/detail/progress__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_Goal>()
{
  return "base_interfaces_demo::action::Progress_Goal";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_Goal>()
{
  return "base_interfaces_demo/action/Progress_Goal";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_Result>()
{
  return "base_interfaces_demo::action::Progress_Result";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_Result>()
{
  return "base_interfaces_demo/action/Progress_Result";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_Feedback>()
{
  return "base_interfaces_demo::action::Progress_Feedback";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_Feedback>()
{
  return "base_interfaces_demo/action/Progress_Feedback";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "base_interfaces_demo/action/detail/progress__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_SendGoal_Request>()
{
  return "base_interfaces_demo::action::Progress_SendGoal_Request";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_SendGoal_Request>()
{
  return "base_interfaces_demo/action/Progress_SendGoal_Request";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<base_interfaces_demo::action::Progress_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<base_interfaces_demo::action::Progress_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_SendGoal_Response>()
{
  return "base_interfaces_demo::action::Progress_SendGoal_Response";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_SendGoal_Response>()
{
  return "base_interfaces_demo/action/Progress_SendGoal_Response";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_SendGoal>()
{
  return "base_interfaces_demo::action::Progress_SendGoal";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_SendGoal>()
{
  return "base_interfaces_demo/action/Progress_SendGoal";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces_demo::action::Progress_SendGoal_Request>::value &&
    has_fixed_size<base_interfaces_demo::action::Progress_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces_demo::action::Progress_SendGoal_Request>::value &&
    has_bounded_size<base_interfaces_demo::action::Progress_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces_demo::action::Progress_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces_demo::action::Progress_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces_demo::action::Progress_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_GetResult_Request>()
{
  return "base_interfaces_demo::action::Progress_GetResult_Request";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_GetResult_Request>()
{
  return "base_interfaces_demo/action/Progress_GetResult_Request";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfaces_demo/action/detail/progress__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_GetResult_Response>()
{
  return "base_interfaces_demo::action::Progress_GetResult_Response";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_GetResult_Response>()
{
  return "base_interfaces_demo/action/Progress_GetResult_Response";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<base_interfaces_demo::action::Progress_Result>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<base_interfaces_demo::action::Progress_Result>::value> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_GetResult>()
{
  return "base_interfaces_demo::action::Progress_GetResult";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_GetResult>()
{
  return "base_interfaces_demo/action/Progress_GetResult";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces_demo::action::Progress_GetResult_Request>::value &&
    has_fixed_size<base_interfaces_demo::action::Progress_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces_demo::action::Progress_GetResult_Request>::value &&
    has_bounded_size<base_interfaces_demo::action::Progress_GetResult_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces_demo::action::Progress_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces_demo::action::Progress_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces_demo::action::Progress_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "base_interfaces_demo/action/detail/progress__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::action::Progress_FeedbackMessage>()
{
  return "base_interfaces_demo::action::Progress_FeedbackMessage";
}

template<>
inline const char * name<base_interfaces_demo::action::Progress_FeedbackMessage>()
{
  return "base_interfaces_demo/action/Progress_FeedbackMessage";
}

template<>
struct has_fixed_size<base_interfaces_demo::action::Progress_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<base_interfaces_demo::action::Progress_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<base_interfaces_demo::action::Progress_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<base_interfaces_demo::action::Progress_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<base_interfaces_demo::action::Progress_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<base_interfaces_demo::action::Progress>
  : std::true_type
{
};

template<>
struct is_action_goal<base_interfaces_demo::action::Progress_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<base_interfaces_demo::action::Progress_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<base_interfaces_demo::action::Progress_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__TRAITS_HPP_
