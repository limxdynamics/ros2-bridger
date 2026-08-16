# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_msgs:msg/TeleopLimbState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeleopLimbState(type):
    """Metaclass of message 'TeleopLimbState'."""

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
                'teleop_msgs.msg.TeleopLimbState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__teleop_limb_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__teleop_limb_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__teleop_limb_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__teleop_limb_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__teleop_limb_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TeleopLimbState(metaclass=Metaclass_TeleopLimbState):
    """Message class 'TeleopLimbState'."""

    __slots__ = [
        '_name',
        '_following',
        '_ee_closure_enabled',
        '_ee_gesture_index',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'following': 'boolean',
        'ee_closure_enabled': 'boolean',
        'ee_gesture_index': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.following = kwargs.get('following', bool())
        self.ee_closure_enabled = kwargs.get('ee_closure_enabled', bool())
        self.ee_gesture_index = kwargs.get('ee_gesture_index', int())

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
        if self.name != other.name:
            return False
        if self.following != other.following:
            return False
        if self.ee_closure_enabled != other.ee_closure_enabled:
            return False
        if self.ee_gesture_index != other.ee_gesture_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def following(self):
        """Message field 'following'."""
        return self._following

    @following.setter
    def following(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'following' field must be of type 'bool'"
        self._following = value

    @builtins.property
    def ee_closure_enabled(self):
        """Message field 'ee_closure_enabled'."""
        return self._ee_closure_enabled

    @ee_closure_enabled.setter
    def ee_closure_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ee_closure_enabled' field must be of type 'bool'"
        self._ee_closure_enabled = value

    @builtins.property
    def ee_gesture_index(self):
        """Message field 'ee_gesture_index'."""
        return self._ee_gesture_index

    @ee_gesture_index.setter
    def ee_gesture_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ee_gesture_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ee_gesture_index' field must be an unsigned integer in [0, 255]"
        self._ee_gesture_index = value
