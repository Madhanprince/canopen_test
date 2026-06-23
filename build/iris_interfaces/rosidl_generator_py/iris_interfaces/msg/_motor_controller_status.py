# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/MotorControllerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorControllerStatus(type):
    """Metaclass of message 'MotorControllerStatus'."""

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
                'iris_interfaces.msg.MotorControllerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_controller_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_controller_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_controller_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_controller_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_controller_status

            from iris_interfaces.msg import MotorStatus
            if MotorStatus.__class__._TYPE_SUPPORT is None:
                MotorStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorControllerStatus(metaclass=Metaclass_MotorControllerStatus):
    """Message class 'MotorControllerStatus'."""

    __slots__ = [
        '_software_version',
        '_input_voltage',
        '_board_temperature',
        '_sto_status',
        '_controller_alarm',
        '_controller_nmt_state',
        '_left_motor',
        '_right_motor',
    ]

    _fields_and_field_types = {
        'software_version': 'string',
        'input_voltage': 'float',
        'board_temperature': 'uint8',
        'sto_status': 'string',
        'controller_alarm': 'string',
        'controller_nmt_state': 'string',
        'left_motor': 'iris_interfaces/MotorStatus',
        'right_motor': 'iris_interfaces/MotorStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'MotorStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'MotorStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.software_version = kwargs.get('software_version', str())
        self.input_voltage = kwargs.get('input_voltage', float())
        self.board_temperature = kwargs.get('board_temperature', int())
        self.sto_status = kwargs.get('sto_status', str())
        self.controller_alarm = kwargs.get('controller_alarm', str())
        self.controller_nmt_state = kwargs.get('controller_nmt_state', str())
        from iris_interfaces.msg import MotorStatus
        self.left_motor = kwargs.get('left_motor', MotorStatus())
        from iris_interfaces.msg import MotorStatus
        self.right_motor = kwargs.get('right_motor', MotorStatus())

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
        if self.software_version != other.software_version:
            return False
        if self.input_voltage != other.input_voltage:
            return False
        if self.board_temperature != other.board_temperature:
            return False
        if self.sto_status != other.sto_status:
            return False
        if self.controller_alarm != other.controller_alarm:
            return False
        if self.controller_nmt_state != other.controller_nmt_state:
            return False
        if self.left_motor != other.left_motor:
            return False
        if self.right_motor != other.right_motor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def software_version(self):
        """Message field 'software_version'."""
        return self._software_version

    @software_version.setter
    def software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'software_version' field must be of type 'str'"
        self._software_version = value

    @builtins.property
    def input_voltage(self):
        """Message field 'input_voltage'."""
        return self._input_voltage

    @input_voltage.setter
    def input_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_voltage = value

    @builtins.property
    def board_temperature(self):
        """Message field 'board_temperature'."""
        return self._board_temperature

    @board_temperature.setter
    def board_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'board_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'board_temperature' field must be an unsigned integer in [0, 255]"
        self._board_temperature = value

    @builtins.property
    def sto_status(self):
        """Message field 'sto_status'."""
        return self._sto_status

    @sto_status.setter
    def sto_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sto_status' field must be of type 'str'"
        self._sto_status = value

    @builtins.property
    def controller_alarm(self):
        """Message field 'controller_alarm'."""
        return self._controller_alarm

    @controller_alarm.setter
    def controller_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'controller_alarm' field must be of type 'str'"
        self._controller_alarm = value

    @builtins.property
    def controller_nmt_state(self):
        """Message field 'controller_nmt_state'."""
        return self._controller_nmt_state

    @controller_nmt_state.setter
    def controller_nmt_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'controller_nmt_state' field must be of type 'str'"
        self._controller_nmt_state = value

    @builtins.property
    def left_motor(self):
        """Message field 'left_motor'."""
        return self._left_motor

    @left_motor.setter
    def left_motor(self, value):
        if __debug__:
            from iris_interfaces.msg import MotorStatus
            assert \
                isinstance(value, MotorStatus), \
                "The 'left_motor' field must be a sub message of type 'MotorStatus'"
        self._left_motor = value

    @builtins.property
    def right_motor(self):
        """Message field 'right_motor'."""
        return self._right_motor

    @right_motor.setter
    def right_motor(self, value):
        if __debug__:
            from iris_interfaces.msg import MotorStatus
            assert \
                isinstance(value, MotorStatus), \
                "The 'right_motor' field must be a sub message of type 'MotorStatus'"
        self._right_motor = value
