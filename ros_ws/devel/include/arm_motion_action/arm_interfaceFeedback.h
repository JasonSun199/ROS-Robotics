// Generated by gencpp from file arm_motion_action/arm_interfaceFeedback.msg
// DO NOT EDIT!


#ifndef ARM_MOTION_ACTION_MESSAGE_ARM_INTERFACEFEEDBACK_H
#define ARM_MOTION_ACTION_MESSAGE_ARM_INTERFACEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace arm_motion_action
{
template <class ContainerAllocator>
struct arm_interfaceFeedback_
{
  typedef arm_interfaceFeedback_<ContainerAllocator> Type;

  arm_interfaceFeedback_()
    : fdbk(0)  {
    }
  arm_interfaceFeedback_(const ContainerAllocator& _alloc)
    : fdbk(0)  {
  (void)_alloc;
    }



   typedef int32_t _fdbk_type;
  _fdbk_type fdbk;





  typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct arm_interfaceFeedback_

typedef ::arm_motion_action::arm_interfaceFeedback_<std::allocator<void> > arm_interfaceFeedback;

typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceFeedback > arm_interfaceFeedbackPtr;
typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceFeedback const> arm_interfaceFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arm_motion_action

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'arm_motion_action': ['/home/jasonsun/ros_ws/devel/share/arm_motion_action/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46cc8f8da6ebf35aedc6bad2e96b2e59";
  }

  static const char* value(const ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46cc8f8da6ebf35aULL;
  static const uint64_t static_value2 = 0xedc6bad2e96b2e59ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arm_motion_action/arm_interfaceFeedback";
  }

  static const char* value(const ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback: optional; \n\
int32 fdbk\n\
\n\
";
  }

  static const char* value(const ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fdbk);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct arm_interfaceFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arm_motion_action::arm_interfaceFeedback_<ContainerAllocator>& v)
  {
    s << indent << "fdbk: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fdbk);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARM_MOTION_ACTION_MESSAGE_ARM_INTERFACEFEEDBACK_H
