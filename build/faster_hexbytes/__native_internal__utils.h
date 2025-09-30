#ifndef MYPYC_NATIVE_INTERNAL_faster_hexbytes____utils_H
#define MYPYC_NATIVE_INTERNAL_faster_hexbytes____utils_H
#include <Python.h>
#include <CPy.h>
#include "__native__utils.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[34];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_faster_hexbytes____utils__internal;
extern CPyModule *CPyModule_faster_hexbytes____utils;
extern PyObject *CPyStatic_faster_hexbytes____utils___globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_binascii;
extern CPyModule *CPyModule_typing;
extern PyObject *CPyStatic_faster_hexbytes____utils___unhexlify;
extern PyObject *CPyDef_faster_hexbytes____utils___to_bytes(PyObject *cpy_r_val);
extern PyObject *CPyPy_faster_hexbytes____utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_faster_hexbytes____utils___hexstr_to_bytes(PyObject *cpy_r_hexstr);
extern PyObject *CPyPy_faster_hexbytes____utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_faster_hexbytes____utils_____top_level__(void);
#endif
