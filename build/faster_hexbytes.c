#ifndef DIFFCHECK_PLACEHOLDER
#define DIFFCHECK_PLACEHOLDER 0
#endif
#include <Python.h>

PyMODINIT_FUNC
PyInit_faster_hexbytes(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("6a32f4913d613d6a7ddf__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_hexbytes");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "6a32f4913d613d6a7ddf__mypyc.init_faster_hexbytes");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_faster_hexbytes(); }
