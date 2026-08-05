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


