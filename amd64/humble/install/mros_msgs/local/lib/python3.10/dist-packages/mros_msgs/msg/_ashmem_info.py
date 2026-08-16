# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mros_msgs:msg/AshmemInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AshmemInfo(type):
    """Metaclass of message 'AshmemInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'mros_msgs.msg.AshmemInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ashmem_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ashmem_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ashmem_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ashmem_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ashmem_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AshmemInfo(metaclass=Metaclass_AshmemInfo):
    """Message class 'AshmemInfo'."""

    __slots__ = [
        '_topic_id',
        '_topic_name',
        '_message_type',
        '_message_md5sum',
        '_message_definition',
        '_shm_seed',
        '_shm_size',
        '_msg_size',
        '_identity',
    ]

    _fields_and_field_types = {
        'topic_id': 'uint32',
        'topic_name': 'string',
        'message_type': 'string',
        'message_md5sum': 'string',
        'message_definition': 'string',
        'shm_seed': 'int32',
        'shm_size': 'int32',
        'msg_size': 'int32',
        'identity': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topic_id = kwargs.get('topic_id', int())
        self.topic_name = kwargs.get('topic_name', str())
        self.message_type = kwargs.get('message_type', str())
        self.message_md5sum = kwargs.get('message_md5sum', str())
        self.message_definition = kwargs.get('message_definition', str())
        self.shm_seed = kwargs.get('shm_seed', int())
        self.shm_size = kwargs.get('shm_size', int())
        self.msg_size = kwargs.get('msg_size', int())
        self.identity = kwargs.get('identity', [])

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
        if self.message_md5sum != other.message_md5sum:
            return False
        if self.message_definition != other.message_definition:
            return False
        if self.shm_seed != other.shm_seed:
            return False
        if self.shm_size != other.shm_size:
            return False
        if self.msg_size != other.msg_size:
            return False
        if self.identity != other.identity:
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
    def message_md5sum(self):
        """Message field 'message_md5sum'."""
        return self._message_md5sum

    @message_md5sum.setter
    def message_md5sum(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_md5sum' field must be of type 'str'"
        self._message_md5sum = value

    @builtins.property
    def message_definition(self):
        """Message field 'message_definition'."""
        return self._message_definition

    @message_definition.setter
    def message_definition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_definition' field must be of type 'str'"
        self._message_definition = value

    @builtins.property
    def shm_seed(self):
        """Message field 'shm_seed'."""
        return self._shm_seed

    @shm_seed.setter
    def shm_seed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shm_seed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'shm_seed' field must be an integer in [-2147483648, 2147483647]"
        self._shm_seed = value

    @builtins.property
    def shm_size(self):
        """Message field 'shm_size'."""
        return self._shm_size

    @shm_size.setter
    def shm_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shm_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'shm_size' field must be an integer in [-2147483648, 2147483647]"
        self._shm_size = value

    @builtins.property
    def msg_size(self):
        """Message field 'msg_size'."""
        return self._msg_size

    @msg_size.setter
    def msg_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'msg_size' field must be an integer in [-2147483648, 2147483647]"
        self._msg_size = value

    @builtins.property
    def identity(self):
        """Message field 'identity'."""
        return self._identity

    @identity.setter
    def identity(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'identity' field must be a set or sequence and each value of type 'str'"
        self._identity = value
