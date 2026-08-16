
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_Goal() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_Goal__init(msg: *mut Test_Goal) -> bool;
    fn actionlib__action__Test_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_Goal>, size: usize) -> bool;
    fn actionlib__action__Test_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_Goal>);
    fn actionlib__action__Test_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_Goal>) -> bool;
}

// Corresponds to actionlib__action__Test_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: i32,

}



impl Default for Test_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_Goal__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_Goal() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_Result() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_Result__init(msg: *mut Test_Result) -> bool;
    fn actionlib__action__Test_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_Result>, size: usize) -> bool;
    fn actionlib__action__Test_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_Result>);
    fn actionlib__action__Test_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_Result>) -> bool;
}

// Corresponds to actionlib__action__Test_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for Test_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_Result__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_Result where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_Result() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_Feedback__init(msg: *mut Test_Feedback) -> bool;
    fn actionlib__action__Test_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_Feedback>, size: usize) -> bool;
    fn actionlib__action__Test_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_Feedback>);
    fn actionlib__action__Test_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_Feedback>) -> bool;
}

// Corresponds to actionlib__action__Test_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: i32,

}



impl Default for Test_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_Feedback__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_Feedback() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_FeedbackMessage__init(msg: *mut Test_FeedbackMessage) -> bool;
    fn actionlib__action__Test_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_FeedbackMessage>, size: usize) -> bool;
    fn actionlib__action__Test_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_FeedbackMessage>);
    fn actionlib__action__Test_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_FeedbackMessage>) -> bool;
}

// Corresponds to actionlib__action__Test_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Test_Feedback,

}



impl Default for Test_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_FeedbackMessage() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_Goal() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_Goal__init(msg: *mut TestRequest_Goal) -> bool;
    fn actionlib__action__TestRequest_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Goal>, size: usize) -> bool;
    fn actionlib__action__TestRequest_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Goal>);
    fn actionlib__action__TestRequest_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Goal>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub terminate_status: i32,

    /// If true, ignores requests to cancel
    pub ignore_cancel: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_text: rosidl_runtime_rs::String,

    /// Desired value for the_result in the Result
    pub the_result: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_simple_client: bool,

    /// Delays accepting the goal by this amount of time
    pub delay_accept: builtin_interfaces::msg::rmw::Duration,

    /// Delays terminating for this amount of time
    pub delay_terminate: builtin_interfaces::msg::rmw::Duration,

    /// Pauses the status messages for this amount of time
    pub pause_status: builtin_interfaces::msg::rmw::Duration,

}

impl TestRequest_Goal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TERMINATE_SUCCESS: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TERMINATE_ABORTED: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TERMINATE_REJECTED: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TERMINATE_LOSE: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TERMINATE_DROP: i32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TERMINATE_EXCEPTION: i32 = 5;

}


impl Default for TestRequest_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_Goal__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_Goal() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_Result() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_Result__init(msg: *mut TestRequest_Result) -> bool;
    fn actionlib__action__TestRequest_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Result>, size: usize) -> bool;
    fn actionlib__action__TestRequest_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Result>);
    fn actionlib__action__TestRequest_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Result>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub the_result: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_simple_server: bool,

}



impl Default for TestRequest_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_Result__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_Result where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_Result() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_Feedback__init(msg: *mut TestRequest_Feedback) -> bool;
    fn actionlib__action__TestRequest_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Feedback>, size: usize) -> bool;
    fn actionlib__action__TestRequest_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Feedback>);
    fn actionlib__action__TestRequest_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_Feedback>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TestRequest_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_Feedback__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_Feedback() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_FeedbackMessage__init(msg: *mut TestRequest_FeedbackMessage) -> bool;
    fn actionlib__action__TestRequest_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_FeedbackMessage>, size: usize) -> bool;
    fn actionlib__action__TestRequest_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_FeedbackMessage>);
    fn actionlib__action__TestRequest_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_FeedbackMessage>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::TestRequest_Feedback,

}



impl Default for TestRequest_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_FeedbackMessage() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_Goal() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_Goal__init(msg: *mut TwoInts_Goal) -> bool;
    fn actionlib__action__TwoInts_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Goal>, size: usize) -> bool;
    fn actionlib__action__TwoInts_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Goal>);
    fn actionlib__action__TwoInts_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Goal>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,

}



impl Default for TwoInts_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_Goal__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_Goal() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_Result() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_Result__init(msg: *mut TwoInts_Result) -> bool;
    fn actionlib__action__TwoInts_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Result>, size: usize) -> bool;
    fn actionlib__action__TwoInts_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Result>);
    fn actionlib__action__TwoInts_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Result>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i64,

}



impl Default for TwoInts_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_Result__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_Result where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_Result() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_Feedback__init(msg: *mut TwoInts_Feedback) -> bool;
    fn actionlib__action__TwoInts_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Feedback>, size: usize) -> bool;
    fn actionlib__action__TwoInts_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Feedback>);
    fn actionlib__action__TwoInts_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_Feedback>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for TwoInts_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_Feedback__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_Feedback() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_FeedbackMessage__init(msg: *mut TwoInts_FeedbackMessage) -> bool;
    fn actionlib__action__TwoInts_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_FeedbackMessage>, size: usize) -> bool;
    fn actionlib__action__TwoInts_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_FeedbackMessage>);
    fn actionlib__action__TwoInts_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_FeedbackMessage>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::TwoInts_Feedback,

}



impl Default for TwoInts_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_FeedbackMessage() }
  }
}




#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_SendGoal_Request__init(msg: *mut Test_SendGoal_Request) -> bool;
    fn actionlib__action__Test_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_SendGoal_Request>, size: usize) -> bool;
    fn actionlib__action__Test_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_SendGoal_Request>);
    fn actionlib__action__Test_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_SendGoal_Request>) -> bool;
}

// Corresponds to actionlib__action__Test_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Test_Goal,

}



impl Default for Test_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_SendGoal_Request() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_SendGoal_Response__init(msg: *mut Test_SendGoal_Response) -> bool;
    fn actionlib__action__Test_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_SendGoal_Response>, size: usize) -> bool;
    fn actionlib__action__Test_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_SendGoal_Response>);
    fn actionlib__action__Test_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_SendGoal_Response>) -> bool;
}

// Corresponds to actionlib__action__Test_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Test_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_SendGoal_Response() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_GetResult_Request__init(msg: *mut Test_GetResult_Request) -> bool;
    fn actionlib__action__Test_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_GetResult_Request>, size: usize) -> bool;
    fn actionlib__action__Test_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_GetResult_Request>);
    fn actionlib__action__Test_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_GetResult_Request>) -> bool;
}

// Corresponds to actionlib__action__Test_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Test_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_GetResult_Request() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__Test_GetResult_Response__init(msg: *mut Test_GetResult_Response) -> bool;
    fn actionlib__action__Test_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test_GetResult_Response>, size: usize) -> bool;
    fn actionlib__action__Test_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test_GetResult_Response>);
    fn actionlib__action__Test_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Test_GetResult_Response>) -> bool;
}

// Corresponds to actionlib__action__Test_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Test_Result,

}



impl Default for Test_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__Test_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__Test_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__Test_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/Test_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__Test_GetResult_Response() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_SendGoal_Request__init(msg: *mut TestRequest_SendGoal_Request) -> bool;
    fn actionlib__action__TestRequest_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Request>, size: usize) -> bool;
    fn actionlib__action__TestRequest_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Request>);
    fn actionlib__action__TestRequest_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Request>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::TestRequest_Goal,

}



impl Default for TestRequest_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_SendGoal_Request() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_SendGoal_Response__init(msg: *mut TestRequest_SendGoal_Response) -> bool;
    fn actionlib__action__TestRequest_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Response>, size: usize) -> bool;
    fn actionlib__action__TestRequest_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Response>);
    fn actionlib__action__TestRequest_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_SendGoal_Response>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for TestRequest_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_SendGoal_Response() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_GetResult_Request__init(msg: *mut TestRequest_GetResult_Request) -> bool;
    fn actionlib__action__TestRequest_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_GetResult_Request>, size: usize) -> bool;
    fn actionlib__action__TestRequest_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_GetResult_Request>);
    fn actionlib__action__TestRequest_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_GetResult_Request>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for TestRequest_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_GetResult_Request() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TestRequest_GetResult_Response__init(msg: *mut TestRequest_GetResult_Response) -> bool;
    fn actionlib__action__TestRequest_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_GetResult_Response>, size: usize) -> bool;
    fn actionlib__action__TestRequest_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TestRequest_GetResult_Response>);
    fn actionlib__action__TestRequest_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TestRequest_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TestRequest_GetResult_Response>) -> bool;
}

// Corresponds to actionlib__action__TestRequest_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TestRequest_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::TestRequest_Result,

}



impl Default for TestRequest_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TestRequest_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TestRequest_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TestRequest_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TestRequest_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TestRequest_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TestRequest_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TestRequest_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TestRequest_GetResult_Response() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_SendGoal_Request__init(msg: *mut TwoInts_SendGoal_Request) -> bool;
    fn actionlib__action__TwoInts_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Request>, size: usize) -> bool;
    fn actionlib__action__TwoInts_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Request>);
    fn actionlib__action__TwoInts_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Request>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::TwoInts_Goal,

}



impl Default for TwoInts_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_SendGoal_Request() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_SendGoal_Response__init(msg: *mut TwoInts_SendGoal_Response) -> bool;
    fn actionlib__action__TwoInts_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Response>, size: usize) -> bool;
    fn actionlib__action__TwoInts_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Response>);
    fn actionlib__action__TwoInts_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_SendGoal_Response>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for TwoInts_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_SendGoal_Response() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_GetResult_Request__init(msg: *mut TwoInts_GetResult_Request) -> bool;
    fn actionlib__action__TwoInts_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_GetResult_Request>, size: usize) -> bool;
    fn actionlib__action__TwoInts_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_GetResult_Request>);
    fn actionlib__action__TwoInts_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_GetResult_Request>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for TwoInts_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_GetResult_Request() }
  }
}


#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "actionlib__rosidl_generator_c")]
extern "C" {
    fn actionlib__action__TwoInts_GetResult_Response__init(msg: *mut TwoInts_GetResult_Response) -> bool;
    fn actionlib__action__TwoInts_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_GetResult_Response>, size: usize) -> bool;
    fn actionlib__action__TwoInts_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwoInts_GetResult_Response>);
    fn actionlib__action__TwoInts_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwoInts_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TwoInts_GetResult_Response>) -> bool;
}

// Corresponds to actionlib__action__TwoInts_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwoInts_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::TwoInts_Result,

}



impl Default for TwoInts_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib__action__TwoInts_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to actionlib__action__TwoInts_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwoInts_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib__action__TwoInts_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwoInts_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwoInts_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib/action/TwoInts_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib__action__TwoInts_GetResult_Response() }
  }
}






#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__Test_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to actionlib__action__Test_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Test_SendGoal;

impl rosidl_runtime_rs::Service for Test_SendGoal {
    type Request = Test_SendGoal_Request;
    type Response = Test_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__Test_SendGoal() }
    }
}




#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__Test_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to actionlib__action__Test_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Test_GetResult;

impl rosidl_runtime_rs::Service for Test_GetResult {
    type Request = Test_GetResult_Request;
    type Response = Test_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__Test_GetResult() }
    }
}




#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TestRequest_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to actionlib__action__TestRequest_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct TestRequest_SendGoal;

impl rosidl_runtime_rs::Service for TestRequest_SendGoal {
    type Request = TestRequest_SendGoal_Request;
    type Response = TestRequest_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TestRequest_SendGoal() }
    }
}




#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TestRequest_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to actionlib__action__TestRequest_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct TestRequest_GetResult;

impl rosidl_runtime_rs::Service for TestRequest_GetResult {
    type Request = TestRequest_GetResult_Request;
    type Response = TestRequest_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TestRequest_GetResult() }
    }
}




#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TwoInts_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to actionlib__action__TwoInts_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct TwoInts_SendGoal;

impl rosidl_runtime_rs::Service for TwoInts_SendGoal {
    type Request = TwoInts_SendGoal_Request;
    type Response = TwoInts_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TwoInts_SendGoal() }
    }
}




#[link(name = "actionlib__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TwoInts_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to actionlib__action__TwoInts_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct TwoInts_GetResult;

impl rosidl_runtime_rs::Service for TwoInts_GetResult {
    type Request = TwoInts_GetResult_Request;
    type Response = TwoInts_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__actionlib__action__TwoInts_GetResult() }
    }
}


