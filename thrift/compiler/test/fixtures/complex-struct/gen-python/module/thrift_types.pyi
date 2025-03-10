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


class MyEnum(_fbthrift_python_types.Enum, enum.Enum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...
    MyValue3: MyEnum = ...
    MyValue4: MyEnum = ...
    MyValue5: MyEnum = ...


class MyStructFloatFieldThrowExp(_fbthrift_python_types.Struct):
    myLongField: _typing.Final[int] = ...
    MyByteField: _typing.Final[int] = ...
    myStringField: _typing.Final[str] = ...
    myFloatField: _typing.Final[float] = ...
    def __init__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        MyByteField: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myFloatField: _typing.Optional[float]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        MyByteField: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myFloatField: _typing.Optional[float]=...
    ) -> MyStructFloatFieldThrowExp: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, str, float]]]: ...


class MyStructMapFloatThrowExp(_fbthrift_python_types.Struct):
    myLongField: _typing.Final[int] = ...
    mapListOfFloats: _typing.Final[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]] = ...
    def __init__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        mapListOfFloats: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        mapListOfFloats: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> MyStructMapFloatThrowExp: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, _typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]]]: ...


class MyStruct(_fbthrift_python_types.Struct):
    MyIntField: _typing.Final[int] = ...
    MyStringField: _typing.Final[str] = ...
    MyDataField: _typing.Final[MyDataItem] = ...
    myEnum: _typing.Final[MyEnum] = ...
    MyBoolField: _typing.Final[bool] = ...
    MyByteField: _typing.Final[int] = ...
    MyShortField: _typing.Final[int] = ...
    MyLongField: _typing.Final[int] = ...
    MyDoubleField: _typing.Final[float] = ...
    lDouble: _typing.Final[_typing.Sequence[float]] = ...
    lShort: _typing.Final[_typing.Sequence[int]] = ...
    lInteger: _typing.Final[_typing.Sequence[int]] = ...
    lLong: _typing.Final[_typing.Sequence[int]] = ...
    lString: _typing.Final[_typing.Sequence[str]] = ...
    lBool: _typing.Final[_typing.Sequence[bool]] = ...
    lByte: _typing.Final[_typing.Sequence[int]] = ...
    mShortString: _typing.Final[_typing.Mapping[int, str]] = ...
    mIntegerString: _typing.Final[_typing.Mapping[int, str]] = ...
    mStringMyStruct: _typing.Final[_typing.Mapping[str, MyStruct]] = ...
    mStringBool: _typing.Final[_typing.Mapping[str, bool]] = ...
    mIntegerInteger: _typing.Final[_typing.Mapping[int, int]] = ...
    mIntegerBool: _typing.Final[_typing.Mapping[int, bool]] = ...
    sShort: _typing.Final[_typing.AbstractSet[int]] = ...
    sMyStruct: _typing.Final[_typing.AbstractSet[MyStruct]] = ...
    sLong: _typing.Final[_typing.AbstractSet[int]] = ...
    sString: _typing.Final[_typing.AbstractSet[str]] = ...
    sByte: _typing.Final[_typing.AbstractSet[int]] = ...
    mListList: _typing.Final[_typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]] = ...
    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[MyDataItem]=...,
        myEnum: _typing.Optional[MyEnum]=...,
        MyBoolField: _typing.Optional[bool]=...,
        MyByteField: _typing.Optional[int]=...,
        MyShortField: _typing.Optional[int]=...,
        MyLongField: _typing.Optional[int]=...,
        MyDoubleField: _typing.Optional[float]=...,
        lDouble: _typing.Optional[_typing.Sequence[float]]=...,
        lShort: _typing.Optional[_typing.Sequence[int]]=...,
        lInteger: _typing.Optional[_typing.Sequence[int]]=...,
        lLong: _typing.Optional[_typing.Sequence[int]]=...,
        lString: _typing.Optional[_typing.Sequence[str]]=...,
        lBool: _typing.Optional[_typing.Sequence[bool]]=...,
        lByte: _typing.Optional[_typing.Sequence[int]]=...,
        mShortString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mIntegerString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mStringMyStruct: _typing.Optional[_typing.Mapping[str, MyStruct]]=...,
        mStringBool: _typing.Optional[_typing.Mapping[str, bool]]=...,
        mIntegerInteger: _typing.Optional[_typing.Mapping[int, int]]=...,
        mIntegerBool: _typing.Optional[_typing.Mapping[int, bool]]=...,
        sShort: _typing.Optional[_typing.AbstractSet[int]]=...,
        sMyStruct: _typing.Optional[_typing.AbstractSet[MyStruct]]=...,
        sLong: _typing.Optional[_typing.AbstractSet[int]]=...,
        sString: _typing.Optional[_typing.AbstractSet[str]]=...,
        sByte: _typing.Optional[_typing.AbstractSet[int]]=...,
        mListList: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[MyDataItem]=...,
        myEnum: _typing.Optional[MyEnum]=...,
        MyBoolField: _typing.Optional[bool]=...,
        MyByteField: _typing.Optional[int]=...,
        MyShortField: _typing.Optional[int]=...,
        MyLongField: _typing.Optional[int]=...,
        MyDoubleField: _typing.Optional[float]=...,
        lDouble: _typing.Optional[_typing.Sequence[float]]=...,
        lShort: _typing.Optional[_typing.Sequence[int]]=...,
        lInteger: _typing.Optional[_typing.Sequence[int]]=...,
        lLong: _typing.Optional[_typing.Sequence[int]]=...,
        lString: _typing.Optional[_typing.Sequence[str]]=...,
        lBool: _typing.Optional[_typing.Sequence[bool]]=...,
        lByte: _typing.Optional[_typing.Sequence[int]]=...,
        mShortString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mIntegerString: _typing.Optional[_typing.Mapping[int, str]]=...,
        mStringMyStruct: _typing.Optional[_typing.Mapping[str, MyStruct]]=...,
        mStringBool: _typing.Optional[_typing.Mapping[str, bool]]=...,
        mIntegerInteger: _typing.Optional[_typing.Mapping[int, int]]=...,
        mIntegerBool: _typing.Optional[_typing.Mapping[int, bool]]=...,
        sShort: _typing.Optional[_typing.AbstractSet[int]]=...,
        sMyStruct: _typing.Optional[_typing.AbstractSet[MyStruct]]=...,
        sLong: _typing.Optional[_typing.AbstractSet[int]]=...,
        sString: _typing.Optional[_typing.AbstractSet[str]]=...,
        sByte: _typing.Optional[_typing.AbstractSet[int]]=...,
        mListList: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]]=...
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyDataItem, MyEnum, bool, int, int, int, float, _typing.Sequence[float], _typing.Sequence[int], _typing.Sequence[int], _typing.Sequence[int], _typing.Sequence[str], _typing.Sequence[bool], _typing.Sequence[int], _typing.Mapping[int, str], _typing.Mapping[int, str], _typing.Mapping[str, MyStruct], _typing.Mapping[str, bool], _typing.Mapping[int, int], _typing.Mapping[int, bool], _typing.AbstractSet[int], _typing.AbstractSet[MyStruct], _typing.AbstractSet[int], _typing.AbstractSet[str], _typing.AbstractSet[int], _typing.Mapping[_typing.Sequence[int], _typing.Sequence[int]]]]]: ...


class SimpleStruct(_fbthrift_python_types.Struct):
    age: _typing.Final[int] = ...
    name: _typing.Final[str] = ...
    def __init__(
        self, *,
        age: _typing.Optional[int]=...,
        name: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        age: _typing.Optional[int]=...,
        name: _typing.Optional[str]=...
    ) -> SimpleStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str]]]: ...


class defaultStruct(_fbthrift_python_types.Struct):
    myLongDFset: _typing.Final[int] = ...
    myLongDF: _typing.Final[int] = ...
    portDFset: _typing.Final[int] = ...
    portNum: _typing.Final[int] = ...
    myBinaryDFset: _typing.Final[bytes] = ...
    myBinary: _typing.Final[bytes] = ...
    myByteDFSet: _typing.Final[int] = ...
    myByte: _typing.Final[int] = ...
    myDoubleDFset: _typing.Final[float] = ...
    myDoubleDFZero: _typing.Final[float] = ...
    myDouble: _typing.Final[float] = ...
    field3: _typing.Final[_typing.Mapping[int, str]] = ...
    myList: _typing.Final[_typing.Sequence[MyEnum]] = ...
    mySet: _typing.Final[_typing.AbstractSet[str]] = ...
    simpleStruct: _typing.Final[SimpleStruct] = ...
    listStructDFset: _typing.Final[_typing.Sequence[SimpleStruct]] = ...
    myUnion: _typing.Final[MyUnion] = ...
    listUnionDFset: _typing.Final[_typing.Sequence[MyUnion]] = ...
    mapNestlistStructDfSet: _typing.Final[_typing.Mapping[int, _typing.Sequence[SimpleStruct]]] = ...
    mapJavaTypeDFset: _typing.Final[_typing.Mapping[int, str]] = ...
    emptyMap: _typing.Final[_typing.Mapping[int, int]] = ...
    enumMapDFset: _typing.Final[_typing.Mapping[str, _typing.Mapping[int, MyEnum]]] = ...
    def __init__(
        self, *,
        myLongDFset: _typing.Optional[int]=...,
        myLongDF: _typing.Optional[int]=...,
        portDFset: _typing.Optional[int]=...,
        portNum: _typing.Optional[int]=...,
        myBinaryDFset: _typing.Optional[bytes]=...,
        myBinary: _typing.Optional[bytes]=...,
        myByteDFSet: _typing.Optional[int]=...,
        myByte: _typing.Optional[int]=...,
        myDoubleDFset: _typing.Optional[float]=...,
        myDoubleDFZero: _typing.Optional[float]=...,
        myDouble: _typing.Optional[float]=...,
        field3: _typing.Optional[_typing.Mapping[int, str]]=...,
        myList: _typing.Optional[_typing.Sequence[MyEnum]]=...,
        mySet: _typing.Optional[_typing.AbstractSet[str]]=...,
        simpleStruct: _typing.Optional[SimpleStruct]=...,
        listStructDFset: _typing.Optional[_typing.Sequence[SimpleStruct]]=...,
        myUnion: _typing.Optional[MyUnion]=...,
        listUnionDFset: _typing.Optional[_typing.Sequence[MyUnion]]=...,
        mapNestlistStructDfSet: _typing.Optional[_typing.Mapping[int, _typing.Sequence[SimpleStruct]]]=...,
        mapJavaTypeDFset: _typing.Optional[_typing.Mapping[int, str]]=...,
        emptyMap: _typing.Optional[_typing.Mapping[int, int]]=...,
        enumMapDFset: _typing.Optional[_typing.Mapping[str, _typing.Mapping[int, MyEnum]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongDFset: _typing.Optional[int]=...,
        myLongDF: _typing.Optional[int]=...,
        portDFset: _typing.Optional[int]=...,
        portNum: _typing.Optional[int]=...,
        myBinaryDFset: _typing.Optional[bytes]=...,
        myBinary: _typing.Optional[bytes]=...,
        myByteDFSet: _typing.Optional[int]=...,
        myByte: _typing.Optional[int]=...,
        myDoubleDFset: _typing.Optional[float]=...,
        myDoubleDFZero: _typing.Optional[float]=...,
        myDouble: _typing.Optional[float]=...,
        field3: _typing.Optional[_typing.Mapping[int, str]]=...,
        myList: _typing.Optional[_typing.Sequence[MyEnum]]=...,
        mySet: _typing.Optional[_typing.AbstractSet[str]]=...,
        simpleStruct: _typing.Optional[SimpleStruct]=...,
        listStructDFset: _typing.Optional[_typing.Sequence[SimpleStruct]]=...,
        myUnion: _typing.Optional[MyUnion]=...,
        listUnionDFset: _typing.Optional[_typing.Sequence[MyUnion]]=...,
        mapNestlistStructDfSet: _typing.Optional[_typing.Mapping[int, _typing.Sequence[SimpleStruct]]]=...,
        mapJavaTypeDFset: _typing.Optional[_typing.Mapping[int, str]]=...,
        emptyMap: _typing.Optional[_typing.Mapping[int, int]]=...,
        enumMapDFset: _typing.Optional[_typing.Mapping[str, _typing.Mapping[int, MyEnum]]]=...
    ) -> defaultStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, int, int, bytes, bytes, int, int, float, float, float, _typing.Mapping[int, str], _typing.Sequence[MyEnum], _typing.AbstractSet[str], SimpleStruct, _typing.Sequence[SimpleStruct], MyUnion, _typing.Sequence[MyUnion], _typing.Mapping[int, _typing.Sequence[SimpleStruct]], _typing.Mapping[int, str], _typing.Mapping[int, int], _typing.Mapping[str, _typing.Mapping[int, MyEnum]]]]]: ...


class MyStructTypeDef(_fbthrift_python_types.Struct):
    myLongField: _typing.Final[int] = ...
    myLongTypeDef: _typing.Final[int] = ...
    myStringField: _typing.Final[str] = ...
    myStringTypedef: _typing.Final[str] = ...
    myMapField: _typing.Final[_typing.Mapping[int, str]] = ...
    myMapTypedef: _typing.Final[_typing.Mapping[int, str]] = ...
    myListField: _typing.Final[_typing.Sequence[float]] = ...
    myListTypedef: _typing.Final[_typing.Sequence[float]] = ...
    myMapListOfTypeDef: _typing.Final[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]] = ...
    def __init__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        myLongTypeDef: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myStringTypedef: _typing.Optional[str]=...,
        myMapField: _typing.Optional[_typing.Mapping[int, str]]=...,
        myMapTypedef: _typing.Optional[_typing.Mapping[int, str]]=...,
        myListField: _typing.Optional[_typing.Sequence[float]]=...,
        myListTypedef: _typing.Optional[_typing.Sequence[float]]=...,
        myMapListOfTypeDef: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        myLongField: _typing.Optional[int]=...,
        myLongTypeDef: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...,
        myStringTypedef: _typing.Optional[str]=...,
        myMapField: _typing.Optional[_typing.Mapping[int, str]]=...,
        myMapTypedef: _typing.Optional[_typing.Mapping[int, str]]=...,
        myListField: _typing.Optional[_typing.Sequence[float]]=...,
        myListTypedef: _typing.Optional[_typing.Sequence[float]]=...,
        myMapListOfTypeDef: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]=...
    ) -> MyStructTypeDef: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int, str, str, _typing.Mapping[int, str], _typing.Mapping[int, str], _typing.Sequence[float], _typing.Sequence[float], _typing.Mapping[int, _typing.Sequence[_typing.Sequence[float]]]]]]: ...


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
    complexNestedStruct: _typing.Final[ComplexNestedStruct] = ...
    longValue: _typing.Final[int] = ...
    intValue: _typing.Final[int] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=...,
        myStruct: _typing.Optional[MyStruct]=...,
        myDataItem: _typing.Optional[MyDataItem]=...,
        complexNestedStruct: _typing.Optional[ComplexNestedStruct]=...,
        longValue: _typing.Optional[int]=...,
        intValue: _typing.Optional[int]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MyUnion.Type = ...
        myEnum: MyUnion.Type = ...
        myStruct: MyUnion.Type = ...
        myDataItem: MyUnion.Type = ...
        complexNestedStruct: MyUnion.Type = ...
        longValue: MyUnion.Type = ...
        intValue: MyUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, MyStruct, MyDataItem, ComplexNestedStruct, int, int]) -> MyUnion: ...
    value: _typing.Final[_typing.Union[None, MyEnum, MyStruct, MyDataItem, ComplexNestedStruct, int, int]]
    type: Type
    def get_type(self) -> Type:...


class MyUnionFloatFieldThrowExp(_fbthrift_python_types.Union):
    myEnum: _typing.Final[MyEnum] = ...
    setFloat: _typing.Final[_typing.Sequence[_typing.Sequence[float]]] = ...
    myDataItem: _typing.Final[MyDataItem] = ...
    complexNestedStruct: _typing.Final[ComplexNestedStruct] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=...,
        setFloat: _typing.Optional[_typing.Sequence[_typing.Sequence[float]]]=...,
        myDataItem: _typing.Optional[MyDataItem]=...,
        complexNestedStruct: _typing.Optional[ComplexNestedStruct]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MyUnionFloatFieldThrowExp.Type = ...
        myEnum: MyUnionFloatFieldThrowExp.Type = ...
        setFloat: MyUnionFloatFieldThrowExp.Type = ...
        myDataItem: MyUnionFloatFieldThrowExp.Type = ...
        complexNestedStruct: MyUnionFloatFieldThrowExp.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, _typing.Sequence[_typing.Sequence[float]], MyDataItem, ComplexNestedStruct]) -> MyUnionFloatFieldThrowExp: ...
    value: _typing.Final[_typing.Union[None, MyEnum, _typing.Sequence[_typing.Sequence[float]], MyDataItem, ComplexNestedStruct]]
    type: Type
    def get_type(self) -> Type:...


class ComplexNestedStruct(_fbthrift_python_types.Struct):
    setOfSetOfInt: _typing.Final[_typing.AbstractSet[_typing.AbstractSet[int]]] = ...
    listofListOfListOfListOfEnum: _typing.Final[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[MyEnum]]]]] = ...
    listOfListOfMyStruct: _typing.Final[_typing.Sequence[_typing.Sequence[MyStruct]]] = ...
    setOfListOfListOfLong: _typing.Final[_typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]] = ...
    setOfSetOfsetOfLong: _typing.Final[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]] = ...
    mapStructListOfListOfLong: _typing.Final[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[MyStruct]]]] = ...
    mKeyStructValInt: _typing.Final[_typing.Mapping[MyStruct, int]] = ...
    listOfMapKeyIntValInt: _typing.Final[_typing.Sequence[_typing.Mapping[int, int]]] = ...
    listOfMapKeyStrValList: _typing.Final[_typing.Sequence[_typing.Mapping[str, _typing.Sequence[MyStruct]]]] = ...
    mapKeySetValLong: _typing.Final[_typing.Mapping[_typing.AbstractSet[int], int]] = ...
    mapKeyListValLong: _typing.Final[_typing.Mapping[_typing.Sequence[str], int]] = ...
    mapKeyMapValMap: _typing.Final[_typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]]] = ...
    mapKeySetValMap: _typing.Final[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]] = ...
    NestedMaps: _typing.Final[_typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]]] = ...
    mapKeyIntValList: _typing.Final[_typing.Mapping[int, _typing.Sequence[MyStruct]]] = ...
    mapKeyIntValSet: _typing.Final[_typing.Mapping[int, _typing.AbstractSet[bool]]] = ...
    mapKeySetValInt: _typing.Final[_typing.Mapping[_typing.AbstractSet[bool], MyEnum]] = ...
    mapKeyListValSet: _typing.Final[_typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]] = ...
    def __init__(
        self, *,
        setOfSetOfInt: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[int]]]=...,
        listofListOfListOfListOfEnum: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[MyEnum]]]]]=...,
        listOfListOfMyStruct: _typing.Optional[_typing.Sequence[_typing.Sequence[MyStruct]]]=...,
        setOfListOfListOfLong: _typing.Optional[_typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]]=...,
        setOfSetOfsetOfLong: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]]=...,
        mapStructListOfListOfLong: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[MyStruct]]]]=...,
        mKeyStructValInt: _typing.Optional[_typing.Mapping[MyStruct, int]]=...,
        listOfMapKeyIntValInt: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
        listOfMapKeyStrValList: _typing.Optional[_typing.Sequence[_typing.Mapping[str, _typing.Sequence[MyStruct]]]]=...,
        mapKeySetValLong: _typing.Optional[_typing.Mapping[_typing.AbstractSet[int], int]]=...,
        mapKeyListValLong: _typing.Optional[_typing.Mapping[_typing.Sequence[str], int]]=...,
        mapKeyMapValMap: _typing.Optional[_typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]]]=...,
        mapKeySetValMap: _typing.Optional[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]]=...,
        NestedMaps: _typing.Optional[_typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]]]=...,
        mapKeyIntValList: _typing.Optional[_typing.Mapping[int, _typing.Sequence[MyStruct]]]=...,
        mapKeyIntValSet: _typing.Optional[_typing.Mapping[int, _typing.AbstractSet[bool]]]=...,
        mapKeySetValInt: _typing.Optional[_typing.Mapping[_typing.AbstractSet[bool], MyEnum]]=...,
        mapKeyListValSet: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        setOfSetOfInt: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[int]]]=...,
        listofListOfListOfListOfEnum: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[MyEnum]]]]]=...,
        listOfListOfMyStruct: _typing.Optional[_typing.Sequence[_typing.Sequence[MyStruct]]]=...,
        setOfListOfListOfLong: _typing.Optional[_typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]]]=...,
        setOfSetOfsetOfLong: _typing.Optional[_typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]]]=...,
        mapStructListOfListOfLong: _typing.Optional[_typing.Mapping[int, _typing.Sequence[_typing.Sequence[MyStruct]]]]=...,
        mKeyStructValInt: _typing.Optional[_typing.Mapping[MyStruct, int]]=...,
        listOfMapKeyIntValInt: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
        listOfMapKeyStrValList: _typing.Optional[_typing.Sequence[_typing.Mapping[str, _typing.Sequence[MyStruct]]]]=...,
        mapKeySetValLong: _typing.Optional[_typing.Mapping[_typing.AbstractSet[int], int]]=...,
        mapKeyListValLong: _typing.Optional[_typing.Mapping[_typing.Sequence[str], int]]=...,
        mapKeyMapValMap: _typing.Optional[_typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]]]=...,
        mapKeySetValMap: _typing.Optional[_typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]]]=...,
        NestedMaps: _typing.Optional[_typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]]]=...,
        mapKeyIntValList: _typing.Optional[_typing.Mapping[int, _typing.Sequence[MyStruct]]]=...,
        mapKeyIntValSet: _typing.Optional[_typing.Mapping[int, _typing.AbstractSet[bool]]]=...,
        mapKeySetValInt: _typing.Optional[_typing.Mapping[_typing.AbstractSet[bool], MyEnum]]=...,
        mapKeyListValSet: _typing.Optional[_typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]]=...
    ) -> ComplexNestedStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.AbstractSet[_typing.AbstractSet[int]], _typing.Sequence[_typing.Sequence[_typing.Sequence[_typing.Sequence[MyEnum]]]], _typing.Sequence[_typing.Sequence[MyStruct]], _typing.AbstractSet[_typing.Sequence[_typing.Sequence[int]]], _typing.AbstractSet[_typing.AbstractSet[_typing.AbstractSet[int]]], _typing.Mapping[int, _typing.Sequence[_typing.Sequence[MyStruct]]], _typing.Mapping[MyStruct, int], _typing.Sequence[_typing.Mapping[int, int]], _typing.Sequence[_typing.Mapping[str, _typing.Sequence[MyStruct]]], _typing.Mapping[_typing.AbstractSet[int], int], _typing.Mapping[_typing.Sequence[str], int], _typing.Mapping[_typing.Mapping[int, str], _typing.Mapping[int, str]], _typing.Mapping[_typing.AbstractSet[_typing.Sequence[int]], _typing.Mapping[_typing.Sequence[_typing.AbstractSet[str]], str]], _typing.Mapping[_typing.Mapping[_typing.Mapping[int, str], str], _typing.Mapping[int, str]], _typing.Mapping[int, _typing.Sequence[MyStruct]], _typing.Mapping[int, _typing.AbstractSet[bool]], _typing.Mapping[_typing.AbstractSet[bool], MyEnum], _typing.Mapping[_typing.Sequence[int], _typing.AbstractSet[_typing.Mapping[float, str]]]]]]: ...


class TypeRemapped(_fbthrift_python_types.Struct):
    lsMap: _typing.Final[_typing.Mapping[int, str]] = ...
    ioMap: _typing.Final[_typing.Mapping[int, _typing.Mapping[int, int]]] = ...
    BigInteger: _typing.Final[int] = ...
    binaryTestBuffer: _typing.Final[bytes] = ...
    def __init__(
        self, *,
        lsMap: _typing.Optional[_typing.Mapping[int, str]]=...,
        ioMap: _typing.Optional[_typing.Mapping[int, _typing.Mapping[int, int]]]=...,
        BigInteger: _typing.Optional[int]=...,
        binaryTestBuffer: _typing.Optional[bytes]=...
    ) -> None: ...

    def __call__(
        self, *,
        lsMap: _typing.Optional[_typing.Mapping[int, str]]=...,
        ioMap: _typing.Optional[_typing.Mapping[int, _typing.Mapping[int, int]]]=...,
        BigInteger: _typing.Optional[int]=...,
        binaryTestBuffer: _typing.Optional[bytes]=...
    ) -> TypeRemapped: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[int, str], _typing.Mapping[int, _typing.Mapping[int, int]], int, bytes]]]: ...


class emptyXcep(_fbthrift_python_exceptions.GeneratedError):
    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...


class reqXcep(_fbthrift_python_exceptions.GeneratedError):
    message: _typing.Final[str] = ...
    errorCode: _typing.Final[int] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        errorCode: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...


class optXcep(_fbthrift_python_exceptions.GeneratedError):
    message: _typing.Final[_typing.Optional[str]] = ...
    errorCode: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        errorCode: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...


class complexException(_fbthrift_python_exceptions.GeneratedError):
    message: _typing.Final[str] = ...
    listStrings: _typing.Final[_typing.Sequence[str]] = ...
    errorEnum: _typing.Final[MyEnum] = ...
    unionError: _typing.Final[_typing.Optional[MyUnion]] = ...
    structError: _typing.Final[MyStruct] = ...
    lsMap: _typing.Final[_typing.Mapping[int, str]] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        listStrings: _typing.Optional[_typing.Sequence[str]]=...,
        errorEnum: _typing.Optional[MyEnum]=...,
        unionError: _typing.Optional[MyUnion]=...,
        structError: _typing.Optional[MyStruct]=...,
        lsMap: _typing.Optional[_typing.Mapping[int, str]]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, _typing.Sequence[str], MyEnum, MyUnion, MyStruct, _typing.Mapping[int, str]]]]: ...


DEFAULT_PORT_NUM: int = ...

constEnumUnion: MyUnion = ...

stringTypedef = str
longTypeDef = int
mapTypedef = _typing.Dict[int, str]
listTypedef = _typing.List[float]
floatTypedef = float
FMap = _typing.Dict[int, int]
