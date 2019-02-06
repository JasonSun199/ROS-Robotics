// Auto-generated. Do not edit!

// (in-package coordinator.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class ManipTaskGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action_code = null;
      this.object_code = null;
      this.pickup_frame = null;
      this.dropoff_frame = null;
      this.gripper_goal_frame = null;
      this.perception_source = null;
    }
    else {
      if (initObj.hasOwnProperty('action_code')) {
        this.action_code = initObj.action_code
      }
      else {
        this.action_code = 0;
      }
      if (initObj.hasOwnProperty('object_code')) {
        this.object_code = initObj.object_code
      }
      else {
        this.object_code = 0;
      }
      if (initObj.hasOwnProperty('pickup_frame')) {
        this.pickup_frame = initObj.pickup_frame
      }
      else {
        this.pickup_frame = new geometry_msgs.msg.PoseStamped();
      }
      if (initObj.hasOwnProperty('dropoff_frame')) {
        this.dropoff_frame = initObj.dropoff_frame
      }
      else {
        this.dropoff_frame = new geometry_msgs.msg.PoseStamped();
      }
      if (initObj.hasOwnProperty('gripper_goal_frame')) {
        this.gripper_goal_frame = initObj.gripper_goal_frame
      }
      else {
        this.gripper_goal_frame = new geometry_msgs.msg.PoseStamped();
      }
      if (initObj.hasOwnProperty('perception_source')) {
        this.perception_source = initObj.perception_source
      }
      else {
        this.perception_source = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ManipTaskGoal
    // Serialize message field [action_code]
    bufferOffset = _serializer.int32(obj.action_code, buffer, bufferOffset);
    // Serialize message field [object_code]
    bufferOffset = _serializer.int32(obj.object_code, buffer, bufferOffset);
    // Serialize message field [pickup_frame]
    bufferOffset = geometry_msgs.msg.PoseStamped.serialize(obj.pickup_frame, buffer, bufferOffset);
    // Serialize message field [dropoff_frame]
    bufferOffset = geometry_msgs.msg.PoseStamped.serialize(obj.dropoff_frame, buffer, bufferOffset);
    // Serialize message field [gripper_goal_frame]
    bufferOffset = geometry_msgs.msg.PoseStamped.serialize(obj.gripper_goal_frame, buffer, bufferOffset);
    // Serialize message field [perception_source]
    bufferOffset = _serializer.int32(obj.perception_source, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ManipTaskGoal
    let len;
    let data = new ManipTaskGoal(null);
    // Deserialize message field [action_code]
    data.action_code = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [object_code]
    data.object_code = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [pickup_frame]
    data.pickup_frame = geometry_msgs.msg.PoseStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [dropoff_frame]
    data.dropoff_frame = geometry_msgs.msg.PoseStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [gripper_goal_frame]
    data.gripper_goal_frame = geometry_msgs.msg.PoseStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [perception_source]
    data.perception_source = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.PoseStamped.getMessageSize(object.pickup_frame);
    length += geometry_msgs.msg.PoseStamped.getMessageSize(object.dropoff_frame);
    length += geometry_msgs.msg.PoseStamped.getMessageSize(object.gripper_goal_frame);
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'coordinator/ManipTaskGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '439e760055837a8000a9a7865d0345ab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #goal: specify object code, perception type (incl blind), dropoff location, optional pickup location
    #task codes:
    int32 PCL_VISION = 1 # could have more camera sources to refer to
    int32 BLIND_MANIP = 2 #expect pose specified in pickup_location field
    
    #action codes:
    int32 GET_PICKUP_POSE = 1 #low level ops; maybe don't implement
    int32 WAIT_FOR_FINDER = 101
    
    int32 FIND_TABLE_SURFACE = 2 #do this once, and re-use result for multiple objects
    int32 WAIT_FIND_TABLE_SURFACE = 102
    
    int32 GRAB_OBJECT = 3 #assumes use of current pickup pose,
                          #whether provided for "blind" manip, or found
                          #from use of PCL_VISION
    int32 WAIT_FOR_GRAB_OBJECT = 103    
                     
    int32 DROPOFF_OBJECT = 4 #must provide dropoff_frame in goal msg
    int32 WAIT_FOR_DROPOFF_OBJECT = 104
    
    #int32 MANIP_OBJECT = 5 #macro: does perception, grab, and dropoff
                           #MUST provide dropoff frame, and means to
                           #get pickup_frame
    
    int32 STRADDLE_OBJECT = 8 #test mode--simply straddle object, but don't grasp it
    int32 WAIT_FOR_STRADDLE_OBJECT = 108
    
    int32 CART_MOVE_TO_GRIPPER_POSE = 9
    int32 WAIT_FOR_CART_MOVE = 109
                           
    int32 NO_CURRENT_TASK = 6
    int32 MOVE_TO_PRE_POSE = 7
    int32 WAIT_FOR_MOVE_TO_PREPOSE = 107
    int32 WAIT_FOR_MOVE = 107 #generic wait-for-move status
    
    int32 ABORT= 666
    
    #goal specification:
    int32 action_code #what action should be performed?
    int32 object_code #refer to a-priori known object types by object-ID codes
    geometry_msgs/PoseStamped pickup_frame #specify object coords for pickup 
    geometry_msgs/PoseStamped dropoff_frame #specify desired drop-off coords of object's frame
    geometry_msgs/PoseStamped gripper_goal_frame #a goal frame to move gripper
    int32 perception_source  #e.g. name a camera source
    
    ================================================================================
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ManipTaskGoal(null);
    if (msg.action_code !== undefined) {
      resolved.action_code = msg.action_code;
    }
    else {
      resolved.action_code = 0
    }

    if (msg.object_code !== undefined) {
      resolved.object_code = msg.object_code;
    }
    else {
      resolved.object_code = 0
    }

    if (msg.pickup_frame !== undefined) {
      resolved.pickup_frame = geometry_msgs.msg.PoseStamped.Resolve(msg.pickup_frame)
    }
    else {
      resolved.pickup_frame = new geometry_msgs.msg.PoseStamped()
    }

    if (msg.dropoff_frame !== undefined) {
      resolved.dropoff_frame = geometry_msgs.msg.PoseStamped.Resolve(msg.dropoff_frame)
    }
    else {
      resolved.dropoff_frame = new geometry_msgs.msg.PoseStamped()
    }

    if (msg.gripper_goal_frame !== undefined) {
      resolved.gripper_goal_frame = geometry_msgs.msg.PoseStamped.Resolve(msg.gripper_goal_frame)
    }
    else {
      resolved.gripper_goal_frame = new geometry_msgs.msg.PoseStamped()
    }

    if (msg.perception_source !== undefined) {
      resolved.perception_source = msg.perception_source;
    }
    else {
      resolved.perception_source = 0
    }

    return resolved;
    }
};

// Constants for message
ManipTaskGoal.Constants = {
  PCL_VISION: 1,
  BLIND_MANIP: 2,
  GET_PICKUP_POSE: 1,
  WAIT_FOR_FINDER: 101,
  FIND_TABLE_SURFACE: 2,
  WAIT_FIND_TABLE_SURFACE: 102,
  GRAB_OBJECT: 3,
  WAIT_FOR_GRAB_OBJECT: 103,
  DROPOFF_OBJECT: 4,
  WAIT_FOR_DROPOFF_OBJECT: 104,
  STRADDLE_OBJECT: 8,
  WAIT_FOR_STRADDLE_OBJECT: 108,
  CART_MOVE_TO_GRIPPER_POSE: 9,
  WAIT_FOR_CART_MOVE: 109,
  NO_CURRENT_TASK: 6,
  MOVE_TO_PRE_POSE: 7,
  WAIT_FOR_MOVE_TO_PREPOSE: 107,
  WAIT_FOR_MOVE: 107,
  ABORT: 666,
}

module.exports = ManipTaskGoal;
