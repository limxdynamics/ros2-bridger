#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__AshmemInfo() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__msg__AshmemInfo__init(msg: *mut AshmemInfo) -> bool;
    fn mros_msgs__msg__AshmemInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AshmemInfo>, size: usize) -> bool;
    fn mros_msgs__msg__AshmemInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AshmemInfo>);
    fn mros_msgs__msg__AshmemInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AshmemInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<AshmemInfo>) -> bool;
}

// Corresponds to mros_msgs__msg__AshmemInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AshmemInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_md5sum: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_definition: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shm_seed: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shm_size: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub msg_size: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub identity: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for AshmemInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__msg__AshmemInfo__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__msg__AshmemInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AshmemInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__AshmemInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__AshmemInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__AshmemInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AshmemInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AshmemInfo where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/msg/AshmemInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__AshmemInfo() }
  }
}


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__Log() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__msg__Log__init(msg: *mut Log) -> bool;
    fn mros_msgs__msg__Log__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Log>, size: usize) -> bool;
    fn mros_msgs__msg__Log__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Log>);
    fn mros_msgs__msg__Log__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Log>, out_seq: *mut rosidl_runtime_rs::Sequence<Log>) -> bool;
}

// Corresponds to mros_msgs__msg__Log
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Severity level constants

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Log {
    /// Fields
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: u8,

    /// name of the node
    pub name: rosidl_runtime_rs::String,

    /// message
    pub msg: rosidl_runtime_rs::String,

    /// file the message came from
    pub file: rosidl_runtime_rs::String,

    /// function the message came from
    pub function: rosidl_runtime_rs::String,

    /// line the message came from
    pub line: u32,

    /// topic names that the node publishes
    pub topics: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Process id
    pub pid: u64,

    /// Thread id
    pub tid: u64,

}

impl Log {
    /// debug level
    pub const DEBUG: u8 = 1;

    /// general level
    pub const INFO: u8 = 2;

    /// warning level
    pub const WARN: u8 = 4;

    /// error level
    pub const ERROR: u8 = 8;

    /// fatal/critical level
    pub const FATAL: u8 = 16;

}


impl Default for Log {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__msg__Log__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__msg__Log__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Log {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__Log__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__Log__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__Log__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Log {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Log where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/msg/Log";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__Log() }
  }
}


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__NodeInfo() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__msg__NodeInfo__init(msg: *mut NodeInfo) -> bool;
    fn mros_msgs__msg__NodeInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeInfo>, size: usize) -> bool;
    fn mros_msgs__msg__NodeInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeInfo>);
    fn mros_msgs__msg__NodeInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeInfo>) -> bool;
}

// Corresponds to mros_msgs__msg__NodeInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: rosidl_runtime_rs::String,

}



impl Default for NodeInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__msg__NodeInfo__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__msg__NodeInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__NodeInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__NodeInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__NodeInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeInfo where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/msg/NodeInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__NodeInfo() }
  }
}


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__SyncTime() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__msg__SyncTime__init(msg: *mut SyncTime) -> bool;
    fn mros_msgs__msg__SyncTime__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SyncTime>, size: usize) -> bool;
    fn mros_msgs__msg__SyncTime__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SyncTime>);
    fn mros_msgs__msg__SyncTime__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SyncTime>, out_seq: *mut rosidl_runtime_rs::Sequence<SyncTime>) -> bool;
}

// Corresponds to mros_msgs__msg__SyncTime
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SyncTime {
    /// milliseconds
    pub tick: u32,

    /// dds time
    pub data: builtin_interfaces::msg::rmw::Time,

}



impl Default for SyncTime {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__msg__SyncTime__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__msg__SyncTime__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SyncTime {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__SyncTime__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__SyncTime__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__SyncTime__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SyncTime {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SyncTime where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/msg/SyncTime";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__SyncTime() }
  }
}


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__TopicInfo() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__msg__TopicInfo__init(msg: *mut TopicInfo) -> bool;
    fn mros_msgs__msg__TopicInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TopicInfo>, size: usize) -> bool;
    fn mros_msgs__msg__TopicInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TopicInfo>);
    fn mros_msgs__msg__TopicInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TopicInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<TopicInfo>) -> bool;
}

// Corresponds to mros_msgs__msg__TopicInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// special topic_ids

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TopicInfo {
    /// The endpoint ID for this topic
    pub topic_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_type: rosidl_runtime_rs::String,

    /// MD5 checksum for this message type
    pub md5sum: rosidl_runtime_rs::String,

    /// size of the buffer message must fit in
    pub buffer_size: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub negotiated: bool,

    /// node name
    pub node: rosidl_runtime_rs::String,

    /// definition
    pub definition: rosidl_runtime_rs::String,

    /// latch
    pub latch: bool,

    /// reliable
    pub reliable: bool,

    /// queue_size
    pub queue_size: i32,

    /// enabled
    pub enabled: i32,

}

impl TopicInfo {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_PUBLISHER: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_SUBSCRIBER: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_SERVICE_SERVER: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_SERVICE_CLIENT: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_MROSTOPIC_REQUEST: u32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_REMOVE_PUBLISHER: u32 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_REMOVE_SUBSCRIBER: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_REMOVE_SERVICE_SERVER: u32 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_REMOVE_SERVICE_CLIENT: u32 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_MROSSERVICE_REQUEST: u32 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_LOG: u32 = 14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_TIME: u32 = 15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_NEGOTIATED: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_SESSION_ID: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_ASHMEM_INFO: u32 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ID_DIAG: u32 = 19;

}


impl Default for TopicInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__msg__TopicInfo__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__msg__TopicInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TopicInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__TopicInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__TopicInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__TopicInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TopicInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TopicInfo where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/msg/TopicInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__TopicInfo() }
  }
}


#[link(name = "mros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__TopicStatistics() -> *const std::ffi::c_void;
}

#[link(name = "mros_msgs__rosidl_generator_c")]
extern "C" {
    fn mros_msgs__msg__TopicStatistics__init(msg: *mut TopicStatistics) -> bool;
    fn mros_msgs__msg__TopicStatistics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TopicStatistics>, size: usize) -> bool;
    fn mros_msgs__msg__TopicStatistics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TopicStatistics>);
    fn mros_msgs__msg__TopicStatistics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TopicStatistics>, out_seq: *mut rosidl_runtime_rs::Sequence<TopicStatistics>) -> bool;
}

// Corresponds to mros_msgs__msg__TopicStatistics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TopicStatistics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub subscribers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TopicInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub publishers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TopicInfo>,

}



impl Default for TopicStatistics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mros_msgs__msg__TopicStatistics__init(&mut msg as *mut _) {
        panic!("Call to mros_msgs__msg__TopicStatistics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TopicStatistics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__TopicStatistics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__TopicStatistics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mros_msgs__msg__TopicStatistics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TopicStatistics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TopicStatistics where Self: Sized {
  const TYPE_NAME: &'static str = "mros_msgs/msg/TopicStatistics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mros_msgs__msg__TopicStatistics() }
  }
}


