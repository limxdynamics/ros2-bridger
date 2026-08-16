# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mros_msgs:msg/TopicInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TopicInfo(type):
    """Metaclass of message 'TopicInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ID_PUBLISHER': 0,
        'ID_SUBSCRIBER': 1,
        'ID_SERVICE_SERVER': 2,
        'ID_SERVICE_CLIENT': 4,
        'ID_MROSTOPIC_REQUEST': 6,
        'ID_REMOVE_PUBLISHER': 7,
        'ID_REMOVE_SUBSCRIBER': 8,
        'ID_REMOVE_SERVICE_SERVER': 9,
        'ID_REMOVE_SERVICE_CLIENT': 11,
        'ID_MROSSERVICE_REQUEST': 13,
        'ID_LOG': 14,
        'ID_TIME': 15,
        'ID_NEGOTIATED': 16,
        'ID_SESSION_ID': 17,
        'ID_ASHMEM_INFO': 18,
        'ID_DIAG': 19,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mros_msgs.msg.TopicInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__topic_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__topic_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__topic_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__topic_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__topic_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ID_PUBLISHER': cls.__constants['ID_PUBLISHER'],
            'ID_SUBSCRIBER': cls.__constants['ID_SUBSCRIBER'],
            'ID_SERVICE_SERVER': cls.__constants['ID_SERVICE_SERVER'],
            'ID_SERVICE_CLIENT': cls.__constants['ID_SERVICE_CLIENT'],
            'ID_MROSTOPIC_REQUEST': cls.__constants['ID_MROSTOPIC_REQUEST'],
            'ID_REMOVE_PUBLISHER': cls.__constants['ID_REMOVE_PUBLISHER'],
            'ID_REMOVE_SUBSCRIBER': cls.__constants['ID_REMOVE_SUBSCRIBER'],
            'ID_REMOVE_SERVICE_SERVER': cls.__constants['ID_REMOVE_SERVICE_SERVER'],
            'ID_REMOVE_SERVICE_CLIENT': cls.__constants['ID_REMOVE_SERVICE_CLIENT'],
            'ID_MROSSERVICE_REQUEST': cls.__constants['ID_MROSSERVICE_REQUEST'],
            'ID_LOG': cls.__constants['ID_LOG'],
            'ID_TIME': cls.__constants['ID_TIME'],
            'ID_NEGOTIATED': cls.__constants['ID_NEGOTIATED'],
            'ID_SESSION_ID': cls.__constants['ID_SESSION_ID'],
            'ID_ASHMEM_INFO': cls.__constants['ID_ASHMEM_INFO'],
            'ID_DIAG': cls.__constants['ID_DIAG'],
        }

    @property
    def ID_PUBLISHER(self):
        """Message constant 'ID_PUBLISHER'."""
        return Metaclass_TopicInfo.__constants['ID_PUBLISHER']

    @property
    def ID_SUBSCRIBER(self):
        """Message constant 'ID_SUBSCRIBER'."""
        return Metaclass_TopicInfo.__constants['ID_SUBSCRIBER']

    @property
    def ID_SERVICE_SERVER(self):
        """Message constant 'ID_SERVICE_SERVER'."""
        return Metaclass_TopicInfo.__constants['ID_SERVICE_SERVER']

    @property
    def ID_SERVICE_CLIENT(self):
        """Message constant 'ID_SERVICE_CLIENT'."""
        return Metaclass_TopicInfo.__constants['ID_SERVICE_CLIENT']

    @property
    def ID_MROSTOPIC_REQUEST(self):
        """Message constant 'ID_MROSTOPIC_REQUEST'."""
        return Metaclass_TopicInfo.__constants['ID_MROSTOPIC_REQUEST']

    @property
    def ID_REMOVE_PUBLISHER(self):
        """Message constant 'ID_REMOVE_PUBLISHER'."""
        return Metaclass_TopicInfo.__constants['ID_REMOVE_PUBLISHER']

    @property
    def ID_REMOVE_SUBSCRIBER(self):
        """Message constant 'ID_REMOVE_SUBSCRIBER'."""
        return Metaclass_TopicInfo.__constants['ID_REMOVE_SUBSCRIBER']

    @property
    def ID_REMOVE_SERVICE_SERVER(self):
        """Message constant 'ID_REMOVE_SERVICE_SERVER'."""
        return Metaclass_TopicInfo.__constants['ID_REMOVE_SERVICE_SERVER']

    @property
    def ID_REMOVE_SERVICE_CLIENT(self):
        """Message constant 'ID_REMOVE_SERVICE_CLIENT'."""
        return Metaclass_TopicInfo.__constants['ID_REMOVE_SERVICE_CLIENT']

    @property
    def ID_MROSSERVICE_REQUEST(self):
        """Message constant 'ID_MROSSERVICE_REQUEST'."""
        return Metaclass_TopicInfo.__constants['ID_MROSSERVICE_REQUEST']

    @property
    def ID_LOG(self):
        """Message constant 'ID_LOG'."""
        return Metaclass_TopicInfo.__constants['ID_LOG']

    @property
    def ID_TIME(self):
        """Message constant 'ID_TIME'."""
        return Metaclass_TopicInfo.__constants['ID_TIME']

    @property
    def ID_NEGOTIATED(self):
        """Message constant 'ID_NEGOTIATED'."""
        return Metaclass_TopicInfo.__constants['ID_NEGOTIATED']

    @property
    def ID_SESSION_ID(self):
        """Message constant 'ID_SESSION_ID'."""
        return Metaclass_TopicInfo.__constants['ID_SESSION_ID']

    @property
    def ID_ASHMEM_INFO(self):
        """Message constant 'ID_ASHMEM_INFO'."""
        return Metaclass_TopicInfo.__constants['ID_ASHMEM_INFO']

    @property
    def ID_DIAG(self):
        """Message constant 'ID_DIAG'."""
        return Metaclass_TopicInfo.__constants['ID_DIAG']


class TopicInfo(metaclass=Metaclass_TopicInfo):
    """
    Message class 'TopicInfo'.

    Constants:
      ID_PUBLISHER
      ID_SUBSCRIBER
      ID_SERVICE_SERVER
      ID_SERVICE_CLIENT
      ID_MROSTOPIC_REQUEST
      ID_REMOVE_PUBLISHER
      ID_REMOVE_SUBSCRIBER
      ID_REMOVE_SERVICE_SERVER
      ID_REMOVE_SERVICE_CLIENT
      ID_MROSSERVICE_REQUEST
      ID_LOG
      ID_TIME
      ID_NEGOTIATED
      ID_SESSION_ID
      ID_ASHMEM_INFO
      ID_DIAG
    """

    __slots__ = [
        '_topic_id',
        '_topic_name',
        '_message_type',
        '_md5sum',
        '_buffer_size',
        '_negotiated',
        '_node',
        '_definition',
        '_latch',
        '_reliable',
        '_queue_size',
        '_enabled',
    ]

    _fields_and_field_types = {
        'topic_id': 'uint32',
        'topic_name': 'string',
        'message_type': 'string',
        'md5sum': 'string',
        'buffer_size': 'int32',
        'negotiated': 'boolean',
        'node': 'string',
        'definition': 'string',
        'latch': 'boolean',
        'reliable': 'boolean',
        'queue_size': 'int32',
        'enabled': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topic_id = kwargs.get('topic_id', int())
        self.topic_name = kwargs.get('topic_name', str())
        self.message_type = kwargs.get('message_type', str())
        self.md5sum = kwargs.get('md5sum', str())
        self.buffer_size = kwargs.get('buffer_size', int())
        self.negotiated = kwargs.get('negotiated', bool())
        self.node = kwargs.get('node', str())
        self.definition = kwargs.get('definition', str())
        self.latch = kwargs.get('latch', bool())
        self.reliable = kwargs.get('reliable', bool())
        self.queue_size = kwargs.get('queue_size', int())
        self.enabled = kwargs.get('enabled', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.topic_id != other.topic_id:
            return False
        if self.topic_name != other.topic_name:
            return False
        if self.message_type != other.message_type:
            return False
        if self.md5sum != other.md5sum:
            return False
        if self.buffer_size != other.buffer_size:
            return False
        if self.negotiated != other.negotiated:
            return False
        if self.node != other.node:
            return False
        if self.definition != other.definition:
            return False
        if self.latch != other.latch:
            return False
        if self.reliable != other.reliable:
            return False
        if self.queue_size != other.queue_size:
            return False
        if self.enabled != other.enabled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def topic_id(self):
        """Message field 'topic_id'."""
        return self._topic_id

    @topic_id.setter
    def topic_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'topic_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'topic_id' field must be an unsigned integer in [0, 4294967295]"
        self._topic_id = value

    @builtins.property
    def topic_name(self):
        """Message field 'topic_name'."""
        return self._topic_name

    @topic_name.setter
    def topic_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic_name' field must be of type 'str'"
        self._topic_name = value

    @builtins.property
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_type' field must be of type 'str'"
        self._message_type = value

    @builtins.property
    def md5sum(self):
        """Message field 'md5sum'."""
        return self._md5sum

    @md5sum.setter
    def md5sum(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'md5sum' field must be of type 'str'"
        self._md5sum = value

    @builtins.property
    def buffer_size(self):
        """Message field 'buffer_size'."""
        return self._buffer_size

    @buffer_size.setter
    def buffer_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buffer_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'buffer_size' field must be an integer in [-2147483648, 2147483647]"
        self._buffer_size = value

    @builtins.property
    def negotiated(self):
        """Message field 'negotiated'."""
        return self._negotiated

    @negotiated.setter
    def negotiated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'negotiated' field must be of type 'bool'"
        self._negotiated = value

    @builtins.property
    def node(self):
        """Message field 'node'."""
        return self._node

    @node.setter
    def node(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node' field must be of type 'str'"
        self._node = value

    @builtins.property
    def definition(self):
        """Message field 'definition'."""
        return self._definition

    @definition.setter
    def definition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'definition' field must be of type 'str'"
        self._definition = value

    @builtins.property
    def latch(self):
        """Message field 'latch'."""
        return self._latch

    @latch.setter
    def latch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'latch' field must be of type 'bool'"
        self._latch = value

    @builtins.property
    def reliable(self):
        """Message field 'reliable'."""
        return self._reliable

    @reliable.setter
    def reliable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reliable' field must be of type 'bool'"
        self._reliable = value

    @builtins.property
    def queue_size(self):
        """Message field 'queue_size'."""
        return self._queue_size

    @queue_size.setter
    def queue_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'queue_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'queue_size' field must be an integer in [-2147483648, 2147483647]"
        self._queue_size = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enabled' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'enabled' field must be an integer in [-2147483648, 2147483647]"
        self._enabled = value
