// Generated by gencpp from file object_grabber/object_grabber2Action.msg
// DO NOT EDIT!


#ifndef OBJECT_GRABBER_MESSAGE_OBJECT_GRABBER2ACTION_H
#define OBJECT_GRABBER_MESSAGE_OBJECT_GRABBER2ACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <object_grabber/object_grabber2ActionGoal.h>
#include <object_grabber/object_grabber2ActionResult.h>
#include <object_grabber/object_grabber2ActionFeedback.h>

namespace object_grabber
{
template <class ContainerAllocator>
struct object_grabber2Action_
{
  typedef object_grabber2Action_<ContainerAllocator> Type;

  object_grabber2Action_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  object_grabber2Action_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::object_grabber::object_grabber2ActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::object_grabber::object_grabber2ActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::object_grabber::object_grabber2ActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::object_grabber::object_grabber2Action_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_grabber::object_grabber2Action_<ContainerAllocator> const> ConstPtr;

}; // struct object_grabber2Action_

typedef ::object_grabber::object_grabber2Action_<std::allocator<void> > object_grabber2Action;

typedef boost::shared_ptr< ::object_grabber::object_grabber2Action > object_grabber2ActionPtr;
typedef boost::shared_ptr< ::object_grabber::object_grabber2Action const> object_grabber2ActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_grabber::object_grabber2Action_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_grabber::object_grabber2Action_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_grabber::object_grabber2Action_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_grabber::object_grabber2Action_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_grabber::object_grabber2Action_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "624ac35725a317eb9e67ebe19d183592";
  }

  static const char* value(const ::object_grabber::object_grabber2Action_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x624ac35725a317ebULL;
  static const uint64_t static_value2 = 0x9e67ebe19d183592ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_grabber/object_grabber2Action";
  }

  static const char* value(const ::object_grabber::object_grabber2Action_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
object_grabber2ActionGoal action_goal\n\
object_grabber2ActionResult action_result\n\
object_grabber2ActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: object_grabber/object_grabber2ActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
object_grabber2Goal goal\n\
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
MSG: object_grabber/object_grabber2Goal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#object_grabber action message\n\
#pass in an object code and the object's frame (w/rt named frame_id)\n\
#object_grabber will plan approach, grasp and lift of object\n\
#returns codes regarding outcome\n\
\n\
int32 UPRIGHT_CYLINDER = 1\n\
int32 GRAB_UPRIGHT_CYLINDER = 1 #synonym\n\
int32 TOY_BLOCK = 2\n\
int32 GRAB_TOY_BLOCK = 2 #synonym\n\
int32 GRAB_W_TOOL_Z_APPROACH = 2 #another synonym\n\
int32 PLACE_UPRIGHT_CYLINDER = 3 #new drop-off command\n\
int32 PLACE_TOY_BLOCK = 4 #drop-off toy block\n\
int32 DROPOFF_ALONG_TOOL_Z = 4 #synonym\n\
\n\
int32 MOVE_FLANGE_TO = 5 #specify flange pose to reach\n\
int32 FINE_MOVE_FLANGE_TO = 6 #precision move to specified flange pose\n\
int32 MOVE_TO_PRE_POSE = 7 # get hand out of way of camera\n\
int32 JSPACE_MOVE_FLANGE_TO = 8 # joint-space move to specified flange pose\n\
\n\
int32 CLOSE_GRIPPER = 100  #commands to open/close gripper; should specify test value\n\
int32 OPEN_GRIPPER = 101\n\
\n\
#moved these properties to object_manipulation_properties package/library\n\
#float64 TOY_BLOCK_APPROACH_DIST = 0.05\n\
#expect w/ gripper closed on toy block, finger separation should be more than this value:\n\
#float64 TOY_BLOCK_GRIPPER_CLOSE_TEST_VAL = 80.0\n\
\n\
\n\
#add more objects here...\n\
\n\
\n\
\n\
#goal:\n\
int32 action_code\n\
int32 object_id\n\
geometry_msgs/PoseStamped desired_frame  \n\
#float64 gripper_test_val\n\
\n\
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
\n\
================================================================================\n\
MSG: object_grabber/object_grabber2ActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
object_grabber2Result result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: object_grabber/object_grabber2Result\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
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
MSG: object_grabber/object_grabber2ActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
object_grabber2Feedback feedback\n\
\n\
================================================================================\n\
MSG: object_grabber/object_grabber2Feedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback: optional; \n\
int32 fdbk\n\
\n\
";
  }

  static const char* value(const ::object_grabber::object_grabber2Action_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct object_grabber2Action_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_grabber::object_grabber2Action_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_grabber::object_grabber2Action_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::object_grabber::object_grabber2ActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::object_grabber::object_grabber2ActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::object_grabber::object_grabber2ActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_GRABBER_MESSAGE_OBJECT_GRABBER2ACTION_H
