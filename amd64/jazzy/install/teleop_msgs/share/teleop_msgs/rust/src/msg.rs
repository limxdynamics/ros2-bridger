#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to teleop_msgs__msg__KeyPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for KeyPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KeyPoint::default())
  }
}

impl rosidl_runtime_rs::Message for KeyPoint {
  type RmwMsg = super::msg::rmw::KeyPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to teleop_msgs__msg__TeleopMsg

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub anchors: Vec<super::msg::KeyPoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_cmd: controller_msgs::msg::JointCmd,

}



impl Default for TeleopMsg {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopMsg::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopMsg {
  type RmwMsg = super::msg::rmw::TeleopMsg;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        world: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.world)).into_owned(),
        anchors: msg.anchors
          .into_iter()
          .map(|elem| super::msg::KeyPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        joint_cmd: controller_msgs::msg::JointCmd::into_rmw_message(std::borrow::Cow::Owned(msg.joint_cmd)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        world: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.world)).into_owned(),
        anchors: msg.anchors
          .iter()
          .map(|elem| super::msg::KeyPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        joint_cmd: controller_msgs::msg::JointCmd::into_rmw_message(std::borrow::Cow::Borrowed(&msg.joint_cmd)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      world: geometry_msgs::msg::Pose::from_rmw_message(msg.world),
      anchors: msg.anchors
          .into_iter()
          .map(super::msg::KeyPoint::from_rmw_message)
          .collect(),
      joint_cmd: controller_msgs::msg::JointCmd::from_rmw_message(msg.joint_cmd),
    }
  }
}


// Corresponds to teleop_msgs__msg__VRState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VRState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 眼镜位置姿态矩阵 4x4
    pub eyePose: [f32; 16],

    /// 左手柄姿态矩阵 4x4
    pub l: [f32; 16],

    /// 右手柄姿态矩阵 4x4
    pub r: [f32; 16],

    /// 左摇杆
    pub leftJS: [f32; 2],

    /// 左扳机
    pub leftTrig: f32,

    /// 左 Grip 键
    pub leftGrip: f32,

    /// 左拇指（布尔值）
    pub LThU: bool,

    /// 左扳机（布尔值）
    pub LTr: bool,

    /// 左 Grip 键（布尔值）
    pub LG: bool,

    /// X 键
    pub X: bool,

    /// Y 键
    pub Y: bool,

    /// 右摇杆
    pub rightJS: [f32; 2],

    /// 右扳机
    pub rightTrig: f32,

    /// 右 Grip 键
    pub rightGrip: f32,

    /// 右拇指（布尔值）
    pub RThU: bool,

    /// 右扳机（布尔值）
    pub RTr: bool,

    /// 右 Grip 键（布尔值）
    pub RG: bool,

    /// A 键
    pub A: bool,

    /// B 键
    pub B: bool,

}



impl Default for VRState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VRState::default())
  }
}

impl rosidl_runtime_rs::Message for VRState {
  type RmwMsg = super::msg::rmw::VRState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        eyePose: msg.eyePose,
        l: msg.l,
        r: msg.r,
        leftJS: msg.leftJS,
        leftTrig: msg.leftTrig,
        leftGrip: msg.leftGrip,
        LThU: msg.LThU,
        LTr: msg.LTr,
        LG: msg.LG,
        X: msg.X,
        Y: msg.Y,
        rightJS: msg.rightJS,
        rightTrig: msg.rightTrig,
        rightGrip: msg.rightGrip,
        RThU: msg.RThU,
        RTr: msg.RTr,
        RG: msg.RG,
        A: msg.A,
        B: msg.B,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        eyePose: msg.eyePose,
        l: msg.l,
        r: msg.r,
        leftJS: msg.leftJS,
      leftTrig: msg.leftTrig,
      leftGrip: msg.leftGrip,
      LThU: msg.LThU,
      LTr: msg.LTr,
      LG: msg.LG,
      X: msg.X,
      Y: msg.Y,
        rightJS: msg.rightJS,
      rightTrig: msg.rightTrig,
      rightGrip: msg.rightGrip,
      RThU: msg.RThU,
      RTr: msg.RTr,
      RG: msg.RG,
      A: msg.A,
      B: msg.B,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      eyePose: msg.eyePose,
      l: msg.l,
      r: msg.r,
      leftJS: msg.leftJS,
      leftTrig: msg.leftTrig,
      leftGrip: msg.leftGrip,
      LThU: msg.LThU,
      LTr: msg.LTr,
      LG: msg.LG,
      X: msg.X,
      Y: msg.Y,
      rightJS: msg.rightJS,
      rightTrig: msg.rightTrig,
      rightGrip: msg.rightGrip,
      RThU: msg.RThU,
      RTr: msg.RTr,
      RG: msg.RG,
      A: msg.A,
      B: msg.B,
    }
  }
}


