// Generated by gencpp from file baxter_playfile_nodes/playfileSrvResponse.msg
// DO NOT EDIT!


#ifndef BAXTER_PLAYFILE_NODES_MESSAGE_PLAYFILESRVRESPONSE_H
#define BAXTER_PLAYFILE_NODES_MESSAGE_PLAYFILESRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_playfile_nodes
{
template <class ContainerAllocator>
struct playfileSrvResponse_
{
  typedef playfileSrvResponse_<ContainerAllocator> Type;

  playfileSrvResponse_()
    : return_code(0)  {
    }
  playfileSrvResponse_(const ContainerAllocator& _alloc)
    : return_code(0)  {
  (void)_alloc;
    }



   typedef int32_t _return_code_type;
  _return_code_type return_code;



  enum {
    DID_NOT_FIND_PLAYFILE = 0,
    FOUND_RIGHT_ARM_PLAYFILE = 1,
    FOUND_LEFT_ARM_PLAYFILE = 2,
    FOUND_BOTH_ARMS_PLAYFILES = 3,
    UNKNOWN_CASE = 4,
  };


  typedef boost::shared_ptr< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct playfileSrvResponse_

typedef ::baxter_playfile_nodes::playfileSrvResponse_<std::allocator<void> > playfileSrvResponse;

typedef boost::shared_ptr< ::baxter_playfile_nodes::playfileSrvResponse > playfileSrvResponsePtr;
typedef boost::shared_ptr< ::baxter_playfile_nodes::playfileSrvResponse const> playfileSrvResponseConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_playfile_nodes

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/jasonsun/ros_ws/src/learning_ros_external_pkgs_kinetic/baxter_common/baxter_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'baxter_trajectory_streamer': ['/home/jasonsun/ros_ws/devel/share/baxter_trajectory_streamer/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "784d904d7c2a39a20a0971a679ca2628";
  }

  static const char* value(const ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x784d904d7c2a39a2ULL;
  static const uint64_t static_value2 = 0x0a0971a679ca2628ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_playfile_nodes/playfileSrvResponse";
  }

  static const char* value(const ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 DID_NOT_FIND_PLAYFILE=0\n\
int32 FOUND_RIGHT_ARM_PLAYFILE=1\n\
int32 FOUND_LEFT_ARM_PLAYFILE=2\n\
int32 FOUND_BOTH_ARMS_PLAYFILES=3\n\
int32 UNKNOWN_CASE=4\n\
int32 return_code\n\
\n\
";
  }

  static const char* value(const ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.return_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct playfileSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_playfile_nodes::playfileSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "return_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.return_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_PLAYFILE_NODES_MESSAGE_PLAYFILESRVRESPONSE_H
