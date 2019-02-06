// Auto-generated. Do not edit!

// (in-package example_action_server.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class demoResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.output = null;
      this.goal_stamp = null;
    }
    else {
      if (initObj.hasOwnProperty('output')) {
        this.output = initObj.output
      }
      else {
        this.output = 0;
      }
      if (initObj.hasOwnProperty('goal_stamp')) {
        this.goal_stamp = initObj.goal_stamp
      }
      else {
        this.goal_stamp = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type demoResult
    // Serialize message field [output]
    bufferOffset = _serializer.int32(obj.output, buffer, bufferOffset);
    // Serialize message field [goal_stamp]
    bufferOffset = _serializer.int32(obj.goal_stamp, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type demoResult
    let len;
    let data = new demoResult(null);
    // Deserialize message field [output]
    data.output = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [goal_stamp]
    data.goal_stamp = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'example_action_server/demoResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5e463ad5c3d69302a64d2d29d141c0d9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #result definition
    int32 output
    int32 goal_stamp
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new demoResult(null);
    if (msg.output !== undefined) {
      resolved.output = msg.output;
    }
    else {
      resolved.output = 0
    }

    if (msg.goal_stamp !== undefined) {
      resolved.goal_stamp = msg.goal_stamp;
    }
    else {
      resolved.goal_stamp = 0
    }

    return resolved;
    }
};

module.exports = demoResult;
