#ifndef MYPYC_NATIVE_faster_hexbytes____utils_H
#define MYPYC_NATIVE_faster_hexbytes____utils_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif


struct export_table_faster_hexbytes____utils {
    PyObject **CPyStatic_faster_hexbytes____utils___unhexlify;
    PyObject *(*CPyDef_faster_hexbytes____utils___to_bytes)(PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_hexbytes____utils___hexstr_to_bytes)(PyObject *cpy_r_hexstr);
    char (*CPyDef_faster_hexbytes____utils_____top_level__)(void);
};
#endif
