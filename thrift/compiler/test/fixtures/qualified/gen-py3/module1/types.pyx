#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins

cimport module1.types_reflection as _types_reflection


cdef __EnumData __Enum_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cEnum](), Enum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __EnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __Enum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __Enum_enum_data.get_all_names()

    def __len__(cls):
        return __Enum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __Enum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class Enum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __Enum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module1.Enum"


__SetMetaClass(<PyTypeObject*> Enum, <PyTypeObject*> __EnumMeta)



@__cython.auto_pickle(False)
cdef class Struct(thrift.py3.types.Struct):
    def __init__(Struct self, **kwargs):
        self._cpp_obj = make_shared[cStruct]()
        self._fields_setter = _fbthrift_types_fields.__Struct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(Struct self, **kwargs):
        if not kwargs:
            return self
        cdef Struct __fbthrift_inst = Struct.__new__(Struct)
        __fbthrift_inst._cpp_obj = make_shared[cStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__Struct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("Struct", {
          "first": deref(self._cpp_obj).first_ref().has_value(),
          "second": deref(self._cpp_obj).second_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStruct] cpp_obj):
        __fbthrift_inst = <Struct>Struct.__new__(Struct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline first_impl(self):

        return deref(self._cpp_obj).first_ref().value()

    @property
    def first(self):
        return self.first_impl()

    cdef inline second_impl(self):

        return (<bytes>deref(self._cpp_obj).second_ref().value()).decode('UTF-8')

    @property
    def second(self):
        return self.second_impl()


    def __hash__(Struct self):
        return super().__hash__()

    def __repr__(Struct self):
        return super().__repr__()

    def __str__(Struct self):
        return super().__str__()


    def __copy__(Struct self):
        cdef shared_ptr[cStruct] cpp_obj = make_shared[cStruct](
            deref(self._cpp_obj)
        )
        return Struct._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cStruct](
            self._cpp_obj,
            (<Struct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Struct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module1.Struct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 2

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Struct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Struct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cStruct]()
        with nogil:
            needed = serializer.cdeserialize[cStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class List__Enum(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__Enum):
            self._cpp_obj = (<List__Enum> items)._cpp_obj
        else:
            self._cpp_obj = List__Enum._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cEnum]] c_items):
        __fbthrift_inst = <List__Enum>List__Enum.__new__(List__Enum)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__Enum self):
        cdef shared_ptr[vector[cEnum]] cpp_obj = make_shared[vector[cEnum]](
            deref(self._cpp_obj)
        )
        return List__Enum._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[cEnum]] _make_instance(object items) except *:
        cdef shared_ptr[vector[cEnum]] c_inst = make_shared[vector[cEnum]]()
        if items is not None:
            for item in items:
                if not isinstance(item, Enum):
                    raise TypeError(f"{item!r} is not of type Enum")
                deref(c_inst).push_back(<cEnum><int>item)
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__Enum._fbthrift_create(
            __list_slice[vector[cEnum]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef cEnum citem
        __list_getitem(self._cpp_obj, index, citem)
        return translate_cpp_enum_to_python(Enum, <int> citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, Enum):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef cEnum citem = <cEnum><int>item
        cdef std_libcpp.optional[size_t] found = __list_index[vector[cEnum]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef cEnum citem = <cEnum><int>item
        return __list_count[vector[cEnum]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__Enum()


Sequence.register(List__Enum)

c1 = Struct._fbthrift_create(constant_shared_ptr(cc1()))
e1s = List__Enum._fbthrift_create(constant_shared_ptr(ce1s()))
