# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:srv/WifiDiscovery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WifiDiscovery_Request(type):
    """Metaclass of message 'WifiDiscovery_Request'."""

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
                'iris_interfaces.srv.WifiDiscovery_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__wifi_discovery__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__wifi_discovery__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__wifi_discovery__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__wifi_discovery__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__wifi_discovery__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WifiDiscovery_Request(metaclass=Metaclass_WifiDiscovery_Request):
    """Message class 'WifiDiscovery_Request'."""

    __slots__ = [
        '_wifidiscovery',
    ]

    _fields_and_field_types = {
        'wifidiscovery': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wifidiscovery = kwargs.get('wifidiscovery', str())

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
        if self.wifidiscovery != other.wifidiscovery:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wifidiscovery(self):
        """Message field 'wifidiscovery'."""
        return self._wifidiscovery

    @wifidiscovery.setter
    def wifidiscovery(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wifidiscovery' field must be of type 'str'"
        self._wifidiscovery = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WifiDiscovery_Response(type):
    """Metaclass of message 'WifiDiscovery_Response'."""

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
                'iris_interfaces.srv.WifiDiscovery_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__wifi_discovery__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__wifi_discovery__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__wifi_discovery__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__wifi_discovery__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__wifi_discovery__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WifiDiscovery_Response(metaclass=Metaclass_WifiDiscovery_Response):
    """Message class 'WifiDiscovery_Response'."""

    __slots__ = [
        '_timestamp',
        '_discoverystatus',
    ]

    _fields_and_field_types = {
        'timestamp': 'int32',
        'discoverystatus': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.discoverystatus = kwargs.get('discoverystatus', str())

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
        if self.timestamp != other.timestamp:
            return False
        if self.discoverystatus != other.discoverystatus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'timestamp' field must be an integer in [-2147483648, 2147483647]"
        self._timestamp = value

    @builtins.property
    def discoverystatus(self):
        """Message field 'discoverystatus'."""
        return self._discoverystatus

    @discoverystatus.setter
    def discoverystatus(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'discoverystatus' field must be of type 'str'"
        self._discoverystatus = value


class Metaclass_WifiDiscovery(type):
    """Metaclass of service 'WifiDiscovery'."""

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
                'iris_interfaces.srv.WifiDiscovery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__wifi_discovery

            from iris_interfaces.srv import _wifi_discovery
            if _wifi_discovery.Metaclass_WifiDiscovery_Request._TYPE_SUPPORT is None:
                _wifi_discovery.Metaclass_WifiDiscovery_Request.__import_type_support__()
            if _wifi_discovery.Metaclass_WifiDiscovery_Response._TYPE_SUPPORT is None:
                _wifi_discovery.Metaclass_WifiDiscovery_Response.__import_type_support__()


class WifiDiscovery(metaclass=Metaclass_WifiDiscovery):
    from iris_interfaces.srv._wifi_discovery import WifiDiscovery_Request as Request
    from iris_interfaces.srv._wifi_discovery import WifiDiscovery_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
