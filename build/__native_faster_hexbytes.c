#ifndef DIFFCHECK_PLACEHOLDER
#define DIFFCHECK_PLACEHOLDER 0
#endif
#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_faster_hexbytes.h"
#include "__native_internal_faster_hexbytes.h"
static PyMethodDef faster_hexbytesmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_hexbytes(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes__internal, "__name__");
    CPyStatic_faster_hexbytes___globals = PyModule_GetDict(CPyModule_faster_hexbytes__internal);
    if (unlikely(CPyStatic_faster_hexbytes___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_hexbytes_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_hexbytes__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef faster_hexbytesmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_hexbytes",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_hexbytesmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_hexbytes(void)
{
    if (CPyModule_faster_hexbytes__internal) {
        Py_INCREF(CPyModule_faster_hexbytes__internal);
        return CPyModule_faster_hexbytes__internal;
    }
    CPyModule_faster_hexbytes__internal = PyModule_Create(&faster_hexbytesmodule);
    if (unlikely(CPyModule_faster_hexbytes__internal == NULL))
        goto fail;
    if (CPyExec_faster_hexbytes(CPyModule_faster_hexbytes__internal) != 0)
        goto fail;
    return CPyModule_faster_hexbytes__internal;
    fail:
    return NULL;
}

char CPyDef_faster_hexbytes_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", -1, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('version',) */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('__version',) */
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'importlib.metadata' */
    cpy_r_r8 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r9 = CPyImport_ImportFromMany(cpy_r_r7, cpy_r_r5, cpy_r_r6, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    CPyModule_importlib___metadata = cpy_r_r9;
    CPy_INCREF(CPyModule_importlib___metadata);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('HexBytes',) */
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r12 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r13 = CPyImport_ImportFromMany(cpy_r_r11, cpy_r_r10, cpy_r_r10, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    CPyModule_faster_hexbytes___main = cpy_r_r13;
    CPy_INCREF(CPyModule_faster_hexbytes___main);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_r14);
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_r18 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__all__' */
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r18, cpy_r_r19, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r15);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    cpy_r_r22 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hexbytes' */
    cpy_r_r23 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__version' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/__init__.py", "<module>", 11, CPyStatic_faster_hexbytes___globals, "str", cpy_r_r28);
        goto CPyL12;
    }
    cpy_r_r30 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r31 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__version__' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
}
static PyMethodDef _utilsmodule_methods[] = {
    {"to_bytes", (PyCFunction)CPyPy__utils___to_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("to_bytes(val)\n--\n\n") /* docstring */},
    {"hexstr_to_bytes", (PyCFunction)CPyPy__utils___hexstr_to_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("hexstr_to_bytes(hexstr)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_hexbytes____utils(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes____utils__internal, "__name__");
    CPyStatic__utils___globals = PyModule_GetDict(CPyModule_faster_hexbytes____utils__internal);
    if (unlikely(CPyStatic__utils___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_hexbytes____utils__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__utils___unhexlify);
    CPyStatic__utils___unhexlify = NULL;
    return -1;
}
static struct PyModuleDef _utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_hexbytes._utils",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    _utilsmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_hexbytes____utils(void)
{
    if (CPyModule_faster_hexbytes____utils__internal) {
        Py_INCREF(CPyModule_faster_hexbytes____utils__internal);
        return CPyModule_faster_hexbytes____utils__internal;
    }
    CPyModule_faster_hexbytes____utils__internal = PyModule_Create(&_utilsmodule);
    if (unlikely(CPyModule_faster_hexbytes____utils__internal == NULL))
        goto fail;
    if (CPyExec_faster_hexbytes____utils(CPyModule_faster_hexbytes____utils__internal) != 0)
        goto fail;
    return CPyModule_faster_hexbytes____utils__internal;
    fail:
    return NULL;
}

PyObject *CPyDef__utils___to_bytes(PyObject *cpy_r_val) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_r0 = PyBytes_Check(cpy_r_val);
    if (!cpy_r_r0) goto CPyL3;
    CPy_INCREF(cpy_r_val);
    if (likely(PyBytes_Check(cpy_r_val) || PyByteArray_Check(cpy_r_val)))
        cpy_r_r1 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 19, CPyStatic__utils___globals, "bytes", cpy_r_val);
        goto CPyL51;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = PyUnicode_Check(cpy_r_val);
    if (!cpy_r_r2) goto CPyL7;
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r3 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 21, CPyStatic__utils___globals, "str", cpy_r_val);
        goto CPyL51;
    }
    cpy_r_r4 = CPyDef__utils___hexstr_to_bytes(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r5 = PyByteArray_Check(cpy_r_val);
    if (!cpy_r_r5) goto CPyL11;
    cpy_r_r6 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r7[1] = {cpy_r_val};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r9) || PyByteArray_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 23, CPyStatic__utils___globals, "bytes", cpy_r_r9);
        goto CPyL51;
    }
    return cpy_r_r10;
CPyL11: ;
    cpy_r_r11 = PyBool_Check(cpy_r_val);
    if (!cpy_r_r11) goto CPyL17;
    if (unlikely(!PyBool_Check(cpy_r_val))) {
        CPy_TypeError("bool", cpy_r_val); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_val == Py_True;
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    if (!cpy_r_r12) goto CPyL15;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* b'\x01' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r13;
    goto CPyL16;
CPyL15: ;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* b'\x00' */
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
CPyL16: ;
    return cpy_r_r14;
CPyL17: ;
    cpy_r_r16 = PyLong_Check(cpy_r_val);
    if (!cpy_r_r16) goto CPyL37;
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r17 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r17 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r18 = cpy_r_r17 & 1;
    cpy_r_r19 = cpy_r_r18 != 0;
    if (cpy_r_r19) goto CPyL21;
    cpy_r_r20 = 0 & 1;
    cpy_r_r21 = cpy_r_r20 != 0;
    if (!cpy_r_r21) goto CPyL22;
CPyL21: ;
    cpy_r_r22 = CPyTagged_IsLt_(cpy_r_r17, 0);
    cpy_r_r23 = cpy_r_r22;
    goto CPyL23;
CPyL22: ;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)0;
    cpy_r_r23 = cpy_r_r24;
CPyL23: ;
    CPyTagged_DECREF(cpy_r_r17);
    if (!cpy_r_r23) goto CPyL31;
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Cannot convert negative integer ' */
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r26 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r27 = CPyTagged_Str(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' to bytes' */
    cpy_r_r29 = CPyStr_Build(3, cpy_r_r25, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r29};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r29);
    CPy_Raise(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL31: ;
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r36 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r36 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL53;
    }
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r36);
    PyObject *cpy_r_r41[1] = {cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals, "str", cpy_r_r43);
        goto CPyL51;
    }
    cpy_r_r45 = CPyDef__utils___to_bytes(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    return cpy_r_r45;
CPyL37: ;
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'memoryview' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r49 = PyObject_IsInstance(cpy_r_val, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r51 = cpy_r_r49;
    if (!cpy_r_r51) goto CPyL43;
    cpy_r_r52 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r53[1] = {cpy_r_val};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r55) || PyByteArray_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 34, CPyStatic__utils___globals, "bytes", cpy_r_r55);
        goto CPyL51;
    }
    return cpy_r_r56;
CPyL43: ;
    cpy_r_r57 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Cannot convert ' */
    cpy_r_r59 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '{!r:{}}' */
    cpy_r_r60 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r61 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'format' */
    PyObject *cpy_r_r62[3] = {cpy_r_r59, cpy_r_val, cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r63, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r65 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' of type ' */
    cpy_r_r66 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '{:{}}' */
    cpy_r_r67 = CPy_TYPE(cpy_r_val);
    cpy_r_r68 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '' */
    cpy_r_r69 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'format' */
    PyObject *cpy_r_r70[3] = {cpy_r_r66, cpy_r_r67, cpy_r_r68};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r71, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r73 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' to bytes' */
    cpy_r_r74 = PyList_New(5);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL56;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_r58);
    *(PyObject * *)cpy_r_r76 = cpy_r_r58;
    cpy_r_r77 = cpy_r_r76 + 8;
    *(PyObject * *)cpy_r_r77 = cpy_r_r64;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r78 = cpy_r_r76 + 16;
    *(PyObject * *)cpy_r_r78 = cpy_r_r65;
    cpy_r_r79 = cpy_r_r76 + 24;
    *(PyObject * *)cpy_r_r79 = cpy_r_r72;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r80 = cpy_r_r76 + 32;
    *(PyObject * *)cpy_r_r80 = cpy_r_r73;
    cpy_r_r81 = PyUnicode_Join(cpy_r_r57, cpy_r_r74);
    CPy_DECREF_NO_IMM(cpy_r_r74);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r82 = CPyModule_builtins;
    cpy_r_r83 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeError' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r85[1] = {cpy_r_r81};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 1, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r81);
    CPy_Raise(cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL52: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL51;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_r36);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r72);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL51;
}

PyObject *CPyPy__utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"val", 0};
    static CPyArg_Parser parser = {"O:to_bytes", kwlist, 0};
    PyObject *obj_val;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_val)) {
        return NULL;
    }
    PyObject *arg_val;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL1;
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    if (PyLong_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    CPy_TypeError("union[bytes, str, object, bool, int]", obj_val); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef__utils___to_bytes(arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
    return NULL;
}

PyObject *CPyDef__utils___hexstr_to_bytes(PyObject *cpy_r_hexstr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_non_prefixed_hex;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_padded_hex;
    PyObject *cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0X' */
    CPy_INCREF(cpy_r_r0);
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp2);
    PyObject *__tmp3 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3);
    cpy_r_r4 = CPyStr_Startswith(cpy_r_hexstr, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL31;
    }
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStr_GetSlice(cpy_r_hexstr, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 41, CPyStatic__utils___globals, "str", cpy_r_r5);
        goto CPyL31;
    }
    cpy_r_non_prefixed_hex = cpy_r_r6;
    goto CPyL6;
CPyL5: ;
    CPy_INCREF(cpy_r_hexstr);
    cpy_r_non_prefixed_hex = cpy_r_hexstr;
CPyL6: ;
    cpy_r_r7 = CPyStr_Size_size_t(cpy_r_hexstr);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL32;
    }
    cpy_r_r9 = cpy_r_r7 << 1;
    cpy_r_r10 = CPyTagged_Remainder(cpy_r_r9, 4);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL32;
    }
    cpy_r_r11 = cpy_r_r10 != 0;
    CPyTagged_DECREF(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0' */
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r12, cpy_r_non_prefixed_hex);
    CPy_DECREF(cpy_r_non_prefixed_hex);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL31;
    }
    cpy_r_padded_hex = cpy_r_r13;
    goto CPyL12;
CPyL11: ;
    cpy_r_padded_hex = cpy_r_non_prefixed_hex;
CPyL12: ;
    cpy_r_r14 = PyUnicode_AsASCIIString(cpy_r_padded_hex);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL14;
    } else
        goto CPyL33;
CPyL13: ;
    goto CPyL25;
CPyL14: ;
    cpy_r_r15 = CPy_CatchError();
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'UnicodeDecodeError' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL34;
    }
    cpy_r_r19 = CPy_ExceptionMatches(cpy_r_r18);
    CPy_DecRef(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL35;
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex string ' */
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' may only contain [0-9a-fA-F] characters' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_padded_hex, cpy_r_r21);
    CPy_DecRef(cpy_r_padded_hex);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL23;
    }
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL36;
    }
    CPy_DecRef(cpy_r_r22);
    CPy_Raise(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL23;
    } else
        goto CPyL37;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL38;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r15);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL31;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r30 = CPyStatic__utils___unhexlify;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"unhexlify\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL28: ;
    PyObject *cpy_r_r32[1] = {cpy_r_r14};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_Vectorcall(cpy_r_r30, cpy_r_r33, 1, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r14);
    if (likely(PyBytes_Check(cpy_r_r34) || PyByteArray_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 58, CPyStatic__utils___globals, "bytes", cpy_r_r34);
        goto CPyL31;
    }
    return cpy_r_r35;
CPyL31: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL32: ;
    CPy_DecRef(cpy_r_non_prefixed_hex);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_padded_hex);
    goto CPyL13;
CPyL34: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL23;
CPyL35: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL21;
CPyL36: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL23;
CPyL37: ;
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    goto CPyL20;
CPyL38: ;
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    goto CPyL22;
CPyL39: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL26;
CPyL40: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL31;
}

PyObject *CPyPy__utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"hexstr", 0};
    static CPyArg_Parser parser = {"O:hexstr_to_bytes", kwlist, 0};
    PyObject *obj_hexstr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_hexstr)) {
        return NULL;
    }
    PyObject *arg_hexstr;
    if (likely(PyUnicode_Check(obj_hexstr)))
        arg_hexstr = obj_hexstr;
    else {
        CPy_TypeError("str", obj_hexstr); 
        goto fail;
    }
    PyObject *retval = CPyDef__utils___hexstr_to_bytes(arg_hexstr);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
    return NULL;
}

char CPyDef__utils_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", -1, CPyStatic__utils___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_binascii;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('binascii', 'binascii', 'binascii'),) */
    cpy_r_r11 = CPyStatic__utils___globals;
    cpy_r_r12 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes/_utils.py' */
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Final', 'Union') */
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r17 = CPyStatic__utils___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyModule_binascii;
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'unhexlify' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    CPyStatic__utils___unhexlify = cpy_r_r21;
    CPy_INCREF(CPyStatic__utils___unhexlify);
    cpy_r_r22 = CPyStatic__utils___globals;
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'unhexlify' */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r22, cpy_r_r23, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
}

static PyObject *CPyDunder___get__main_____new___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_main_____new___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_main_____new___3_HexBytes_obj(void);

static PyObject *
main_____new___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_main_____new___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
main_____new___3_HexBytes_obj_traverse(faster_hexbytes___main_____new___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
main_____new___3_HexBytes_obj_clear(faster_hexbytes___main_____new___3_HexBytes_objObject *self)
{
    return 0;
}

static void
main_____new___3_HexBytes_obj_dealloc(faster_hexbytes___main_____new___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (main_____new___3_HexBytes_obj_free_instance == NULL) {
        main_____new___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, main_____new___3_HexBytes_obj_dealloc)
    main_____new___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem main_____new___3_HexBytes_obj_vtable[2];
static bool
CPyDef_main_____new___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem main_____new___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_main_____new___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_main_____new___3_HexBytes_obj_____get__,
    };
    memcpy(main_____new___3_HexBytes_obj_vtable, main_____new___3_HexBytes_obj_vtable_scratch, sizeof(main_____new___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef main_____new___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_main_____new___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($cls, val)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_main_____new___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main_____new___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__new___HexBytes_obj",
    .tp_new = main_____new___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)main_____new___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)main_____new___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)main_____new___3_HexBytes_obj_clear,
    .tp_methods = main_____new___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__main_____new___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____new___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____new___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__new___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_main_____new___3_HexBytes_obj_template = &CPyType_main_____new___3_HexBytes_obj_template_;

PyObject *CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____new___3_HexBytes_objObject *self;
    if (main_____new___3_HexBytes_obj_free_instance != NULL) {
        self = main_____new___3_HexBytes_obj_free_instance;
        main_____new___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____new___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = main_____new___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_main_____new___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_main_____new___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_main_____mypyc___3__new___3_HexBytes_obj_setup((PyObject *)CPyType_main_____new___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__main_____getitem___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_main_____getitem___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void);

static PyObject *
main_____getitem___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_main_____getitem___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
main_____getitem___3_HexBytes_obj_traverse(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
main_____getitem___3_HexBytes_obj_clear(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self)
{
    return 0;
}

static void
main_____getitem___3_HexBytes_obj_dealloc(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (main_____getitem___3_HexBytes_obj_free_instance == NULL) {
        main_____getitem___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, main_____getitem___3_HexBytes_obj_dealloc)
    main_____getitem___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem main_____getitem___3_HexBytes_obj_vtable[2];
static bool
CPyDef_main_____getitem___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem main_____getitem___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_main_____getitem___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_main_____getitem___3_HexBytes_obj_____get__,
    };
    memcpy(main_____getitem___3_HexBytes_obj_vtable, main_____getitem___3_HexBytes_obj_vtable_scratch, sizeof(main_____getitem___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef main_____getitem___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_main_____getitem___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, key, /)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_main_____getitem___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main_____getitem___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__getitem___HexBytes_obj",
    .tp_new = main_____getitem___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)main_____getitem___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)main_____getitem___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)main_____getitem___3_HexBytes_obj_clear,
    .tp_methods = main_____getitem___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__main_____getitem___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____getitem___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____getitem___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__getitem___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_main_____getitem___3_HexBytes_obj_template = &CPyType_main_____getitem___3_HexBytes_obj_template_;

PyObject *CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____getitem___3_HexBytes_objObject *self;
    if (main_____getitem___3_HexBytes_obj_free_instance != NULL) {
        self = main_____getitem___3_HexBytes_obj_free_instance;
        main_____getitem___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____getitem___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = main_____getitem___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_main_____getitem___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_main_____mypyc___3__getitem___3_HexBytes_obj_setup((PyObject *)CPyType_main_____getitem___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__main_____repr___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_main_____repr___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_main_____repr___3_HexBytes_obj(void);

static PyObject *
main_____repr___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_main_____repr___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
main_____repr___3_HexBytes_obj_traverse(faster_hexbytes___main_____repr___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
main_____repr___3_HexBytes_obj_clear(faster_hexbytes___main_____repr___3_HexBytes_objObject *self)
{
    return 0;
}

static void
main_____repr___3_HexBytes_obj_dealloc(faster_hexbytes___main_____repr___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (main_____repr___3_HexBytes_obj_free_instance == NULL) {
        main_____repr___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, main_____repr___3_HexBytes_obj_dealloc)
    main_____repr___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem main_____repr___3_HexBytes_obj_vtable[2];
static bool
CPyDef_main_____repr___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem main_____repr___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_main_____repr___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_main_____repr___3_HexBytes_obj_____get__,
    };
    memcpy(main_____repr___3_HexBytes_obj_vtable, main_____repr___3_HexBytes_obj_vtable_scratch, sizeof(main_____repr___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef main_____repr___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_main_____repr___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, /)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_main_____repr___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main_____repr___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__repr___HexBytes_obj",
    .tp_new = main_____repr___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)main_____repr___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)main_____repr___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)main_____repr___3_HexBytes_obj_clear,
    .tp_methods = main_____repr___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__main_____repr___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____repr___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____repr___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__repr___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_main_____repr___3_HexBytes_obj_template = &CPyType_main_____repr___3_HexBytes_obj_template_;

PyObject *CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____repr___3_HexBytes_objObject *self;
    if (main_____repr___3_HexBytes_obj_free_instance != NULL) {
        self = main_____repr___3_HexBytes_obj_free_instance;
        main_____repr___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____repr___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = main_____repr___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_main_____repr___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_main_____repr___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_main_____mypyc___3__repr___3_HexBytes_obj_setup((PyObject *)CPyType_main_____repr___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__main___to_0x_hex_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_main___to_0x_hex_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void);

static PyObject *
main___to_0x_hex_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_main___to_0x_hex_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
main___to_0x_hex_HexBytes_obj_traverse(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
main___to_0x_hex_HexBytes_obj_clear(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self)
{
    return 0;
}

static void
main___to_0x_hex_HexBytes_obj_dealloc(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (main___to_0x_hex_HexBytes_obj_free_instance == NULL) {
        main___to_0x_hex_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, main___to_0x_hex_HexBytes_obj_dealloc)
    main___to_0x_hex_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem main___to_0x_hex_HexBytes_obj_vtable[2];
static bool
CPyDef_main___to_0x_hex_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem main___to_0x_hex_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_main___to_0x_hex_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_main___to_0x_hex_HexBytes_obj_____get__,
    };
    memcpy(main___to_0x_hex_HexBytes_obj_vtable, main___to_0x_hex_HexBytes_obj_vtable_scratch, sizeof(main___to_0x_hex_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef main___to_0x_hex_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_main___to_0x_hex_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_main___to_0x_hex_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main___to_0x_hex_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "to_0x_hex_HexBytes_obj",
    .tp_new = main___to_0x_hex_HexBytes_obj_new,
    .tp_dealloc = (destructor)main___to_0x_hex_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)main___to_0x_hex_HexBytes_obj_traverse,
    .tp_clear = (inquiry)main___to_0x_hex_HexBytes_obj_clear,
    .tp_methods = main___to_0x_hex_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__main___to_0x_hex_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main___to_0x_hex_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main___to_0x_hex_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("to_0x_hex_HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_main___to_0x_hex_HexBytes_obj_template = &CPyType_main___to_0x_hex_HexBytes_obj_template_;

PyObject *CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self;
    if (main___to_0x_hex_HexBytes_obj_free_instance != NULL) {
        self = main___to_0x_hex_HexBytes_obj_free_instance;
        main___to_0x_hex_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main___to_0x_hex_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = main___to_0x_hex_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_main___to_0x_hex_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void)
{
    PyObject *self = CPyDef_main_____mypyc__to_0x_hex_HexBytes_obj_setup((PyObject *)CPyType_main___to_0x_hex_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__main_____reduce___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_main_____reduce___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void);

static PyObject *
main_____reduce___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_main_____reduce___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
main_____reduce___3_HexBytes_obj_traverse(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
main_____reduce___3_HexBytes_obj_clear(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self)
{
    return 0;
}

static void
main_____reduce___3_HexBytes_obj_dealloc(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (main_____reduce___3_HexBytes_obj_free_instance == NULL) {
        main_____reduce___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, main_____reduce___3_HexBytes_obj_dealloc)
    main_____reduce___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem main_____reduce___3_HexBytes_obj_vtable[2];
static bool
CPyDef_main_____reduce___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem main_____reduce___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_main_____reduce___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_main_____reduce___3_HexBytes_obj_____get__,
    };
    memcpy(main_____reduce___3_HexBytes_obj_vtable, main_____reduce___3_HexBytes_obj_vtable_scratch, sizeof(main_____reduce___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef main_____reduce___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_main_____reduce___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_main_____reduce___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_main_____reduce___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__reduce___HexBytes_obj",
    .tp_new = main_____reduce___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)main_____reduce___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)main_____reduce___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)main_____reduce___3_HexBytes_obj_clear,
    .tp_methods = main_____reduce___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__main_____reduce___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____reduce___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____reduce___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__reduce___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_main_____reduce___3_HexBytes_obj_template = &CPyType_main_____reduce___3_HexBytes_obj_template_;

PyObject *CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____reduce___3_HexBytes_objObject *self;
    if (main_____reduce___3_HexBytes_obj_free_instance != NULL) {
        self = main_____reduce___3_HexBytes_obj_free_instance;
        main_____reduce___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____reduce___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = main_____reduce___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_main_____reduce___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_main_____mypyc___3__reduce___3_HexBytes_obj_setup((PyObject *)CPyType_main_____reduce___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef mainmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_hexbytes___main(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes___main__internal, "__name__");
    CPyStatic_main___globals = PyModule_GetDict(CPyModule_faster_hexbytes___main__internal);
    if (unlikely(CPyStatic_main___globals == NULL))
        goto fail;
    CPyType_main_____new___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____new___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_main_____new___3_HexBytes_obj))
        goto fail;
    CPyType_main_____getitem___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____getitem___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_main_____getitem___3_HexBytes_obj))
        goto fail;
    CPyType_main_____repr___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____repr___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_main_____repr___3_HexBytes_obj))
        goto fail;
    CPyType_main___to_0x_hex_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main___to_0x_hex_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_main___to_0x_hex_HexBytes_obj))
        goto fail;
    CPyType_main_____reduce___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_main_____reduce___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_main_____reduce___3_HexBytes_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_hexbytes___main__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_main____bytes_new);
    CPyStatic_main____bytes_new = NULL;
    Py_CLEAR(CPyType_main___HexBytes);
    Py_CLEAR(CPyType_main____HexBytesSubclass1);
    Py_CLEAR(CPyType_main____HexBytesSubclass2);
    Py_CLEAR(CPyType_main____HexBytesSubclass3);
    Py_CLEAR(CPyType_main_____new___3_HexBytes_obj);
    Py_CLEAR(CPyType_main_____getitem___3_HexBytes_obj);
    Py_CLEAR(CPyType_main_____repr___3_HexBytes_obj);
    Py_CLEAR(CPyType_main___to_0x_hex_HexBytes_obj);
    Py_CLEAR(CPyType_main_____reduce___3_HexBytes_obj);
    return -1;
}
static struct PyModuleDef mainmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_hexbytes.main",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    mainmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_hexbytes___main(void)
{
    if (CPyModule_faster_hexbytes___main__internal) {
        Py_INCREF(CPyModule_faster_hexbytes___main__internal);
        return CPyModule_faster_hexbytes___main__internal;
    }
    CPyModule_faster_hexbytes___main__internal = PyModule_Create(&mainmodule);
    if (unlikely(CPyModule_faster_hexbytes___main__internal == NULL))
        goto fail;
    if (CPyExec_faster_hexbytes___main(CPyModule_faster_hexbytes___main__internal) != 0)
        goto fail;
    return CPyModule_faster_hexbytes___main__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_main_____new___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef__utils___to_bytes(cpy_r_val);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL7;
    }
    cpy_r_r1 = CPyStatic_main____bytes_new;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL8;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    PyObject *cpy_r_r3[2] = {cpy_r_cls, cpy_r_r0};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r4, 2, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_main___HexBytes)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 51, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r5);
        goto CPyL7;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL2;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"cls", "val", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_cls;
    PyObject *obj_val;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_cls, &obj_val)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_cls = obj_cls;
    PyObject *arg_val;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL4;
    if (PyLong_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    CPy_TypeError("union[bytes, str, bool, object, int]", obj_val); 
    goto fail;
__LL4: ;
    PyObject *retval = CPyDef_main_____new___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_cls, arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__new__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_main_____getitem___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = (PyObject *)&PyBytes_Type;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    PyObject *cpy_r_r2[3] = {cpy_r_r0, cpy_r_self, cpy_r_key};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL14;
    }
    if (PyLong_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL5;
    if (PyBytes_Check(cpy_r_r4) || PyByteArray_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL5;
    CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 64, CPyStatic_main___globals, "union[int, bytes]", cpy_r_r4);
    goto CPyL14;
__LL5: ;
    cpy_r_r6 = PyLong_Check(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL5;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL14;
    }
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPy_TYPE(cpy_r_self);
    cpy_r_r10 = (PyObject *)CPyType_main___HexBytes;
    cpy_r_r11 = cpy_r_r9 == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL15;
    } else
        goto CPyL10;
CPyL6: ;
    if (likely(PyBytes_Check(cpy_r_r5) || PyByteArray_Check(cpy_r_r5)))
        cpy_r_r12 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 70, CPyStatic_main___globals, "bytes", cpy_r_r5);
        goto CPyL14;
    }
    cpy_r_r13 = (PyObject *)CPyType_main___HexBytes;
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_main___HexBytes)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 70, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r16);
        goto CPyL14;
    }
    return cpy_r_r17;
CPyL10: ;
    if (likely(PyBytes_Check(cpy_r_r5) || PyByteArray_Check(cpy_r_r5)))
        cpy_r_r18 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 71, CPyStatic_main___globals, "bytes", cpy_r_r5);
        goto CPyL17;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_main___HexBytes)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 71, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r21);
        goto CPyL14;
    }
    return cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL15: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL6;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL14;
}

PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "key", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_key)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_main_____getitem___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_main_____repr___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "HexBytes('0x" */
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r2[1] = {cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__repr__", 74, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "')" */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r0, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_main_____repr___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_main___to_0x_hex_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r2[1] = {cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "to_0x_hex", 80, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyStr_Build(2, cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_main___to_0x_hex_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

PyObject *CPyDef_main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_main_____reduce___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_main___globals);
    return NULL;
}

tuple_T2OT2OO CPyDef_main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    tuple_T2OT2OO cpy_r_r9;
    tuple_T2OT2OO cpy_r_r10;
    cpy_r_r0 = CPyStatic_main____bytes_new;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPy_TYPE(cpy_r_self);
    cpy_r_r3 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r4[1] = {cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL7;
    }
    if (likely(PyBytes_Check(cpy_r_r6) || PyByteArray_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__reduce__", 90, CPyStatic_main___globals, "bytes", cpy_r_r6);
        goto CPyL7;
    }
    cpy_r_r8.f0 = cpy_r_r2;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r9.f0 = cpy_r_r0;
    cpy_r_r9.f1 = cpy_r_r8;
    return cpy_r_r9;
CPyL6: ;
    tuple_T2OT2OO __tmp6 = { NULL, (tuple_T2OO) { NULL, NULL } };
    cpy_r_r10 = __tmp6;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    tuple_T2OT2OO retval = CPyDef_main_____reduce___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp7);
    PyObject *__tmp8 = PyTuple_New(2);
    if (unlikely(__tmp8 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = retval.f1.f0;
    PyTuple_SET_ITEM(__tmp8, 0, __tmp9);
    PyObject *__tmp10 = retval.f1.f1;
    PyTuple_SET_ITEM(__tmp8, 1, __tmp10);
    PyTuple_SET_ITEM(retbox, 1, __tmp8);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
    return NULL;
}

char CPyDef_main_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T6OOOOOO cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject **cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject **cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    int32_t cpy_r_r211;
    char cpy_r_r212;
    PyObject **cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject **cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject **cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    int32_t cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject **cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    int32_t cpy_r_r260;
    char cpy_r_r261;
    PyObject **cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject **cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject **cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    int32_t cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    char cpy_r_r281;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", -1, CPyStatic_main___globals);
        goto CPyL105;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('TYPE_CHECKING', 'Callable', 'Final', 'Tuple', 'Type',
                                  'Union', 'overload') */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r7 = CPyStatic_main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_hexbytes___main;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {14};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('hexbytes.main', 'hexbytes.main', 'hexbytes'),) */
    cpy_r_r15 = CPyStatic_main___globals;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes/main.py' */
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL105;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('mypyc_attr',) */
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypy_extensions' */
    cpy_r_r21 = CPyStatic_main___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    CPyModule_mypy_extensions = cpy_r_r22;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Self',) */
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing_extensions' */
    cpy_r_r25 = CPyStatic_main___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    CPyModule_typing_extensions = cpy_r_r26;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('to_bytes',) */
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes._utils' */
    cpy_r_r29 = CPyStatic_main___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    CPyModule_faster_hexbytes____utils = cpy_r_r30;
    CPy_INCREF(CPyModule_faster_hexbytes____utils);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatic_main___globals;
    cpy_r_r32 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Union' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r34 = (PyObject *)&PyBytes_Type;
    cpy_r_r35 = (PyObject *)&PyUnicode_Type;
    cpy_r_r36 = (PyObject *)&PyBool_Type;
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'bytearray' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL106;
    }
    cpy_r_r40 = (PyObject *)&PyLong_Type;
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'memoryview' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r34);
    CPy_INCREF(cpy_r_r35);
    CPy_INCREF(cpy_r_r36);
    CPy_INCREF(cpy_r_r40);
    cpy_r_r44.f0 = cpy_r_r34;
    cpy_r_r44.f1 = cpy_r_r35;
    cpy_r_r44.f2 = cpy_r_r36;
    cpy_r_r44.f3 = cpy_r_r39;
    cpy_r_r44.f4 = cpy_r_r40;
    cpy_r_r44.f5 = cpy_r_r43;
    cpy_r_r45 = PyTuple_New(6);
    if (unlikely(cpy_r_r45 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r44.f0;
    PyTuple_SET_ITEM(cpy_r_r45, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r44.f1;
    PyTuple_SET_ITEM(cpy_r_r45, 1, __tmp12);
    PyObject *__tmp13 = cpy_r_r44.f2;
    PyTuple_SET_ITEM(cpy_r_r45, 2, __tmp13);
    PyObject *__tmp14 = cpy_r_r44.f3;
    PyTuple_SET_ITEM(cpy_r_r45, 3, __tmp14);
    PyObject *__tmp15 = cpy_r_r44.f4;
    PyTuple_SET_ITEM(cpy_r_r45, 4, __tmp15);
    PyObject *__tmp16 = cpy_r_r44.f5;
    PyTuple_SET_ITEM(cpy_r_r45, 5, __tmp16);
    cpy_r_r46 = PyObject_GetItem(cpy_r_r33, cpy_r_r45);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r47 = CPyStatic_main___globals;
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'BytesLike' */
    cpy_r_r49 = CPyDict_SetItem(cpy_r_r47, cpy_r_r48, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r51 = (PyObject *)&PyBytes_Type;
    cpy_r_r52 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__new__' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    CPyStatic_main____bytes_new = cpy_r_r53;
    CPy_INCREF(CPyStatic_main____bytes_new);
    cpy_r_r54 = CPyStatic_main___globals;
    cpy_r_r55 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_bytes_new' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r58 = CPyModule_hexbytes___main;
    cpy_r_r59 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r61 = PyTuple_Pack(1, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r62 = (PyObject *)&PyType_Type;
    cpy_r_r63 = CPy_CalculateMetaclass(cpy_r_r62, cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL108;
    }
    cpy_r_r64 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r65 = PyObject_HasAttr(cpy_r_r63, cpy_r_r64);
    if (!cpy_r_r65) goto CPyL24;
    cpy_r_r66 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r67 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL108;
    }
    PyObject *cpy_r_r69[2] = {cpy_r_r66, cpy_r_r61};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 2, 0);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL108;
    }
    if (likely(PyDict_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 38, CPyStatic_main___globals, "dict", cpy_r_r71);
        goto CPyL108;
    }
    cpy_r_r73 = cpy_r_r72;
    goto CPyL26;
CPyL24: ;
    cpy_r_r74 = PyDict_New();
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL108;
    }
    cpy_r_r73 = cpy_r_r74;
CPyL26: ;
    cpy_r_r75 = PyDict_New();
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL109;
    }
    cpy_r_r76 = CPyDef_main_____new___3_HexBytes_obj();
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r77 = CPyModule_builtins;
    cpy_r_r78 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'staticmethod' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL111;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_r76};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL111;
    }
    CPy_DECREF_NO_IMM(cpy_r_r76);
    cpy_r_r83 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__new__' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r73, cpy_r_r83, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r86 = CPyDef_main_____getitem___3_HexBytes_obj();
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r87 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r73, cpy_r_r87, cpy_r_r86);
    CPy_DECREF_NO_IMM(cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r90 = CPyDef_main_____repr___3_HexBytes_obj();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r91 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__repr__' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r73, cpy_r_r91, cpy_r_r90);
    CPy_DECREF_NO_IMM(cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r94 = CPyDef_main___to_0x_hex_HexBytes_obj();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r95 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_0x_hex' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r73, cpy_r_r95, cpy_r_r94);
    CPy_DECREF_NO_IMM(cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r98 = CPyDef_main_____reduce___3_HexBytes_obj();
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r99 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__reduce__' */
    cpy_r_r100 = CPyDict_SetItem(cpy_r_r73, cpy_r_r99, cpy_r_r98);
    CPy_DECREF_NO_IMM(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL110;
    }
    cpy_r_r102 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r103 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r73, cpy_r_r103, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL109;
    }
    cpy_r_r106 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r107 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r73, cpy_r_r107, cpy_r_r106);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL109;
    }
    cpy_r_r110 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r111 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r73, cpy_r_r111, cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL109;
    }
    PyObject *cpy_r_r114[3] = {cpy_r_r102, cpy_r_r61, cpy_r_r73};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r115, 3, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL109;
    }
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r117 = CPyStatic_main___globals;
    cpy_r_r118 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL112;
    }
    cpy_r_r120 = 0 ? Py_True : Py_False;
    cpy_r_r121 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r122[2] = {cpy_r_r120, cpy_r_r121};
    cpy_r_r123 = (PyObject **)&cpy_r_r122;
    cpy_r_r124 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class', 'allow_interpreted_subclasses') */
    cpy_r_r125 = PyObject_Vectorcall(cpy_r_r119, cpy_r_r123, 0, cpy_r_r124);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL112;
    }
    PyObject *cpy_r_r126[1] = {cpy_r_r116};
    cpy_r_r127 = (PyObject **)&cpy_r_r126;
    cpy_r_r128 = PyObject_Vectorcall(cpy_r_r125, cpy_r_r127, 1, 0);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL112;
    }
    CPy_DECREF(cpy_r_r116);
    CPyType_main___HexBytes = (PyTypeObject *)cpy_r_r128;
    CPy_INCREF(CPyType_main___HexBytes);
    cpy_r_r129 = CPyStatic_main___globals;
    cpy_r_r130 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r131 = PyDict_SetItem(cpy_r_r129, cpy_r_r130, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r133 = (PyObject *)CPyType_main___HexBytes;
    cpy_r_r134 = CPyStatic_main___globals;
    cpy_r_r135 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r136 = CPyDict_GetItem(cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r137 = PyTuple_Pack(1, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r138 = (PyObject *)&PyType_Type;
    cpy_r_r139 = CPy_CalculateMetaclass(cpy_r_r138, cpy_r_r137);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    cpy_r_r140 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r141 = PyObject_HasAttr(cpy_r_r139, cpy_r_r140);
    if (!cpy_r_r141) goto CPyL55;
    cpy_r_r142 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass1' */
    cpy_r_r143 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r144 = CPyObject_GetAttr(cpy_r_r139, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    PyObject *cpy_r_r145[2] = {cpy_r_r142, cpy_r_r137};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = PyObject_Vectorcall(cpy_r_r144, cpy_r_r146, 2, 0);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    if (likely(PyDict_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 97, CPyStatic_main___globals, "dict", cpy_r_r147);
        goto CPyL113;
    }
    cpy_r_r149 = cpy_r_r148;
    goto CPyL57;
CPyL55: ;
    cpy_r_r150 = PyDict_New();
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL113;
    }
    cpy_r_r149 = cpy_r_r150;
CPyL57: ;
    cpy_r_r151 = PyDict_New();
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    cpy_r_r152 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass1' */
    cpy_r_r153 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r154 = CPyDict_SetItem(cpy_r_r149, cpy_r_r153, cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    cpy_r_r156 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r157 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r149, cpy_r_r157, cpy_r_r156);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    cpy_r_r160 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r161 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r149, cpy_r_r161, cpy_r_r160);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    PyObject *cpy_r_r164[3] = {cpy_r_r152, cpy_r_r137, cpy_r_r149};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = PyObject_Vectorcall(cpy_r_r139, cpy_r_r165, 3, 0);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL114;
    }
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r167 = CPyStatic_main___globals;
    cpy_r_r168 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r169 = CPyDict_GetItem(cpy_r_r167, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    cpy_r_r170 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r171[1] = {cpy_r_r170};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class',) */
    cpy_r_r174 = PyObject_Vectorcall(cpy_r_r169, cpy_r_r172, 0, cpy_r_r173);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r175[1] = {cpy_r_r166};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = PyObject_Vectorcall(cpy_r_r174, cpy_r_r176, 1, 0);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL115;
    }
    CPy_DECREF(cpy_r_r166);
    CPyType_main____HexBytesSubclass1 = (PyTypeObject *)cpy_r_r177;
    CPy_INCREF(CPyType_main____HexBytesSubclass1);
    cpy_r_r178 = CPyStatic_main___globals;
    cpy_r_r179 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass1' */
    cpy_r_r180 = PyDict_SetItem(cpy_r_r178, cpy_r_r179, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r182 = (PyObject *)CPyType_main____HexBytesSubclass1;
    cpy_r_r183 = CPyStatic_main___globals;
    cpy_r_r184 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r185 = CPyDict_GetItem(cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r186 = PyTuple_Pack(1, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r187 = (PyObject *)&PyType_Type;
    cpy_r_r188 = CPy_CalculateMetaclass(cpy_r_r187, cpy_r_r186);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL116;
    }
    cpy_r_r189 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r190 = PyObject_HasAttr(cpy_r_r188, cpy_r_r189);
    if (!cpy_r_r190) goto CPyL74;
    cpy_r_r191 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass2' */
    cpy_r_r192 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r193 = CPyObject_GetAttr(cpy_r_r188, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL116;
    }
    PyObject *cpy_r_r194[2] = {cpy_r_r191, cpy_r_r186};
    cpy_r_r195 = (PyObject **)&cpy_r_r194;
    cpy_r_r196 = PyObject_Vectorcall(cpy_r_r193, cpy_r_r195, 2, 0);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL116;
    }
    if (likely(PyDict_Check(cpy_r_r196)))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 99, CPyStatic_main___globals, "dict", cpy_r_r196);
        goto CPyL116;
    }
    cpy_r_r198 = cpy_r_r197;
    goto CPyL76;
CPyL74: ;
    cpy_r_r199 = PyDict_New();
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL116;
    }
    cpy_r_r198 = cpy_r_r199;
CPyL76: ;
    cpy_r_r200 = PyDict_New();
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    cpy_r_r201 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass2' */
    cpy_r_r202 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r203 = CPyDict_SetItem(cpy_r_r198, cpy_r_r202, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    cpy_r_r205 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r206 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r198, cpy_r_r206, cpy_r_r205);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    cpy_r_r209 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r210 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r211 = CPyDict_SetItem(cpy_r_r198, cpy_r_r210, cpy_r_r209);
    cpy_r_r212 = cpy_r_r211 >= 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    PyObject *cpy_r_r213[3] = {cpy_r_r201, cpy_r_r186, cpy_r_r198};
    cpy_r_r214 = (PyObject **)&cpy_r_r213;
    cpy_r_r215 = PyObject_Vectorcall(cpy_r_r188, cpy_r_r214, 3, 0);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL117;
    }
    CPy_DECREF(cpy_r_r198);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r216 = CPyStatic_main___globals;
    cpy_r_r217 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r218 = CPyDict_GetItem(cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    cpy_r_r219 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r220[1] = {cpy_r_r219};
    cpy_r_r221 = (PyObject **)&cpy_r_r220;
    cpy_r_r222 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class',) */
    cpy_r_r223 = PyObject_Vectorcall(cpy_r_r218, cpy_r_r221, 0, cpy_r_r222);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    PyObject *cpy_r_r224[1] = {cpy_r_r215};
    cpy_r_r225 = (PyObject **)&cpy_r_r224;
    cpy_r_r226 = PyObject_Vectorcall(cpy_r_r223, cpy_r_r225, 1, 0);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL118;
    }
    CPy_DECREF(cpy_r_r215);
    CPyType_main____HexBytesSubclass2 = (PyTypeObject *)cpy_r_r226;
    CPy_INCREF(CPyType_main____HexBytesSubclass2);
    cpy_r_r227 = CPyStatic_main___globals;
    cpy_r_r228 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass2' */
    cpy_r_r229 = PyDict_SetItem(cpy_r_r227, cpy_r_r228, cpy_r_r226);
    CPy_DECREF(cpy_r_r226);
    cpy_r_r230 = cpy_r_r229 >= 0;
    if (unlikely(!cpy_r_r230)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r231 = (PyObject *)CPyType_main____HexBytesSubclass2;
    cpy_r_r232 = CPyStatic_main___globals;
    cpy_r_r233 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HexBytes' */
    cpy_r_r234 = CPyDict_GetItem(cpy_r_r232, cpy_r_r233);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r235 = PyTuple_Pack(1, cpy_r_r234);
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r236 = (PyObject *)&PyType_Type;
    cpy_r_r237 = CPy_CalculateMetaclass(cpy_r_r236, cpy_r_r235);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    cpy_r_r238 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r239 = PyObject_HasAttr(cpy_r_r237, cpy_r_r238);
    if (!cpy_r_r239) goto CPyL93;
    cpy_r_r240 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass3' */
    cpy_r_r241 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__prepare__' */
    cpy_r_r242 = CPyObject_GetAttr(cpy_r_r237, cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    PyObject *cpy_r_r243[2] = {cpy_r_r240, cpy_r_r235};
    cpy_r_r244 = (PyObject **)&cpy_r_r243;
    cpy_r_r245 = PyObject_Vectorcall(cpy_r_r242, cpy_r_r244, 2, 0);
    CPy_DECREF(cpy_r_r242);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    if (likely(PyDict_Check(cpy_r_r245)))
        cpy_r_r246 = cpy_r_r245;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 101, CPyStatic_main___globals, "dict", cpy_r_r245);
        goto CPyL119;
    }
    cpy_r_r247 = cpy_r_r246;
    goto CPyL95;
CPyL93: ;
    cpy_r_r248 = PyDict_New();
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL119;
    }
    cpy_r_r247 = cpy_r_r248;
CPyL95: ;
    cpy_r_r249 = PyDict_New();
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    cpy_r_r250 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass3' */
    cpy_r_r251 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__annotations__' */
    cpy_r_r252 = CPyDict_SetItem(cpy_r_r247, cpy_r_r251, cpy_r_r249);
    CPy_DECREF(cpy_r_r249);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    cpy_r_r254 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc filler docstring' */
    cpy_r_r255 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__doc__' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r247, cpy_r_r255, cpy_r_r254);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    cpy_r_r258 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_hexbytes.main' */
    cpy_r_r259 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r260 = CPyDict_SetItem(cpy_r_r247, cpy_r_r259, cpy_r_r258);
    cpy_r_r261 = cpy_r_r260 >= 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    PyObject *cpy_r_r262[3] = {cpy_r_r250, cpy_r_r235, cpy_r_r247};
    cpy_r_r263 = (PyObject **)&cpy_r_r262;
    cpy_r_r264 = PyObject_Vectorcall(cpy_r_r237, cpy_r_r263, 3, 0);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL120;
    }
    CPy_DECREF(cpy_r_r247);
    CPy_DECREF(cpy_r_r235);
    cpy_r_r265 = CPyStatic_main___globals;
    cpy_r_r266 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypyc_attr' */
    cpy_r_r267 = CPyDict_GetItem(cpy_r_r265, cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    cpy_r_r268 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r269[1] = {cpy_r_r268};
    cpy_r_r270 = (PyObject **)&cpy_r_r269;
    cpy_r_r271 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('native_class',) */
    cpy_r_r272 = PyObject_Vectorcall(cpy_r_r267, cpy_r_r270, 0, cpy_r_r271);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    PyObject *cpy_r_r273[1] = {cpy_r_r264};
    cpy_r_r274 = (PyObject **)&cpy_r_r273;
    cpy_r_r275 = PyObject_Vectorcall(cpy_r_r272, cpy_r_r274, 1, 0);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL121;
    }
    CPy_DECREF(cpy_r_r264);
    CPyType_main____HexBytesSubclass3 = (PyTypeObject *)cpy_r_r275;
    CPy_INCREF(CPyType_main____HexBytesSubclass3);
    cpy_r_r276 = CPyStatic_main___globals;
    cpy_r_r277 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_HexBytesSubclass3' */
    cpy_r_r278 = PyDict_SetItem(cpy_r_r276, cpy_r_r277, cpy_r_r275);
    CPy_DECREF(cpy_r_r275);
    cpy_r_r279 = cpy_r_r278 >= 0;
    if (unlikely(!cpy_r_r279)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_main___globals);
        goto CPyL105;
    }
    cpy_r_r280 = (PyObject *)CPyType_main____HexBytesSubclass3;
    return 1;
CPyL105: ;
    cpy_r_r281 = 2;
    return cpy_r_r281;
CPyL106: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL105;
CPyL107: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r39);
    goto CPyL105;
CPyL108: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL105;
CPyL109: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r73);
    goto CPyL105;
CPyL110: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r75);
    goto CPyL105;
CPyL111: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    goto CPyL105;
CPyL112: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL105;
CPyL113: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL105;
CPyL114: ;
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r149);
    goto CPyL105;
CPyL115: ;
    CPy_DecRef(cpy_r_r166);
    goto CPyL105;
CPyL116: ;
    CPy_DecRef(cpy_r_r186);
    goto CPyL105;
CPyL117: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r198);
    goto CPyL105;
CPyL118: ;
    CPy_DecRef(cpy_r_r215);
    goto CPyL105;
CPyL119: ;
    CPy_DecRef(cpy_r_r235);
    goto CPyL105;
CPyL120: ;
    CPy_DecRef(cpy_r_r235);
    CPy_DecRef(cpy_r_r247);
    goto CPyL105;
CPyL121: ;
    CPy_DecRef(cpy_r_r264);
    goto CPyL105;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_hexbytes = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_importlib___metadata = Py_None;
    CPyModule_faster_hexbytes___main = Py_None;
    CPyModule_faster_hexbytes____utils = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_binascii = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_hexbytes___main = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_hexbytes___main = Py_None;
    CPyModule_mypy_extensions = Py_None;
    CPyModule_typing_extensions = Py_None;
    CPyModule_faster_hexbytes____utils = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[DIFFCHECK_PLACEHOLDER];
const char * const CPyLit_Str[] = {
    "\005\bbuiltins\aversion\t__version\022importlib.metadata\bHexBytes",
    "\004\024faster_hexbytes.main\a__all__\bhexbytes\v__version__",
    "\006 Cannot convert negative integer \t to bytes\nValueError\003hex\nmemoryview\000",
    "\t\017Cannot convert \a{!r:{}}\006format\t of type \005{:{}}\tTypeError\0020x\0020X\0010",
    "\002\022UnicodeDecodeError\vhex string ",
    "\002( may only contain [0-9a-fA-F] characters\bbinascii",
    "\006\031faster_hexbytes/_utils.py\b<module>\005Final\005Union\006typing\tunhexlify",
    "\a\v__getitem__\fHexBytes(\'0x\002\')\rTYPE_CHECKING\bCallable\005Tuple\004Type",
    "\004\boverload\rhexbytes.main\027faster_hexbytes/main.py\nmypyc_attr",
    "\004\017mypy_extensions\004Self\021typing_extensions\bto_bytes",
    "\005\026faster_hexbytes._utils\tbytearray\tBytesLike\a__new__\n_bytes_new",
    "\005\v__prepare__\fstaticmethod\b__repr__\tto_0x_hex\n__reduce__",
    "\004\017__annotations__\026mypyc filler docstring\a__doc__\n__module__",
    "\003\fnative_class\034allow_interpreted_subclasses\022_HexBytesSubclass1",
    "\002\022_HexBytesSubclass2\022_HexBytesSubclass3",
    "",
};
const char * const CPyLit_Bytes[] = {
    "\002\001\001\001\000",
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    14, 1, 4, 1, 5, 1, 7, 3, 30, 30, 30, 1, 76, 2, 33, 34, 7, 40, 41,
    33, 42, 43, 34, 44, 3, 45, 45, 10, 1, 80, 1, 47, 1, 49, 1, 51, 2, 66,
    67, 1, 66
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_hexbytes__internal = NULL;
CPyModule *CPyModule_faster_hexbytes;
PyObject *CPyStatic_faster_hexbytes___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_importlib___metadata;
CPyModule *CPyModule_faster_hexbytes___main__internal = NULL;
CPyModule *CPyModule_faster_hexbytes___main;
CPyModule *CPyModule_faster_hexbytes____utils__internal = NULL;
CPyModule *CPyModule_faster_hexbytes____utils;
PyObject *CPyStatic__utils___globals;
CPyModule *CPyModule_binascii;
CPyModule *CPyModule_typing;
PyObject *CPyStatic_main___globals;
CPyModule *CPyModule_hexbytes___main;
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_typing_extensions;
char CPyDef_faster_hexbytes_____top_level__(void);
PyObject *CPyStatic__utils___unhexlify = NULL;
PyObject *CPyDef__utils___to_bytes(PyObject *cpy_r_val);
PyObject *CPyPy__utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__utils___hexstr_to_bytes(PyObject *cpy_r_hexstr);
PyObject *CPyPy__utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__utils_____top_level__(void);
PyObject *CPyStatic_main____bytes_new = NULL;
PyTypeObject *CPyType_main___HexBytes;
PyTypeObject *CPyType_main____HexBytesSubclass1;
PyTypeObject *CPyType_main____HexBytesSubclass2;
PyTypeObject *CPyType_main____HexBytesSubclass3;
PyTypeObject *CPyType_main_____new___3_HexBytes_obj;
PyObject *CPyDef_main_____new___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____new___3_HexBytes_objObject *main_____new___3_HexBytes_obj_free_instance;
PyTypeObject *CPyType_main_____getitem___3_HexBytes_obj;
PyObject *CPyDef_main_____getitem___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____getitem___3_HexBytes_objObject *main_____getitem___3_HexBytes_obj_free_instance;
PyTypeObject *CPyType_main_____repr___3_HexBytes_obj;
PyObject *CPyDef_main_____repr___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____repr___3_HexBytes_objObject *main_____repr___3_HexBytes_obj_free_instance;
PyTypeObject *CPyType_main___to_0x_hex_HexBytes_obj;
PyObject *CPyDef_main___to_0x_hex_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main___to_0x_hex_HexBytes_objObject *main___to_0x_hex_HexBytes_obj_free_instance;
PyTypeObject *CPyType_main_____reduce___3_HexBytes_obj;
PyObject *CPyDef_main_____reduce___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____reduce___3_HexBytes_objObject *main_____reduce___3_HexBytes_obj_free_instance;
PyObject *CPyDef_main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val);
PyObject *CPyPy_main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy_main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy_main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
tuple_T2OT2OO CPyDef_main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy_main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_main_____top_level__(void);

static int exec_faster_hexbytes__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    extern PyObject *CPyInit_faster_hexbytes(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes, "faster_hexbytes__mypyc.init_faster_hexbytes", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_hexbytes____utils(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes____utils, "faster_hexbytes__mypyc.init_faster_hexbytes____utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes____utils", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_hexbytes___main(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes___main, "faster_hexbytes__mypyc.init_faster_hexbytes___main", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes___main", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_faster_hexbytes__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_hexbytes__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_faster_hexbytes__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_faster_hexbytes__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_faster_hexbytes__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
