# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_msgs:msg/TeleopMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeleopMsg(type):
    """Metaclass of message 'TeleopMsg'."""

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
            module = import_type_support('teleop_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'teleop_msgs.msg.TeleopMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__teleop_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__teleop_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__teleop_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__teleop_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__teleop_msg

            from controller_msgs.msg import JointCmd
            if JointCmd.__class__._TYPE_SUPPORT is None:
                JointCmd.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from teleop_msgs.msg import KeyPoint
            if KeyPoint.__class__._TYPE_SUPPORT is None:
                KeyPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TeleopMsg(metaclass=Metaclass_TeleopMsg):
    """Message class 'TeleopMsg'."""

    __slots__ = [
        '_header',
        '_world',
        '_anchors',
        '_joint_cmd',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'world': 'geometry_msgs/Pose',
        'anchors': 'sequence<teleop_msgs/KeyPoint>',
        'joint_cmd': 'controller_msgs/JointCmd',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['teleop_msgs', 'msg'], 'KeyPoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['controller_msgs', 'msg'], 'JointCmd'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.world = kwargs.get('world', Pose())
        self.anchors = kwargs.get('anchors', [])
        from controller_msgs.msg import JointCmd
        self.joint_cmd = kwargs.get('joint_cmd', JointCmd())

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
        if self.header != other.header:
            return False
        if self.world != other.world:
            return False
        if self.anchors != other.anchors:
            return False
        if self.joint_cmd != other.joint_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def world(self):
        """Message field 'world'."""
        return self._world

    @world.setter
    def world(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'world' field must be a sub message of type 'Pose'"
        self._world = value

    @builtins.property
    def anchors(self):
        """Message field 'anchors'."""
        return self._anchors

    @anchors.setter
    def anchors(self, value):
        if __debug__:
            from teleop_msgs.msg import KeyPoint
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
                 all(isinstance(v, KeyPoint) for v in value) and
                 True), \
                "The 'anchors' field must be a set or sequence and each value of type 'KeyPoint'"
        self._anchors = value

    @builtins.property
    def joint_cmd(self):
        """Message field 'joint_cmd'."""
        return self._joint_cmd

    @joint_cmd.setter
    def joint_cmd(self, value):
        if __debug__:
            from controller_msgs.msg import JointCmd
            assert \
                isinstance(value, JointCmd), \
                "The 'joint_cmd' field must be a sub message of type 'JointCmd'"
        self._joint_cmd = value
