#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__DA_motion_Request() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__DA_motion_Request__init(msg: *mut DA_motion_Request) -> bool;
    fn limx_arm_msgs__srv__DA_motion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DA_motion_Request>, size: usize) -> bool;
    fn limx_arm_msgs__srv__DA_motion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DA_motion_Request>);
    fn limx_arm_msgs__srv__DA_motion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DA_motion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DA_motion_Request>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__DA_motion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DA_motion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub functionName: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_joints: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_joints: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub headPos: [f32; 2],

}



impl Default for DA_motion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__DA_motion_Request__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__DA_motion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DA_motion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__DA_motion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__DA_motion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__DA_motion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DA_motion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DA_motion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/DA_motion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__DA_motion_Request() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__DA_motion_Response() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__DA_motion_Response__init(msg: *mut DA_motion_Response) -> bool;
    fn limx_arm_msgs__srv__DA_motion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DA_motion_Response>, size: usize) -> bool;
    fn limx_arm_msgs__srv__DA_motion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DA_motion_Response>);
    fn limx_arm_msgs__srv__DA_motion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DA_motion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DA_motion_Response>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__DA_motion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DA_motion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for DA_motion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__DA_motion_Response__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__DA_motion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DA_motion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__DA_motion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__DA_motion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__DA_motion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DA_motion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DA_motion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/DA_motion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__DA_motion_Response() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__desire_pos_Request() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__desire_pos_Request__init(msg: *mut desire_pos_Request) -> bool;
    fn limx_arm_msgs__srv__desire_pos_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<desire_pos_Request>, size: usize) -> bool;
    fn limx_arm_msgs__srv__desire_pos_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<desire_pos_Request>);
    fn limx_arm_msgs__srv__desire_pos_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<desire_pos_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<desire_pos_Request>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__desire_pos_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct desire_pos_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub taskNum: i32,

    /// deg/m
    pub desire_pos: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub co_control: bool,

}



impl Default for desire_pos_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__desire_pos_Request__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__desire_pos_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for desire_pos_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__desire_pos_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__desire_pos_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__desire_pos_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for desire_pos_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for desire_pos_Request where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/desire_pos_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__desire_pos_Request() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__desire_pos_Response() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__desire_pos_Response__init(msg: *mut desire_pos_Response) -> bool;
    fn limx_arm_msgs__srv__desire_pos_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<desire_pos_Response>, size: usize) -> bool;
    fn limx_arm_msgs__srv__desire_pos_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<desire_pos_Response>);
    fn limx_arm_msgs__srv__desire_pos_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<desire_pos_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<desire_pos_Response>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__desire_pos_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct desire_pos_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: bool,

}



impl Default for desire_pos_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__desire_pos_Response__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__desire_pos_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for desire_pos_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__desire_pos_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__desire_pos_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__desire_pos_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for desire_pos_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for desire_pos_Response where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/desire_pos_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__desire_pos_Response() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__gripper_Request() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__gripper_Request__init(msg: *mut gripper_Request) -> bool;
    fn limx_arm_msgs__srv__gripper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<gripper_Request>, size: usize) -> bool;
    fn limx_arm_msgs__srv__gripper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<gripper_Request>);
    fn limx_arm_msgs__srv__gripper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<gripper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<gripper_Request>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__gripper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct gripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub initial: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dis: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub force: i32,

}



impl Default for gripper_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__gripper_Request__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__gripper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for gripper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__gripper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__gripper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__gripper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for gripper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for gripper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/gripper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__gripper_Request() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__gripper_Response() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__gripper_Response__init(msg: *mut gripper_Response) -> bool;
    fn limx_arm_msgs__srv__gripper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<gripper_Response>, size: usize) -> bool;
    fn limx_arm_msgs__srv__gripper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<gripper_Response>);
    fn limx_arm_msgs__srv__gripper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<gripper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<gripper_Response>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__gripper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct gripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for gripper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__gripper_Response__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__gripper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for gripper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__gripper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__gripper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__gripper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for gripper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for gripper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/gripper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__gripper_Response() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__motion_Request() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__motion_Request__init(msg: *mut motion_Request) -> bool;
    fn limx_arm_msgs__srv__motion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<motion_Request>, size: usize) -> bool;
    fn limx_arm_msgs__srv__motion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<motion_Request>);
    fn limx_arm_msgs__srv__motion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<motion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<motion_Request>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__motion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct motion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_arm_pos: [f32; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_time: f32,

}



impl Default for motion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__motion_Request__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__motion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for motion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__motion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__motion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__motion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for motion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for motion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/motion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__motion_Request() }
  }
}


#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__motion_Response() -> *const std::ffi::c_void;
}

#[link(name = "limx_arm_msgs__rosidl_generator_c")]
extern "C" {
    fn limx_arm_msgs__srv__motion_Response__init(msg: *mut motion_Response) -> bool;
    fn limx_arm_msgs__srv__motion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<motion_Response>, size: usize) -> bool;
    fn limx_arm_msgs__srv__motion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<motion_Response>);
    fn limx_arm_msgs__srv__motion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<motion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<motion_Response>) -> bool;
}

// Corresponds to limx_arm_msgs__srv__motion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct motion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i32,

}



impl Default for motion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !limx_arm_msgs__srv__motion_Response__init(&mut msg as *mut _) {
        panic!("Call to limx_arm_msgs__srv__motion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for motion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__motion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__motion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { limx_arm_msgs__srv__motion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for motion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for motion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "limx_arm_msgs/srv/motion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__limx_arm_msgs__srv__motion_Response() }
  }
}






#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__DA_motion() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__DA_motion
#[allow(missing_docs, non_camel_case_types)]
pub struct DA_motion;

impl rosidl_runtime_rs::Service for DA_motion {
    type Request = DA_motion_Request;
    type Response = DA_motion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__DA_motion() }
    }
}




#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__desire_pos() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__desire_pos
#[allow(missing_docs, non_camel_case_types)]
pub struct desire_pos;

impl rosidl_runtime_rs::Service for desire_pos {
    type Request = desire_pos_Request;
    type Response = desire_pos_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__desire_pos() }
    }
}




#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__gripper() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__gripper
#[allow(missing_docs, non_camel_case_types)]
pub struct gripper;

impl rosidl_runtime_rs::Service for gripper {
    type Request = gripper_Request;
    type Response = gripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__gripper() }
    }
}




#[link(name = "limx_arm_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__motion() -> *const std::ffi::c_void;
}

// Corresponds to limx_arm_msgs__srv__motion
#[allow(missing_docs, non_camel_case_types)]
pub struct motion;

impl rosidl_runtime_rs::Service for motion {
    type Request = motion_Request;
    type Response = motion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__limx_arm_msgs__srv__motion() }
    }
}


