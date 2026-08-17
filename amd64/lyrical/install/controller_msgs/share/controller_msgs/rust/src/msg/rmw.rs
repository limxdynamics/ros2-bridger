#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "controller_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__IMUData() -> *const std::ffi::c_void;
}

#[link(name = "controller_msgs__rosidl_generator_c")]
extern "C" {
    fn controller_msgs__msg__IMUData__init(msg: *mut IMUData) -> bool;
    fn controller_msgs__msg__IMUData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUData>, size: usize) -> bool;
    fn controller_msgs__msg__IMUData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUData>);
    fn controller_msgs__msg__IMUData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUData>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUData>) -> bool;
}

// Corresponds to controller_msgs__msg__IMUData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imustamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub euler: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat: [f64; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro: [f64; 3],

}



impl Default for IMUData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !controller_msgs__msg__IMUData__init(&mut msg as *mut _) {
        panic!("Call to controller_msgs__msg__IMUData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__IMUData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__IMUData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__IMUData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUData where Self: Sized {
  const TYPE_NAME: &'static str = "controller_msgs/msg/IMUData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__IMUData() }
  }
}


#[link(name = "controller_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointCmd() -> *const std::ffi::c_void;
}

#[link(name = "controller_msgs__rosidl_generator_c")]
extern "C" {
    fn controller_msgs__msg__JointCmd__init(msg: *mut JointCmd) -> bool;
    fn controller_msgs__msg__JointCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCmd>, size: usize) -> bool;
    fn controller_msgs__msg__JointCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCmd>);
    fn controller_msgs__msg__JointCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCmd>) -> bool;
}

// Corresponds to controller_msgs__msg__JointCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,

}



impl Default for JointCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !controller_msgs__msg__JointCmd__init(&mut msg as *mut _) {
        panic!("Call to controller_msgs__msg__JointCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCmd where Self: Sized {
  const TYPE_NAME: &'static str = "controller_msgs/msg/JointCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointCmd() }
  }
}


#[link(name = "controller_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointCmdLimx() -> *const std::ffi::c_void;
}

#[link(name = "controller_msgs__rosidl_generator_c")]
extern "C" {
    fn controller_msgs__msg__JointCmdLimx__init(msg: *mut JointCmdLimx) -> bool;
    fn controller_msgs__msg__JointCmdLimx__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCmdLimx>, size: usize) -> bool;
    fn controller_msgs__msg__JointCmdLimx__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCmdLimx>);
    fn controller_msgs__msg__JointCmdLimx__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCmdLimx>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCmdLimx>) -> bool;
}

// Corresponds to controller_msgs__msg__JointCmdLimx
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCmdLimx {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parallel_solver_mode: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for JointCmdLimx {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !controller_msgs__msg__JointCmdLimx__init(&mut msg as *mut _) {
        panic!("Call to controller_msgs__msg__JointCmdLimx__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCmdLimx {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmdLimx__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmdLimx__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmdLimx__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCmdLimx {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCmdLimx where Self: Sized {
  const TYPE_NAME: &'static str = "controller_msgs/msg/JointCmdLimx";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointCmdLimx() }
  }
}


#[link(name = "controller_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointCmdNew() -> *const std::ffi::c_void;
}

#[link(name = "controller_msgs__rosidl_generator_c")]
extern "C" {
    fn controller_msgs__msg__JointCmdNew__init(msg: *mut JointCmdNew) -> bool;
    fn controller_msgs__msg__JointCmdNew__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCmdNew>, size: usize) -> bool;
    fn controller_msgs__msg__JointCmdNew__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCmdNew>);
    fn controller_msgs__msg__JointCmdNew__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCmdNew>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCmdNew>) -> bool;
}

// Corresponds to controller_msgs__msg__JointCmdNew
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCmdNew {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parallel_solve_required: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for JointCmdNew {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !controller_msgs__msg__JointCmdNew__init(&mut msg as *mut _) {
        panic!("Call to controller_msgs__msg__JointCmdNew__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCmdNew {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmdNew__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmdNew__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointCmdNew__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCmdNew {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCmdNew where Self: Sized {
  const TYPE_NAME: &'static str = "controller_msgs/msg/JointCmdNew";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointCmdNew() }
  }
}


#[link(name = "controller_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointState() -> *const std::ffi::c_void;
}

#[link(name = "controller_msgs__rosidl_generator_c")]
extern "C" {
    fn controller_msgs__msg__JointState__init(msg: *mut JointState) -> bool;
    fn controller_msgs__msg__JointState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointState>, size: usize) -> bool;
    fn controller_msgs__msg__JointState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointState>);
    fn controller_msgs__msg__JointState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointState>, out_seq: *mut rosidl_runtime_rs::Sequence<JointState>) -> bool;
}

// Corresponds to controller_msgs__msg__JointState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vd: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub na: u32,

}



impl Default for JointState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !controller_msgs__msg__JointState__init(&mut msg as *mut _) {
        panic!("Call to controller_msgs__msg__JointState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { controller_msgs__msg__JointState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointState where Self: Sized {
  const TYPE_NAME: &'static str = "controller_msgs/msg/JointState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__controller_msgs__msg__JointState() }
  }
}


