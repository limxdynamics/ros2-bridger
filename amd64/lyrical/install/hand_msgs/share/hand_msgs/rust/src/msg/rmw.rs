#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__HandCmd() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__HandCmd__init(msg: *mut HandCmd) -> bool;
    fn hand_msgs__msg__HandCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandCmd>, size: usize) -> bool;
    fn hand_msgs__msg__HandCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandCmd>);
    fn hand_msgs__msg__HandCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<HandCmd>) -> bool;
}

// Corresponds to hand_msgs__msg__HandCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_mode: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_cmd: [super::super::msg::rmw::HandMsg; 2],

}



impl Default for HandCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__HandCmd__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__HandCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandCmd where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/HandCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__HandCmd() }
  }
}


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__HandMsg() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__HandMsg__init(msg: *mut HandMsg) -> bool;
    fn hand_msgs__msg__HandMsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandMsg>, size: usize) -> bool;
    fn hand_msgs__msg__HandMsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandMsg>);
    fn hand_msgs__msg__HandMsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandMsg>, out_seq: *mut rosidl_runtime_rs::Sequence<HandMsg>) -> bool;
}

// Corresponds to hand_msgs__msg__HandMsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for HandMsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__HandMsg__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__HandMsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandMsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandMsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandMsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandMsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandMsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandMsg where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/HandMsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__HandMsg() }
  }
}


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__HandState() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__HandState__init(msg: *mut HandState) -> bool;
    fn hand_msgs__msg__HandState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HandState>, size: usize) -> bool;
    fn hand_msgs__msg__HandState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HandState>);
    fn hand_msgs__msg__HandState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HandState>, out_seq: *mut rosidl_runtime_rs::Sequence<HandState>) -> bool;
}

// Corresponds to hand_msgs__msg__HandState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HandState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_mode: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_state: [super::super::msg::rmw::HandMsg; 2],

}



impl Default for HandState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__HandState__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__HandState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HandState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__HandState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HandState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HandState where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/HandState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__HandState() }
  }
}


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileCmd() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__TactileCmd__init(msg: *mut TactileCmd) -> bool;
    fn hand_msgs__msg__TactileCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileCmd>, size: usize) -> bool;
    fn hand_msgs__msg__TactileCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileCmd>);
    fn hand_msgs__msg__TactileCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileCmd>) -> bool;
}

// Corresponds to hand_msgs__msg__TactileCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// 触觉开关 (true=开启 false=关闭)
    pub tactile_switch: rosidl_runtime_rs::Sequence<bool>,

    /// 通道复位 (true触发, 执行时手指不可受力)
    pub channel_reset: rosidl_runtime_rs::Sequence<bool>,

    /// 参数校准 (true触发, 执行约10s内数据不可用, 手指不可受力)
    pub calibration_trigger: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for TactileCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__TactileCmd__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__TactileCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileCmd where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/TactileCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileCmd() }
  }
}


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileHandCmd() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__TactileHandCmd__init(msg: *mut TactileHandCmd) -> bool;
    fn hand_msgs__msg__TactileHandCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileHandCmd>, size: usize) -> bool;
    fn hand_msgs__msg__TactileHandCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileHandCmd>);
    fn hand_msgs__msg__TactileHandCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileHandCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileHandCmd>) -> bool;
}

// Corresponds to hand_msgs__msg__TactileHandCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileHandCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_mode: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_cmd: [super::super::msg::rmw::HandMsg; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_tactile_cmd: [super::super::msg::rmw::TactileCmd; 2],

}



impl Default for TactileHandCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__TactileHandCmd__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__TactileHandCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileHandCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileHandCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileHandCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileHandCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileHandCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileHandCmd where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/TactileHandCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileHandCmd() }
  }
}


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileHandState() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__TactileHandState__init(msg: *mut TactileHandState) -> bool;
    fn hand_msgs__msg__TactileHandState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileHandState>, size: usize) -> bool;
    fn hand_msgs__msg__TactileHandState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileHandState>);
    fn hand_msgs__msg__TactileHandState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileHandState>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileHandState>) -> bool;
}

// Corresponds to hand_msgs__msg__TactileHandState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileHandState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_mode: [u8; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_state: [super::super::msg::rmw::HandMsg; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub hand_tactile_state: [super::super::msg::rmw::TactileState; 2],

}



impl Default for TactileHandState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__TactileHandState__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__TactileHandState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileHandState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileHandState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileHandState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileHandState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileHandState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileHandState where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/TactileHandState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileHandState() }
  }
}


#[link(name = "hand_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileState() -> *const std::ffi::c_void;
}

#[link(name = "hand_msgs__rosidl_generator_c")]
extern "C" {
    fn hand_msgs__msg__TactileState__init(msg: *mut TactileState) -> bool;
    fn hand_msgs__msg__TactileState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TactileState>, size: usize) -> bool;
    fn hand_msgs__msg__TactileState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TactileState>);
    fn hand_msgs__msg__TactileState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TactileState>, out_seq: *mut rosidl_runtime_rs::Sequence<TactileState>) -> bool;
}

// Corresponds to hand_msgs__msg__TactileState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TactileState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub normal_force: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tangential_force: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub direction_angle: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub approximate_value: rosidl_runtime_rs::Sequence<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tactile_state: rosidl_runtime_rs::Sequence<u16>,

}



impl Default for TactileState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !hand_msgs__msg__TactileState__init(&mut msg as *mut _) {
        panic!("Call to hand_msgs__msg__TactileState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TactileState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { hand_msgs__msg__TactileState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TactileState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TactileState where Self: Sized {
  const TYPE_NAME: &'static str = "hand_msgs/msg/TactileState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__hand_msgs__msg__TactileState() }
  }
}


