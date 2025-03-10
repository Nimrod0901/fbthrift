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
cimport module.types as _module_types
import module.types as _module_types

cimport matching_struct_names.types_reflection as _types_reflection



@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj = make_shared[cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = make_shared[cMyStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStruct", {
          "field": deref(self._cpp_obj).field_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline field_impl(self):

        return (<bytes>deref(self._cpp_obj).field_ref().value()).decode('UTF-8')

    @property
    def field(self):
        return self.field_impl()


    def __hash__(MyStruct self):
        return super().__hash__()

    def __repr__(MyStruct self):
        return super().__repr__()

    def __str__(MyStruct self):
        return super().__str__()


    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStruct](
            self._cpp_obj,
            (<MyStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "matching_struct_names.MyStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cMyStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 1

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[cMyStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class Combo(thrift.py3.types.Struct):
    def __init__(Combo self, **kwargs):
        self._cpp_obj = make_shared[cCombo]()
        self._fields_setter = _fbthrift_types_fields.__Combo_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(Combo self, **kwargs):
        if not kwargs:
            return self
        cdef Combo __fbthrift_inst = Combo.__new__(Combo)
        __fbthrift_inst._cpp_obj = make_shared[cCombo](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__Combo_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("Combo", {
          "listOfOurMyStructLists": deref(self._cpp_obj).listOfOurMyStructLists_ref().has_value(),
          "theirMyStructList": deref(self._cpp_obj).theirMyStructList_ref().has_value(),
          "ourMyStructList": deref(self._cpp_obj).ourMyStructList_ref().has_value(),
          "listOfTheirMyStructList": deref(self._cpp_obj).listOfTheirMyStructList_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cCombo] cpp_obj):
        __fbthrift_inst = <Combo>Combo.__new__(Combo)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline listOfOurMyStructLists_impl(self):

        if self.__fbthrift_cached_listOfOurMyStructLists is None:
            self.__fbthrift_cached_listOfOurMyStructLists = List__List__MyStruct._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).listOfOurMyStructLists_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_listOfOurMyStructLists

    @property
    def listOfOurMyStructLists(self):
        return self.listOfOurMyStructLists_impl()

    cdef inline theirMyStructList_impl(self):

        if self.__fbthrift_cached_theirMyStructList is None:
            self.__fbthrift_cached_theirMyStructList = List__module_MyStruct._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).theirMyStructList_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_theirMyStructList

    @property
    def theirMyStructList(self):
        return self.theirMyStructList_impl()

    cdef inline ourMyStructList_impl(self):

        if self.__fbthrift_cached_ourMyStructList is None:
            self.__fbthrift_cached_ourMyStructList = List__MyStruct._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).ourMyStructList_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_ourMyStructList

    @property
    def ourMyStructList(self):
        return self.ourMyStructList_impl()

    cdef inline listOfTheirMyStructList_impl(self):

        if self.__fbthrift_cached_listOfTheirMyStructList is None:
            self.__fbthrift_cached_listOfTheirMyStructList = List__List__module_MyStruct._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).listOfTheirMyStructList_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_listOfTheirMyStructList

    @property
    def listOfTheirMyStructList(self):
        return self.listOfTheirMyStructList_impl()


    def __hash__(Combo self):
        return super().__hash__()

    def __repr__(Combo self):
        return super().__repr__()

    def __str__(Combo self):
        return super().__str__()


    def __copy__(Combo self):
        cdef shared_ptr[cCombo] cpp_obj = make_shared[cCombo](
            deref(self._cpp_obj)
        )
        return Combo._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cCombo](
            self._cpp_obj,
            (<Combo>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Combo()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cCombo].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "matching_struct_names.Combo"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cCombo](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Combo self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cCombo](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Combo self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cCombo]()
        with nogil:
            needed = serializer.cdeserialize[cCombo](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class List__MyStruct(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__MyStruct):
            self._cpp_obj = (<List__MyStruct> items)._cpp_obj
        else:
            self._cpp_obj = List__MyStruct._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cMyStruct]] c_items):
        __fbthrift_inst = <List__MyStruct>List__MyStruct.__new__(List__MyStruct)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__MyStruct self):
        cdef shared_ptr[vector[cMyStruct]] cpp_obj = make_shared[vector[cMyStruct]](
            deref(self._cpp_obj)
        )
        return List__MyStruct._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[cMyStruct]] _make_instance(object items) except *:
        cdef shared_ptr[vector[cMyStruct]] c_inst = make_shared[vector[cMyStruct]]()
        if items is not None:
            for item in items:
                if not isinstance(item, MyStruct):
                    raise TypeError(f"{item!r} is not of type MyStruct")
                deref(c_inst).push_back(deref((<MyStruct>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__MyStruct._fbthrift_create(
            __list_slice[vector[cMyStruct]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[cMyStruct] citem
        __list_getitem(self._cpp_obj, index, citem)
        return MyStruct._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, MyStruct):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef cMyStruct citem = deref((<MyStruct>item)._cpp_obj)
        cdef std_libcpp.optional[size_t] found = __list_index[vector[cMyStruct]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef cMyStruct citem = deref((<MyStruct>item)._cpp_obj)
        return __list_count[vector[cMyStruct]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__MyStruct()


Sequence.register(List__MyStruct)

@__cython.auto_pickle(False)
cdef class List__List__MyStruct(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__List__MyStruct):
            self._cpp_obj = (<List__List__MyStruct> items)._cpp_obj
        else:
            self._cpp_obj = List__List__MyStruct._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[vector[cMyStruct]]] c_items):
        __fbthrift_inst = <List__List__MyStruct>List__List__MyStruct.__new__(List__List__MyStruct)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__List__MyStruct self):
        cdef shared_ptr[vector[vector[cMyStruct]]] cpp_obj = make_shared[vector[vector[cMyStruct]]](
            deref(self._cpp_obj)
        )
        return List__List__MyStruct._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[vector[cMyStruct]]] _make_instance(object items) except *:
        cdef shared_ptr[vector[vector[cMyStruct]]] c_inst = make_shared[vector[vector[cMyStruct]]]()
        if items is not None:
            for item in items:
                if item is None:
                    raise TypeError("None is not of the type _typing.Sequence[MyStruct]")
                if not isinstance(item, List__MyStruct):
                    item = List__MyStruct(item)
                deref(c_inst).push_back(deref((<List__MyStruct>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__List__MyStruct._fbthrift_create(
            __list_slice[vector[vector[cMyStruct]]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[vector[cMyStruct]] citem
        __list_getitem(self._cpp_obj, index, citem)
        return List__MyStruct._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, List__MyStruct):
            return item
        try:
            return List__MyStruct(item)
        except:
            pass

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef vector[cMyStruct] citem = deref((<List__MyStruct>item)._cpp_obj)
        cdef std_libcpp.optional[size_t] found = __list_index[vector[vector[cMyStruct]]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef vector[cMyStruct] citem = deref((<List__MyStruct>item)._cpp_obj)
        return __list_count[vector[vector[cMyStruct]]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__List__MyStruct()


Sequence.register(List__List__MyStruct)

@__cython.auto_pickle(False)
cdef class List__module_MyStruct(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__module_MyStruct):
            self._cpp_obj = (<List__module_MyStruct> items)._cpp_obj
        else:
            self._cpp_obj = List__module_MyStruct._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[_module_types.cMyStruct]] c_items):
        __fbthrift_inst = <List__module_MyStruct>List__module_MyStruct.__new__(List__module_MyStruct)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__module_MyStruct self):
        cdef shared_ptr[vector[_module_types.cMyStruct]] cpp_obj = make_shared[vector[_module_types.cMyStruct]](
            deref(self._cpp_obj)
        )
        return List__module_MyStruct._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[_module_types.cMyStruct]] _make_instance(object items) except *:
        cdef shared_ptr[vector[_module_types.cMyStruct]] c_inst = make_shared[vector[_module_types.cMyStruct]]()
        if items is not None:
            for item in items:
                if not isinstance(item, _module_types.MyStruct):
                    raise TypeError(f"{item!r} is not of type _module_types.MyStruct")
                deref(c_inst).push_back(deref((<_module_types.MyStruct>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__module_MyStruct._fbthrift_create(
            __list_slice[vector[_module_types.cMyStruct]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[_module_types.cMyStruct] citem
        __list_getitem(self._cpp_obj, index, citem)
        return _module_types.MyStruct._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, _module_types.MyStruct):
            return item

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef _module_types.cMyStruct citem = deref((<_module_types.MyStruct>item)._cpp_obj)
        cdef std_libcpp.optional[size_t] found = __list_index[vector[_module_types.cMyStruct]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef _module_types.cMyStruct citem = deref((<_module_types.MyStruct>item)._cpp_obj)
        return __list_count[vector[_module_types.cMyStruct]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__module_MyStruct()


Sequence.register(List__module_MyStruct)

@__cython.auto_pickle(False)
cdef class List__List__module_MyStruct(thrift.py3.types.List):
    def __init__(self, items=None):
        if isinstance(items, List__List__module_MyStruct):
            self._cpp_obj = (<List__List__module_MyStruct> items)._cpp_obj
        else:
            self._cpp_obj = List__List__module_MyStruct._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[vector[_module_types.cMyStruct]]] c_items):
        __fbthrift_inst = <List__List__module_MyStruct>List__List__module_MyStruct.__new__(List__List__module_MyStruct)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(List__List__module_MyStruct self):
        cdef shared_ptr[vector[vector[_module_types.cMyStruct]]] cpp_obj = make_shared[vector[vector[_module_types.cMyStruct]]](
            deref(self._cpp_obj)
        )
        return List__List__module_MyStruct._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[vector[vector[_module_types.cMyStruct]]] _make_instance(object items) except *:
        cdef shared_ptr[vector[vector[_module_types.cMyStruct]]] c_inst = make_shared[vector[vector[_module_types.cMyStruct]]]()
        if items is not None:
            for item in items:
                if item is None:
                    raise TypeError("None is not of the type _typing.Sequence[_module_types.MyStruct]")
                if not isinstance(item, List__module_MyStruct):
                    item = List__module_MyStruct(item)
                deref(c_inst).push_back(deref((<List__module_MyStruct>item)._cpp_obj))
        return c_inst

    cdef _get_slice(self, slice index_obj):
        cdef int start, stop, step
        start, stop, step = index_obj.indices(deref(self._cpp_obj).size())
        return List__List__module_MyStruct._fbthrift_create(
            __list_slice[vector[vector[_module_types.cMyStruct]]](self._cpp_obj, start, stop, step)
        )

    cdef _get_single_item(self, size_t index):
        cdef shared_ptr[vector[_module_types.cMyStruct]] citem
        __list_getitem(self._cpp_obj, index, citem)
        return List__module_MyStruct._fbthrift_create(citem)

    cdef _check_item_type(self, item):
        if not self or item is None:
            return
        if isinstance(item, List__module_MyStruct):
            return item
        try:
            return List__module_MyStruct(item)
        except:
            pass

    def index(self, item, start=0, stop=None):
        err = ValueError(f'{item} is not in list')
        item = self._check_item_type(item)
        if item is None:
            raise err
        cdef (int, int, int) indices = slice(start, stop).indices(deref(self._cpp_obj).size())
        cdef vector[_module_types.cMyStruct] citem = deref((<List__module_MyStruct>item)._cpp_obj)
        cdef std_libcpp.optional[size_t] found = __list_index[vector[vector[_module_types.cMyStruct]]](self._cpp_obj, indices[0], indices[1], citem)
        if not found.has_value():
            raise err
        return found.value()

    def count(self, item):
        item = self._check_item_type(item)
        if item is None:
            return 0
        cdef vector[_module_types.cMyStruct] citem = deref((<List__module_MyStruct>item)._cpp_obj)
        return __list_count[vector[vector[_module_types.cMyStruct]]](self._cpp_obj, citem)

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__List__List__module_MyStruct()


Sequence.register(List__List__module_MyStruct)

