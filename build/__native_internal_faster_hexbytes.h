#ifndef MYPYC_NATIVE_INTERNAL_faster_hexbytes_H
#define MYPYC_NATIVE_INTERNAL_faster_hexbytes_H
#include <Python.h>
#include <CPy.h>
#include "__native_faster_hexbytes.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[87];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_faster_hexbytes__internal;
extern CPyModule *CPyModule_faster_hexbytes;
extern PyObject *CPyStatic_faster_hexbytes___globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_importlib___metadata;
extern CPyModule *CPyModule_faster_hexbytes___main__internal;
extern CPyModule *CPyModule_faster_hexbytes___main;
extern CPyModule *CPyModule_faster_hexbytes____utils__internal;
extern CPyModule *CPyModule_faster_hexbytes____utils;
extern PyObject *CPyStatic__utils___globals;
extern CPyModule *CPyModule_binascii;
extern CPyModule *CPyModule_typing;
extern PyObject *CPyStatic_main___globals;
extern CPyModule *CPyModule_hexbytes___main;
extern CPyModule *CPyModule_mypy_extensions;
extern CPyModule *CPyModule_typing_extensions;
extern char CPyDef_faster_hexbytes_____top_level__(void);
extern PyObject *CPyStatic__utils___unhexlify;
extern PyObject *CPyDef__utils___to_bytes(PyObject *cpy_r_val);
extern PyObject *CPyPy__utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef__utils___hexstr_to_bytes(PyObject *cpy_r_hexstr);
extern PyObject *CPyPy__utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__utils_____top_level__(void);
extern PyObject *CPyStatic_main____bytes_new;
extern PyTypeObject *CPyType_main___HexBytes;
extern PyTypeObject *CPyType_main____HexBytesSubclass1;
extern PyTypeObject *CPyType_main____HexBytesSubclass2;
extern PyTypeObject *CPyType_main____HexBytesSubclass3;
extern PyTypeObject *CPyType_main_____new___3_HexBytes_obj;
extern PyObject *CPyDef_main_____new___3_HexBytes_obj(void);
extern CPyThreadLocal faster_hexbytes___main_____new___3_HexBytes_objObject *main_____new___3_HexBytes_obj_free_instance;
extern PyTypeObject *CPyType_main_____getitem___3_HexBytes_obj;
extern PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void);
extern CPyThreadLocal faster_hexbytes___main_____getitem___3_HexBytes_objObject *main_____getitem___3_HexBytes_obj_free_instance;
extern PyTypeObject *CPyType_main_____repr___3_HexBytes_obj;
extern PyObject *CPyDef_main_____repr___3_HexBytes_obj(void);
extern CPyThreadLocal faster_hexbytes___main_____repr___3_HexBytes_objObject *main_____repr___3_HexBytes_obj_free_instance;
extern PyTypeObject *CPyType_main___to_0x_hex_HexBytes_obj;
extern PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void);
extern CPyThreadLocal faster_hexbytes___main___to_0x_hex_HexBytes_objObject *main___to_0x_hex_HexBytes_obj_free_instance;
extern PyTypeObject *CPyType_main_____reduce___3_HexBytes_obj;
extern PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void);
extern CPyThreadLocal faster_hexbytes___main_____reduce___3_HexBytes_objObject *main_____reduce___3_HexBytes_obj_free_instance;
extern PyObject *CPyDef_main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val);
extern PyObject *CPyPy_main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
extern PyObject *CPyPy_main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
extern PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
extern PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern tuple_T2OT2OO CPyDef_main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
extern PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_main_____top_level__(void);
#endif
