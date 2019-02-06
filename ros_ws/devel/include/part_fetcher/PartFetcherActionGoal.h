// Generated by gencpp from file part_fetcher/PartFetcherActionGoal.msg
// DO NOT EDIT!


#ifndef PART_FETCHER_MESSAGE_PARTFETCHERACTIONGOAL_H
#define PART_FETCHER_MESSAGE_PARTFETCHERACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <part_fetcher/PartFetcherGoal.h>

namespace part_fetcher
{
template <class ContainerAllocator>
struct PartFetcherActionGoal_
{
  typedef PartFetcherActionGoal_<ContainerAllocator> Type;

  PartFetcherActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  PartFetcherActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::part_fetcher::PartFetcherGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PartFetcherActionGoal_

typedef ::part_fetcher::PartFetcherActionGoal_<std::allocator<void> > PartFetcherActionGoal;

typedef boost::shared_ptr< ::part_fetcher::PartFetcherActionGoal > PartFetcherActionGoalPtr;
typedef boost::shared_ptr< ::part_fetcher::PartFetcherActionGoal const> PartFetcherActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace part_fetcher

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'arm7dof_traj_as': ['/home/jasonsun/ros_ws/devel/share/arm7dof_traj_as/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg'], 'part_fetcher': ['/home/jasonsun/ros_ws/devel/share/part_fetcher/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/jasonsun/ros_ws/src/learning_ros_external_pkgs_kinetic/baxter_common/baxter_core_msgs/msg'], 'object_grabber': ['/home/jasonsun/ros_ws/devel/share/object_grabber/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'tf': ['/opt/ros/kinetic/share/tf/cmake/../msg'], 'cartesian_planner': ['/home/jasonsun/ros_ws/devel/share/cartesian_planner/msg'], 'baxter_trajectory_streamer': ['/home/jasonsun/ros_ws/devel/share/baxter_trajectory_streamer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2366697920dc0c58c66f2a783406a441";
  }

  static const char* value(const ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2366697920dc0c58ULL;
  static const uint64_t static_value2 = 0xc66f2a783406a441ULL;
};

template<class ContainerAllocator>
struct DataType< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "part_fetcher/PartFetcherActionGoal";
  }

  static const char* value(const ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PartFetcherGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: part_fetcher/PartFetcherGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#action message for part fetcher\n\
#specify a part ID, starting pose, and desired destination pose\n\
int32 object_id\n\
geometry_msgs/PoseStamped object_frame\n\
geometry_msgs/PoseStamped desired_frame\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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

  static const char* value(const ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PartFetcherActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::part_fetcher::PartFetcherActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::part_fetcher::PartFetcherGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PART_FETCHER_MESSAGE_PARTFETCHERACTIONGOAL_H
