#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mros_msgs__msg__AshmemInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AshmemInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_md5sum: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_definition: std::string::String,


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
    pub identity: Vec<std::string::String>,

}



impl Default for AshmemInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AshmemInfo::default())
  }
}

impl rosidl_runtime_rs::Message for AshmemInfo {
  type RmwMsg = super::msg::rmw::AshmemInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        topic_id: msg.topic_id,
        topic_name: msg.topic_name.as_str().into(),
        message_type: msg.message_type.as_str().into(),
        message_md5sum: msg.message_md5sum.as_str().into(),
        message_definition: msg.message_definition.as_str().into(),
        shm_seed: msg.shm_seed,
        shm_size: msg.shm_size,
        msg_size: msg.msg_size,
        identity: msg.identity
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      topic_id: msg.topic_id,
        topic_name: msg.topic_name.as_str().into(),
        message_type: msg.message_type.as_str().into(),
        message_md5sum: msg.message_md5sum.as_str().into(),
        message_definition: msg.message_definition.as_str().into(),
      shm_seed: msg.shm_seed,
      shm_size: msg.shm_size,
      msg_size: msg.msg_size,
        identity: msg.identity
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      topic_id: msg.topic_id,
      topic_name: msg.topic_name.to_string(),
      message_type: msg.message_type.to_string(),
      message_md5sum: msg.message_md5sum.to_string(),
      message_definition: msg.message_definition.to_string(),
      shm_seed: msg.shm_seed,
      shm_size: msg.shm_size,
      msg_size: msg.msg_size,
      identity: msg.identity
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to mros_msgs__msg__Log
/// Severity level constants

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Log {
    /// Fields
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: u8,

    /// name of the node
    pub name: std::string::String,

    /// message
    pub msg: std::string::String,

    /// file the message came from
    pub file: std::string::String,

    /// function the message came from
    pub function: std::string::String,

    /// line the message came from
    pub line: u32,

    /// topic names that the node publishes
    pub topics: Vec<std::string::String>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Log::default())
  }
}

impl rosidl_runtime_rs::Message for Log {
  type RmwMsg = super::msg::rmw::Log;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        level: msg.level,
        name: msg.name.as_str().into(),
        msg: msg.msg.as_str().into(),
        file: msg.file.as_str().into(),
        function: msg.function.as_str().into(),
        line: msg.line,
        topics: msg.topics
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        pid: msg.pid,
        tid: msg.tid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      level: msg.level,
        name: msg.name.as_str().into(),
        msg: msg.msg.as_str().into(),
        file: msg.file.as_str().into(),
        function: msg.function.as_str().into(),
      line: msg.line,
        topics: msg.topics
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      pid: msg.pid,
      tid: msg.tid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      level: msg.level,
      name: msg.name.to_string(),
      msg: msg.msg.to_string(),
      file: msg.file.to_string(),
      function: msg.function.to_string(),
      line: msg.line,
      topics: msg.topics
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      pid: msg.pid,
      tid: msg.tid,
    }
  }
}


// Corresponds to mros_msgs__msg__NodeInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: std::string::String,

}



impl Default for NodeInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeInfo::default())
  }
}

impl rosidl_runtime_rs::Message for NodeInfo {
  type RmwMsg = super::msg::rmw::NodeInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_name: msg.node_name.to_string(),
    }
  }
}


// Corresponds to mros_msgs__msg__SyncTime

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SyncTime {
    /// milliseconds
    pub tick: u32,

    /// dds time
    pub data: builtin_interfaces::msg::Time,

}



impl Default for SyncTime {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SyncTime::default())
  }
}

impl rosidl_runtime_rs::Message for SyncTime {
  type RmwMsg = super::msg::rmw::SyncTime;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tick: msg.tick,
        data: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tick: msg.tick,
        data: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tick: msg.tick,
      data: builtin_interfaces::msg::Time::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to mros_msgs__msg__TopicInfo
/// special topic_ids

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TopicInfo {
    /// The endpoint ID for this topic
    pub topic_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_type: std::string::String,

    /// MD5 checksum for this message type
    pub md5sum: std::string::String,

    /// size of the buffer message must fit in
    pub buffer_size: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub negotiated: bool,

    /// node name
    pub node: std::string::String,

    /// definition
    pub definition: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TopicInfo::default())
  }
}

impl rosidl_runtime_rs::Message for TopicInfo {
  type RmwMsg = super::msg::rmw::TopicInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        topic_id: msg.topic_id,
        topic_name: msg.topic_name.as_str().into(),
        message_type: msg.message_type.as_str().into(),
        md5sum: msg.md5sum.as_str().into(),
        buffer_size: msg.buffer_size,
        negotiated: msg.negotiated,
        node: msg.node.as_str().into(),
        definition: msg.definition.as_str().into(),
        latch: msg.latch,
        reliable: msg.reliable,
        queue_size: msg.queue_size,
        enabled: msg.enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      topic_id: msg.topic_id,
        topic_name: msg.topic_name.as_str().into(),
        message_type: msg.message_type.as_str().into(),
        md5sum: msg.md5sum.as_str().into(),
      buffer_size: msg.buffer_size,
      negotiated: msg.negotiated,
        node: msg.node.as_str().into(),
        definition: msg.definition.as_str().into(),
      latch: msg.latch,
      reliable: msg.reliable,
      queue_size: msg.queue_size,
      enabled: msg.enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      topic_id: msg.topic_id,
      topic_name: msg.topic_name.to_string(),
      message_type: msg.message_type.to_string(),
      md5sum: msg.md5sum.to_string(),
      buffer_size: msg.buffer_size,
      negotiated: msg.negotiated,
      node: msg.node.to_string(),
      definition: msg.definition.to_string(),
      latch: msg.latch,
      reliable: msg.reliable,
      queue_size: msg.queue_size,
      enabled: msg.enabled,
    }
  }
}


// Corresponds to mros_msgs__msg__TopicStatistics

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TopicStatistics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub subscribers: Vec<super::msg::TopicInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub publishers: Vec<super::msg::TopicInfo>,

}



impl Default for TopicStatistics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TopicStatistics::default())
  }
}

impl rosidl_runtime_rs::Message for TopicStatistics {
  type RmwMsg = super::msg::rmw::TopicStatistics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node: msg.node.as_str().into(),
        subscribers: msg.subscribers
          .into_iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        publishers: msg.publishers
          .into_iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node: msg.node.as_str().into(),
        subscribers: msg.subscribers
          .iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        publishers: msg.publishers
          .iter()
          .map(|elem| super::msg::TopicInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node: msg.node.to_string(),
      subscribers: msg.subscribers
          .into_iter()
          .map(super::msg::TopicInfo::from_rmw_message)
          .collect(),
      publishers: msg.publishers
          .into_iter()
          .map(super::msg::TopicInfo::from_rmw_message)
          .collect(),
    }
  }
}


