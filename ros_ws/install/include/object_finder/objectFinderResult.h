// Generated by gencpp from file object_finder/objectFinderResult.msg
// DO NOT EDIT!


#ifndef OBJECT_FINDER_MESSAGE_OBJECTFINDERRESULT_H
#define OBJECT_FINDER_MESSAGE_OBJECTFINDERRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace object_finder
{
template <class ContainerAllocator>
struct objectFinderResult_
{
  typedef objectFinderResult_<ContainerAllocator> Type;

  objectFinderResult_()
    : found_object_code(0)
    , object_pose()
    , object_id(0)  {
    }
  objectFinderResult_(const ContainerAllocator& _alloc)
    : found_object_code(0)
    , object_pose(_alloc)
    , object_id(0)  {
  (void)_alloc;
    }



   typedef int32_t _found_object_code_type;
  _found_object_code_type found_object_code;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _object_pose_type;
  _object_pose_type object_pose;

   typedef int32_t _object_id_type;
  _object_id_type object_id;



  enum {
    SUCCESS = 0,
    OBJECT_FOUND = 0,
    OBJECT_NOT_FOUND = 1,
    OBJECT_CODE_NOT_RECOGNIZED = 2,
    OBJECT_FINDER_BUSY = 3,
    OBJECT_FINDER_CANCELLED = 4,
  };


  typedef boost::shared_ptr< ::object_finder::objectFinderResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_finder::objectFinderResult_<ContainerAllocator> const> ConstPtr;

}; // struct objectFinderResult_

typedef ::object_finder::objectFinderResult_<std::allocator<void> > objectFinderResult;

typedef boost::shared_ptr< ::object_finder::objectFinderResult > objectFinderResultPtr;
typedef boost::shared_ptr< ::object_finder::objectFinderResult const> objectFinderResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_finder::objectFinderResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_finder::objectFinderResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_finder

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'object_finder': ['/home/jasonsun/ros_ws/devel/share/object_finder/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'tf': ['/opt/ros/kinetic/share/tf/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_finder::objectFinderResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_finder::objectFinderResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_finder::objectFinderResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_finder::objectFinderResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_finder::objectFinderResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_finder::objectFinderResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_finder::objectFinderResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a7900c52b913a2038f3ebf889a359d6e";
  }

  static const char* value(const ::object_finder::objectFinderResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa7900c52b913a203ULL;
  static const uint64_t static_value2 = 0x8f3ebf889a359d6eULL;
};

template<class ContainerAllocator>
struct DataType< ::object_finder::objectFinderResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_finder/objectFinderResult";
  }

  static const char* value(const ::object_finder::objectFinderResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_finder::objectFinderResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result\n\
int32 SUCCESS =0 \n\
int32 OBJECT_FOUND=0 #synonym for SUCCESS\n\
int32 OBJECT_NOT_FOUND=1\n\
int32 OBJECT_CODE_NOT_RECOGNIZED=2\n\
int32 OBJECT_FINDER_BUSY=3\n\
int32 OBJECT_FINDER_CANCELLED=4\n\
\n\
#return the identified pose here:\n\
int32 found_object_code\n\
geometry_msgs/PoseStamped object_pose\n\
int32 object_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::object_finder::objectFinderResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_finder::objectFinderResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.found_object_code);
      stream.next(m.object_pose);
      stream.next(m.object_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct objectFinderResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_finder::objectFinderResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_finder::objectFinderResult_<ContainerAllocator>& v)
  {
    s << indent << "found_object_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.found_object_code);
    s << indent << "object_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.object_pose);
    s << indent << "object_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.object_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_FINDER_MESSAGE_OBJECTFINDERRESULT_H
