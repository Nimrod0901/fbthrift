#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class HsFoo(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        MyInt: bool
        pass

    MyInt: Final[int] = ...

    def __init__(
        self, *,
        MyInt: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        MyInt: _typing.Union[int, '__NotSet', None]=NOTSET
    ) -> HsFoo: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['HsFoo'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'HsFoo') -> bool: ...
    def __gt__(self, other: 'HsFoo') -> bool: ...
    def __le__(self, other: 'HsFoo') -> bool: ...
    def __ge__(self, other: 'HsFoo') -> bool: ...


