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
#include "__native_6a32f4913d613d6a7ddf.h"
#include "__native_internal_6a32f4913d613d6a7ddf.h"
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
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", -1, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[67]; /* ('version',) */
    cpy_r_r6 = CPyStatics[68]; /* ('__version',) */
    cpy_r_r7 = CPyStatics[6]; /* 'importlib.metadata' */
    cpy_r_r8 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r9 = CPyImport_ImportFromMany(cpy_r_r7, cpy_r_r5, cpy_r_r6, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 1, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    CPyModule_importlib___metadata = cpy_r_r9;
    CPy_INCREF(CPyModule_importlib___metadata);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[69]; /* ('HexBytes',) */
    cpy_r_r11 = CPyStatics[8]; /* 'faster_hexbytes.main' */
    cpy_r_r12 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r13 = CPyImport_ImportFromMany(cpy_r_r11, cpy_r_r10, cpy_r_r10, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 5, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    CPyModule_faster_hexbytes___main = cpy_r_r13;
    CPy_INCREF(CPyModule_faster_hexbytes___main);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[7]; /* 'HexBytes' */
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 9, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_r14);
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_r18 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r19 = CPyStatics[9]; /* '__all__' */
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r18, cpy_r_r19, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r15);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 9, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    cpy_r_r22 = CPyStatics[10]; /* 'hexbytes' */
    cpy_r_r23 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r24 = CPyStatics[5]; /* '__version' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 11, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 11, CPyStatic_faster_hexbytes___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/__init__.py", "<module>", 11, CPyStatic_faster_hexbytes___globals, "str", cpy_r_r28);
        goto CPyL12;
    }
    cpy_r_r30 = CPyStatic_faster_hexbytes___globals;
    cpy_r_r31 = CPyStatics[11]; /* '__version__' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_hexbytes/__init__.py", "<module>", 11, CPyStatic_faster_hexbytes___globals);
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
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 15, CPyStatic__utils___globals, "bytes", cpy_r_val);
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
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 17, CPyStatic__utils___globals, "str", cpy_r_val);
        goto CPyL51;
    }
    cpy_r_r4 = CPyDef__utils___hexstr_to_bytes(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 17, CPyStatic__utils___globals);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 19, CPyStatic__utils___globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r9) || PyByteArray_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 19, CPyStatic__utils___globals, "bytes", cpy_r_r9);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 21, CPyStatic__utils___globals);
        goto CPyL51;
    }
    if (!cpy_r_r12) goto CPyL15;
    cpy_r_r13 = CPyStatics[65]; /* b'\x01' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r13;
    goto CPyL16;
CPyL15: ;
    cpy_r_r15 = CPyStatics[66]; /* b'\x00' */
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 25, CPyStatic__utils___globals);
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
    cpy_r_r25 = CPyStatics[12]; /* 'Cannot convert negative integer ' */
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r26 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 26, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r27 = CPyTagged_Str(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 26, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r28 = CPyStatics[13]; /* ' to bytes' */
    cpy_r_r29 = CPyStr_Build(3, cpy_r_r25, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 26, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[14]; /* 'ValueError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 26, CPyStatic__utils___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r29};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 26, CPyStatic__utils___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r29);
    CPy_Raise(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 26, CPyStatic__utils___globals);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 28, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[15]; /* 'hex' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 28, CPyStatic__utils___globals);
        goto CPyL53;
    }
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r36);
    PyObject *cpy_r_r41[1] = {cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 28, CPyStatic__utils___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 28, CPyStatic__utils___globals, "str", cpy_r_r43);
        goto CPyL51;
    }
    cpy_r_r45 = CPyDef__utils___to_bytes(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 28, CPyStatic__utils___globals);
        goto CPyL51;
    }
    return cpy_r_r45;
CPyL37: ;
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[16]; /* 'memoryview' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 29, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r49 = PyObject_IsInstance(cpy_r_val, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 29, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r51 = cpy_r_r49;
    if (!cpy_r_r51) goto CPyL43;
    cpy_r_r52 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r53[1] = {cpy_r_val};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic__utils___globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r55) || PyByteArray_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic__utils___globals, "bytes", cpy_r_r55);
        goto CPyL51;
    }
    return cpy_r_r56;
CPyL43: ;
    cpy_r_r57 = CPyStatics[17]; /* '' */
    cpy_r_r58 = CPyStatics[18]; /* 'Cannot convert ' */
    cpy_r_r59 = CPyStatics[19]; /* '{!r:{}}' */
    cpy_r_r60 = CPyStatics[17]; /* '' */
    cpy_r_r61 = CPyStatics[20]; /* 'format' */
    PyObject *cpy_r_r62[3] = {cpy_r_r59, cpy_r_val, cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r63, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r65 = CPyStatics[21]; /* ' of type ' */
    cpy_r_r66 = CPyStatics[22]; /* '{:{}}' */
    cpy_r_r67 = CPy_TYPE(cpy_r_val);
    cpy_r_r68 = CPyStatics[17]; /* '' */
    cpy_r_r69 = CPyStatics[20]; /* 'format' */
    PyObject *cpy_r_r70[3] = {cpy_r_r66, cpy_r_r67, cpy_r_r68};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r71, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r73 = CPyStatics[13]; /* ' to bytes' */
    cpy_r_r74 = PyList_New(5);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
        goto CPyL51;
    }
    cpy_r_r82 = CPyModule_builtins;
    cpy_r_r83 = CPyStatics[23]; /* 'TypeError' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r85[1] = {cpy_r_r81};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 1, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r81);
    CPy_Raise(cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic__utils___globals);
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
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL1;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
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
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    CPy_TypeError("union[bool, object, bytes, int, str]", obj_val); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef__utils___to_bytes(arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 7, CPyStatic__utils___globals);
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
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = CPyStatics[24]; /* '0x' */
    cpy_r_r1 = CPyStatics[25]; /* '0X' */
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 36, CPyStatic__utils___globals);
        goto CPyL29;
    }
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStr_GetSlice(cpy_r_hexstr, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 37, CPyStatic__utils___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 37, CPyStatic__utils___globals, "str", cpy_r_r5);
        goto CPyL29;
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 42, CPyStatic__utils___globals);
        goto CPyL30;
    }
    cpy_r_r9 = cpy_r_r7 << 1;
    cpy_r_r10 = CPyTagged_Remainder(cpy_r_r9, 4);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 42, CPyStatic__utils___globals);
        goto CPyL30;
    }
    cpy_r_r11 = cpy_r_r10 != 0;
    CPyTagged_DECREF(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPyStatics[26]; /* '0' */
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r12, cpy_r_non_prefixed_hex);
    CPy_DECREF(cpy_r_non_prefixed_hex);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 43, CPyStatic__utils___globals);
        goto CPyL29;
    }
    cpy_r_padded_hex = cpy_r_r13;
    goto CPyL12;
CPyL11: ;
    cpy_r_padded_hex = cpy_r_non_prefixed_hex;
CPyL12: ;
    cpy_r_r14 = PyUnicode_AsASCIIString(cpy_r_padded_hex);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 48, CPyStatic__utils___globals);
        goto CPyL14;
    } else
        goto CPyL31;
CPyL13: ;
    goto CPyL25;
CPyL14: ;
    cpy_r_r15 = CPy_CatchError();
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[27]; /* 'UnicodeDecodeError' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 49, CPyStatic__utils___globals);
        goto CPyL32;
    }
    cpy_r_r19 = CPy_ExceptionMatches(cpy_r_r18);
    CPy_DecRef(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL33;
    cpy_r_r20 = CPyStatics[28]; /* 'hex string ' */
    cpy_r_r21 = CPyStatics[29]; /* ' may only contain [0-9a-fA-F] characters' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_padded_hex, cpy_r_r21);
    CPy_DecRef(cpy_r_padded_hex);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 51, CPyStatic__utils___globals);
        goto CPyL23;
    }
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[14]; /* 'ValueError' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 50, CPyStatic__utils___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 50, CPyStatic__utils___globals);
        goto CPyL34;
    }
    CPy_DecRef(cpy_r_r22);
    CPy_Raise(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 50, CPyStatic__utils___globals);
        goto CPyL23;
    } else
        goto CPyL35;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL36;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r15);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL29;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r30 = CPyModule_binascii;
    cpy_r_r31 = CPyStatics[30]; /* 'unhexlify' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 54, CPyStatic__utils___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r14};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 54, CPyStatic__utils___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r14);
    if (likely(PyBytes_Check(cpy_r_r35) || PyByteArray_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 54, CPyStatic__utils___globals, "bytes", cpy_r_r35);
        goto CPyL29;
    }
    return cpy_r_r36;
CPyL29: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL30: ;
    CPy_DecRef(cpy_r_non_prefixed_hex);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_padded_hex);
    goto CPyL13;
CPyL32: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL21;
CPyL34: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL23;
CPyL35: ;
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    goto CPyL20;
CPyL36: ;
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    goto CPyL22;
CPyL37: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL29;
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
    CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 35, CPyStatic__utils___globals);
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
    char cpy_r_r19;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", -1, CPyStatic__utils___globals);
        goto CPyL6;
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
    cpy_r_r10 = CPyStatics[71]; /* (('binascii', 'binascii', 'binascii'),) */
    cpy_r_r11 = CPyStatic__utils___globals;
    cpy_r_r12 = CPyStatics[32]; /* 'faster_hexbytes/_utils.py' */
    cpy_r_r13 = CPyStatics[33]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL6;
    cpy_r_r15 = CPyStatics[72]; /* ('Union',) */
    cpy_r_r16 = CPyStatics[35]; /* 'typing' */
    cpy_r_r17 = CPyStatic__utils___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", 2, CPyStatic__utils___globals);
        goto CPyL6;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    return 1;
CPyL6: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
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
    Py_CLEAR(CPyType_main___HexBytes);
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
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef__utils___to_bytes(cpy_r_val);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 42, CPyStatic_main___globals);
        goto CPyL4;
    }
    cpy_r_r1 = (PyObject *)&PyBytes_Type;
    cpy_r_r2 = CPyStatics[36]; /* '__new__' */
    PyObject *cpy_r_r3[3] = {cpy_r_r1, cpy_r_cls, cpy_r_r0};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 43, CPyStatic_main___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_main___HexBytes))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 43, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r5);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
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
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL4;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    if (PyLong_Check(obj_val))
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
    CPy_TypeError("union[bool, object, bytes, int, str]", obj_val); 
    goto fail;
__LL4: ;
    PyObject *retval = CPyDef_main_____new___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_cls, arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 41, CPyStatic_main___globals);
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
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[37]; /* 'super' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 56, CPyStatic_main___globals);
        goto CPyL11;
    }
    cpy_r_r3 = (PyObject *)CPyType_main___HexBytes;
    PyObject *cpy_r_r4[2] = {cpy_r_r3, cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 56, CPyStatic_main___globals);
        goto CPyL11;
    }
    cpy_r_r7 = CPyStatics[38]; /* '__getitem__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 56, CPyStatic_main___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_key};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 56, CPyStatic_main___globals);
        goto CPyL11;
    }
    if (PyLong_Check(cpy_r_r11))
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL5;
    if (PyBytes_Check(cpy_r_r11) || PyByteArray_Check(cpy_r_r11))
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL5;
    CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 56, CPyStatic_main___globals, "union[int, bytes]", cpy_r_r11);
    goto CPyL11;
__LL5: ;
    cpy_r_r13 = CPyStatics[15]; /* 'hex' */
    cpy_r_r14 = PyObject_HasAttr(cpy_r_r12, cpy_r_r13);
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPy_TYPE(cpy_r_self);
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 58, CPyStatic_main___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_main___HexBytes))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 58, CPyStatic_main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r18);
        goto CPyL11;
    }
    return cpy_r_r19;
CPyL9: ;
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 60, CPyStatic_main___globals);
        goto CPyL11;
    }
    cpy_r_r21 = CPyTagged_StealAsObject(cpy_r_r20);
    return cpy_r_r21;
CPyL11: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL12: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL11;
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
    if (likely(Py_TYPE(obj_self) == CPyType_main___HexBytes))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_main_____getitem___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 53, CPyStatic_main___globals);
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
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = CPyStatics[17]; /* '' */
    cpy_r_r1 = CPyStatics[39]; /* 'HexBytes(' */
    cpy_r_r2 = CPyStatics[19]; /* '{!r:{}}' */
    cpy_r_r3 = CPyStatics[24]; /* '0x' */
    cpy_r_r4 = CPyStatics[15]; /* 'hex' */
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals, "str", cpy_r_r7);
        goto CPyL8;
    }
    cpy_r_r9 = PyUnicode_Concat(cpy_r_r3, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals);
        goto CPyL8;
    }
    cpy_r_r10 = CPyStatics[17]; /* '' */
    cpy_r_r11 = CPyStatics[20]; /* 'format' */
    PyObject *cpy_r_r12[3] = {cpy_r_r2, cpy_r_r9, cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals, "str", cpy_r_r14);
        goto CPyL8;
    }
    cpy_r_r16 = CPyStatics[40]; /* ')' */
    cpy_r_r17 = PyList_New(3);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals);
        goto CPyL10;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r19 = cpy_r_r1;
    cpy_r_r20 = cpy_r_r19 + 8;
    *(PyObject * *)cpy_r_r20 = cpy_r_r15;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r21 = cpy_r_r19 + 16;
    *(PyObject * *)cpy_r_r21 = cpy_r_r16;
    cpy_r_r22 = PyUnicode_Join(cpy_r_r0, cpy_r_r17);
    CPy_DECREF_NO_IMM(cpy_r_r17);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 63, CPyStatic_main___globals);
        goto CPyL8;
    }
    return cpy_r_r22;
CPyL8: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL9: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL8;
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
    if (likely(Py_TYPE(obj_self) == CPyType_main___HexBytes))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_main_____repr___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 62, CPyStatic_main___globals);
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
    cpy_r_r0 = CPyStatics[24]; /* '0x' */
    cpy_r_r1 = CPyStatics[15]; /* 'hex' */
    PyObject *cpy_r_r2[1] = {cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", 69, CPyStatic_main___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "to_0x_hex", 69, CPyStatic_main___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = PyUnicode_Concat(cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", 69, CPyStatic_main___globals);
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
    if (likely(Py_TYPE(obj_self) == CPyType_main___HexBytes))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_main___to_0x_hex_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", 65, CPyStatic_main___globals);
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
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    tuple_T2OT2OO cpy_r_r10;
    tuple_T2OT2OO cpy_r_r11;
    cpy_r_r0 = (PyObject *)&PyBytes_Type;
    cpy_r_r1 = CPyStatics[36]; /* '__new__' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", 79, CPyStatic_main___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPy_TYPE(cpy_r_self);
    cpy_r_r4 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", 79, CPyStatic_main___globals);
        goto CPyL5;
    }
    if (likely(PyBytes_Check(cpy_r_r7) || PyByteArray_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__reduce__", 79, CPyStatic_main___globals, "bytes", cpy_r_r7);
        goto CPyL5;
    }
    cpy_r_r9.f0 = cpy_r_r3;
    cpy_r_r9.f1 = cpy_r_r8;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    return cpy_r_r10;
CPyL4: ;
    tuple_T2OT2OO __tmp6 = { NULL, (tuple_T2OO) { NULL, NULL } };
    cpy_r_r11 = __tmp6;
    return cpy_r_r11;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL4;
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
    if (likely(Py_TYPE(obj_self) == CPyType_main___HexBytes))
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
    CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", 71, CPyStatic_main___globals);
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
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
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
    tuple_T6OOOOOO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject **cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", -1, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[73]; /* ('TYPE_CHECKING', 'Callable', 'Tuple', 'Type', 'Union',
                                  'overload') */
    cpy_r_r6 = CPyStatics[35]; /* 'typing' */
    cpy_r_r7 = CPyStatic_main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 1, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[74]; /* ('mypyc_attr',) */
    cpy_r_r10 = CPyStatics[47]; /* 'mypy_extensions' */
    cpy_r_r11 = CPyStatic_main___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 10, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPyModule_mypy_extensions = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[75]; /* ('Self',) */
    cpy_r_r14 = CPyStatics[49]; /* 'typing_extensions' */
    cpy_r_r15 = CPyStatic_main___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 13, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPyModule_typing_extensions = cpy_r_r16;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[76]; /* ('to_bytes',) */
    cpy_r_r18 = CPyStatics[51]; /* 'faster_hexbytes._utils' */
    cpy_r_r19 = CPyStatic_main___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 17, CPyStatic_main___globals);
        goto CPyL45;
    }
    CPyModule_faster_hexbytes____utils = cpy_r_r20;
    CPy_INCREF(CPyModule_faster_hexbytes____utils);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic_main___globals;
    cpy_r_r22 = CPyStatics[34]; /* 'Union' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 26, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r24 = (PyObject *)&PyBool_Type;
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[52]; /* 'bytearray' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 26, CPyStatic_main___globals);
        goto CPyL46;
    }
    cpy_r_r28 = (PyObject *)&PyBytes_Type;
    cpy_r_r29 = (PyObject *)&PyLong_Type;
    cpy_r_r30 = (PyObject *)&PyUnicode_Type;
    cpy_r_r31 = CPyModule_builtins;
    cpy_r_r32 = CPyStatics[16]; /* 'memoryview' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 26, CPyStatic_main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r24);
    CPy_INCREF(cpy_r_r28);
    CPy_INCREF(cpy_r_r29);
    CPy_INCREF(cpy_r_r30);
    cpy_r_r34.f0 = cpy_r_r24;
    cpy_r_r34.f1 = cpy_r_r27;
    cpy_r_r34.f2 = cpy_r_r28;
    cpy_r_r34.f3 = cpy_r_r29;
    cpy_r_r34.f4 = cpy_r_r30;
    cpy_r_r34.f5 = cpy_r_r33;
    cpy_r_r35 = PyTuple_New(6);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp12);
    PyObject *__tmp13 = cpy_r_r34.f2;
    PyTuple_SET_ITEM(cpy_r_r35, 2, __tmp13);
    PyObject *__tmp14 = cpy_r_r34.f3;
    PyTuple_SET_ITEM(cpy_r_r35, 3, __tmp14);
    PyObject *__tmp15 = cpy_r_r34.f4;
    PyTuple_SET_ITEM(cpy_r_r35, 4, __tmp15);
    PyObject *__tmp16 = cpy_r_r34.f5;
    PyTuple_SET_ITEM(cpy_r_r35, 5, __tmp16);
    cpy_r_r36 = PyObject_GetItem(cpy_r_r23, cpy_r_r35);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 26, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r37 = CPyStatic_main___globals;
    cpy_r_r38 = CPyStatics[53]; /* 'BytesLike' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 26, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[54]; /* 'bytes' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r44 = PyTuple_Pack(1, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r45 = (PyObject *)&PyType_Type;
    cpy_r_r46 = CPy_CalculateMetaclass(cpy_r_r45, cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r47 = CPyStatics[55]; /* '__prepare__' */
    cpy_r_r48 = PyObject_HasAttr(cpy_r_r46, cpy_r_r47);
    if (!cpy_r_r48) goto CPyL21;
    cpy_r_r49 = CPyStatics[7]; /* 'HexBytes' */
    cpy_r_r50 = CPyStatics[55]; /* '__prepare__' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r52[2] = {cpy_r_r49, cpy_r_r44};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 2, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL48;
    }
    if (likely(PyDict_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals, "dict", cpy_r_r54);
        goto CPyL48;
    }
    cpy_r_r56 = cpy_r_r55;
    goto CPyL23;
CPyL21: ;
    cpy_r_r57 = PyDict_New();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL48;
    }
    cpy_r_r56 = cpy_r_r57;
CPyL23: ;
    cpy_r_r58 = PyDict_New();
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r59 = CPyDef_main_____new___3_HexBytes_obj();
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r60 = CPyModule_builtins;
    cpy_r_r61 = CPyStatics[56]; /* 'staticmethod' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r63[1] = {cpy_r_r59};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL51;
    }
    CPy_DECREF_NO_IMM(cpy_r_r59);
    cpy_r_r66 = CPyStatics[36]; /* '__new__' */
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r56, cpy_r_r66, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 41, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r69 = CPyDef_main_____getitem___3_HexBytes_obj();
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r70 = CPyStatics[38]; /* '__getitem__' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r56, cpy_r_r70, cpy_r_r69);
    CPy_DECREF_NO_IMM(cpy_r_r69);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 53, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r73 = CPyDef_main_____repr___3_HexBytes_obj();
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r74 = CPyStatics[57]; /* '__repr__' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r56, cpy_r_r74, cpy_r_r73);
    CPy_DECREF_NO_IMM(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 62, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r77 = CPyDef_main___to_0x_hex_HexBytes_obj();
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 65, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r78 = CPyStatics[58]; /* 'to_0x_hex' */
    cpy_r_r79 = CPyDict_SetItem(cpy_r_r56, cpy_r_r78, cpy_r_r77);
    CPy_DECREF_NO_IMM(cpy_r_r77);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 65, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r81 = CPyDef_main_____reduce___3_HexBytes_obj();
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r82 = CPyStatics[59]; /* '__reduce__' */
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r56, cpy_r_r82, cpy_r_r81);
    CPy_DECREF_NO_IMM(cpy_r_r81);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 71, CPyStatic_main___globals);
        goto CPyL50;
    }
    cpy_r_r85 = CPyStatics[7]; /* 'HexBytes' */
    cpy_r_r86 = CPyStatics[60]; /* '__annotations__' */
    cpy_r_r87 = CPyDict_SetItem(cpy_r_r56, cpy_r_r86, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r89 = CPyStatics[61]; /* 'mypyc filler docstring' */
    cpy_r_r90 = CPyStatics[62]; /* '__doc__' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r56, cpy_r_r90, cpy_r_r89);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL49;
    }
    cpy_r_r93 = CPyStatics[8]; /* 'faster_hexbytes.main' */
    cpy_r_r94 = CPyStatics[63]; /* '__module__' */
    cpy_r_r95 = CPyDict_SetItem(cpy_r_r56, cpy_r_r94, cpy_r_r93);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r97[3] = {cpy_r_r85, cpy_r_r44, cpy_r_r56};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = PyObject_Vectorcall(cpy_r_r46, cpy_r_r98, 3, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r100 = CPyStatic_main___globals;
    cpy_r_r101 = CPyStatics[46]; /* 'mypyc_attr' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 29, CPyStatic_main___globals);
        goto CPyL52;
    }
    cpy_r_r103 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r104[1] = {cpy_r_r103};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = CPyStatics[77]; /* ('native_class',) */
    cpy_r_r107 = PyObject_Vectorcall(cpy_r_r102, cpy_r_r105, 0, cpy_r_r106);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 29, CPyStatic_main___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r108[1] = {cpy_r_r99};
    cpy_r_r109 = (PyObject **)&cpy_r_r108;
    cpy_r_r110 = PyObject_Vectorcall(cpy_r_r107, cpy_r_r109, 1, 0);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r99);
    CPyType_main___HexBytes = (PyTypeObject *)cpy_r_r110;
    CPy_INCREF(CPyType_main___HexBytes);
    cpy_r_r111 = CPyStatic_main___globals;
    cpy_r_r112 = CPyStatics[7]; /* 'HexBytes' */
    cpy_r_r113 = PyDict_SetItem(cpy_r_r111, cpy_r_r112, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 30, CPyStatic_main___globals);
        goto CPyL45;
    }
    cpy_r_r115 = (PyObject *)CPyType_main___HexBytes;
    return 1;
CPyL45: ;
    cpy_r_r116 = 2;
    return cpy_r_r116;
CPyL46: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r27);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r56);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r58);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    goto CPyL45;
CPyL52: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL45;
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
    CPyModule_mypy_extensions = Py_None;
    CPyModule_typing_extensions = Py_None;
    CPyModule_faster_hexbytes____utils = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[78];
const char * const CPyLit_Str[] = {
    "\005\bbuiltins\aversion\t__version\022importlib.metadata\bHexBytes",
    "\004\024faster_hexbytes.main\a__all__\bhexbytes\v__version__",
    "\006 Cannot convert negative integer \t to bytes\nValueError\003hex\nmemoryview\000",
    "\t\017Cannot convert \a{!r:{}}\006format\t of type \005{:{}}\tTypeError\0020x\0020X\0010",
    "\002\022UnicodeDecodeError\vhex string ",
    "\003( may only contain [0-9a-fA-F] characters\tunhexlify\bbinascii",
    "\006\031faster_hexbytes/_utils.py\b<module>\005Union\006typing\a__new__\005super",
    "\b\v__getitem__\tHexBytes(\001)\rTYPE_CHECKING\bCallable\005Tuple\004Type\boverload",
    "\005\nmypyc_attr\017mypy_extensions\004Self\021typing_extensions\bto_bytes",
    "\005\026faster_hexbytes._utils\tbytearray\tBytesLike\005bytes\v__prepare__",
    "\005\fstaticmethod\b__repr__\tto_0x_hex\n__reduce__\017__annotations__",
    "\004\026mypyc filler docstring\a__doc__\n__module__\fnative_class",
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
    11, 1, 4, 1, 5, 1, 7, 3, 31, 31, 31, 1, 70, 1, 34, 6, 41, 42, 43,
    44, 34, 45, 1, 46, 1, 48, 1, 50, 1, 64
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
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_typing_extensions;
char CPyDef_faster_hexbytes_____top_level__(void);
PyObject *CPyDef__utils___to_bytes(PyObject *cpy_r_val);
PyObject *CPyPy__utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__utils___hexstr_to_bytes(PyObject *cpy_r_hexstr);
PyObject *CPyPy__utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__utils_____top_level__(void);
PyTypeObject *CPyType_main___HexBytes;
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

static int exec_6a32f4913d613d6a7ddf__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    extern PyObject *CPyInit_faster_hexbytes(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes, "6a32f4913d613d6a7ddf__mypyc.init_faster_hexbytes", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_hexbytes____utils(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes____utils, "6a32f4913d613d6a7ddf__mypyc.init_faster_hexbytes____utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes____utils", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_hexbytes___main(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes___main, "6a32f4913d613d6a7ddf__mypyc.init_faster_hexbytes___main", NULL);
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
static PyModuleDef module_def_6a32f4913d613d6a7ddf__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "6a32f4913d613d6a7ddf__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_6a32f4913d613d6a7ddf__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_6a32f4913d613d6a7ddf__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_6a32f4913d613d6a7ddf__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
