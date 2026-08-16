# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_msgs:msg/TeleopSessionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeleopSessionState(type):
    """Metaclass of message 'TeleopSessionState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SCHEMA_VERSION': 1,
        'SESSION_INACTIVE': 0,
        'SESSION_ACTIVE': 1,
        'SESSION_HOMING': 2,
        'SESSION_FAULT': 3,
        'FAULT_NONE': 0,
        'FAULT_INPUT_TIMEOUT': 1,
        'FAULT_TARGET_JUMP': 2,
        'FAULT_OUTPUT': 3,
        'FAULT_INTERNAL': 4,
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
                'teleop_msgs.msg.TeleopSessionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__teleop_session_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__teleop_session_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__teleop_session_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__teleop_session_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__teleop_session_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from teleop_msgs.msg import TeleopLimbState
            if TeleopLimbState.__class__._TYPE_SUPPORT is None:
                TeleopLimbState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SCHEMA_VERSION': cls.__constants['SCHEMA_VERSION'],
            'SESSION_INACTIVE': cls.__constants['SESSION_INACTIVE'],
            'SESSION_ACTIVE': cls.__constants['SESSION_ACTIVE'],
            'SESSION_HOMING': cls.__constants['SESSION_HOMING'],
            'SESSION_FAULT': cls.__constants['SESSION_FAULT'],
            'FAULT_NONE': cls.__constants['FAULT_NONE'],
            'FAULT_INPUT_TIMEOUT': cls.__constants['FAULT_INPUT_TIMEOUT'],
            'FAULT_TARGET_JUMP': cls.__constants['FAULT_TARGET_JUMP'],
            'FAULT_OUTPUT': cls.__constants['FAULT_OUTPUT'],
            'FAULT_INTERNAL': cls.__constants['FAULT_INTERNAL'],
        }

    @property
    def SCHEMA_VERSION(self):
        """Message constant 'SCHEMA_VERSION'."""
        return Metaclass_TeleopSessionState.__constants['SCHEMA_VERSION']

    @property
    def SESSION_INACTIVE(self):
        """Message constant 'SESSION_INACTIVE'."""
        return Metaclass_TeleopSessionState.__constants['SESSION_INACTIVE']

    @property
    def SESSION_ACTIVE(self):
        """Message constant 'SESSION_ACTIVE'."""
        return Metaclass_TeleopSessionState.__constants['SESSION_ACTIVE']

    @property
    def SESSION_HOMING(self):
        """Message constant 'SESSION_HOMING'."""
        return Metaclass_TeleopSessionState.__constants['SESSION_HOMING']

    @property
    def SESSION_FAULT(self):
        """Message constant 'SESSION_FAULT'."""
        return Metaclass_TeleopSessionState.__constants['SESSION_FAULT']

    @property
    def FAULT_NONE(self):
        """Message constant 'FAULT_NONE'."""
        return Metaclass_TeleopSessionState.__constants['FAULT_NONE']

    @property
    def FAULT_INPUT_TIMEOUT(self):
        """Message constant 'FAULT_INPUT_TIMEOUT'."""
        return Metaclass_TeleopSessionState.__constants['FAULT_INPUT_TIMEOUT']

    @property
    def FAULT_TARGET_JUMP(self):
        """Message constant 'FAULT_TARGET_JUMP'."""
        return Metaclass_TeleopSessionState.__constants['FAULT_TARGET_JUMP']

    @property
    def FAULT_OUTPUT(self):
        """Message constant 'FAULT_OUTPUT'."""
        return Metaclass_TeleopSessionState.__constants['FAULT_OUTPUT']

    @property
    def FAULT_INTERNAL(self):
        """Message constant 'FAULT_INTERNAL'."""
        return Metaclass_TeleopSessionState.__constants['FAULT_INTERNAL']


class TeleopSessionState(metaclass=Metaclass_TeleopSessionState):
    """
    Message class 'TeleopSessionState'.

    Constants:
      SCHEMA_VERSION
      SESSION_INACTIVE
      SESSION_ACTIVE
      SESSION_HOMING
      SESSION_FAULT
      FAULT_NONE
      FAULT_INPUT_TIMEOUT
      FAULT_TARGET_JUMP
      FAULT_OUTPUT
      FAULT_INTERNAL
    """

    __slots__ = [
        '_header',
        '_schema_version',
        '_session_state',
        '_mode',
        '_limbs',
        '_reanchor_epoch',
        '_retarget_required',
        '_fault_code',
        '_fault_detail',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'schema_version': 'uint16',
        'session_state': 'uint8',
        'mode': 'string',
        'limbs': 'sequence<teleop_msgs/TeleopLimbState>',
        'reanchor_epoch': 'uint32',
        'retarget_required': 'boolean',
        'fault_code': 'uint8',
        'fault_detail': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['teleop_msgs', 'msg'], 'TeleopLimbState')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.schema_version = kwargs.get('schema_version', int())
        self.session_state = kwargs.get('session_state', int())
        self.mode = kwargs.get('mode', str())
        self.limbs = kwargs.get('limbs', [])
        self.reanchor_epoch = kwargs.get('reanchor_epoch', int())
        self.retarget_required = kwargs.get('retarget_required', bool())
        self.fault_code = kwargs.get('fault_code', int())
        self.fault_detail = kwargs.get('fault_detail', str())

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
        if self.session_state != other.session_state:
            return False
        if self.mode != other.mode:
            return False
        if self.limbs != other.limbs:
            return False
        if self.reanchor_epoch != other.reanchor_epoch:
            return False
        if self.retarget_required != other.retarget_required:
            return False
        if self.fault_code != other.fault_code:
            return False
        if self.fault_detail != other.fault_detail:
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
    def session_state(self):
        """Message field 'session_state'."""
        return self._session_state

    @session_state.setter
    def session_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'session_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'session_state' field must be an unsigned integer in [0, 255]"
        self._session_state = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def limbs(self):
        """Message field 'limbs'."""
        return self._limbs

    @limbs.setter
    def limbs(self, value):
        if __debug__:
            from teleop_msgs.msg import TeleopLimbState
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
                 all(isinstance(v, TeleopLimbState) for v in value) and
                 True), \
                "The 'limbs' field must be a set or sequence and each value of type 'TeleopLimbState'"
        self._limbs = value

    @builtins.property
    def reanchor_epoch(self):
        """Message field 'reanchor_epoch'."""
        return self._reanchor_epoch

    @reanchor_epoch.setter
    def reanchor_epoch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reanchor_epoch' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reanchor_epoch' field must be an unsigned integer in [0, 4294967295]"
        self._reanchor_epoch = value

    @builtins.property
    def retarget_required(self):
        """Message field 'retarget_required'."""
        return self._retarget_required

    @retarget_required.setter
    def retarget_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'retarget_required' field must be of type 'bool'"
        self._retarget_required = value

    @builtins.property
    def fault_code(self):
        """Message field 'fault_code'."""
        return self._fault_code

    @fault_code.setter
    def fault_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fault_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fault_code' field must be an unsigned integer in [0, 255]"
        self._fault_code = value

    @builtins.property
    def fault_detail(self):
        """Message field 'fault_detail'."""
        return self._fault_detail

    @fault_detail.setter
    def fault_detail(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fault_detail' field must be of type 'str'"
        self._fault_detail = value
