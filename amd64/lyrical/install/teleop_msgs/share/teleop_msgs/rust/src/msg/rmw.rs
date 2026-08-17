#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__KeyPoint() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__KeyPoint__init(msg: *mut KeyPoint) -> bool;
    fn teleop_msgs__msg__KeyPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KeyPoint>, size: usize) -> bool;
    fn teleop_msgs__msg__KeyPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KeyPoint>);
    fn teleop_msgs__msg__KeyPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KeyPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<KeyPoint>) -> bool;
}

// Corresponds to teleop_msgs__msg__KeyPoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for KeyPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__KeyPoint__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__KeyPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KeyPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__KeyPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__KeyPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__KeyPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KeyPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KeyPoint where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/KeyPoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__KeyPoint() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopIntentFrame() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__TeleopIntentFrame__init(msg: *mut TeleopIntentFrame) -> bool;
    fn teleop_msgs__msg__TeleopIntentFrame__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopIntentFrame>, size: usize) -> bool;
    fn teleop_msgs__msg__TeleopIntentFrame__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopIntentFrame>);
    fn teleop_msgs__msg__TeleopIntentFrame__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopIntentFrame>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopIntentFrame>) -> bool;
}

// Corresponds to teleop_msgs__msg__TeleopIntentFrame
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 遥操作意图帧。输入汇聚层每组装出一个操作者帧，发布至多一条本消息。
/// 承载「操作者想做什么」，不承载任何控制决策。

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopIntentFrame {
    /// stamp 为帧组装时刻；seq 为帧序号，供接收方检测丢帧。
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schema_version: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u8,

    /// 参与本帧合成的全部输入源，按 1 << SOURCE_* 置位
    pub source_mask: u32,

    /// targets 中位姿所在参考系的名称
    pub reference_frame: rosidl_runtime_rs::String,

    /// 当参考系本身是运行时位姿（例如随头部偏航的参考系）时给出其位姿。
    /// 参考系为静态具名坐标系时填单位位姿。
    pub reference_pose: geometry_msgs::msg::rmw::Pose,

    /// 本帧的跟踪目标。目标缺席即表示该肢体本帧无输入。
    pub targets: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TeleopTarget>,

    /// 原始输入是否有效。纯动捕帧没有手柄输入时为 false。
    pub raw_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw: super::super::msg::rmw::TeleopRawInput,

    /// 操作者侧选项：是否选择了「控头」。
    /// 来源可能是 VR 应用内的选择，也可能是兼容服务设置，不属于设备原始输入。
    pub head_control_selected: bool,

    /// 全身重定向结果是否有效。是否真正下发由接收方决定。
    pub retarget_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub retarget_joints: controller_msgs::msg::rmw::JointCmd,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__TeleopIntentFrame__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__TeleopIntentFrame__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopIntentFrame {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopIntentFrame__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopIntentFrame__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopIntentFrame__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopIntentFrame {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopIntentFrame where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/TeleopIntentFrame";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopIntentFrame() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopLimbState() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__TeleopLimbState__init(msg: *mut TeleopLimbState) -> bool;
    fn teleop_msgs__msg__TeleopLimbState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopLimbState>, size: usize) -> bool;
    fn teleop_msgs__msg__TeleopLimbState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopLimbState>);
    fn teleop_msgs__msg__TeleopLimbState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopLimbState>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopLimbState>) -> bool;
}

// Corresponds to teleop_msgs__msg__TeleopLimbState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 会话中单个肢体的决策状态。
/// 作为 TeleopSessionState.limbs 的元素使用。

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopLimbState {
    /// 肢体名。与 TeleopTarget.name 取值一致。
    pub name: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__TeleopLimbState__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__TeleopLimbState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopLimbState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopLimbState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopLimbState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopLimbState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopLimbState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopLimbState where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/TeleopLimbState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopLimbState() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopMsg() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__TeleopMsg__init(msg: *mut TeleopMsg) -> bool;
    fn teleop_msgs__msg__TeleopMsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopMsg>, size: usize) -> bool;
    fn teleop_msgs__msg__TeleopMsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopMsg>);
    fn teleop_msgs__msg__TeleopMsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopMsg>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopMsg>) -> bool;
}

// Corresponds to teleop_msgs__msg__TeleopMsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub anchors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KeyPoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_cmd: controller_msgs::msg::rmw::JointCmd,

}



impl Default for TeleopMsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__TeleopMsg__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__TeleopMsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopMsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopMsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopMsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopMsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopMsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopMsg where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/TeleopMsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopMsg() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopRawInput() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__TeleopRawInput__init(msg: *mut TeleopRawInput) -> bool;
    fn teleop_msgs__msg__TeleopRawInput__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopRawInput>, size: usize) -> bool;
    fn teleop_msgs__msg__TeleopRawInput__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopRawInput>);
    fn teleop_msgs__msg__TeleopRawInput__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopRawInput>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopRawInput>) -> bool;
}

// Corresponds to teleop_msgs__msg__TeleopRawInput
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 操作者控制器的原始输入量。
/// 发送方不解释任何按键含义，组合键语义一律由接收方解释。

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__TeleopRawInput__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__TeleopRawInput__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopRawInput {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopRawInput__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopRawInput__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopRawInput__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopRawInput {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopRawInput where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/TeleopRawInput";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopRawInput() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopSessionState() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__TeleopSessionState__init(msg: *mut TeleopSessionState) -> bool;
    fn teleop_msgs__msg__TeleopSessionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopSessionState>, size: usize) -> bool;
    fn teleop_msgs__msg__TeleopSessionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopSessionState>);
    fn teleop_msgs__msg__TeleopSessionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopSessionState>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopSessionState>) -> bool;
}

// Corresponds to teleop_msgs__msg__TeleopSessionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 遥操作会话状态。由决策层单向广播，全系统唯一权威，其余模块只读。
/// 接收方不得维护本状态的副本，也不得自行修改跟随状态。

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopSessionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schema_version: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub session_state: u8,

    /// 当前遥操作模式名，由产品定义。用字符串以便新增模式不改本消息。
    pub mode: rosidl_runtime_rs::String,

    /// 逐肢体决策。肢体缺席时按不跟随处理。
    pub limbs: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TeleopLimbState>,

    /// 重锚计数，单调递增。数值发生变化即要求接收方用当前输入与末端反馈
    /// 重新建立锚点。用计数而非布尔边沿，因为收发双方不同频，边沿会丢。
    pub reanchor_epoch: u32,

    /// 是否仍需要接收方计算全身重定向。纯性能提示，接收方可以忽略。
    pub retarget_required: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_code: u8,

    /// 故障详情，供日志与诊断使用，不参与控制判定
    pub fault_detail: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__TeleopSessionState__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__TeleopSessionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopSessionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopSessionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopSessionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopSessionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopSessionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopSessionState where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/TeleopSessionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopSessionState() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopTarget() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__TeleopTarget__init(msg: *mut TeleopTarget) -> bool;
    fn teleop_msgs__msg__TeleopTarget__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TeleopTarget>, size: usize) -> bool;
    fn teleop_msgs__msg__TeleopTarget__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TeleopTarget>);
    fn teleop_msgs__msg__TeleopTarget__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TeleopTarget>, out_seq: *mut rosidl_runtime_rs::Sequence<TeleopTarget>) -> bool;
}

// Corresponds to teleop_msgs__msg__TeleopTarget
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 遥操作中的单个跟踪目标（末端、头、躯干、足等）。
/// 作为 TeleopIntentFrame.targets 的元素使用。

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TeleopTarget {
    /// 目标名。约定值：left_hand / right_hand / head / torso / base /
    /// left_foot / right_foot / left_wrist / right_wrist。
    /// 新增跟踪目标只需约定新名字，不需要改本消息。
    pub name: rosidl_runtime_rs::String,

    /// 目标位姿。参考系由 TeleopIntentFrame.reference_frame 指定。
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub validity: u8,

    /// 该目标数据的采集时刻。与帧组装时刻（header.stamp）可能不同，
    /// 接收方据此判断单个目标的新鲜度。
    pub source_stamp: builtin_interfaces::msg::rmw::Time,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__TeleopTarget__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__TeleopTarget__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TeleopTarget {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopTarget__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopTarget__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__TeleopTarget__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TeleopTarget {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TeleopTarget where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/TeleopTarget";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__TeleopTarget() }
  }
}


#[link(name = "teleop_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__VRState() -> *const std::ffi::c_void;
}

#[link(name = "teleop_msgs__rosidl_generator_c")]
extern "C" {
    fn teleop_msgs__msg__VRState__init(msg: *mut VRState) -> bool;
    fn teleop_msgs__msg__VRState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VRState>, size: usize) -> bool;
    fn teleop_msgs__msg__VRState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VRState>);
    fn teleop_msgs__msg__VRState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VRState>, out_seq: *mut rosidl_runtime_rs::Sequence<VRState>) -> bool;
}

// Corresponds to teleop_msgs__msg__VRState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VRState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !teleop_msgs__msg__VRState__init(&mut msg as *mut _) {
        panic!("Call to teleop_msgs__msg__VRState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VRState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__VRState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__VRState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { teleop_msgs__msg__VRState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VRState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VRState where Self: Sized {
  const TYPE_NAME: &'static str = "teleop_msgs/msg/VRState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__teleop_msgs__msg__VRState() }
  }
}


