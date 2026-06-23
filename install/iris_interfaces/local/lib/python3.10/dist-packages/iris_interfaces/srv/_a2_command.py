# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:srv/A2Command.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_A2Command_Request(type):
    """Metaclass of message 'A2Command_Request'."""

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
                'iris_interfaces.srv.A2Command_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__a2_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__a2_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__a2_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__a2_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__a2_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class A2Command_Request(metaclass=Metaclass_A2Command_Request):
    """Message class 'A2Command_Request'."""

    __slots__ = [
        '_brush_command',
        '_vacuum_command',
    ]

    _fields_and_field_types = {
        'brush_command': 'uint8',
        'vacuum_command': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brush_command = kwargs.get('brush_command', int())
        self.vacuum_command = kwargs.get('vacuum_command', int())

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
        if self.brush_command != other.brush_command:
            return False
        if self.vacuum_command != other.vacuum_command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brush_command(self):
        """Message field 'brush_command'."""
        return self._brush_command

    @brush_command.setter
    def brush_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brush_command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brush_command' field must be an unsigned integer in [0, 255]"
        self._brush_command = value

    @builtins.property
    def vacuum_command(self):
        """Message field 'vacuum_command'."""
        return self._vacuum_command

    @vacuum_command.setter
    def vacuum_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vacuum_command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vacuum_command' field must be an unsigned integer in [0, 255]"
        self._vacuum_command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_A2Command_Response(type):
    """Metaclass of message 'A2Command_Response'."""

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
                'iris_interfaces.srv.A2Command_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__a2_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__a2_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__a2_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__a2_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__a2_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class A2Command_Response(metaclass=Metaclass_A2Command_Response):
    """Message class 'A2Command_Response'."""

    __slots__ = [
        '_brush_status',
        '_vacuum_status',
    ]

    _fields_and_field_types = {
        'brush_status': 'uint8',
        'vacuum_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brush_status = kwargs.get('brush_status', int())
        self.vacuum_status = kwargs.get('vacuum_status', int())

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
        if self.brush_status != other.brush_status:
            return False
        if self.vacuum_status != other.vacuum_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brush_status(self):
        """Message field 'brush_status'."""
        return self._brush_status

    @brush_status.setter
    def brush_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brush_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brush_status' field must be an unsigned integer in [0, 255]"
        self._brush_status = value

    @builtins.property
    def vacuum_status(self):
        """Message field 'vacuum_status'."""
        return self._vacuum_status

    @vacuum_status.setter
    def vacuum_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vacuum_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vacuum_status' field must be an unsigned integer in [0, 255]"
        self._vacuum_status = value


class Metaclass_A2Command(type):
    """Metaclass of service 'A2Command'."""

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
                'iris_interfaces.srv.A2Command')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__a2_command

            from iris_interfaces.srv import _a2_command
            if _a2_command.Metaclass_A2Command_Request._TYPE_SUPPORT is None:
                _a2_command.Metaclass_A2Command_Request.__import_type_support__()
            if _a2_command.Metaclass_A2Command_Response._TYPE_SUPPORT is None:
                _a2_command.Metaclass_A2Command_Response.__import_type_support__()


class A2Command(metaclass=Metaclass_A2Command):
    from iris_interfaces.srv._a2_command import A2Command_Request as Request
    from iris_interfaces.srv._a2_command import A2Command_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
