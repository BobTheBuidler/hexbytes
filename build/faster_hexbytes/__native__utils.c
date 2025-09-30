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
#include "__native__utils.h"
#include "__native_internal__utils.h"
static PyMethodDef faster_hexbytes____utilsmodule_methods[] = {
    {"to_bytes", (PyCFunction)CPyPy_faster_hexbytes____utils___to_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("to_bytes(val)\n--\n\n") /* docstring */},
    {"hexstr_to_bytes", (PyCFunction)CPyPy_faster_hexbytes____utils___hexstr_to_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("hexstr_to_bytes(hexstr)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_hexbytes____utils(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes____utils__internal, "__name__");
    CPyStatic_faster_hexbytes____utils___globals = PyModule_GetDict(CPyModule_faster_hexbytes____utils__internal);
    if (unlikely(CPyStatic_faster_hexbytes____utils___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_hexbytes____utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_hexbytes____utils__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_hexbytes____utils___unhexlify);
    CPyStatic_faster_hexbytes____utils___unhexlify = NULL;
    return -1;
}
static struct PyModuleDef faster_hexbytes____utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_hexbytes._utils",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_hexbytes____utilsmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_hexbytes____utils(void)
{
    if (CPyModule_faster_hexbytes____utils__internal) {
        Py_INCREF(CPyModule_faster_hexbytes____utils__internal);
        return CPyModule_faster_hexbytes____utils__internal;
    }
    CPyModule_faster_hexbytes____utils__internal = PyModule_Create(&faster_hexbytes____utilsmodule);
    if (unlikely(CPyModule_faster_hexbytes____utils__internal == NULL))
        goto fail;
    if (CPyExec_faster_hexbytes____utils(CPyModule_faster_hexbytes____utils__internal) != 0)
        goto fail;
    return CPyModule_faster_hexbytes____utils__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_faster_hexbytes____utils___to_bytes(PyObject *cpy_r_val) {
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
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 19, CPyStatic_faster_hexbytes____utils___globals, "bytes", cpy_r_val);
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
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 21, CPyStatic_faster_hexbytes____utils___globals, "str", cpy_r_val);
        goto CPyL51;
    }
    cpy_r_r4 = CPyDef_faster_hexbytes____utils___hexstr_to_bytes(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 21, CPyStatic_faster_hexbytes____utils___globals);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 23, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r9) || PyByteArray_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 23, CPyStatic_faster_hexbytes____utils___globals, "bytes", cpy_r_r9);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 25, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    if (!cpy_r_r12) goto CPyL15;
    cpy_r_r13 = CPyStatics[29]; /* b'\x01' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r13;
    goto CPyL16;
CPyL15: ;
    cpy_r_r15 = CPyStatics[30]; /* b'\x00' */
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 29, CPyStatic_faster_hexbytes____utils___globals);
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
    cpy_r_r25 = CPyStatics[3]; /* 'Cannot convert negative integer ' */
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r26 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r27 = CPyTagged_Str(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r28 = CPyStatics[4]; /* ' to bytes' */
    cpy_r_r29 = CPyStr_Build(3, cpy_r_r25, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[5]; /* 'ValueError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r29};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r29);
    CPy_Raise(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 30, CPyStatic_faster_hexbytes____utils___globals);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[6]; /* 'hex' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL53;
    }
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r36);
    PyObject *cpy_r_r41[1] = {cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic_faster_hexbytes____utils___globals, "str", cpy_r_r43);
        goto CPyL51;
    }
    cpy_r_r45 = CPyDef_faster_hexbytes____utils___to_bytes(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 32, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    return cpy_r_r45;
CPyL37: ;
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[7]; /* 'memoryview' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 33, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r49 = PyObject_IsInstance(cpy_r_val, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 33, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r51 = cpy_r_r49;
    if (!cpy_r_r51) goto CPyL43;
    cpy_r_r52 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r53[1] = {cpy_r_val};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 34, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r55) || PyByteArray_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "to_bytes", 34, CPyStatic_faster_hexbytes____utils___globals, "bytes", cpy_r_r55);
        goto CPyL51;
    }
    return cpy_r_r56;
CPyL43: ;
    cpy_r_r57 = CPyStatics[8]; /* '' */
    cpy_r_r58 = CPyStatics[9]; /* 'Cannot convert ' */
    cpy_r_r59 = CPyStatics[10]; /* '{!r:{}}' */
    cpy_r_r60 = CPyStatics[8]; /* '' */
    cpy_r_r61 = CPyStatics[11]; /* 'format' */
    PyObject *cpy_r_r62[3] = {cpy_r_r59, cpy_r_val, cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r63, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r65 = CPyStatics[12]; /* ' of type ' */
    cpy_r_r66 = CPyStatics[13]; /* '{:{}}' */
    cpy_r_r67 = CPy_TYPE(cpy_r_val);
    cpy_r_r68 = CPyStatics[8]; /* '' */
    cpy_r_r69 = CPyStatics[11]; /* 'format' */
    PyObject *cpy_r_r70[3] = {cpy_r_r66, cpy_r_r67, cpy_r_r68};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r71, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r73 = CPyStatics[4]; /* ' to bytes' */
    cpy_r_r74 = PyList_New(5);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL51;
    }
    cpy_r_r82 = CPyModule_builtins;
    cpy_r_r83 = CPyStatics[14]; /* 'TypeError' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r85[1] = {cpy_r_r81};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 1, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r81);
    CPy_Raise(cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 36, CPyStatic_faster_hexbytes____utils___globals);
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

PyObject *CPyPy_faster_hexbytes____utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes____utils___to_bytes(arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/_utils.py", "to_bytes", 11, CPyStatic_faster_hexbytes____utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes____utils___hexstr_to_bytes(PyObject *cpy_r_hexstr) {
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
    cpy_r_r0 = CPyStatics[15]; /* '0x' */
    cpy_r_r1 = CPyStatics[16]; /* '0X' */
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 40, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL31;
    }
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStr_GetSlice(cpy_r_hexstr, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 41, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 41, CPyStatic_faster_hexbytes____utils___globals, "str", cpy_r_r5);
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
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 46, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL32;
    }
    cpy_r_r9 = cpy_r_r7 << 1;
    cpy_r_r10 = CPyTagged_Remainder(cpy_r_r9, 4);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 46, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL32;
    }
    cpy_r_r11 = cpy_r_r10 != 0;
    CPyTagged_DECREF(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPyStatics[17]; /* '0' */
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r12, cpy_r_non_prefixed_hex);
    CPy_DECREF(cpy_r_non_prefixed_hex);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 47, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL31;
    }
    cpy_r_padded_hex = cpy_r_r13;
    goto CPyL12;
CPyL11: ;
    cpy_r_padded_hex = cpy_r_non_prefixed_hex;
CPyL12: ;
    cpy_r_r14 = PyUnicode_AsASCIIString(cpy_r_padded_hex);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 52, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL14;
    } else
        goto CPyL33;
CPyL13: ;
    goto CPyL25;
CPyL14: ;
    cpy_r_r15 = CPy_CatchError();
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[18]; /* 'UnicodeDecodeError' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 53, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL34;
    }
    cpy_r_r19 = CPy_ExceptionMatches(cpy_r_r18);
    CPy_DecRef(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL35;
    cpy_r_r20 = CPyStatics[19]; /* 'hex string ' */
    cpy_r_r21 = CPyStatics[20]; /* ' may only contain [0-9a-fA-F] characters' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_padded_hex, cpy_r_r21);
    CPy_DecRef(cpy_r_padded_hex);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 55, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL23;
    }
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[5]; /* 'ValueError' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 54, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 54, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL36;
    }
    CPy_DecRef(cpy_r_r22);
    CPy_Raise(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 54, CPyStatic_faster_hexbytes____utils___globals);
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
    cpy_r_r30 = CPyStatic_faster_hexbytes____utils___unhexlify;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"unhexlify\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 58, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL28: ;
    PyObject *cpy_r_r32[1] = {cpy_r_r14};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_Vectorcall(cpy_r_r30, cpy_r_r33, 1, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 58, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r14);
    if (likely(PyBytes_Check(cpy_r_r34) || PyByteArray_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 58, CPyStatic_faster_hexbytes____utils___globals, "bytes", cpy_r_r34);
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

PyObject *CPyPy_faster_hexbytes____utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes____utils___hexstr_to_bytes(arg_hexstr);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/_utils.py", "hexstr_to_bytes", 39, CPyStatic_faster_hexbytes____utils___globals);
    return NULL;
}

char CPyDef_faster_hexbytes____utils_____top_level__(void) {
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
    cpy_r_r3 = CPyStatics[21]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", -1, CPyStatic_faster_hexbytes____utils___globals);
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
    cpy_r_r10 = CPyStatics[32]; /* (('binascii', 'binascii', 'binascii'),) */
    cpy_r_r11 = CPyStatic_faster_hexbytes____utils___globals;
    cpy_r_r12 = CPyStatics[23]; /* 'faster_hexbytes/_utils.py' */
    cpy_r_r13 = CPyStatics[24]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPyStatics[33]; /* ('Final', 'Union') */
    cpy_r_r16 = CPyStatics[27]; /* 'typing' */
    cpy_r_r17 = CPyStatic_faster_hexbytes____utils___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", 2, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL8;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyModule_binascii;
    cpy_r_r20 = CPyStatics[28]; /* 'unhexlify' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", 8, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL8;
    }
    CPyStatic_faster_hexbytes____utils___unhexlify = cpy_r_r21;
    CPy_INCREF(CPyStatic_faster_hexbytes____utils___unhexlify);
    cpy_r_r22 = CPyStatic_faster_hexbytes____utils___globals;
    cpy_r_r23 = CPyStatics[28]; /* 'unhexlify' */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r22, cpy_r_r23, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_hexbytes/_utils.py", "<module>", 8, CPyStatic_faster_hexbytes____utils___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_hexbytes____utils = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_binascii = Py_None;
    CPyModule_typing = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[34];
const char * const CPyLit_Str[] = {
    "\006 Cannot convert negative integer \t to bytes\nValueError\003hex\nmemoryview\000",
    "\t\017Cannot convert \a{!r:{}}\006format\t of type \005{:{}}\tTypeError\0020x\0020X\0010",
    "\002\022UnicodeDecodeError\vhex string ",
    "\003( may only contain [0-9a-fA-F] characters\bbuiltins\bbinascii",
    "\006\031faster_hexbytes/_utils.py\b<module>\005Final\005Union\006typing\tunhexlify",
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
const int CPyLit_Tuple[] = {3, 3, 22, 22, 22, 1, 31, 2, 25, 26};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_hexbytes____utils__internal = NULL;
CPyModule *CPyModule_faster_hexbytes____utils;
PyObject *CPyStatic_faster_hexbytes____utils___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_binascii;
CPyModule *CPyModule_typing;
PyObject *CPyStatic_faster_hexbytes____utils___unhexlify = NULL;
PyObject *CPyDef_faster_hexbytes____utils___to_bytes(PyObject *cpy_r_val);
PyObject *CPyPy_faster_hexbytes____utils___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes____utils___hexstr_to_bytes(PyObject *cpy_r_hexstr);
PyObject *CPyPy_faster_hexbytes____utils___hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_hexbytes____utils_____top_level__(void);

static struct export_table_faster_hexbytes____utils exports = {
    &CPyStatic_faster_hexbytes____utils___unhexlify,
    &CPyDef_faster_hexbytes____utils___to_bytes,
    &CPyDef_faster_hexbytes____utils___hexstr_to_bytes,
    &CPyDef_faster_hexbytes____utils_____top_level__,
};

static int exec__utils__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_hexbytes._utils__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_hexbytes____utils(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes____utils, "faster_hexbytes._utils__mypyc.init_faster_hexbytes____utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes____utils", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def__utils__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_hexbytes._utils__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit__utils__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def__utils__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec__utils__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
