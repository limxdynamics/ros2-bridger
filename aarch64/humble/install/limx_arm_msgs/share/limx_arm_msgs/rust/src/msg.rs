#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to limx_arm_msgs__msg__JointData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviceid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: [f32; 6],

}



impl Default for JointData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointData::default())
  }
}

impl rosidl_runtime_rs::Message for JointData {
  type RmwMsg = super::msg::rmw::JointData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: msg.stamp,
        deviceid: msg.deviceid.as_str().into(),
        angle: msg.angle,
        velocity: msg.velocity,
        current: msg.current,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      stamp: msg.stamp,
        deviceid: msg.deviceid.as_str().into(),
        angle: msg.angle,
        velocity: msg.velocity,
        current: msg.current,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: msg.stamp,
      deviceid: msg.deviceid.to_string(),
      angle: msg.angle,
      velocity: msg.velocity,
      current: msg.current,
    }
  }
}


// Corresponds to limx_arm_msgs__msg__JointSet

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointSet {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviceid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i32,

    /// data
    pub data: [f32; 6],

}

impl JointSet {
    /// action
    pub const ACTION_IDLE: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_START: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_PAUSE: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_RESUME: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_STOP: i32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_ENABLE_MOTOR: i32 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_ZERO: i32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_LIMIT_MIN: i32 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_LIMIT_MAX: i32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_POSITION: i32 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_MODE: i32 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_TOOL_SIZE: i32 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_START_DRAG: i32 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_STOP_DRAG: i32 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_PLAYER_START: i32 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_PLAYER_STOP: i32 = 15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_SET_CARTESIAN_POSITION: i32 = 16;

    /// 01位置控制，03速度模式，04电流模式
    pub const MODE_ANGLE: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_VELOCITY: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CURRENT: i32 = 4;

}


impl Default for JointSet {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointSet::default())
  }
}

impl rosidl_runtime_rs::Message for JointSet {
  type RmwMsg = super::msg::rmw::JointSet;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: msg.stamp,
        deviceid: msg.deviceid.as_str().into(),
        action: msg.action,
        mode: msg.mode,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      stamp: msg.stamp,
        deviceid: msg.deviceid.as_str().into(),
      action: msg.action,
      mode: msg.mode,
        data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: msg.stamp,
      deviceid: msg.deviceid.to_string(),
      action: msg.action,
      mode: msg.mode,
      data: msg.data,
    }
  }
}


// Corresponds to limx_arm_msgs__msg__JointStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviceid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_time: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: [i32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: [std::string::String; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub zero: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub limit_min: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub limit_max: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub tool_size: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub play_state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub log_path: std::string::String,

}

impl JointStatus {
    /// 01位置控制，03速度模式，04电流模式
    pub const MODE_ANGLE: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_VELOCITY: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CURRENT: i32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_IDLE: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_STARTED: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_PAUSED: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_RESUMED: i32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_STOPED: i32 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_SHUTDOWN: i32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLAY_STATE_IDLE: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLAY_STATE_STARTED: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLAY_STATE_FAILED: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PLAY_STATE_FINISHED: i32 = 3;

}


impl Default for JointStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointStatus::default())
  }
}

impl rosidl_runtime_rs::Message for JointStatus {
  type RmwMsg = super::msg::rmw::JointStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: msg.stamp,
        deviceid: msg.deviceid.as_str().into(),
        run_time: msg.run_time,
        enable: msg.enable,
        error: msg.error
          .map(|elem| elem.as_str().into()),
        zero: msg.zero,
        limit_min: msg.limit_min,
        limit_max: msg.limit_max,
        tool_size: msg.tool_size,
        mode: msg.mode,
        state: msg.state,
        play_state: msg.play_state,
        log_path: msg.log_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      stamp: msg.stamp,
        deviceid: msg.deviceid.as_str().into(),
      run_time: msg.run_time,
        enable: msg.enable,
        error: msg.error
          .iter()
          .map(|elem| elem.as_str().into())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        zero: msg.zero,
        limit_min: msg.limit_min,
        limit_max: msg.limit_max,
        tool_size: msg.tool_size,
      mode: msg.mode,
      state: msg.state,
      play_state: msg.play_state,
        log_path: msg.log_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: msg.stamp,
      deviceid: msg.deviceid.to_string(),
      run_time: msg.run_time,
      enable: msg.enable,
      error: msg.error
        .map(|elem| elem.to_string()),
      zero: msg.zero,
      limit_min: msg.limit_min,
      limit_max: msg.limit_max,
      tool_size: msg.tool_size,
      mode: msg.mode,
      state: msg.state,
      play_state: msg.play_state,
      log_path: msg.log_path.to_string(),
    }
  }
}


// Corresponds to limx_arm_msgs__msg__ServoCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoCmd {
    /// servoL SetHeadPos
    pub functionName: std::string::String,

    /// #servoL
    pub left_arm_pos: [f32; 7],

    /// #servoL
    pub right_arm_pos: [f32; 7],

}



impl Default for ServoCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ServoCmd {
  type RmwMsg = super::msg::rmw::ServoCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        functionName: msg.functionName.as_str().into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        functionName: msg.functionName.as_str().into(),
        left_arm_pos: msg.left_arm_pos,
        right_arm_pos: msg.right_arm_pos,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      functionName: msg.functionName.to_string(),
      left_arm_pos: msg.left_arm_pos,
      right_arm_pos: msg.right_arm_pos,
    }
  }
}


// Corresponds to limx_arm_msgs__msg__arm_status

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_status {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_joints: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_joints: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_endEffector: [f64; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_endEffector: [f64; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub ik_statu: i32,

}



impl Default for arm_status {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::arm_status::default())
  }
}

impl rosidl_runtime_rs::Message for arm_status {
  type RmwMsg = super::msg::rmw::arm_status;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_joints: msg.left_joints.into(),
        right_joints: msg.right_joints.into(),
        left_endEffector: msg.left_endEffector,
        right_endEffector: msg.right_endEffector,
        ik_statu: msg.ik_statu,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_joints: msg.left_joints.as_slice().into(),
        right_joints: msg.right_joints.as_slice().into(),
        left_endEffector: msg.left_endEffector,
        right_endEffector: msg.right_endEffector,
      ik_statu: msg.ik_statu,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_joints: msg.left_joints
          .into_iter()
          .collect(),
      right_joints: msg.right_joints
          .into_iter()
          .collect(),
      left_endEffector: msg.left_endEffector,
      right_endEffector: msg.right_endEffector,
      ik_statu: msg.ik_statu,
    }
  }
}


