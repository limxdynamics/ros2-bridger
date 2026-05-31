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


