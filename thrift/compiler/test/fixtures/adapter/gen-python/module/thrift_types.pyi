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

import facebook.thrift.annotation.cpp.thrift_types

import facebook.thrift.annotation.hack.thrift_types

import facebook.thrift.annotation.python.thrift_types

import facebook.thrift.annotation.thrift.thrift_types
import my.another.module
import my


class Foo(_fbthrift_python_types.Struct):
    intField: _typing.Final[int] = ...
    optionalIntField: _typing.Final[_typing.Optional[int]] = ...
    intFieldWithDefault: _typing.Final[int] = ...
    setField: _typing.Final[_typing.AbstractSet[str]] = ...
    optionalSetField: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    mapField: _typing.Final[_typing.Mapping[str, _typing.Sequence[str]]] = ...
    optionalMapField: _typing.Final[_typing.Optional[_typing.Mapping[str, _typing.Sequence[str]]]] = ...
    binaryField: _typing.Final[bytes] = ...
    longField: _typing.Final[my.another.module.AdaptedType2] = ...
    adaptedLongField: _typing.Final[my.AdaptedType3] = ...
    doubleAdaptedField: _typing.Final[int] = ...
    def __init__(
        self, *,
        intField: _typing.Optional[int]=...,
        optionalIntField: _typing.Optional[int]=...,
        intFieldWithDefault: _typing.Optional[int]=...,
        setField: _typing.Optional[_typing.AbstractSet[str]]=...,
        optionalSetField: _typing.Optional[_typing.AbstractSet[str]]=...,
        mapField: _typing.Optional[_typing.Mapping[str, _typing.Sequence[str]]]=...,
        optionalMapField: _typing.Optional[_typing.Mapping[str, _typing.Sequence[str]]]=...,
        binaryField: _typing.Optional[bytes]=...,
        longField: _typing.Optional[my.another.module.AdaptedType2]=...,
        adaptedLongField: _typing.Optional[my.AdaptedType3]=...,
        doubleAdaptedField: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        intField: _typing.Optional[int]=...,
        optionalIntField: _typing.Optional[int]=...,
        intFieldWithDefault: _typing.Optional[int]=...,
        setField: _typing.Optional[_typing.AbstractSet[str]]=...,
        optionalSetField: _typing.Optional[_typing.AbstractSet[str]]=...,
        mapField: _typing.Optional[_typing.Mapping[str, _typing.Sequence[str]]]=...,
        optionalMapField: _typing.Optional[_typing.Mapping[str, _typing.Sequence[str]]]=...,
        binaryField: _typing.Optional[bytes]=...,
        longField: _typing.Optional[my.another.module.AdaptedType2]=...,
        adaptedLongField: _typing.Optional[my.AdaptedType3]=...,
        doubleAdaptedField: _typing.Optional[int]=...
    ) -> Foo: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, _typing.AbstractSet[str], _typing.AbstractSet[str], _typing.Mapping[str, _typing.Sequence[str]], _typing.Mapping[str, _typing.Sequence[str]], bytes, my.another.module.AdaptedType2, my.AdaptedType3, int]]]: ...


class Baz(_fbthrift_python_types.Union):
    intField: _typing.Final[int] = ...
    setField: _typing.Final[_typing.AbstractSet[str]] = ...
    mapField: _typing.Final[_typing.Mapping[str, _typing.Sequence[str]]] = ...
    binaryField: _typing.Final[bytes] = ...
    longField: _typing.Final[my.another.module.AdaptedType2] = ...
    def __init__(
        self, *,
        intField: _typing.Optional[int]=...,
        setField: _typing.Optional[_typing.AbstractSet[str]]=...,
        mapField: _typing.Optional[_typing.Mapping[str, _typing.Sequence[str]]]=...,
        binaryField: _typing.Optional[bytes]=...,
        longField: _typing.Optional[my.another.module.AdaptedType2]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: Baz.Type = ...
        intField: Baz.Type = ...
        setField: Baz.Type = ...
        mapField: Baz.Type = ...
        binaryField: Baz.Type = ...
        longField: Baz.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, int, _typing.AbstractSet[str], _typing.Mapping[str, _typing.Sequence[str]], bytes, my.another.module.AdaptedType2]) -> Baz: ...
    value: _typing.Final[_typing.Union[None, int, _typing.AbstractSet[str], _typing.Mapping[str, _typing.Sequence[str]], bytes, my.another.module.AdaptedType2]]
    type: Type
    def get_type(self) -> Type:...


class Bar(_fbthrift_python_types.Struct):
    structField: _typing.Final[Foo] = ...
    optionalStructField: _typing.Final[_typing.Optional[Foo]] = ...
    structListField: _typing.Final[_typing.Sequence[Foo]] = ...
    optionalStructListField: _typing.Final[_typing.Optional[_typing.Sequence[Foo]]] = ...
    unionField: _typing.Final[Baz] = ...
    optionalUnionField: _typing.Final[_typing.Optional[Baz]] = ...
    def __init__(
        self, *,
        structField: _typing.Optional[Foo]=...,
        optionalStructField: _typing.Optional[Foo]=...,
        structListField: _typing.Optional[_typing.Sequence[Foo]]=...,
        optionalStructListField: _typing.Optional[_typing.Sequence[Foo]]=...,
        unionField: _typing.Optional[Baz]=...,
        optionalUnionField: _typing.Optional[Baz]=...
    ) -> None: ...

    def __call__(
        self, *,
        structField: _typing.Optional[Foo]=...,
        optionalStructField: _typing.Optional[Foo]=...,
        structListField: _typing.Optional[_typing.Sequence[Foo]]=...,
        optionalStructListField: _typing.Optional[_typing.Sequence[Foo]]=...,
        unionField: _typing.Optional[Baz]=...,
        optionalUnionField: _typing.Optional[Baz]=...
    ) -> Bar: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[Foo, Foo, _typing.Sequence[Foo], _typing.Sequence[Foo], Baz, Baz]]]: ...


class StructWithFieldAdapter(_fbthrift_python_types.Struct):
    field: _typing.Final[my.AdaptedType1] = ...
    shared_field: _typing.Final[int] = ...
    opt_shared_field: _typing.Final[_typing.Optional[int]] = ...
    opt_boxed_field: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        field: _typing.Optional[my.AdaptedType1]=...,
        shared_field: _typing.Optional[int]=...,
        opt_shared_field: _typing.Optional[int]=...,
        opt_boxed_field: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        field: _typing.Optional[my.AdaptedType1]=...,
        shared_field: _typing.Optional[int]=...,
        opt_shared_field: _typing.Optional[int]=...,
        opt_boxed_field: _typing.Optional[int]=...
    ) -> StructWithFieldAdapter: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[my.AdaptedType1, int, int, int]]]: ...


class B(_fbthrift_python_types.Struct):
    a: _typing.Final[A] = ...
    def __init__(
        self, *,
        a: _typing.Optional[A]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[A]=...
    ) -> B: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[A]]]: ...


class A(_fbthrift_python_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> A: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...

SetWithAdapter = _typing.Set[str]
StringWithAdapter = str
ListWithElemAdapter = _typing.List[str]
ListWithElemAdapter_withAdapter = _typing.List[str]
MyI64 = my.another.module.AdaptedType2
DoubleTypedefI64 = my.another.module.AdaptedType2
MyI32 = int
FooWithAdapter = Foo
StructWithAdapter = Bar
UnionWithAdapter = Baz
AdaptedA = A


class _fbthrift_Service_func_args(_fbthrift_python_types.Struct):
    arg1: _typing.Final[str] = ...
    arg2: _typing.Final[str] = ...
    arg3: _typing.Final[Foo] = ...

    def __init__(
        self, *,
        arg1: _typing.Optional[str]=...,
        arg2: _typing.Optional[str]=...,
        arg3: _typing.Optional[Foo]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, str, str, Foo]]]: ...


class _fbthrift_Service_func_result(_fbthrift_python_types.Struct):
    success: _typing.Final[int]

    def __init__(
        self, *, success: _typing.Optional[int] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
        ]]]: ...
