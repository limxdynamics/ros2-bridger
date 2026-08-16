# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_msgs:msg/TeleopIntentFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeleopIntentFrame(type):
    """Metaclass of message 'TeleopIntentFrame'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SCHEMA_VERSION': 1,
        'SOURCE_UNKNOWN': 0,
        'SOURCE_VR': 1,
        'SOURCE_MOCAP': 2,
        'SOURCE_GLOVE': 3,
        'SOURCE_FUSED': 4,
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
                'teleop_msgs.msg.TeleopIntentFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__teleop_intent_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__teleop_intent_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__teleop_intent_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__teleop_intent_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__teleop_intent_frame

            from controller_msgs.msg import JointCmd
            if JointCmd.__class__._TYPE_SUPPORT is None:
                JointCmd.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from teleop_msgs.msg import TeleopRawInput
            if TeleopRawInput.__class__._TYPE_SUPPORT is None:
                TeleopRawInput.__class__.__import_type_support__()

            from teleop_msgs.msg import TeleopTarget
            if TeleopTarget.__class__._TYPE_SUPPORT is None:
                TeleopTarget.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SCHEMA_VERSION': cls.__constants['SCHEMA_VERSION'],
            'SOURCE_UNKNOWN': cls.__constants['SOURCE_UNKNOWN'],
            'SOURCE_VR': cls.__constants['SOURCE_VR'],
            'SOURCE_MOCAP': cls.__constants['SOURCE_MOCAP'],
            'SOURCE_GLOVE': cls.__constants['SOURCE_GLOVE'],
            'SOURCE_FUSED': cls.__constants['SOURCE_FUSED'],
        }

    @property
    def SCHEMA_VERSION(self):
        """Message constant 'SCHEMA_VERSION'."""
        return Metaclass_TeleopIntentFrame.__constants['SCHEMA_VERSION']

    @property
    def SOURCE_UNKNOWN(self):
        """Message constant 'SOURCE_UNKNOWN'."""
        return Metaclass_TeleopIntentFrame.__constants['SOURCE_UNKNOWN']

    @property
    def SOURCE_VR(self):
        """Message constant 'SOURCE_VR'."""
        return Metaclass_TeleopIntentFrame.__constants['SOURCE_VR']

    @property
    def SOURCE_MOCAP(self):
        """Message constant 'SOURCE_MOCAP'."""
        return Metaclass_TeleopIntentFrame.__constants['SOURCE_MOCAP']

    @property
    def SOURCE_GLOVE(self):
        """Message constant 'SOURCE_GLOVE'."""
        return Metaclass_TeleopIntentFrame.__constants['SOURCE_GLOVE']

    @property
    def SOURCE_FUSED(self):
        """Message constant 'SOURCE_FUSED'."""
        return Metaclass_TeleopIntentFrame.__constants['SOURCE_FUSED']


class TeleopIntentFrame(metaclass=Metaclass_TeleopIntentFrame):
    """
    Message class 'TeleopIntentFrame'.

    Constants:
      SCHEMA_VERSION
      SOURCE_UNKNOWN
      SOURCE_VR
      SOURCE_MOCAP
      SOURCE_GLOVE
      SOURCE_FUSED
    """

    __slots__ = [
        '_header',
        '_schema_version',
        '_source',
        '_source_mask',
        '_reference_frame',
        '_reference_pose',
        '_targets',
        '_raw_valid',
        '_raw',
        '_head_control_selected',
        '_retarget_valid',
        '_retarget_joints',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'schema_version': 'uint16',
        'source': 'uint8',
        'source_mask': 'uint32',
        'reference_frame': 'string',
        'reference_pose': 'geometry_msgs/Pose',
        'targets': 'sequence<teleop_msgs/TeleopTarget>',
        'raw_valid': 'boolean',
        'raw': 'teleop_msgs/TeleopRawInput',
        'head_control_selected': 'boolean',
        'retarget_valid': 'boolean',
        'retarget_joints': 'controller_msgs/JointCmd',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['teleop_msgs', 'msg'], 'TeleopTarget')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['teleop_msgs', 'msg'], 'TeleopRawInput'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['controller_msgs', 'msg'], 'JointCmd'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.schema_version = kwargs.get('schema_version', int())
        self.source = kwargs.get('source', int())
        self.source_mask = kwargs.get('source_mask', int())
        self.reference_frame = kwargs.get('reference_frame', str())
        from geometry_msgs.msg import Pose
        self.reference_pose = kwargs.get('reference_pose', Pose())
        self.targets = kwargs.get('targets', [])
        self.raw_valid = kwargs.get('raw_valid', bool())
        from teleop_msgs.msg import TeleopRawInput
        self.raw = kwargs.get('raw', TeleopRawInput())
        self.head_control_selected = kwargs.get('head_control_selected', bool())
        self.retarget_valid = kwargs.get('retarget_valid', bool())
        from controller_msgs.msg import JointCmd
        self.retarget_joints = kwargs.get('retarget_joints', JointCmd())

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
        if self.schema_version != other.schema_version:
            return False
        if self.source != other.source:
            return False
        if self.source_mask != other.source_mask:
            return False
        if self.reference_frame != other.reference_frame:
            return False
        if self.reference_pose != other.reference_pose:
            return False
        if self.targets != other.targets:
            return False
        if self.raw_valid != other.raw_valid:
            return False
        if self.raw != other.raw:
            return False
        if self.head_control_selected != other.head_control_selected:
            return False
        if self.retarget_valid != other.retarget_valid:
            return False
        if self.retarget_joints != other.retarget_joints:
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
    def schema_version(self):
        """Message field 'schema_version'."""
        return self._schema_version

    @schema_version.setter
    def schema_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'schema_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'schema_version' field must be an unsigned integer in [0, 65535]"
        self._schema_version = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property
    def source_mask(self):
        """Message field 'source_mask'."""
        return self._source_mask

    @source_mask.setter
    def source_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'source_mask' field must be an unsigned integer in [0, 4294967295]"
        self._source_mask = value

    @builtins.property
    def reference_frame(self):
        """Message field 'reference_frame'."""
        return self._reference_frame

    @reference_frame.setter
    def reference_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reference_frame' field must be of type 'str'"
        self._reference_frame = value

    @builtins.property
    def reference_pose(self):
        """Message field 'reference_pose'."""
        return self._reference_pose

    @reference_pose.setter
    def reference_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'reference_pose' field must be a sub message of type 'Pose'"
        self._reference_pose = value

    @builtins.property
    def targets(self):
        """Message field 'targets'."""
        return self._targets

    @targets.setter
    def targets(self, value):
        if __debug__:
            from teleop_msgs.msg import TeleopTarget
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
                 all(isinstance(v, TeleopTarget) for v in value) and
                 True), \
                "The 'targets' field must be a set or sequence and each value of type 'TeleopTarget'"
        self._targets = value

    @builtins.property
    def raw_valid(self):
        """Message field 'raw_valid'."""
        return self._raw_valid

    @raw_valid.setter
    def raw_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'raw_valid' field must be of type 'bool'"
        self._raw_valid = value

    @builtins.property
    def raw(self):
        """Message field 'raw'."""
        return self._raw

    @raw.setter
    def raw(self, value):
        if __debug__:
            from teleop_msgs.msg import TeleopRawInput
            assert \
                isinstance(value, TeleopRawInput), \
                "The 'raw' field must be a sub message of type 'TeleopRawInput'"
        self._raw = value

    @builtins.property
    def head_control_selected(self):
        """Message field 'head_control_selected'."""
        return self._head_control_selected

    @head_control_selected.setter
    def head_control_selected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'head_control_selected' field must be of type 'bool'"
        self._head_control_selected = value

    @builtins.property
    def retarget_valid(self):
        """Message field 'retarget_valid'."""
        return self._retarget_valid

    @retarget_valid.setter
    def retarget_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'retarget_valid' field must be of type 'bool'"
        self._retarget_valid = value

    @builtins.property
    def retarget_joints(self):
        """Message field 'retarget_joints'."""
        return self._retarget_joints

    @retarget_joints.setter
    def retarget_joints(self, value):
        if __debug__:
            from controller_msgs.msg import JointCmd
            assert \
                isinstance(value, JointCmd), \
                "The 'retarget_joints' field must be a sub message of type 'JointCmd'"
        self._retarget_joints = value
