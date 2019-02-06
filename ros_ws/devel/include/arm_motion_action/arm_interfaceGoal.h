// Generated by gencpp from file arm_motion_action/arm_interfaceGoal.msg
// DO NOT EDIT!


#ifndef ARM_MOTION_ACTION_MESSAGE_ARM_INTERFACEGOAL_H
#define ARM_MOTION_ACTION_MESSAGE_ARM_INTERFACEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace arm_motion_action
{
template <class ContainerAllocator>
struct arm_interfaceGoal_
{
  typedef arm_interfaceGoal_<ContainerAllocator> Type;

  arm_interfaceGoal_()
    : command_code(0)
    , des_pose_gripper()
    , arm_dp()
    , q_goal()
    , q_start()
    , nsteps(0)
    , arrival_time(0.0)
    , nseg(0)  {
    }
  arm_interfaceGoal_(const ContainerAllocator& _alloc)
    : command_code(0)
    , des_pose_gripper(_alloc)
    , arm_dp(_alloc)
    , q_goal(_alloc)
    , q_start(_alloc)
    , nsteps(0)
    , arrival_time(0.0)
    , nseg(0)  {
  (void)_alloc;
    }



   typedef int32_t _command_code_type;
  _command_code_type command_code;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _des_pose_gripper_type;
  _des_pose_gripper_type des_pose_gripper;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _arm_dp_type;
  _arm_dp_type arm_dp;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _q_goal_type;
  _q_goal_type q_goal;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _q_start_type;
  _q_start_type q_start;

   typedef int32_t _nsteps_type;
  _nsteps_type nsteps;

   typedef double _arrival_time_type;
  _arrival_time_type arrival_time;

   typedef int32_t _nseg_type;
  _nseg_type nseg;



  enum {
    ARM_TEST_MODE = 0u,
    ARM_IS_SERVER_BUSY_QUERY = 1u,
    ARM_QUERY_IS_PATH_VALID = 2u,
    GET_TOOL_POSE = 5u,
    GET_Q_DATA = 7u,
    PLAN_JSPACE_TRAJ_CURRENT_TO_WAITING_POSE = 20u,
    PLAN_JSPACE_TRAJ_CURRENT_TO_QGOAL = 21u,
    PLAN_JSPACE_TRAJ_CURRENT_TO_CART_TOOL_POSE = 22u,
    PLAN_CARTESIAN_TRAJ_CURRENT_TO_DES_TOOL_POSE = 23u,
    PLAN_CARTESIAN_TRAJ_QSTART_TO_DES_TOOL_POSE = 24u,
    PLAN_CARTESIAN_TRAJ_QPREV_TO_DES_TOOL_POSE = 25u,
    CLEAR_MULTI_TRAJ_PLAN = 26u,
    APPEND_MULTI_TRAJ_CART_SEGMENT = 27u,
    APPEND_MULTI_TRAJ_JSPACE_SEGMENT = 28u,
    TEST_PATH_FOR_DISCONTINUITIES = 29u,
    GET_NUM_PATH_SEGMENTS = 30u,
    GET_REPLANNED_ARRIVAL_TIMES = 31u,
    REPLAN_DISCONTINUITIES = 32u,
    REFINE_PLANNED_TRAJECTORY = 41u,
    SEGMENT_DISCONTINUOUS_TRAJ = 42u,
    EXECUTE_PLANNED_TRAJ = 100u,
    EXECUTE_TRAJ_NSEG = 101u,
    GOTO_NSEG_START = 102u,
  };


  typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> const> ConstPtr;

}; // struct arm_interfaceGoal_

typedef ::arm_motion_action::arm_interfaceGoal_<std::allocator<void> > arm_interfaceGoal;

typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceGoal > arm_interfaceGoalPtr;
typedef boost::shared_ptr< ::arm_motion_action::arm_interfaceGoal const> arm_interfaceGoalConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arm_motion_action

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'actionlib': ['/opt/ros/kinetic/share/actionlib/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'arm_motion_action': ['/home/jasonsun/ros_ws/devel/share/arm_motion_action/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36fc51b5a2a5b9b94726c66530e4f485";
  }

  static const char* value(const ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36fc51b5a2a5b9b9ULL;
  static const uint64_t static_value2 = 0x4726c66530e4f485ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arm_motion_action/arm_interfaceGoal";
  }

  static const char* value(const ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#cartesian-move action interface\n\
#minimally, it may contain just a command code\n\
#more generally, it may contain desired tool-frame pose, as well\n\
# as gripper pose (gripper opening, or vacuum gripper on/off)\n\
# and an arrival time for the move\n\
# It is assumed that a move starts from the previous commanded pose, or from the current joint state\n\
\n\
#return codes provide status info, e.g. if a proposed move is reachable\n\
\n\
#define message constants:  \n\
uint8 ARM_TEST_MODE = 0\n\
\n\
#queries\n\
uint8 ARM_IS_SERVER_BUSY_QUERY = 1\n\
uint8 ARM_QUERY_IS_PATH_VALID = 2\n\
uint8 GET_TOOL_POSE = 5\n\
uint8 GET_Q_DATA = 7\n\
\n\
#requests for motion plans; \n\
uint8 PLAN_JSPACE_TRAJ_CURRENT_TO_WAITING_POSE=20\n\
uint8 PLAN_JSPACE_TRAJ_CURRENT_TO_QGOAL = 21\n\
uint8 PLAN_JSPACE_TRAJ_CURRENT_TO_CART_TOOL_POSE = 22 #plan a joint-space path from current arm pose to some IK soln of Cartesian goal\n\
\n\
uint8 PLAN_CARTESIAN_TRAJ_CURRENT_TO_DES_TOOL_POSE = 23\n\
uint8 PLAN_CARTESIAN_TRAJ_QSTART_TO_DES_TOOL_POSE = 24\n\
uint8 PLAN_CARTESIAN_TRAJ_QPREV_TO_DES_TOOL_POSE = 25\n\
\n\
uint8 CLEAR_MULTI_TRAJ_PLAN = 26\n\
uint8 APPEND_MULTI_TRAJ_CART_SEGMENT = 27\n\
uint8 APPEND_MULTI_TRAJ_JSPACE_SEGMENT = 28\n\
uint8 TEST_PATH_FOR_DISCONTINUITIES = 29\n\
uint8 GET_NUM_PATH_SEGMENTS = 30\n\
uint8 GET_REPLANNED_ARRIVAL_TIMES = 31\n\
uint8 REPLAN_DISCONTINUITIES = 32\n\
\n\
uint8 REFINE_PLANNED_TRAJECTORY = 41 #if used approx IK soln, use this option to refine solns\n\
uint8 SEGMENT_DISCONTINUOUS_TRAJ = 42 #if soln is discontinuous, segment it into a multi-traj plan\n\
# return the number of new segments and their respective arrival times\n\
\n\
# request to preview plan:\n\
#uint8 DISPLAY_TRAJECTORY = 50\n\
\n\
#MOVE command!\n\
uint8 EXECUTE_PLANNED_TRAJ = 100\n\
#specify a segment number to be executed from a multi-segment trajectory\n\
uint8 EXECUTE_TRAJ_NSEG = 101\n\
#for a path with discontinuities, command arm to go to first pose of segment nseg\n\
#specify the path segment in element \"nseg\"\n\
uint8 GOTO_NSEG_START = 102\n\
\n\
#uint8 ARM_DESCEND_20CM=101\n\
#uint8 ARM_DEPART_20CM=102\n\
\n\
\n\
#goal:\n\
int32 command_code\n\
geometry_msgs/PoseStamped des_pose_gripper\n\
float64[] arm_dp #to command a 3-D vector displacement relative to current pose, fixed orientation\n\
float64[] q_goal\n\
float64[] q_start\n\
int32 nsteps\n\
float64 arrival_time\n\
int32 nseg #to choose one of NSEG segments in a multi-traj vector\n\
#float64 time_scale_stretch_factor\n\
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

  static const char* value(const ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command_code);
      stream.next(m.des_pose_gripper);
      stream.next(m.arm_dp);
      stream.next(m.q_goal);
      stream.next(m.q_start);
      stream.next(m.nsteps);
      stream.next(m.arrival_time);
      stream.next(m.nseg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct arm_interfaceGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arm_motion_action::arm_interfaceGoal_<ContainerAllocator>& v)
  {
    s << indent << "command_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.command_code);
    s << indent << "des_pose_gripper: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.des_pose_gripper);
    s << indent << "arm_dp[]" << std::endl;
    for (size_t i = 0; i < v.arm_dp.size(); ++i)
    {
      s << indent << "  arm_dp[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.arm_dp[i]);
    }
    s << indent << "q_goal[]" << std::endl;
    for (size_t i = 0; i < v.q_goal.size(); ++i)
    {
      s << indent << "  q_goal[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_goal[i]);
    }
    s << indent << "q_start[]" << std::endl;
    for (size_t i = 0; i < v.q_start.size(); ++i)
    {
      s << indent << "  q_start[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_start[i]);
    }
    s << indent << "nsteps: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nsteps);
    s << indent << "arrival_time: ";
    Printer<double>::stream(s, indent + "  ", v.arrival_time);
    s << indent << "nseg: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nseg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARM_MOTION_ACTION_MESSAGE_ARM_INTERFACEGOAL_H
