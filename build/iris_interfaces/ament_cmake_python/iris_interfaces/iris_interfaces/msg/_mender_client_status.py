# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iris_interfaces:msg/MenderClientStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MenderClientStatus(type):
    """Metaclass of message 'MenderClientStatus'."""

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
                'iris_interfaces.msg.MenderClientStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mender_client_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mender_client_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mender_client_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mender_client_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mender_client_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OTA_CLIENT_STATE__DEFAULT': 'NA',
            'LAST_SYNC_WITH_SERVER__DEFAULT': 'NA',
            'DOWNLOAD_AVAILABLE__DEFAULT': False,
            'INSTALL_AVAILABLE__DEFAULT': False,
            'REBOOT_REQUIRED__DEFAULT': False,
            'UPDATE_STATUS__DEFAULT': 'NA',
        }

    @property
    def OTA_CLIENT_STATE__DEFAULT(cls):
        """Return default value for message field 'ota_client_state'."""
        return 'NA'

    @property
    def LAST_SYNC_WITH_SERVER__DEFAULT(cls):
        """Return default value for message field 'last_sync_with_server'."""
        return 'NA'

    @property
    def DOWNLOAD_AVAILABLE__DEFAULT(cls):
        """Return default value for message field 'download_available'."""
        return False

    @property
    def INSTALL_AVAILABLE__DEFAULT(cls):
        """Return default value for message field 'install_available'."""
        return False

    @property
    def REBOOT_REQUIRED__DEFAULT(cls):
        """Return default value for message field 'reboot_required'."""
        return False

    @property
    def UPDATE_STATUS__DEFAULT(cls):
        """Return default value for message field 'update_status'."""
        return 'NA'


class MenderClientStatus(metaclass=Metaclass_MenderClientStatus):
    """Message class 'MenderClientStatus'."""

    __slots__ = [
        '_ota_client_state',
        '_last_sync_with_server',
        '_download_available',
        '_install_available',
        '_reboot_required',
        '_update_status',
    ]

    _fields_and_field_types = {
        'ota_client_state': 'string',
        'last_sync_with_server': 'string',
        'download_available': 'boolean',
        'install_available': 'boolean',
        'reboot_required': 'boolean',
        'update_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ota_client_state = kwargs.get(
            'ota_client_state', MenderClientStatus.OTA_CLIENT_STATE__DEFAULT)
        self.last_sync_with_server = kwargs.get(
            'last_sync_with_server', MenderClientStatus.LAST_SYNC_WITH_SERVER__DEFAULT)
        self.download_available = kwargs.get(
            'download_available', MenderClientStatus.DOWNLOAD_AVAILABLE__DEFAULT)
        self.install_available = kwargs.get(
            'install_available', MenderClientStatus.INSTALL_AVAILABLE__DEFAULT)
        self.reboot_required = kwargs.get(
            'reboot_required', MenderClientStatus.REBOOT_REQUIRED__DEFAULT)
        self.update_status = kwargs.get(
            'update_status', MenderClientStatus.UPDATE_STATUS__DEFAULT)

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
        if self.ota_client_state != other.ota_client_state:
            return False
        if self.last_sync_with_server != other.last_sync_with_server:
            return False
        if self.download_available != other.download_available:
            return False
        if self.install_available != other.install_available:
            return False
        if self.reboot_required != other.reboot_required:
            return False
        if self.update_status != other.update_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ota_client_state(self):
        """Message field 'ota_client_state'."""
        return self._ota_client_state

    @ota_client_state.setter
    def ota_client_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ota_client_state' field must be of type 'str'"
        self._ota_client_state = value

    @builtins.property
    def last_sync_with_server(self):
        """Message field 'last_sync_with_server'."""
        return self._last_sync_with_server

    @last_sync_with_server.setter
    def last_sync_with_server(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'last_sync_with_server' field must be of type 'str'"
        self._last_sync_with_server = value

    @builtins.property
    def download_available(self):
        """Message field 'download_available'."""
        return self._download_available

    @download_available.setter
    def download_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'download_available' field must be of type 'bool'"
        self._download_available = value

    @builtins.property
    def install_available(self):
        """Message field 'install_available'."""
        return self._install_available

    @install_available.setter
    def install_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'install_available' field must be of type 'bool'"
        self._install_available = value

    @builtins.property
    def reboot_required(self):
        """Message field 'reboot_required'."""
        return self._reboot_required

    @reboot_required.setter
    def reboot_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reboot_required' field must be of type 'bool'"
        self._reboot_required = value

    @builtins.property
    def update_status(self):
        """Message field 'update_status'."""
        return self._update_status

    @update_status.setter
    def update_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'update_status' field must be of type 'str'"
        self._update_status = value
