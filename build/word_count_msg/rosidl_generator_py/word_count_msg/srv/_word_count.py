# generated from rosidl_generator_py/resource/_idl.py.em
# with input from word_count_msg:srv/WordCount.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WordCount_Request(type):
    """Metaclass of message 'WordCount_Request'."""

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
            module = import_type_support('word_count_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'word_count_msg.srv.WordCount_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__word_count__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__word_count__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__word_count__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__word_count__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__word_count__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WordCount_Request(metaclass=Metaclass_WordCount_Request):
    """Message class 'WordCount_Request'."""

    __slots__ = [
        '_words',
    ]

    _fields_and_field_types = {
        'words': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.words = kwargs.get('words', str())

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
        if self.words != other.words:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def words(self):
        """Message field 'words'."""
        return self._words

    @words.setter
    def words(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'words' field must be of type 'str'"
        self._words = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WordCount_Response(type):
    """Metaclass of message 'WordCount_Response'."""

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
            module = import_type_support('word_count_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'word_count_msg.srv.WordCount_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__word_count__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__word_count__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__word_count__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__word_count__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__word_count__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WordCount_Response(metaclass=Metaclass_WordCount_Response):
    """Message class 'WordCount_Response'."""

    __slots__ = [
        '_count',
    ]

    _fields_and_field_types = {
        'count': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.count = kwargs.get('count', int())

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
        if self.count != other.count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._count = value


class Metaclass_WordCount(type):
    """Metaclass of service 'WordCount'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('word_count_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'word_count_msg.srv.WordCount')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__word_count

            from word_count_msg.srv import _word_count
            if _word_count.Metaclass_WordCount_Request._TYPE_SUPPORT is None:
                _word_count.Metaclass_WordCount_Request.__import_type_support__()
            if _word_count.Metaclass_WordCount_Response._TYPE_SUPPORT is None:
                _word_count.Metaclass_WordCount_Response.__import_type_support__()


class WordCount(metaclass=Metaclass_WordCount):
    from word_count_msg.srv._word_count import WordCount_Request as Request
    from word_count_msg.srv._word_count import WordCount_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
