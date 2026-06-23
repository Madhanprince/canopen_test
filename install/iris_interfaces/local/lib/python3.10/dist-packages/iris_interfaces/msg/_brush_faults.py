# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/BrushFaults.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BrushFaults(type):
    """Metaclass of message 'BrushFaults'."""

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
                'iris_interfaces.msg.BrushFaults')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brush_faults
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brush_faults
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brush_faults
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brush_faults
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brush_faults

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BrushFaults(metaclass=Metaclass_BrushFaults):
    """Message class 'BrushFaults'."""

    __slots__ = [
        '_actuator_digital_fault',
        '_drive_brush_current_digital_fault',
        '_overcurrent_analog_fault',
        '_temperature_fault',
        '_undercurrent_analog_fault',
    ]

    _fields_and_field_types = {
        'actuator_digital_fault': 'uint8',
        'drive_brush_current_digital_fault': 'uint8',
        'overcurrent_analog_fault': 'uint8',
        'temperature_fault': 'uint8',
        'undercurrent_analog_fault': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.actuator_digital_fault = kwargs.get('actuator_digital_fault', int())
        self.drive_brush_current_digital_fault = kwargs.get('drive_brush_current_digital_fault', int())
        self.overcurrent_analog_fault = kwargs.get('overcurrent_analog_fault', int())
        self.temperature_fault = kwargs.get('temperature_fault', int())
        self.undercurrent_analog_fault = kwargs.get('undercurrent_analog_fault', int())

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
        if self.actuator_digital_fault != other.actuator_digital_fault:
            return False
        if self.drive_brush_current_digital_fault != other.drive_brush_current_digital_fault:
            return False
        if self.overcurrent_analog_fault != other.overcurrent_analog_fault:
            return False
        if self.temperature_fault != other.temperature_fault:
            return False
        if self.undercurrent_analog_fault != other.undercurrent_analog_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actuator_digital_fault(self):
        """Message field 'actuator_digital_fault'."""
        return self._actuator_digital_fault

    @actuator_digital_fault.setter
    def actuator_digital_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actuator_digital_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'actuator_digital_fault' field must be an unsigned integer in [0, 255]"
        self._actuator_digital_fault = value

    @builtins.property
    def drive_brush_current_digital_fault(self):
        """Message field 'drive_brush_current_digital_fault'."""
        return self._drive_brush_current_digital_fault

    @drive_brush_current_digital_fault.setter
    def drive_brush_current_digital_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drive_brush_current_digital_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drive_brush_current_digital_fault' field must be an unsigned integer in [0, 255]"
        self._drive_brush_current_digital_fault = value

    @builtins.property
    def overcurrent_analog_fault(self):
        """Message field 'overcurrent_analog_fault'."""
        return self._overcurrent_analog_fault

    @overcurrent_analog_fault.setter
    def overcurrent_analog_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'overcurrent_analog_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'overcurrent_analog_fault' field must be an unsigned integer in [0, 255]"
        self._overcurrent_analog_fault = value

    @builtins.property
    def temperature_fault(self):
        """Message field 'temperature_fault'."""
        return self._temperature_fault

    @temperature_fault.setter
    def temperature_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temperature_fault' field must be an unsigned integer in [0, 255]"
        self._temperature_fault = value

    @builtins.property
    def undercurrent_analog_fault(self):
        """Message field 'undercurrent_analog_fault'."""
        return self._undercurrent_analog_fault

    @undercurrent_analog_fault.setter
    def undercurrent_analog_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'undercurrent_analog_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'undercurrent_analog_fault' field must be an unsigned integer in [0, 255]"
        self._undercurrent_analog_fault = value
