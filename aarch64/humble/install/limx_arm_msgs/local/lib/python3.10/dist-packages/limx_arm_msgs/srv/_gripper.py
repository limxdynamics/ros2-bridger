# generated from rosidl_generator_py/resource/_idl.py.em
# with input from limx_arm_msgs:srv/gripper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_gripper_Request(type):
    """Metaclass of message 'gripper_Request'."""

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
            module = import_type_support('limx_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'limx_arm_msgs.srv.gripper_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class gripper_Request(metaclass=Metaclass_gripper_Request):
    """Message class 'gripper_Request'."""

    __slots__ = [
        '_initial',
        '_dis',
        '_force',
    ]

    _fields_and_field_types = {
        'initial': 'boolean',
        'dis': 'int32',
        'force': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.initial = kwargs.get('initial', bool())
        self.dis = kwargs.get('dis', int())
        self.force = kwargs.get('force', int())

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
        if self.initial != other.initial:
            return False
        if self.dis != other.dis:
            return False
        if self.force != other.force:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def initial(self):
        """Message field 'initial'."""
        return self._initial

    @initial.setter
    def initial(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initial' field must be of type 'bool'"
        self._initial = value

    @builtins.property
    def dis(self):
        """Message field 'dis'."""
        return self._dis

    @dis.setter
    def dis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dis' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dis' field must be an integer in [-2147483648, 2147483647]"
        self._dis = value

    @builtins.property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'force' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'force' field must be an integer in [-2147483648, 2147483647]"
        self._force = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_gripper_Response(type):
    """Metaclass of message 'gripper_Response'."""

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
            module = import_type_support('limx_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'limx_arm_msgs.srv.gripper_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class gripper_Response(metaclass=Metaclass_gripper_Response):
    """Message class 'gripper_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value


class Metaclass_gripper(type):
    """Metaclass of service 'gripper'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('limx_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'limx_arm_msgs.srv.gripper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gripper

            from limx_arm_msgs.srv import _gripper
            if _gripper.Metaclass_gripper_Request._TYPE_SUPPORT is None:
                _gripper.Metaclass_gripper_Request.__import_type_support__()
            if _gripper.Metaclass_gripper_Response._TYPE_SUPPORT is None:
                _gripper.Metaclass_gripper_Response.__import_type_support__()


class gripper(metaclass=Metaclass_gripper):
    from limx_arm_msgs.srv._gripper import gripper_Request as Request
    from limx_arm_msgs.srv._gripper import gripper_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
