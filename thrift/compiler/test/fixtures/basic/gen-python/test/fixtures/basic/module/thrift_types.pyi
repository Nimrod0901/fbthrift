#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import facebook.thrift.annotation.hack.thrift_types


class MyEnum(_fbthrift_python_types.Enum, enum.Enum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...


class HackEnum(_fbthrift_python_types.Enum, enum.Enum):
    Value1: HackEnum = ...
    Value2: HackEnum = ...


class MyStruct(_fbthrift_python_types.Struct):
    MyIntField: _typing.Final[int] = ...
    MyStringField: _typing.Final[str] = ...
    MyDataField: _typing.Final[MyDataItem] = ...
    myEnum: _typing.Final[MyEnum] = ...
    oneway: _typing.Final[bool] = ...
    readonly: _typing.Final[bool] = ...
    idempotent: _typing.Final[bool] = ...
    floatSet: _typing.Final[_typing.AbstractSet[float]] = ...
    no_hack_codegen_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[MyDataItem]=...,
        myEnum: _typing.Optional[MyEnum]=...,
        oneway: _typing.Optional[bool]=...,
        readonly: _typing.Optional[bool]=...,
        idempotent: _typing.Optional[bool]=...,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=...,
        no_hack_codegen_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[MyDataItem]=...,
        myEnum: _typing.Optional[MyEnum]=...,
        oneway: _typing.Optional[bool]=...,
        readonly: _typing.Optional[bool]=...,
        idempotent: _typing.Optional[bool]=...,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=...,
        no_hack_codegen_field: _typing.Optional[str]=...
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyDataItem, MyEnum, bool, bool, bool, _typing.AbstractSet[float], str]]]: ...


class MyDataItem(_fbthrift_python_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> MyDataItem: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...


class MyUnion(_fbthrift_python_types.Union):
    myEnum: _typing.Final[MyEnum] = ...
    myStruct: _typing.Final[MyStruct] = ...
    myDataItem: _typing.Final[MyDataItem] = ...
    floatSet: _typing.Final[_typing.AbstractSet[float]] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=...,
        myStruct: _typing.Optional[MyStruct]=...,
        myDataItem: _typing.Optional[MyDataItem]=...,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MyUnion.Type = ...
        myEnum: MyUnion.Type = ...
        myStruct: MyUnion.Type = ...
        myDataItem: MyUnion.Type = ...
        floatSet: MyUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, MyStruct, MyDataItem, _typing.AbstractSet[float]]) -> MyUnion: ...
    value: _typing.Final[_typing.Union[None, MyEnum, MyStruct, MyDataItem, _typing.AbstractSet[float]]]
    type: Type
    def get_type(self) -> Type:...


class ReservedKeyword(_fbthrift_python_types.Struct):
    reserved_field: _typing.Final[int] = ...
    def __init__(
        self, *,
        reserved_field: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        reserved_field: _typing.Optional[int]=...
    ) -> ReservedKeyword: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...


class UnionToBeRenamed(_fbthrift_python_types.Union):
    reserved_field: _typing.Final[int] = ...
    def __init__(
        self, *,
        reserved_field: _typing.Optional[int]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: UnionToBeRenamed.Type = ...
        reserved_field: UnionToBeRenamed.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, int]) -> UnionToBeRenamed: ...
    value: _typing.Final[_typing.Union[None, int]]
    type: Type
    def get_type(self) -> Type:...


class _fbthrift_FooService_simple_rpc_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_FooService_simple_rpc_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_FB303Service_simple_rpc_args(_fbthrift_python_types.Struct):
    int_parameter: _typing.Final[int] = ...

    def __init__(
        self, *,
        int_parameter: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_FB303Service_simple_rpc_result(_fbthrift_python_types.Struct):
    success: _typing.Final[ReservedKeyword]

    def __init__(
        self, *, success: _typing.Optional[ReservedKeyword] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            ReservedKeyword,
        ]]]: ...


class _fbthrift_MyService_ping_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_ping_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_getRandomData_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_getRandomData_result(_fbthrift_python_types.Struct):
    success: _typing.Final[str]

    def __init__(
        self, *, success: _typing.Optional[str] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
        ]]]: ...


class _fbthrift_MyService_sink_args(_fbthrift_python_types.Struct):
    sink: _typing.Final[int] = ...

    def __init__(
        self, *,
        sink: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_sink_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_putDataById_args(_fbthrift_python_types.Struct):
    id: _typing.Final[int] = ...
    data: _typing.Final[str] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...,
        data: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int, str]]]: ...


class _fbthrift_MyService_putDataById_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_hasDataById_args(_fbthrift_python_types.Struct):
    id: _typing.Final[int] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_hasDataById_result(_fbthrift_python_types.Struct):
    success: _typing.Final[bool]

    def __init__(
        self, *, success: _typing.Optional[bool] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bool,
        ]]]: ...


class _fbthrift_MyService_getDataById_args(_fbthrift_python_types.Struct):
    id: _typing.Final[int] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_getDataById_result(_fbthrift_python_types.Struct):
    success: _typing.Final[str]

    def __init__(
        self, *, success: _typing.Optional[str] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
        ]]]: ...


class _fbthrift_MyService_deleteDataById_args(_fbthrift_python_types.Struct):
    id: _typing.Final[int] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_deleteDataById_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_lobDataById_args(_fbthrift_python_types.Struct):
    id: _typing.Final[int] = ...
    data: _typing.Final[str] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...,
        data: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int, str]]]: ...


class _fbthrift_MyService_invalid_return_for_hack_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_invalid_return_for_hack_result(_fbthrift_python_types.Struct):
    success: _typing.Final[_typing.AbstractSet[float]]

    def __init__(
        self, *, success: _typing.Optional[_typing.AbstractSet[float]] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            _typing.AbstractSet[float],
        ]]]: ...


class _fbthrift_MyService_rpc_skipped_codegen_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_rpc_skipped_codegen_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey0_args(_fbthrift_python_types.Struct):
    key: _typing.Final[str] = ...

    def __init__(
        self, *,
        key: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, str]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey0_result(_fbthrift_python_types.Struct):
    success: _typing.Final[bytes]

    def __init__(
        self, *, success: _typing.Optional[bytes] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bytes,
        ]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey1_args(_fbthrift_python_types.Struct):
    key: _typing.Final[str] = ...

    def __init__(
        self, *,
        key: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, str]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey1_result(_fbthrift_python_types.Struct):
    success: _typing.Final[bytes]

    def __init__(
        self, *, success: _typing.Optional[bytes] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bytes,
        ]]]: ...
