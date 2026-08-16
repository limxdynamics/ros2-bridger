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


// Corresponds to teleop_msgs__msg__TeleopIntentFrame
/// 遥操作意图帧。输入汇聚层每组装出一个操作者帧，发布至多一条本消息。
/// 承载「操作者想做什么」，不承载任何控制决策。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopIntentFrame {
    /// stamp 为帧组装时刻；seq 为帧序号，供接收方检测丢帧。
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schema_version: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u8,

    /// 参与本帧合成的全部输入源，按 1 << SOURCE_* 置位
    pub source_mask: u32,

    /// targets 中位姿所在参考系的名称
    pub reference_frame: std::string::String,

    /// 当参考系本身是运行时位姿（例如随头部偏航的参考系）时给出其位姿。
    /// 参考系为静态具名坐标系时填单位位姿。
    pub reference_pose: geometry_msgs::msg::Pose,

    /// 本帧的跟踪目标。目标缺席即表示该肢体本帧无输入。
    pub targets: Vec<super::msg::TeleopTarget>,

    /// 原始输入是否有效。纯动捕帧没有手柄输入时为 false。
    pub raw_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw: super::msg::TeleopRawInput,

    /// 操作者侧选项：是否选择了「控头」。
    /// 来源可能是 VR 应用内的选择，也可能是兼容服务设置，不属于设备原始输入。
    pub head_control_selected: bool,

    /// 全身重定向结果是否有效。是否真正下发由接收方决定。
    pub retarget_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub retarget_joints: controller_msgs::msg::JointCmd,

}

impl TeleopIntentFrame {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SCHEMA_VERSION: u16 = 1;

    /// 本帧的主输入源
    pub const SOURCE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_VR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_MOCAP: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_GLOVE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SOURCE_FUSED: u8 = 4;

}


impl Default for TeleopIntentFrame {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopIntentFrame::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopIntentFrame {
  type RmwMsg = super::msg::rmw::TeleopIntentFrame;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        schema_version: msg.schema_version,
        source: msg.source,
        source_mask: msg.source_mask,
        reference_frame: msg.reference_frame.as_str().into(),
        reference_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.reference_pose)).into_owned(),
        targets: msg.targets
          .into_iter()
          .map(|elem| super::msg::TeleopTarget::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        raw_valid: msg.raw_valid,
        raw: super::msg::TeleopRawInput::into_rmw_message(std::borrow::Cow::Owned(msg.raw)).into_owned(),
        head_control_selected: msg.head_control_selected,
        retarget_valid: msg.retarget_valid,
        retarget_joints: controller_msgs::msg::JointCmd::into_rmw_message(std::borrow::Cow::Owned(msg.retarget_joints)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      schema_version: msg.schema_version,
      source: msg.source,
      source_mask: msg.source_mask,
        reference_frame: msg.reference_frame.as_str().into(),
        reference_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reference_pose)).into_owned(),
        targets: msg.targets
          .iter()
          .map(|elem| super::msg::TeleopTarget::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      raw_valid: msg.raw_valid,
        raw: super::msg::TeleopRawInput::into_rmw_message(std::borrow::Cow::Borrowed(&msg.raw)).into_owned(),
      head_control_selected: msg.head_control_selected,
      retarget_valid: msg.retarget_valid,
        retarget_joints: controller_msgs::msg::JointCmd::into_rmw_message(std::borrow::Cow::Borrowed(&msg.retarget_joints)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      schema_version: msg.schema_version,
      source: msg.source,
      source_mask: msg.source_mask,
      reference_frame: msg.reference_frame.to_string(),
      reference_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.reference_pose),
      targets: msg.targets
          .into_iter()
          .map(super::msg::TeleopTarget::from_rmw_message)
          .collect(),
      raw_valid: msg.raw_valid,
      raw: super::msg::TeleopRawInput::from_rmw_message(msg.raw),
      head_control_selected: msg.head_control_selected,
      retarget_valid: msg.retarget_valid,
      retarget_joints: controller_msgs::msg::JointCmd::from_rmw_message(msg.retarget_joints),
    }
  }
}


// Corresponds to teleop_msgs__msg__TeleopLimbState
/// 会话中单个肢体的决策状态。
/// 作为 TeleopSessionState.limbs 的元素使用。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopLimbState {
    /// 肢体名。与 TeleopTarget.name 取值一致。
    pub name: std::string::String,

    /// 该肢体本周期是否处于跟随
    pub following: bool,

    /// 该侧末端是否允许无极开合。
    /// 门控由发布方负责，扳机行程到开合程度的映射由接收方负责。
    pub ee_closure_enabled: bool,

    /// 该侧末端当前手势索引。
    /// 循环切换与持久化由发布方负责，下发对应手势由接收方负责。
    pub ee_gesture_index: u8,

}



impl Default for TeleopLimbState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopLimbState::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopLimbState {
  type RmwMsg = super::msg::rmw::TeleopLimbState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        following: msg.following,
        ee_closure_enabled: msg.ee_closure_enabled,
        ee_gesture_index: msg.ee_gesture_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      following: msg.following,
      ee_closure_enabled: msg.ee_closure_enabled,
      ee_gesture_index: msg.ee_gesture_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      following: msg.following,
      ee_closure_enabled: msg.ee_closure_enabled,
      ee_gesture_index: msg.ee_gesture_index,
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


// Corresponds to teleop_msgs__msg__TeleopRawInput
/// 操作者控制器的原始输入量。
/// 发送方不解释任何按键含义，组合键语义一律由接收方解释。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopRawInput {
    /// 模拟量，范围 0.0 ~ 1.0
    pub left_trigger: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_trigger: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_grip: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_grip: f32,

    /// 摇杆，[x, y]，范围 -1.0 ~ 1.0
    pub left_stick: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_stick: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: u32,

    /// 哪些按键位本帧有效。设备不提供的按键，对应位为 0。
    /// 接收方不得把「设备未提供」当成「按键未按下」。
    pub buttons_valid: u32,

}

impl TeleopRawInput {
    /// 按键位掩码。预留高位，新增按键不需要改本消息。
    pub const BTN_LEFT_X: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BTN_LEFT_Y: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BTN_RIGHT_A: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BTN_RIGHT_B: u32 = 8;

    /// 左摇杆按下
    pub const BTN_LEFT_STICK: u32 = 16;

    /// 右摇杆按下
    pub const BTN_RIGHT_STICK: u32 = 32;

    /// 左 Grip 的布尔态
    pub const BTN_LEFT_GRIP: u32 = 64;

    /// 右 Grip 的布尔态
    pub const BTN_RIGHT_GRIP: u32 = 128;

    /// 左扳机的布尔态
    pub const BTN_LEFT_TRIGGER: u32 = 256;

    /// 右扳机的布尔态
    pub const BTN_RIGHT_TRIGGER: u32 = 512;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BTN_LEFT_THUMBREST: u32 = 1024;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BTN_RIGHT_THUMBREST: u32 = 2048;

}


impl Default for TeleopRawInput {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopRawInput::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopRawInput {
  type RmwMsg = super::msg::rmw::TeleopRawInput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_trigger: msg.left_trigger,
        right_trigger: msg.right_trigger,
        left_grip: msg.left_grip,
        right_grip: msg.right_grip,
        left_stick: msg.left_stick,
        right_stick: msg.right_stick,
        buttons: msg.buttons,
        buttons_valid: msg.buttons_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_trigger: msg.left_trigger,
      right_trigger: msg.right_trigger,
      left_grip: msg.left_grip,
      right_grip: msg.right_grip,
        left_stick: msg.left_stick,
        right_stick: msg.right_stick,
      buttons: msg.buttons,
      buttons_valid: msg.buttons_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_trigger: msg.left_trigger,
      right_trigger: msg.right_trigger,
      left_grip: msg.left_grip,
      right_grip: msg.right_grip,
      left_stick: msg.left_stick,
      right_stick: msg.right_stick,
      buttons: msg.buttons,
      buttons_valid: msg.buttons_valid,
    }
  }
}


// Corresponds to teleop_msgs__msg__TeleopSessionState
/// 遥操作会话状态。由决策层单向广播，全系统唯一权威，其余模块只读。
/// 接收方不得维护本状态的副本，也不得自行修改跟随状态。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopSessionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schema_version: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_state: u8,

    /// 当前遥操作模式名，由产品定义。用字符串以便新增模式不改本消息。
    pub mode: std::string::String,

    /// 逐肢体决策。肢体缺席时按不跟随处理。
    pub limbs: Vec<super::msg::TeleopLimbState>,

    /// 重锚计数，单调递增。数值发生变化即要求接收方用当前输入与末端反馈
    /// 重新建立锚点。用计数而非布尔边沿，因为收发双方不同频，边沿会丢。
    pub reanchor_epoch: u32,

    /// 是否仍需要接收方计算全身重定向。纯性能提示，接收方可以忽略。
    pub retarget_required: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_code: u8,

    /// 故障详情，供日志与诊断使用，不参与控制判定
    pub fault_detail: std::string::String,

}

impl TeleopSessionState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SCHEMA_VERSION: u16 = 1;

    /// 未进入遥操作
    pub const SESSION_INACTIVE: u8 = 0;

    /// 遥操作激活
    pub const SESSION_ACTIVE: u8 = 1;

    /// 回初始姿态流程中，接收方应暂停输出目标
    pub const SESSION_HOMING: u8 = 2;

    /// 故障
    pub const SESSION_FAULT: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAULT_NONE: u8 = 0;

    /// 上游输入超时
    pub const FAULT_INPUT_TIMEOUT: u8 = 1;

    /// 目标跳变被拦截
    pub const FAULT_TARGET_JUMP: u8 = 2;

    /// 下发失败
    pub const FAULT_OUTPUT: u8 = 3;

    /// 决策层内部错误
    pub const FAULT_INTERNAL: u8 = 4;

}


impl Default for TeleopSessionState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopSessionState::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopSessionState {
  type RmwMsg = super::msg::rmw::TeleopSessionState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        schema_version: msg.schema_version,
        session_state: msg.session_state,
        mode: msg.mode.as_str().into(),
        limbs: msg.limbs
          .into_iter()
          .map(|elem| super::msg::TeleopLimbState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        reanchor_epoch: msg.reanchor_epoch,
        retarget_required: msg.retarget_required,
        fault_code: msg.fault_code,
        fault_detail: msg.fault_detail.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      schema_version: msg.schema_version,
      session_state: msg.session_state,
        mode: msg.mode.as_str().into(),
        limbs: msg.limbs
          .iter()
          .map(|elem| super::msg::TeleopLimbState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      reanchor_epoch: msg.reanchor_epoch,
      retarget_required: msg.retarget_required,
      fault_code: msg.fault_code,
        fault_detail: msg.fault_detail.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      schema_version: msg.schema_version,
      session_state: msg.session_state,
      mode: msg.mode.to_string(),
      limbs: msg.limbs
          .into_iter()
          .map(super::msg::TeleopLimbState::from_rmw_message)
          .collect(),
      reanchor_epoch: msg.reanchor_epoch,
      retarget_required: msg.retarget_required,
      fault_code: msg.fault_code,
      fault_detail: msg.fault_detail.to_string(),
    }
  }
}


// Corresponds to teleop_msgs__msg__TeleopTarget
/// 遥操作中的单个跟踪目标（末端、头、躯干、足等）。
/// 作为 TeleopIntentFrame.targets 的元素使用。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopTarget {
    /// 目标名。约定值：left_hand / right_hand / head / torso / base /
    /// left_foot / right_foot / left_wrist / right_wrist。
    /// 新增跟踪目标只需约定新名字，不需要改本消息。
    pub name: std::string::String,

    /// 目标位姿。参考系由 TeleopIntentFrame.reference_frame 指定。
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub validity: u8,

    /// 该目标数据的采集时刻。与帧组装时刻（header.stamp）可能不同，
    /// 接收方据此判断单个目标的新鲜度。
    pub source_stamp: builtin_interfaces::msg::Time,

}

impl TeleopTarget {
    /// 数据可信度。接收方据此决定跟随、降级还是忽略。
    /// 非法，接收方必须忽略
    pub const VALIDITY_INVALID: u8 = 0;

    /// 新鲜可用
    pub const VALIDITY_VALID: u8 = 1;

    /// 有数据但已超期
    pub const VALIDITY_STALE: u8 = 2;

    /// 由外推得到，非实测
    pub const VALIDITY_EXTRAPOLATED: u8 = 3;

}


impl Default for TeleopTarget {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TeleopTarget::default())
  }
}

impl rosidl_runtime_rs::Message for TeleopTarget {
  type RmwMsg = super::msg::rmw::TeleopTarget;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        validity: msg.validity,
        source_stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.source_stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      validity: msg.validity,
        source_stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.source_stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      validity: msg.validity,
      source_stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.source_stamp),
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


