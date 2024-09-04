// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduinobot_interfaces:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__BUILDER_HPP_
#define ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduinobot_interfaces/srv/detail/euler_to_quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduinobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_EulerToQuaternion_Request_yaw
{
public:
  explicit Init_EulerToQuaternion_Request_yaw(::arduinobot_interfaces::srv::EulerToQuaternion_Request & msg)
  : msg_(msg)
  {}
  ::arduinobot_interfaces::srv::EulerToQuaternion_Request yaw(::arduinobot_interfaces::srv::EulerToQuaternion_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Request msg_;
};

class Init_EulerToQuaternion_Request_pitch
{
public:
  explicit Init_EulerToQuaternion_Request_pitch(::arduinobot_interfaces::srv::EulerToQuaternion_Request & msg)
  : msg_(msg)
  {}
  Init_EulerToQuaternion_Request_yaw pitch(::arduinobot_interfaces::srv::EulerToQuaternion_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EulerToQuaternion_Request_yaw(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Request msg_;
};

class Init_EulerToQuaternion_Request_roll
{
public:
  Init_EulerToQuaternion_Request_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerToQuaternion_Request_pitch roll(::arduinobot_interfaces::srv::EulerToQuaternion_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EulerToQuaternion_Request_pitch(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_interfaces::srv::EulerToQuaternion_Request>()
{
  return arduinobot_interfaces::srv::builder::Init_EulerToQuaternion_Request_roll();
}

}  // namespace arduinobot_interfaces


namespace arduinobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_EulerToQuaternion_Response_d
{
public:
  explicit Init_EulerToQuaternion_Response_d(::arduinobot_interfaces::srv::EulerToQuaternion_Response & msg)
  : msg_(msg)
  {}
  ::arduinobot_interfaces::srv::EulerToQuaternion_Response d(::arduinobot_interfaces::srv::EulerToQuaternion_Response::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Response msg_;
};

class Init_EulerToQuaternion_Response_c
{
public:
  explicit Init_EulerToQuaternion_Response_c(::arduinobot_interfaces::srv::EulerToQuaternion_Response & msg)
  : msg_(msg)
  {}
  Init_EulerToQuaternion_Response_d c(::arduinobot_interfaces::srv::EulerToQuaternion_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_EulerToQuaternion_Response_d(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Response msg_;
};

class Init_EulerToQuaternion_Response_b
{
public:
  explicit Init_EulerToQuaternion_Response_b(::arduinobot_interfaces::srv::EulerToQuaternion_Response & msg)
  : msg_(msg)
  {}
  Init_EulerToQuaternion_Response_c b(::arduinobot_interfaces::srv::EulerToQuaternion_Response::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_EulerToQuaternion_Response_c(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Response msg_;
};

class Init_EulerToQuaternion_Response_a
{
public:
  Init_EulerToQuaternion_Response_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerToQuaternion_Response_b a(::arduinobot_interfaces::srv::EulerToQuaternion_Response::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_EulerToQuaternion_Response_b(msg_);
  }

private:
  ::arduinobot_interfaces::srv::EulerToQuaternion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduinobot_interfaces::srv::EulerToQuaternion_Response>()
{
  return arduinobot_interfaces::srv::builder::Init_EulerToQuaternion_Response_a();
}

}  // namespace arduinobot_interfaces

#endif  // ARDUINOBOT_INTERFACES__SRV__DETAIL__EULER_TO_QUATERNION__BUILDER_HPP_
