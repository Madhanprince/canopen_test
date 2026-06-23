# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/OTAStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OTAStatus(type):
    """Metaclass of message 'OTAStatus'."""

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
                'iris_interfaces.msg.OTAStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ota_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ota_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ota_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ota_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ota_status

            from iris_interfaces.msg import MenderClientStatus
            if MenderClientStatus.__class__._TYPE_SUPPORT is None:
                MenderClientStatus.__class__.__import_type_support__()

            from iris_interfaces.msg import SystemSoftwareStatus
            if SystemSoftwareStatus.__class__._TYPE_SUPPORT is None:
                SystemSoftwareStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OTAStatus(metaclass=Metaclass_OTAStatus):
    """Message class 'OTAStatus'."""

    __slots__ = [
        '_system_software_info',
        '_mender_client_status',
    ]

    _fields_and_field_types = {
        'system_software_info': 'iris_interfaces/SystemSoftwareStatus',
        'mender_client_status': 'iris_interfaces/MenderClientStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'SystemSoftwareStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['iris_interfaces', 'msg'], 'MenderClientStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from iris_interfaces.msg import SystemSoftwareStatus
        self.system_software_info = kwargs.get('system_software_info', SystemSoftwareStatus())
        from iris_interfaces.msg import MenderClientStatus
        self.mender_client_status = kwargs.get('mender_client_status', MenderClientStatus())

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
        if self.system_software_info != other.system_software_info:
            return False
        if self.mender_client_status != other.mender_client_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def system_software_info(self):
        """Message field 'system_software_info'."""
        return self._system_software_info

    @system_software_info.setter
    def system_software_info(self, value):
        if __debug__:
            from iris_interfaces.msg import SystemSoftwareStatus
            assert \
                isinstance(value, SystemSoftwareStatus), \
                "The 'system_software_info' field must be a sub message of type 'SystemSoftwareStatus'"
        self._system_software_info = value

    @builtins.property
    def mender_client_status(self):
        """Message field 'mender_client_status'."""
        return self._mender_client_status

    @mender_client_status.setter
    def mender_client_status(self, value):
        if __debug__:
            from iris_interfaces.msg import MenderClientStatus
            assert \
                isinstance(value, MenderClientStatus), \
                "The 'mender_client_status' field must be a sub message of type 'MenderClientStatus'"
        self._mender_client_status = value
