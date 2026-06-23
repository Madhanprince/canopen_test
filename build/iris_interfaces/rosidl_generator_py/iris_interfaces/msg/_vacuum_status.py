# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/VacuumStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VacuumStatus(type):
    """Metaclass of message 'VacuumStatus'."""

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
                'iris_interfaces.msg.VacuumStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vacuum_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vacuum_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vacuum_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vacuum_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vacuum_status

            from iris_interfaces.msg import ActuatorStatus
            if ActuatorStatus.__class__._TYPE_SUPPORT is None:
                ActuatorStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VacuumStatus(metaclass=Metaclass_VacuumStatus):
    """Message class 'VacuumStatus'."""

    __slots__ = [
        '_vacuum_motor_command',
        '_vacuum_motor_status',
        '_squeeze_actuator',
    ]

    _fields_and_field_types = {
        'vacuum_motor_command': 'uint8',
        'vacuum_motor_status': 'uint8',
        'squeeze_actuator': 'iris_interfaces/ActuatorStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'ActuatorStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vacuum_motor_command = kwargs.get('vacuum_motor_command', int())
        self.vacuum_motor_status = kwargs.get('vacuum_motor_status', int())
        from iris_interfaces.msg import ActuatorStatus
        self.squeeze_actuator = kwargs.get('squeeze_actuator', ActuatorStatus())

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
        if self.vacuum_motor_command != other.vacuum_motor_command:
            return False
        if self.vacuum_motor_status != other.vacuum_motor_status:
            return False
        if self.squeeze_actuator != other.squeeze_actuator:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vacuum_motor_command(self):
        """Message field 'vacuum_motor_command'."""
        return self._vacuum_motor_command

    @vacuum_motor_command.setter
    def vacuum_motor_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vacuum_motor_command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vacuum_motor_command' field must be an unsigned integer in [0, 255]"
        self._vacuum_motor_command = value

    @builtins.property
    def vacuum_motor_status(self):
        """Message field 'vacuum_motor_status'."""
        return self._vacuum_motor_status

    @vacuum_motor_status.setter
    def vacuum_motor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vacuum_motor_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vacuum_motor_status' field must be an unsigned integer in [0, 255]"
        self._vacuum_motor_status = value

    @builtins.property
    def squeeze_actuator(self):
        """Message field 'squeeze_actuator'."""
        return self._squeeze_actuator

    @squeeze_actuator.setter
    def squeeze_actuator(self, value):
        if __debug__:
            from iris_interfaces.msg import ActuatorStatus
            assert \
                isinstance(value, ActuatorStatus), \
                "The 'squeeze_actuator' field must be a sub message of type 'ActuatorStatus'"
        self._squeeze_actuator = value
