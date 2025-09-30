#ifndef MYPYC_NATIVE_faster_hexbytes___main_H
#define MYPYC_NATIVE_faster_hexbytes___main_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OT2OO
#define MYPYC_DECLARED_tuple_T2OT2OO
typedef struct tuple_T2OT2OO {
    PyObject *f0;
    tuple_T2OO f1;
} tuple_T2OT2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T6OOOOOO
#define MYPYC_DECLARED_tuple_T6OOOOOO
typedef struct tuple_T6OOOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
    PyObject *f5;
} tuple_T6OOOOOO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_hexbytes___main_____new___3_HexBytes_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_hexbytes___main_____getitem___3_HexBytes_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_hexbytes___main_____repr___3_HexBytes_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_hexbytes___main___to_0x_hex_HexBytes_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_hexbytes___main_____reduce___3_HexBytes_objObject;


struct export_table_faster_hexbytes___main {
    PyObject **CPyStatic_faster_hexbytes___main____bytes_new;
    PyTypeObject **CPyType_faster_hexbytes___main___HexBytes;
    PyTypeObject **CPyType_faster_hexbytes___main_____new___3_HexBytes_obj;
    PyObject *(*CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj)(void);
    CPyThreadLocal faster_hexbytes___main_____new___3_HexBytes_objObject **faster_hexbytes___main_____new___3_HexBytes_obj_free_instance;
    PyTypeObject **CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj;
    PyObject *(*CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj)(void);
    CPyThreadLocal faster_hexbytes___main_____getitem___3_HexBytes_objObject **faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance;
    PyTypeObject **CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj;
    PyObject *(*CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj)(void);
    CPyThreadLocal faster_hexbytes___main_____repr___3_HexBytes_objObject **faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance;
    PyTypeObject **CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj;
    PyObject *(*CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj)(void);
    CPyThreadLocal faster_hexbytes___main___to_0x_hex_HexBytes_objObject **faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance;
    PyTypeObject **CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj;
    PyObject *(*CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj)(void);
    CPyThreadLocal faster_hexbytes___main_____reduce___3_HexBytes_objObject **faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance;
    PyObject *(*CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
    PyObject *(*CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    tuple_T2OT2OO (*CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    char (*CPyDef_faster_hexbytes___main_____top_level__)(void);
};
#endif
