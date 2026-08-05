#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__arm_status() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__msg__arm_status__init(msg: *mut arm_status) -> bool;
    fn limx_arm_msgs__msg__arm_status__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<arm_status>, size: usize) -> bool;
    fn limx_arm_msgs__msg__arm_status__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<arm_status>);
    fn limx_arm_msgs__msg__arm_status__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<arm_status>, out_seq: *mut rosidl_runtime_rs::Sequence<arm_status>) -> bool;
}

// Corresponds to limx_arm_msgs__msg__arm_status
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct arm_status {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_joints: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_joints: rosidl_runtime_rs::Sequence<f64>,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__msg__arm_status__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__msg__arm_status__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for arm_status {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__arm_status__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__arm_status__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__arm_status__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for arm_status {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for arm_status where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/msg/arm_status";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__arm_status() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__JointData() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__msg__JointData__init(msg: *mut JointData) -> bool;
    fn limx_arm_msgs__msg__JointData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointData>, size: usize) -> bool;
    fn limx_arm_msgs__msg__JointData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointData>);
    fn limx_arm_msgs__msg__JointData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointData>, out_seq: *mut rosidl_runtime_rs::Sequence<JointData>) -> bool;
}

// Corresponds to limx_arm_msgs__msg__JointData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviceid: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__msg__JointData__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__msg__JointData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointData where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/msg/JointData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__JointData() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__JointSet() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__msg__JointSet__init(msg: *mut JointSet) -> bool;
    fn limx_arm_msgs__msg__JointSet__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointSet>, size: usize) -> bool;
    fn limx_arm_msgs__msg__JointSet__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointSet>);
    fn limx_arm_msgs__msg__JointSet__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointSet>, out_seq: *mut rosidl_runtime_rs::Sequence<JointSet>) -> bool;
}

// Corresponds to limx_arm_msgs__msg__JointSet
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointSet {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviceid: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__msg__JointSet__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__msg__JointSet__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointSet {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointSet__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointSet__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointSet__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointSet {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointSet where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/msg/JointSet";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__JointSet() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__JointStatus() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__msg__JointStatus__init(msg: *mut JointStatus) -> bool;
    fn limx_arm_msgs__msg__JointStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointStatus>, size: usize) -> bool;
    fn limx_arm_msgs__msg__JointStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointStatus>);
    fn limx_arm_msgs__msg__JointStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<JointStatus>) -> bool;
}

// Corresponds to limx_arm_msgs__msg__JointStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deviceid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_time: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: [i32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: [rosidl_runtime_rs::String; 6],


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
    pub log_path: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__msg__JointStatus__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__msg__JointStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__JointStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointStatus where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/msg/JointStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__JointStatus() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__ServoCmd() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__msg__ServoCmd__init(msg: *mut ServoCmd) -> bool;
    fn limx_arm_msgs__msg__ServoCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoCmd>, size: usize) -> bool;
    fn limx_arm_msgs__msg__ServoCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoCmd>);
    fn limx_arm_msgs__msg__ServoCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoCmd>) -> bool;
}

// Corresponds to limx_arm_msgs__msg__ServoCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoCmd {
    /// servoL SetHeadPos
    pub functionName: rosidl_runtime_rs::String,

    /// #servoL
    pub left_arm_pos: [f32; 7],

    /// #servoL
    pub right_arm_pos: [f32; 7],

}



impl Default for ServoCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__msg__ServoCmd__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__msg__ServoCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__ServoCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__ServoCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__msg__ServoCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoCmd where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/msg/ServoCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__msg__ServoCmd() }
  }
}


