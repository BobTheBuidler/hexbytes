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
#include "__native_main.h"
#include "__native_internal_main.h"

static PyObject *CPyDunder___get__faster_hexbytes___main_____new___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__new___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj(void);

static PyObject *
faster_hexbytes___main_____new___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_hexbytes___main_____new___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__new___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_hexbytes___main_____new___3_HexBytes_obj_traverse(faster_hexbytes___main_____new___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
faster_hexbytes___main_____new___3_HexBytes_obj_clear(faster_hexbytes___main_____new___3_HexBytes_objObject *self)
{
    return 0;
}

static void
faster_hexbytes___main_____new___3_HexBytes_obj_dealloc(faster_hexbytes___main_____new___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_hexbytes___main_____new___3_HexBytes_obj_free_instance == NULL) {
        faster_hexbytes___main_____new___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_hexbytes___main_____new___3_HexBytes_obj_dealloc)
    faster_hexbytes___main_____new___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_hexbytes___main_____new___3_HexBytes_obj_vtable[2];
static bool
CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_hexbytes___main_____new___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__,
    };
    memcpy(faster_hexbytes___main_____new___3_HexBytes_obj_vtable, faster_hexbytes___main_____new___3_HexBytes_obj_vtable_scratch, sizeof(faster_hexbytes___main_____new___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef faster_hexbytes___main_____new___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($cls, val)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_hexbytes___main_____new___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__new___HexBytes_obj",
    .tp_new = faster_hexbytes___main_____new___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)faster_hexbytes___main_____new___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)faster_hexbytes___main_____new___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)faster_hexbytes___main_____new___3_HexBytes_obj_clear,
    .tp_methods = faster_hexbytes___main_____new___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_hexbytes___main_____new___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____new___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____new___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__new___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_hexbytes___main_____new___3_HexBytes_obj_template = &CPyType_faster_hexbytes___main_____new___3_HexBytes_obj_template_;

PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__new___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____new___3_HexBytes_objObject *self;
    if (faster_hexbytes___main_____new___3_HexBytes_obj_free_instance != NULL) {
        self = faster_hexbytes___main_____new___3_HexBytes_obj_free_instance;
        faster_hexbytes___main_____new___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____new___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_hexbytes___main_____new___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__new___3_HexBytes_obj_setup((PyObject *)CPyType_faster_hexbytes___main_____new___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_hexbytes___main_____getitem___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__getitem___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj(void);

static PyObject *
faster_hexbytes___main_____getitem___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__getitem___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_hexbytes___main_____getitem___3_HexBytes_obj_traverse(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
faster_hexbytes___main_____getitem___3_HexBytes_obj_clear(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self)
{
    return 0;
}

static void
faster_hexbytes___main_____getitem___3_HexBytes_obj_dealloc(faster_hexbytes___main_____getitem___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance == NULL) {
        faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_hexbytes___main_____getitem___3_HexBytes_obj_dealloc)
    faster_hexbytes___main_____getitem___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_hexbytes___main_____getitem___3_HexBytes_obj_vtable[2];
static bool
CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_hexbytes___main_____getitem___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__,
    };
    memcpy(faster_hexbytes___main_____getitem___3_HexBytes_obj_vtable, faster_hexbytes___main_____getitem___3_HexBytes_obj_vtable_scratch, sizeof(faster_hexbytes___main_____getitem___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef faster_hexbytes___main_____getitem___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, key, /)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__getitem___HexBytes_obj",
    .tp_new = faster_hexbytes___main_____getitem___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)faster_hexbytes___main_____getitem___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)faster_hexbytes___main_____getitem___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)faster_hexbytes___main_____getitem___3_HexBytes_obj_clear,
    .tp_methods = faster_hexbytes___main_____getitem___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_hexbytes___main_____getitem___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____getitem___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____getitem___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__getitem___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj_template = &CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj_template_;

PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__getitem___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____getitem___3_HexBytes_objObject *self;
    if (faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance != NULL) {
        self = faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance;
        faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____getitem___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_hexbytes___main_____getitem___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__getitem___3_HexBytes_obj_setup((PyObject *)CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_hexbytes___main_____repr___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__repr___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj(void);

static PyObject *
faster_hexbytes___main_____repr___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__repr___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_hexbytes___main_____repr___3_HexBytes_obj_traverse(faster_hexbytes___main_____repr___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
faster_hexbytes___main_____repr___3_HexBytes_obj_clear(faster_hexbytes___main_____repr___3_HexBytes_objObject *self)
{
    return 0;
}

static void
faster_hexbytes___main_____repr___3_HexBytes_obj_dealloc(faster_hexbytes___main_____repr___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance == NULL) {
        faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_hexbytes___main_____repr___3_HexBytes_obj_dealloc)
    faster_hexbytes___main_____repr___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_hexbytes___main_____repr___3_HexBytes_obj_vtable[2];
static bool
CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_hexbytes___main_____repr___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__,
    };
    memcpy(faster_hexbytes___main_____repr___3_HexBytes_obj_vtable, faster_hexbytes___main_____repr___3_HexBytes_obj_vtable_scratch, sizeof(faster_hexbytes___main_____repr___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef faster_hexbytes___main_____repr___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, /)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__repr___HexBytes_obj",
    .tp_new = faster_hexbytes___main_____repr___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)faster_hexbytes___main_____repr___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)faster_hexbytes___main_____repr___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)faster_hexbytes___main_____repr___3_HexBytes_obj_clear,
    .tp_methods = faster_hexbytes___main_____repr___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_hexbytes___main_____repr___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____repr___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____repr___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__repr___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj_template = &CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj_template_;

PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__repr___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____repr___3_HexBytes_objObject *self;
    if (faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance != NULL) {
        self = faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance;
        faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____repr___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_hexbytes___main_____repr___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__repr___3_HexBytes_obj_setup((PyObject *)CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_hexbytes___main___to_0x_hex_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_hexbytes___main_____mypyc__to_0x_hex_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj(void);

static PyObject *
faster_hexbytes___main___to_0x_hex_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc__to_0x_hex_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_hexbytes___main___to_0x_hex_HexBytes_obj_traverse(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
faster_hexbytes___main___to_0x_hex_HexBytes_obj_clear(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self)
{
    return 0;
}

static void
faster_hexbytes___main___to_0x_hex_HexBytes_obj_dealloc(faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance == NULL) {
        faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_hexbytes___main___to_0x_hex_HexBytes_obj_dealloc)
    faster_hexbytes___main___to_0x_hex_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_hexbytes___main___to_0x_hex_HexBytes_obj_vtable[2];
static bool
CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_hexbytes___main___to_0x_hex_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__,
    };
    memcpy(faster_hexbytes___main___to_0x_hex_HexBytes_obj_vtable, faster_hexbytes___main___to_0x_hex_HexBytes_obj_vtable_scratch, sizeof(faster_hexbytes___main___to_0x_hex_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef faster_hexbytes___main___to_0x_hex_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "to_0x_hex_HexBytes_obj",
    .tp_new = faster_hexbytes___main___to_0x_hex_HexBytes_obj_new,
    .tp_dealloc = (destructor)faster_hexbytes___main___to_0x_hex_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)faster_hexbytes___main___to_0x_hex_HexBytes_obj_traverse,
    .tp_clear = (inquiry)faster_hexbytes___main___to_0x_hex_HexBytes_obj_clear,
    .tp_methods = faster_hexbytes___main___to_0x_hex_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_hexbytes___main___to_0x_hex_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main___to_0x_hex_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main___to_0x_hex_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("to_0x_hex_HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj_template = &CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj_template_;

PyObject *CPyDef_faster_hexbytes___main_____mypyc__to_0x_hex_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main___to_0x_hex_HexBytes_objObject *self;
    if (faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance != NULL) {
        self = faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance;
        faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main___to_0x_hex_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_hexbytes___main___to_0x_hex_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj(void)
{
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc__to_0x_hex_HexBytes_obj_setup((PyObject *)CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_hexbytes___main_____reduce___3_HexBytes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__reduce___3_HexBytes_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj(void);

static PyObject *
faster_hexbytes___main_____reduce___3_HexBytes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__reduce___3_HexBytes_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_hexbytes___main_____reduce___3_HexBytes_obj_traverse(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
faster_hexbytes___main_____reduce___3_HexBytes_obj_clear(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self)
{
    return 0;
}

static void
faster_hexbytes___main_____reduce___3_HexBytes_obj_dealloc(faster_hexbytes___main_____reduce___3_HexBytes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance == NULL) {
        faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_hexbytes___main_____reduce___3_HexBytes_obj_dealloc)
    faster_hexbytes___main_____reduce___3_HexBytes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_hexbytes___main_____reduce___3_HexBytes_obj_vtable[2];
static bool
CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_hexbytes___main_____reduce___3_HexBytes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__,
        (CPyVTableItem)CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__,
    };
    memcpy(faster_hexbytes___main_____reduce___3_HexBytes_obj_vtable, faster_hexbytes___main_____reduce___3_HexBytes_obj_vtable_scratch, sizeof(faster_hexbytes___main_____reduce___3_HexBytes_obj_vtable));
    return 1;
}

static PyMethodDef faster_hexbytes___main_____reduce___3_HexBytes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__reduce___HexBytes_obj",
    .tp_new = faster_hexbytes___main_____reduce___3_HexBytes_obj_new,
    .tp_dealloc = (destructor)faster_hexbytes___main_____reduce___3_HexBytes_obj_dealloc,
    .tp_traverse = (traverseproc)faster_hexbytes___main_____reduce___3_HexBytes_obj_traverse,
    .tp_clear = (inquiry)faster_hexbytes___main_____reduce___3_HexBytes_obj_clear,
    .tp_methods = faster_hexbytes___main_____reduce___3_HexBytes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_hexbytes___main_____reduce___3_HexBytes_obj,
    .tp_basicsize = sizeof(faster_hexbytes___main_____reduce___3_HexBytes_objObject),
    .tp_vectorcall_offset = offsetof(faster_hexbytes___main_____reduce___3_HexBytes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__reduce___HexBytes_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj_template = &CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj_template_;

PyObject *CPyDef_faster_hexbytes___main_____mypyc___3__reduce___3_HexBytes_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_hexbytes___main_____reduce___3_HexBytes_objObject *self;
    if (faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance != NULL) {
        self = faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance;
        faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_hexbytes___main_____reduce___3_HexBytes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_hexbytes___main_____reduce___3_HexBytes_obj_vtable;
    self->vectorcall = CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj(void)
{
    PyObject *self = CPyDef_faster_hexbytes___main_____mypyc___3__reduce___3_HexBytes_obj_setup((PyObject *)CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef faster_hexbytes___mainmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_hexbytes___main(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_hexbytes___main__internal, "__name__");
    CPyStatic_faster_hexbytes___main___globals = PyModule_GetDict(CPyModule_faster_hexbytes___main__internal);
    if (unlikely(CPyStatic_faster_hexbytes___main___globals == NULL))
        goto fail;
    CPyType_faster_hexbytes___main_____new___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_hexbytes___main_____new___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_hexbytes___main_____new___3_HexBytes_obj))
        goto fail;
    CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj))
        goto fail;
    CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj))
        goto fail;
    CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj))
        goto fail;
    CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_hexbytes___main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_hexbytes___main__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_hexbytes___main____bytes_new);
    CPyStatic_faster_hexbytes___main____bytes_new = NULL;
    Py_CLEAR(CPyType_faster_hexbytes___main___HexBytes);
    Py_CLEAR(CPyType_faster_hexbytes___main_____new___3_HexBytes_obj);
    Py_CLEAR(CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj);
    Py_CLEAR(CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj);
    Py_CLEAR(CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj);
    Py_CLEAR(CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj);
    return -1;
}
static struct PyModuleDef faster_hexbytes___mainmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_hexbytes.main",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_hexbytes___mainmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_hexbytes___main(void)
{
    if (CPyModule_faster_hexbytes___main__internal) {
        Py_INCREF(CPyModule_faster_hexbytes___main__internal);
        return CPyModule_faster_hexbytes___main__internal;
    }
    CPyModule_faster_hexbytes___main__internal = PyModule_Create(&faster_hexbytes___mainmodule);
    if (unlikely(CPyModule_faster_hexbytes___main__internal == NULL))
        goto fail;
    if (CPyExec_faster_hexbytes___main(CPyModule_faster_hexbytes___main__internal) != 0)
        goto fail;
    return CPyModule_faster_hexbytes___main__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = exports_faster_hexbytes____utils.CPyDef_faster_hexbytes____utils___to_bytes(cpy_r_val);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 49, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL7;
    }
    cpy_r_r1 = CPyStatic_faster_hexbytes___main____bytes_new;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL8;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 50, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    PyObject *cpy_r_r3[2] = {cpy_r_cls, cpy_r_r0};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r4, 2, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 50, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_faster_hexbytes___main___HexBytes)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__new__", 50, CPyStatic_faster_hexbytes___main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r5);
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

PyObject *CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (arg_val != NULL) goto __LL1;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL1;
    if (PyLong_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL1;
    CPy_TypeError("union[bytes, str, bool, object, int]", obj_val); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_cls, arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__new__", 48, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key) {
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
    cpy_r_r1 = CPyStatics[3]; /* '__getitem__' */
    PyObject *cpy_r_r2[3] = {cpy_r_r0, cpy_r_self, cpy_r_key};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 63, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL14;
    }
    if (PyLong_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL2;
    if (PyBytes_Check(cpy_r_r4) || PyByteArray_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL2;
    CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 63, CPyStatic_faster_hexbytes___main___globals, "union[int, bytes]", cpy_r_r4);
    goto CPyL14;
__LL2: ;
    cpy_r_r6 = PyLong_Check(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL5;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 65, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL14;
    }
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPy_TYPE(cpy_r_self);
    cpy_r_r10 = (PyObject *)CPyType_faster_hexbytes___main___HexBytes;
    cpy_r_r11 = cpy_r_r9 == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL15;
    } else
        goto CPyL10;
CPyL6: ;
    if (likely(PyBytes_Check(cpy_r_r5) || PyByteArray_Check(cpy_r_r5)))
        cpy_r_r12 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 69, CPyStatic_faster_hexbytes___main___globals, "bytes", cpy_r_r5);
        goto CPyL14;
    }
    cpy_r_r13 = (PyObject *)CPyType_faster_hexbytes___main___HexBytes;
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 69, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_faster_hexbytes___main___HexBytes)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 69, CPyStatic_faster_hexbytes___main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r16);
        goto CPyL14;
    }
    return cpy_r_r17;
CPyL10: ;
    if (likely(PyBytes_Check(cpy_r_r5) || PyByteArray_Check(cpy_r_r5)))
        cpy_r_r18 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 70, CPyStatic_faster_hexbytes___main___globals, "bytes", cpy_r_r5);
        goto CPyL17;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 70, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_faster_hexbytes___main___HexBytes)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__getitem__", 70, CPyStatic_faster_hexbytes___main___globals, "faster_hexbytes.main.HexBytes", cpy_r_r21);
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

PyObject *CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_hexbytes___main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__getitem__", 60, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
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
    cpy_r_r0 = CPyStatics[4]; /* '' */
    cpy_r_r1 = CPyStatics[5]; /* 'HexBytes(' */
    cpy_r_r2 = CPyStatics[6]; /* '{!r:{}}' */
    cpy_r_r3 = CPyStatics[7]; /* '0x' */
    cpy_r_r4 = CPyStatics[8]; /* 'hex' */
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals, "str", cpy_r_r7);
        goto CPyL8;
    }
    cpy_r_r9 = PyUnicode_Concat(cpy_r_r3, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL8;
    }
    cpy_r_r10 = CPyStatics[4]; /* '' */
    cpy_r_r11 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r12[3] = {cpy_r_r2, cpy_r_r9, cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals, "str", cpy_r_r14);
        goto CPyL8;
    }
    cpy_r_r16 = CPyStatics[10]; /* ')' */
    cpy_r_r17 = PyList_New(3);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals);
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
        CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 73, CPyStatic_faster_hexbytes___main___globals);
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

PyObject *CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_hexbytes___main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__repr__", 72, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[7]; /* '0x' */
    cpy_r_r1 = CPyStatics[8]; /* 'hex' */
    PyObject *cpy_r_r2[1] = {cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", 79, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "to_0x_hex", 79, CPyStatic_faster_hexbytes___main___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyStr_Build(2, cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", 79, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_hexbytes___main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "to_0x_hex", 75, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__get__", -1, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

tuple_T2OT2OO CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
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
    cpy_r_r0 = CPyStatic_faster_hexbytes___main____bytes_new;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_bytes_new\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", 89, CPyStatic_faster_hexbytes___main___globals);
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
        CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", 89, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL7;
    }
    if (likely(PyBytes_Check(cpy_r_r6) || PyByteArray_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "__reduce__", 89, CPyStatic_faster_hexbytes___main___globals, "bytes", cpy_r_r6);
        goto CPyL7;
    }
    cpy_r_r8.f0 = cpy_r_r2;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r9.f0 = cpy_r_r0;
    cpy_r_r9.f1 = cpy_r_r8;
    return cpy_r_r9;
CPyL6: ;
    tuple_T2OT2OO __tmp3 = { NULL, (tuple_T2OO) { NULL, NULL } };
    cpy_r_r10 = __tmp3;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_hexbytes___main___HexBytes)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_hexbytes.main.HexBytes", obj_self); 
        goto fail;
    }
    tuple_T2OT2OO retval = CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__(arg___mypyc_self__, arg_self);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp4);
    PyObject *__tmp5 = PyTuple_New(2);
    if (unlikely(__tmp5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6 = retval.f1.f0;
    PyTuple_SET_ITEM(__tmp5, 0, __tmp6);
    PyObject *__tmp7 = retval.f1.f1;
    PyTuple_SET_ITEM(__tmp5, 1, __tmp7);
    PyTuple_SET_ITEM(retbox, 1, __tmp5);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_hexbytes/main.py", "__reduce__", 81, CPyStatic_faster_hexbytes___main___globals);
    return NULL;
}

char CPyDef_faster_hexbytes___main_____top_level__(void) {
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
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[11]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", -1, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[47]; /* ('TYPE_CHECKING', 'Callable', 'Final', 'Tuple', 'Type',
                                  'Union', 'overload') */
    cpy_r_r6 = CPyStatics[19]; /* 'typing' */
    cpy_r_r7 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 1, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_hexbytes___main;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {14};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[49]; /* (('hexbytes.main', 'hexbytes.main', 'hexbytes'),) */
    cpy_r_r15 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r16 = CPyStatics[22]; /* 'faster_hexbytes/main.py' */
    cpy_r_r17 = CPyStatics[23]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL48;
    cpy_r_r19 = CPyStatics[50]; /* ('mypyc_attr',) */
    cpy_r_r20 = CPyStatics[25]; /* 'mypy_extensions' */
    cpy_r_r21 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 15, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    CPyModule_mypy_extensions = cpy_r_r22;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[51]; /* ('Self',) */
    cpy_r_r24 = CPyStatics[27]; /* 'typing_extensions' */
    cpy_r_r25 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 18, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    CPyModule_typing_extensions = cpy_r_r26;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[52]; /* ('to_bytes',) */
    cpy_r_r28 = CPyStatics[29]; /* 'faster_hexbytes._utils' */
    cpy_r_r29 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 22, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    CPyModule_faster_hexbytes____utils = cpy_r_r30;
    CPy_INCREF(CPyModule_faster_hexbytes____utils);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r32 = CPyStatics[17]; /* 'Union' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 31, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r34 = (PyObject *)&PyBytes_Type;
    cpy_r_r35 = (PyObject *)&PyUnicode_Type;
    cpy_r_r36 = (PyObject *)&PyBool_Type;
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[30]; /* 'bytearray' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 31, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL49;
    }
    cpy_r_r40 = (PyObject *)&PyLong_Type;
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[31]; /* 'memoryview' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 31, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL50;
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
    PyObject *__tmp8 = cpy_r_r44.f0;
    PyTuple_SET_ITEM(cpy_r_r45, 0, __tmp8);
    PyObject *__tmp9 = cpy_r_r44.f1;
    PyTuple_SET_ITEM(cpy_r_r45, 1, __tmp9);
    PyObject *__tmp10 = cpy_r_r44.f2;
    PyTuple_SET_ITEM(cpy_r_r45, 2, __tmp10);
    PyObject *__tmp11 = cpy_r_r44.f3;
    PyTuple_SET_ITEM(cpy_r_r45, 3, __tmp11);
    PyObject *__tmp12 = cpy_r_r44.f4;
    PyTuple_SET_ITEM(cpy_r_r45, 4, __tmp12);
    PyObject *__tmp13 = cpy_r_r44.f5;
    PyTuple_SET_ITEM(cpy_r_r45, 5, __tmp13);
    cpy_r_r46 = PyObject_GetItem(cpy_r_r33, cpy_r_r45);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 31, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r47 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r48 = CPyStatics[32]; /* 'BytesLike' */
    cpy_r_r49 = CPyDict_SetItem(cpy_r_r47, cpy_r_r48, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 31, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r51 = (PyObject *)&PyBytes_Type;
    cpy_r_r52 = CPyStatics[33]; /* '__new__' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 33, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    CPyStatic_faster_hexbytes___main____bytes_new = cpy_r_r53;
    CPy_INCREF(CPyStatic_faster_hexbytes___main____bytes_new);
    cpy_r_r54 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r55 = CPyStatics[34]; /* '_bytes_new' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 33, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r58 = CPyModule_hexbytes___main;
    cpy_r_r59 = CPyStatics[35]; /* 'HexBytes' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r61 = PyTuple_Pack(1, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r62 = (PyObject *)&PyType_Type;
    cpy_r_r63 = CPy_CalculateMetaclass(cpy_r_r62, cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL51;
    }
    cpy_r_r64 = CPyStatics[36]; /* '__prepare__' */
    cpy_r_r65 = PyObject_HasAttr(cpy_r_r63, cpy_r_r64);
    if (!cpy_r_r65) goto CPyL24;
    cpy_r_r66 = CPyStatics[35]; /* 'HexBytes' */
    cpy_r_r67 = CPyStatics[36]; /* '__prepare__' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r69[2] = {cpy_r_r66, cpy_r_r61};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 2, 0);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL51;
    }
    if (likely(PyDict_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals, "dict", cpy_r_r71);
        goto CPyL51;
    }
    cpy_r_r73 = cpy_r_r72;
    goto CPyL26;
CPyL24: ;
    cpy_r_r74 = PyDict_New();
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL51;
    }
    cpy_r_r73 = cpy_r_r74;
CPyL26: ;
    cpy_r_r75 = PyDict_New();
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL52;
    }
    cpy_r_r76 = CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj();
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 48, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r77 = CPyModule_builtins;
    cpy_r_r78 = CPyStatics[37]; /* 'staticmethod' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 48, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL54;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_r76};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 48, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL54;
    }
    CPy_DECREF_NO_IMM(cpy_r_r76);
    cpy_r_r83 = CPyStatics[33]; /* '__new__' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r73, cpy_r_r83, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 48, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r86 = CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj();
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 60, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r87 = CPyStatics[3]; /* '__getitem__' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r73, cpy_r_r87, cpy_r_r86);
    CPy_DECREF_NO_IMM(cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 60, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r90 = CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 72, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r91 = CPyStatics[38]; /* '__repr__' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r73, cpy_r_r91, cpy_r_r90);
    CPy_DECREF_NO_IMM(cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 72, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r94 = CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 75, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r95 = CPyStatics[39]; /* 'to_0x_hex' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r73, cpy_r_r95, cpy_r_r94);
    CPy_DECREF_NO_IMM(cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 75, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r98 = CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj();
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 81, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r99 = CPyStatics[40]; /* '__reduce__' */
    cpy_r_r100 = CPyDict_SetItem(cpy_r_r73, cpy_r_r99, cpy_r_r98);
    CPy_DECREF_NO_IMM(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 81, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL53;
    }
    cpy_r_r102 = CPyStatics[35]; /* 'HexBytes' */
    cpy_r_r103 = CPyStatics[41]; /* '__annotations__' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r73, cpy_r_r103, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL52;
    }
    cpy_r_r106 = CPyStatics[42]; /* 'mypyc filler docstring' */
    cpy_r_r107 = CPyStatics[43]; /* '__doc__' */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r73, cpy_r_r107, cpy_r_r106);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL52;
    }
    cpy_r_r110 = CPyStatics[44]; /* 'faster_hexbytes.main' */
    cpy_r_r111 = CPyStatics[45]; /* '__module__' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r73, cpy_r_r111, cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r114[3] = {cpy_r_r102, cpy_r_r61, cpy_r_r73};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r115, 3, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r117 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r118 = CPyStatics[24]; /* 'mypyc_attr' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 36, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL55;
    }
    cpy_r_r120 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r121[1] = {cpy_r_r120};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = CPyStatics[53]; /* ('native_class',) */
    cpy_r_r124 = PyObject_Vectorcall(cpy_r_r119, cpy_r_r122, 0, cpy_r_r123);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 36, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r125[1] = {cpy_r_r116};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = PyObject_Vectorcall(cpy_r_r124, cpy_r_r126, 1, 0);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r116);
    CPyType_faster_hexbytes___main___HexBytes = (PyTypeObject *)cpy_r_r127;
    CPy_INCREF(CPyType_faster_hexbytes___main___HexBytes);
    cpy_r_r128 = CPyStatic_faster_hexbytes___main___globals;
    cpy_r_r129 = CPyStatics[35]; /* 'HexBytes' */
    cpy_r_r130 = PyDict_SetItem(cpy_r_r128, cpy_r_r129, cpy_r_r127);
    CPy_DECREF(cpy_r_r127);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("faster_hexbytes/main.py", "<module>", 37, CPyStatic_faster_hexbytes___main___globals);
        goto CPyL48;
    }
    cpy_r_r132 = (PyObject *)CPyType_faster_hexbytes___main___HexBytes;
    return 1;
CPyL48: ;
    cpy_r_r133 = 2;
    return cpy_r_r133;
CPyL49: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL48;
CPyL50: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r39);
    goto CPyL48;
CPyL51: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL48;
CPyL52: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r73);
    goto CPyL48;
CPyL53: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r75);
    goto CPyL48;
CPyL54: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    goto CPyL48;
CPyL55: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL48;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
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

PyObject *CPyStatics[54];
const char * const CPyLit_Str[] = {
    "\n\v__getitem__\000\tHexBytes(\a{!r:{}}\0020x\003hex\006format\001)\bbuiltins\rTYPE_CHECKING",
    "\b\bCallable\005Final\005Tuple\004Type\005Union\boverload\006typing\rhexbytes.main",
    "\005\bhexbytes\027faster_hexbytes/main.py\b<module>\nmypyc_attr\017mypy_extensions",
    "\005\004Self\021typing_extensions\bto_bytes\026faster_hexbytes._utils\tbytearray",
    "\006\nmemoryview\tBytesLike\a__new__\n_bytes_new\bHexBytes\v__prepare__",
    "\005\fstaticmethod\b__repr__\tto_0x_hex\n__reduce__\017__annotations__",
    "\004\026mypyc filler docstring\a__doc__\024faster_hexbytes.main\n__module__",
    "\001\fnative_class",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    7, 7, 12, 13, 14, 15, 16, 17, 18, 3, 20, 20, 21, 1, 48, 1, 24, 1,
    26, 1, 28, 1, 46
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_hexbytes___main__internal = NULL;
CPyModule *CPyModule_faster_hexbytes___main;
PyObject *CPyStatic_faster_hexbytes___main___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_hexbytes___main;
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_typing_extensions;
CPyModule *CPyModule_faster_hexbytes____utils;
PyObject *CPyStatic_faster_hexbytes___main____bytes_new = NULL;
PyTypeObject *CPyType_faster_hexbytes___main___HexBytes;
PyTypeObject *CPyType_faster_hexbytes___main_____new___3_HexBytes_obj;
PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____new___3_HexBytes_objObject *faster_hexbytes___main_____new___3_HexBytes_obj_free_instance;
PyTypeObject *CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj;
PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____getitem___3_HexBytes_objObject *faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance;
PyTypeObject *CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj;
PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____repr___3_HexBytes_objObject *faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance;
PyTypeObject *CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj;
PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main___to_0x_hex_HexBytes_objObject *faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance;
PyTypeObject *CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj;
PyObject *CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj(void);
CPyThreadLocal faster_hexbytes___main_____reduce___3_HexBytes_objObject *faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance;
PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_val);
PyObject *CPyPy_faster_hexbytes___main_____new___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
tuple_T2OT2OO CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_hexbytes___main_____top_level__(void);

static struct export_table_faster_hexbytes___main exports = {
    &CPyStatic_faster_hexbytes___main____bytes_new,
    &CPyType_faster_hexbytes___main___HexBytes,
    &CPyType_faster_hexbytes___main_____new___3_HexBytes_obj,
    &CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj,
    &faster_hexbytes___main_____new___3_HexBytes_obj_free_instance,
    &CPyType_faster_hexbytes___main_____getitem___3_HexBytes_obj,
    &CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj,
    &faster_hexbytes___main_____getitem___3_HexBytes_obj_free_instance,
    &CPyType_faster_hexbytes___main_____repr___3_HexBytes_obj,
    &CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj,
    &faster_hexbytes___main_____repr___3_HexBytes_obj_free_instance,
    &CPyType_faster_hexbytes___main___to_0x_hex_HexBytes_obj,
    &CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj,
    &faster_hexbytes___main___to_0x_hex_HexBytes_obj_free_instance,
    &CPyType_faster_hexbytes___main_____reduce___3_HexBytes_obj,
    &CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj,
    &faster_hexbytes___main_____reduce___3_HexBytes_obj_free_instance,
    &CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____get__,
    &CPyDef_faster_hexbytes___main_____new___3_HexBytes_obj_____call__,
    &CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____get__,
    &CPyDef_faster_hexbytes___main_____getitem___3_HexBytes_obj_____call__,
    &CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____get__,
    &CPyDef_faster_hexbytes___main_____repr___3_HexBytes_obj_____call__,
    &CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____get__,
    &CPyDef_faster_hexbytes___main___to_0x_hex_HexBytes_obj_____call__,
    &CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____get__,
    &CPyDef_faster_hexbytes___main_____reduce___3_HexBytes_obj_____call__,
    &CPyDef_faster_hexbytes___main_____top_level__,
};

static int exec_main__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_hexbytes.main__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_hexbytes___main(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_hexbytes___main, "faster_hexbytes.main__mypyc.init_faster_hexbytes___main", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_hexbytes___main", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    tmp = PyImport_ImportModule("faster_hexbytes._utils__mypyc"); if (!tmp) goto fail; Py_DECREF(tmp);
    struct export_table_faster_hexbytes____utils *pexports_faster_hexbytes____utils = PyCapsule_Import("faster_hexbytes._utils__mypyc.exports", 0);
    if (!pexports_faster_hexbytes____utils) {
        goto fail;
    }
    memcpy(&exports_faster_hexbytes____utils, pexports_faster_hexbytes____utils, sizeof(exports_faster_hexbytes____utils));
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_main__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_hexbytes.main__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_main__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_main__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_main__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
