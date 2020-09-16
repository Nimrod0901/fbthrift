#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
    default_inst,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins

cimport module.types_reflection as _types_reflection



cdef __UnionTypeEnumData __Nada_union_type_enum_data  = __UnionTypeEnumData.create(
    __createEnumDataForUnionType[cNada](),
    __NadaType,
)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __Nada_Union_TypeMeta(thrift.py3.types.EnumMeta):

    def __get_by_name(cls, str name):
        return __Nada_union_type_enum_data.get_by_name(name)

    def __get_by_value(cls, int value):
        return __Nada_union_type_enum_data.get_by_value(value)

    def __get_all_names(cls):
        return __Nada_union_type_enum_data.get_all_names()

    def __len__(cls):
        return __Nada_union_type_enum_data.size()


@__cython.final
@__cython.auto_pickle(False)
cdef class __NadaType(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __Nada_union_type_enum_data.get_by_name(name)


__SetMetaClass(<PyTypeObject*> __NadaType, <PyTypeObject*> __Nada_Union_TypeMeta)


@__cython.auto_pickle(False)
cdef class Empty(thrift.py3.types.Struct):

    def __init__(
        Empty self, *
    ):
        self._cpp_obj = __fbthrift_move(Empty._make_instance(
          NULL,
          NULL,
        ))

    def __call__(
        Empty self
    ):
        return self

    @staticmethod
    cdef unique_ptr[cEmpty] _make_instance(
        cEmpty* base_instance,
        bint* __isNOTSET
    ) except *:
        cdef unique_ptr[cEmpty] c_inst
        if base_instance:
            c_inst = make_unique[cEmpty](deref(base_instance))
        else:
            c_inst = make_unique[cEmpty]()

        if base_instance:
            # Convert None's to default value. (or unset)
            pass
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        return thrift.py3.types._IsSet("Empty", {
        })

    def __iter__(self):
        yield from ()

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cEmpty] cpp_obj):
        __fbthrift_inst = <Empty>Empty.__new__(Empty)
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        return __fbthrift_inst


    def __hash__(Empty self):
        return  super().__hash__()

    def __copy__(Empty self):
        cdef shared_ptr[cEmpty] cpp_obj = make_shared[cEmpty](
            deref(self._cpp_obj)
        )
        return Empty.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, Empty) and
                isinstance(other, Empty)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cEmpty* cself = (<Empty>self)._cpp_obj.get()
        cdef cEmpty* cother = (<Empty>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Empty()

    cdef __iobuf.IOBuf _serialize(Empty self, __Protocol proto):
        return __iobuf.from_unique_ptr(
            serializer.cserialize[cEmpty](self._cpp_obj.get(), proto).move()
        )

    cdef cuint32_t _deserialize(Empty self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cEmpty]()
        needed = serializer.cdeserialize[cEmpty](buf, self._cpp_obj.get(), proto)
        return needed




@__cython.auto_pickle(False)
cdef class Nada(thrift.py3.types.Union):
    Type = __NadaType

    def __init__(
        self, *
    ):
        self._cpp_obj = __fbthrift_move(Nada._make_instance(
          NULL,
        ))
        self._load_cache()

    @staticmethod
    def fromValue(value):
        if value is None:
            return Nada()
        raise ValueError(f"Unable to derive correct union field for value: {value}")

    @staticmethod
    cdef unique_ptr[cNada] _make_instance(
        cNada* base_instance
    ) except *:
        cdef unique_ptr[cNada] c_inst = make_unique[cNada]()
        cdef bint any_set = False
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return __fbthrift_move_unique(c_inst)

    @staticmethod
    cdef create(shared_ptr[cNada] cpp_obj):
        __fbthrift_inst = <Nada>Nada.__new__(Nada)
        __fbthrift_inst._cpp_obj = __fbthrift_move_shared(cpp_obj)
        __fbthrift_inst._load_cache()
        return __fbthrift_inst


    def __hash__(Nada self):
        return  super().__hash__()

    cdef _load_cache(Nada self):
        self.type = Nada.Type(<int>(deref(self._cpp_obj).getType()))
        cdef int type = self.type.value
        if type == 0:    # Empty
            self.value = None

    def __copy__(Nada self):
        cdef shared_ptr[cNada] cpp_obj = make_shared[cNada](
            deref(self._cpp_obj)
        )
        return Nada.create(__fbthrift_move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, Nada) and
                isinstance(other, Nada)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cNada* cself = (<Nada>self)._cpp_obj.get()
        cdef cNada* cother = (<Nada>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Nada()

    cdef __iobuf.IOBuf _serialize(Nada self, __Protocol proto):
        return __iobuf.from_unique_ptr(
            serializer.cserialize[cNada](self._cpp_obj.get(), proto).move()
        )

    cdef cuint32_t _deserialize(Nada self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cNada]()
        needed = serializer.cdeserialize[cNada](buf, self._cpp_obj.get(), proto)
        # force a cache reload since the underlying data's changed
        self._load_cache()
        return needed


