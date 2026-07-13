# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:srv/AlarmReset.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlarmReset_Request(type):
    """Metaclass of message 'AlarmReset_Request'."""

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
            module = import_type_support('iris_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iris_interfaces.srv.AlarmReset_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__alarm_reset__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__alarm_reset__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__alarm_reset__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__alarm_reset__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__alarm_reset__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AlarmReset_Request(metaclass=Metaclass_AlarmReset_Request):
    """Message class 'AlarmReset_Request'."""

    __slots__ = [
        '_reset_alarm',
    ]

    _fields_and_field_types = {
        'reset_alarm': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reset_alarm = kwargs.get('reset_alarm', int())

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
        if self.reset_alarm != other.reset_alarm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reset_alarm(self):
        """Message field 'reset_alarm'."""
        return self._reset_alarm

    @reset_alarm.setter
    def reset_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_alarm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_alarm' field must be an unsigned integer in [0, 255]"
        self._reset_alarm = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AlarmReset_Response(type):
    """Metaclass of message 'AlarmReset_Response'."""

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
            module = import_type_support('iris_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iris_interfaces.srv.AlarmReset_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__alarm_reset__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__alarm_reset__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__alarm_reset__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__alarm_reset__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__alarm_reset__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AlarmReset_Response(metaclass=Metaclass_AlarmReset_Response):
    """Message class 'AlarmReset_Response'."""

    __slots__ = [
        '_respones',
    ]

    _fields_and_field_types = {
        'respones': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.respones = kwargs.get('respones', str())

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
        if self.respones != other.respones:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def respones(self):
        """Message field 'respones'."""
        return self._respones

    @respones.setter
    def respones(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'respones' field must be of type 'str'"
        self._respones = value


class Metaclass_AlarmReset(type):
    """Metaclass of service 'AlarmReset'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('iris_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iris_interfaces.srv.AlarmReset')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__alarm_reset

            from iris_interfaces.srv import _alarm_reset
            if _alarm_reset.Metaclass_AlarmReset_Request._TYPE_SUPPORT is None:
                _alarm_reset.Metaclass_AlarmReset_Request.__import_type_support__()
            if _alarm_reset.Metaclass_AlarmReset_Response._TYPE_SUPPORT is None:
                _alarm_reset.Metaclass_AlarmReset_Response.__import_type_support__()


class AlarmReset(metaclass=Metaclass_AlarmReset):
    from iris_interfaces.srv._alarm_reset import AlarmReset_Request as Request
    from iris_interfaces.srv._alarm_reset import AlarmReset_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
