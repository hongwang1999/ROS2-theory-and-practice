// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__DISTANCE__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__DISTANCE__BUILDER_HPP_

#include "base_interfaces_demo/srv/detail/distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_Distance_Request_theta
{
public:
  explicit Init_Distance_Request_theta(::base_interfaces_demo::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::srv::Distance_Request theta(::base_interfaces_demo::srv::Distance_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::Distance_Request msg_;
};

class Init_Distance_Request_y
{
public:
  explicit Init_Distance_Request_y(::base_interfaces_demo::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  Init_Distance_Request_theta y(::base_interfaces_demo::srv::Distance_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Distance_Request_theta(msg_);
  }

private:
  ::base_interfaces_demo::srv::Distance_Request msg_;
};

class Init_Distance_Request_x
{
public:
  Init_Distance_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Request_y x(::base_interfaces_demo::srv::Distance_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Distance_Request_y(msg_);
  }

private:
  ::base_interfaces_demo::srv::Distance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::Distance_Request>()
{
  return base_interfaces_demo::srv::builder::Init_Distance_Request_x();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_Distance_Response_distance
{
public:
  Init_Distance_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::Distance_Response distance(::base_interfaces_demo::srv::Distance_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::Distance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::Distance_Response>()
{
  return base_interfaces_demo::srv::builder::Init_Distance_Response_distance();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__DISTANCE__BUILDER_HPP_
