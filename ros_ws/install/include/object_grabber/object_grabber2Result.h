// Generated by gencpp from file object_grabber/object_grabber2Result.msg
// DO NOT EDIT!


#ifndef OBJECT_GRABBER_MESSAGE_OBJECT_GRABBER2RESULT_H
#define OBJECT_GRABBER_MESSAGE_OBJECT_GRABBER2RESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace object_grabber
{
template <class ContainerAllocator>
struct object_grabber2Result_
{
  typedef object_grabber2Result_<ContainerAllocator> Type;

  object_grabber2Result_()
    : return_code(0)
    , des_flange_pose_stamped_wrt_torso()  {
    }
  object_grabber2Result_(const ContainerAllocator& _alloc)
    : return_code(0)
    , des_flange_pose_stamped_wrt_torso(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _return_code_type;
  _return_code_type return_code;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _des_flange_pose_stamped_wrt_torso_type;
  _des_flange_pose_stamped_wrt_torso_type des_flange_pose_stamped_wrt_torso;



  enum {
    SUCCESS = 0,
    OBJECT_ACQUIRED = 0,
    FAILED_CANNOT_REACH = 1,
    FAILED_CANNOT_APPROACH = 2,
    FAILED_CANNOT_REACH_GRASP_POSE = 3,
    FAILED_CANNOT_REACH_DEPART_POSE = 4,
    FAILED_OBJECT_NOT_IN_GRIPPER = 5,
    FAILED_OBJECT_UNKNOWN = 6,
    OBJECT_GRABBER_BUSY = 7,
    OBJECT_GRABBER_CANCELLED = 8,
    FAILED_CANNOT_REACH_DROPOFF_POSE = 9,
    FAILED_CANNOT_REACH_DROPOFF_APPROACH = 10,
    FAILED_CANNOT_REACH_POSE_CARTESIAN_MOVE = 11,
    FAILED_CANNOT_REACH_JSPACE_MOVE = 12,
    FAILED_CANNOT_MOVE_CARTESIAN_FINE = 13,
    FAILED_CANNOT_MOVE_TO_PRE_POSE = 14,
    ACTION_CODE_UNKNOWN = 15,
    GRIPPER_IS_OPEN = 16,
    GRIPPER_IS_CLOSED = 17,
    GRIPPER_FAILURE = 18,
    PENDING = 19,
    OBJECT_DROPPED_OFF = 20,
  };


  typedef boost::shared_ptr< ::object_grabber::object_grabber2Result_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_grabber::object_grabber2Result_<ContainerAllocator> const> ConstPtr;

}; // struct object_grabber2Result_

typedef ::object_grabber::object_grabber2Result_<std::allocator<void> > object_grabber2Result;

typedef boost::shared_ptr< ::object_grabber::object_grabber2Result > object_grabber2ResultPtr;
typedef boost::shared_ptr< ::object_grabber::object_grabber2Result const> object_grabber2ResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_grabber::object_grabber2Result_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_grabber::object_grabber2Result_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_grabber

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'arm7dof_traj_as': ['/home/jasonsun/ros_ws/devel/share/arm7dof_traj_as/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/jasonsun/ros_ws/src/learning_ros_external_pkgs_kinetic/baxter_common/baxter_core_msgs/msg'], 'object_grabber': ['/home/jasonsun/ros_ws/devel/share/object_grabber/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg', '/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'tf': ['/opt/ros/kinetic/share/tf/cmake/../msg'], 'cartesian_planner': ['/home/jasonsun/ros_ws/devel/share/cartesian_planner/msg'], 'baxter_trajectory_streamer': ['/home/jasonsun/ros_ws/devel/share/baxter_trajectory_streamer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_grabber::object_grabber2Result_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_grabber::object_grabber2Result_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_grabber::object_grabber2Result_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3117930a1aa49e1249134cfe7f822781";
  }

  static const char* value(const ::object_grabber::object_grabber2Result_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3117930a1aa49e12ULL;
  static const uint64_t static_value2 = 0x49134cfe7f822781ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_grabber/object_grabber2Result";
  }

  static const char* value(const ::object_grabber::object_grabber2Result_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
#  response codes...\n\
int32 SUCCESS=0\n\
int32 OBJECT_ACQUIRED=0\n\
int32 FAILED_CANNOT_REACH=1\n\
int32 FAILED_CANNOT_APPROACH=2\n\
int32 FAILED_CANNOT_REACH_GRASP_POSE=3\n\
int32 FAILED_CANNOT_REACH_DEPART_POSE=4\n\
int32 FAILED_OBJECT_NOT_IN_GRIPPER=5\n\
int32 FAILED_OBJECT_UNKNOWN=6\n\
int32 OBJECT_GRABBER_BUSY=7\n\
int32 OBJECT_GRABBER_CANCELLED=8\n\
int32 FAILED_CANNOT_REACH_DROPOFF_POSE=9\n\
int32 FAILED_CANNOT_REACH_DROPOFF_APPROACH=10\n\
int32 FAILED_CANNOT_REACH_POSE_CARTESIAN_MOVE=11\n\
int32 FAILED_CANNOT_REACH_JSPACE_MOVE=12\n\
int32 FAILED_CANNOT_MOVE_CARTESIAN_FINE=13\n\
int32 FAILED_CANNOT_MOVE_TO_PRE_POSE=14\n\
int32 ACTION_CODE_UNKNOWN=15\n\
int32 GRIPPER_IS_OPEN=16\n\
int32 GRIPPER_IS_CLOSED=17\n\
int32 GRIPPER_FAILURE=18\n\
int32 PENDING=19\n\
int32 OBJECT_DROPPED_OFF = 20\n\
\n\
int32 return_code\n\
geometry_msgs/PoseStamped des_flange_pose_stamped_wrt_torso\n\
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

  static const char* value(const ::object_grabber::object_grabber2Result_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.return_code);
      stream.next(m.des_flange_pose_stamped_wrt_torso);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct object_grabber2Result_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_grabber::object_grabber2Result_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_grabber::object_grabber2Result_<ContainerAllocator>& v)
  {
    s << indent << "return_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.return_code);
    s << indent << "des_flange_pose_stamped_wrt_torso: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.des_flange_pose_stamped_wrt_torso);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_GRABBER_MESSAGE_OBJECT_GRABBER2RESULT_H
