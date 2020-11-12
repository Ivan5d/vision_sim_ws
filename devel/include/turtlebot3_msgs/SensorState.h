// Generated by gencpp from file turtlebot3_msgs/SensorState.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_MSGS_MESSAGE_SENSORSTATE_H
#define TURTLEBOT3_MSGS_MESSAGE_SENSORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace turtlebot3_msgs
{
template <class ContainerAllocator>
struct SensorState_
{
  typedef SensorState_<ContainerAllocator> Type;

  SensorState_()
    : header()
    , bumper(0)
    , cliff(0.0)
    , sonar(0.0)
    , illumination(0.0)
    , led(0)
    , button(0)
    , torque(false)
    , left_encoder(0)
    , right_encoder(0)
    , battery(0.0)  {
    }
  SensorState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bumper(0)
    , cliff(0.0)
    , sonar(0.0)
    , illumination(0.0)
    , led(0)
    , button(0)
    , torque(false)
    , left_encoder(0)
    , right_encoder(0)
    , battery(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _bumper_type;
  _bumper_type bumper;

   typedef float _cliff_type;
  _cliff_type cliff;

   typedef float _sonar_type;
  _sonar_type sonar;

   typedef float _illumination_type;
  _illumination_type illumination;

   typedef uint8_t _led_type;
  _led_type led;

   typedef uint8_t _button_type;
  _button_type button;

   typedef uint8_t _torque_type;
  _torque_type torque;

   typedef int32_t _left_encoder_type;
  _left_encoder_type left_encoder;

   typedef int32_t _right_encoder_type;
  _right_encoder_type right_encoder;

   typedef float _battery_type;
  _battery_type battery;



  enum {
    BUMPER_FORWARD = 1u,
    BUMPER_BACKWARD = 2u,
    CLIFF = 1u,
    SONAR = 1u,
    ILLUMINATION = 1u,
    BUTTON0 = 1u,
    BUTTON1 = 2u,
    ERROR_LEFT_MOTOR = 1u,
    ERROR_RIGHT_MOTOR = 2u,
    TORQUE_ON = 1u,
    TORQUE_OFF = 2u,
  };


  typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const> ConstPtr;

}; // struct SensorState_

typedef ::turtlebot3_msgs::SensorState_<std::allocator<void> > SensorState;

typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState > SensorStatePtr;
typedef boost::shared_ptr< ::turtlebot3_msgs::SensorState const> SensorStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_msgs::SensorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot3_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'turtlebot3_msgs': ['/home/ivan5d/vision_sim_ws/src/turtlebot3/turtlebot3_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_msgs::SensorState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7250c1dc0b61c4190e78f528f599285f";
  }

  static const char* value(const ::turtlebot3_msgs::SensorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7250c1dc0b61c419ULL;
  static const uint64_t static_value2 = 0x0e78f528f599285fULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_msgs/SensorState";
  }

  static const char* value(const ::turtlebot3_msgs::SensorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "########################################\n\
# CONSTANTS\n\
########################################\n\
# Bumper states (states are combined, when multiple bumpers are pressed)\n\
uint8 BUMPER_FORWARD  = 1\n\
uint8 BUMPER_BACKWARD = 2\n\
\n\
# Cliff sensor states (states are combined, when multiple cliff sensors are triggered)\n\
uint8 CLIFF = 1\n\
\n\
# Sonar sensor states (states are combined, when multiple sonar sensors are triggered)\n\
uint8 SONAR = 1\n\
\n\
# Illumination sensor (states are combined, when multiple illumination sensors are triggered) \n\
uint8 ILLUMINATION = 1\n\
\n\
# Button states (states are combined, when multiple buttons are pressed)\n\
uint8 BUTTON0 = 1\n\
uint8 BUTTON1 = 2\n\
\n\
# Motor errors\n\
uint8 ERROR_LEFT_MOTOR  = 1\n\
uint8 ERROR_RIGHT_MOTOR = 2\n\
\n\
# Motor torque\n\
uint8 TORQUE_ON  = 1\n\
uint8 TORQUE_OFF = 2\n\
\n\
########################################\n\
# Messages\n\
########################################\n\
Header  header\n\
uint8   bumper\n\
float32 cliff\n\
float32 sonar\n\
float32 illumination\n\
uint8   led\n\
uint8  button\n\
bool   torque\n\
int32  left_encoder    # (-2,147,483,648 ~ 2,147,483,647)\n\
int32  right_encoder   # (-2,147,483,648 ~ 2,147,483,647)\n\
float32  battery\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::turtlebot3_msgs::SensorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bumper);
      stream.next(m.cliff);
      stream.next(m.sonar);
      stream.next(m.illumination);
      stream.next(m.led);
      stream.next(m.button);
      stream.next(m.torque);
      stream.next(m.left_encoder);
      stream.next(m.right_encoder);
      stream.next(m.battery);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_msgs::SensorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_msgs::SensorState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bumper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bumper);
    s << indent << "cliff: ";
    Printer<float>::stream(s, indent + "  ", v.cliff);
    s << indent << "sonar: ";
    Printer<float>::stream(s, indent + "  ", v.sonar);
    s << indent << "illumination: ";
    Printer<float>::stream(s, indent + "  ", v.illumination);
    s << indent << "led: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.led);
    s << indent << "button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.button);
    s << indent << "torque: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.torque);
    s << indent << "left_encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.left_encoder);
    s << indent << "right_encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.right_encoder);
    s << indent << "battery: ";
    Printer<float>::stream(s, indent + "  ", v.battery);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_MSGS_MESSAGE_SENSORSTATE_H
