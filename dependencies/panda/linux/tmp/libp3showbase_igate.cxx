/*
 * This file was generated by:
 * built/bin/interrogate -srcdir direct/src/showbase -Idirect/src/showbase -DCPPPARSER -D__STDC__=1 -D__cplusplus=201103L -D__attribute__(x)= -D_LP64 -oc built/tmp/libp3showbase_igate.cxx -od built/pandac/input/libp3showbase.in -fnames -string -refcount -assert -python-native -Sbuilt/include/parser-inc -Idirect/src/showbase -Sbuilt/tmp -Sbuilt/include -S/usr/include/eigen3 -module panda3d.direct -library libp3showbase showBase.cxx showBase.h
 *
 */

#include "dtoolbase.h"
#include "interrogate_request.h"
#include "dconfig.h"
#include "pnotify.h"
#include <sstream>
#include "py_panda.h"
#include "extension.h"
#include "dcast.h"

#include "camera.h"
#include "graphicsPipeSelection.h"
#include "graphicsWindow.h"
#include "renderBuffer.h"
#include "showBase.h"
#include "throw_event.h"

#undef _POSIX_C_SOURCE
#undef _XOPEN_SOURCE
#define PY_SSIZE_T_CLEAN 1

#if PYTHON_FRAMEWORK
  #include <Python/Python.h>
#else
  #include "Python.h"
#endif

/**
 * Declarations for exported classes
 */
static const Dtool_TypeDef exports[] = {
  {nullptr, nullptr},
};

/**
 * Extern declarations for imported classes
 */
#ifndef LINK_ALL_STATIC
static Dtool_TypeDef imports[] = {
  {"ConfigVariableSearchPath", nullptr},
#define Dtool_Ptr_ConfigVariableSearchPath (imports[0].type)
  {"GraphicsWindow", nullptr},
#define Dtool_Ptr_GraphicsWindow (imports[1].type)
  {nullptr, nullptr},
};
#endif

// ConfigVariableSearchPath
#ifndef LINK_ALL_STATIC
#else
extern struct Dtool_PyTypedObject Dtool_ConfigVariableSearchPath;
static struct Dtool_PyTypedObject *const Dtool_Ptr_ConfigVariableSearchPath = &Dtool_ConfigVariableSearchPath;
#endif
// GraphicsWindow
#ifndef LINK_ALL_STATIC
#else
extern struct Dtool_PyTypedObject Dtool_GraphicsWindow;
static struct Dtool_PyTypedObject *const Dtool_Ptr_GraphicsWindow = &Dtool_GraphicsWindow;
#endif

/**
 * Python wrappers for global functions
 */
/**
 * Python function wrapper for:
 * ConfigVariableSearchPath &get_particle_path(void)
 */
static PyObject *Dtool_get_particle_path_1(PyObject *, PyObject *) {
  // 1-ConfigVariableSearchPath &get_particle_path(void)
  ConfigVariableSearchPath *return_value = &((::get_particle_path)());
  if (Dtool_CheckErrorOccurred()) {
    return nullptr;
  }
  return DTool_CreatePyInstance((void *)return_value, *Dtool_Ptr_ConfigVariableSearchPath, false, false);
}

#ifndef NDEBUG
static const char *Dtool_get_particle_path_1_comment =
  "C++ Interface:\n"
  "get_particle_path()\n";
#else
static const char *Dtool_get_particle_path_1_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * void throw_new_frame(void)
 */
static PyObject *Dtool_throw_new_frame_2(PyObject *, PyObject *) {
  // 1-void throw_new_frame(void)
  (::throw_new_frame)();
  return Dtool_Return_None();
}

#ifndef NDEBUG
static const char *Dtool_throw_new_frame_2_comment =
  "C++ Interface:\n"
  "throw_new_frame()\n";
#else
static const char *Dtool_throw_new_frame_2_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * void init_app_for_gui(void)
 */
static PyObject *Dtool_init_app_for_gui_3(PyObject *, PyObject *) {
  // 1-void init_app_for_gui(void)
  (::init_app_for_gui)();
  return Dtool_Return_None();
}

#ifndef NDEBUG
static const char *Dtool_init_app_for_gui_3_comment =
  "C++ Interface:\n"
  "init_app_for_gui()\n";
#else
static const char *Dtool_init_app_for_gui_3_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * void add_fullscreen_testsize(int xsize, int ysize)
 */
static PyObject *Dtool_add_fullscreen_testsize_4(PyObject *, PyObject *args, PyObject *kwds) {
  // 1-void add_fullscreen_testsize(int xsize, int ysize)
  int param0;
  int param1;
  static const char *keyword_list[] = {"xsize", "ysize", nullptr};
  if (PyArg_ParseTupleAndKeywords(args, kwds, "ii:add_fullscreen_testsize", (char **)keyword_list, &param0, &param1)) {
    (::add_fullscreen_testsize)((int)param0, (int)param1);
    return Dtool_Return_None();
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "add_fullscreen_testsize(int xsize, int ysize)\n");
  }
  return nullptr;
}

#ifndef NDEBUG
static const char *Dtool_add_fullscreen_testsize_4_comment =
  "C++ Interface:\n"
  "add_fullscreen_testsize(int xsize, int ysize)\n"
  "\n"
  "// klunky interface since we cant pass array from python->C++";
#else
static const char *Dtool_add_fullscreen_testsize_4_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * void runtest_fullscreen_sizes(GraphicsWindow *win)
 */
static PyObject *Dtool_runtest_fullscreen_sizes_5(PyObject *, PyObject *arg) {
  // 1-void runtest_fullscreen_sizes(GraphicsWindow *win)
  GraphicsWindow *arg_this = (GraphicsWindow *)DTOOL_Call_GetPointerThisClass(arg, Dtool_Ptr_GraphicsWindow, 0, "runtest_fullscreen_sizes", false, true);
  if (arg_this != nullptr) {
    (::runtest_fullscreen_sizes)(arg_this);
    return Dtool_Return_None();
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "runtest_fullscreen_sizes(GraphicsWindow win)\n");
  }
  return nullptr;
}

#ifndef NDEBUG
static const char *Dtool_runtest_fullscreen_sizes_5_comment =
  "C++ Interface:\n"
  "runtest_fullscreen_sizes(GraphicsWindow win)\n";
#else
static const char *Dtool_runtest_fullscreen_sizes_5_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * bool query_fullscreen_testresult(int xsize, int ysize)
 */
static PyObject *Dtool_query_fullscreen_testresult_6(PyObject *, PyObject *args, PyObject *kwds) {
  // 1-bool query_fullscreen_testresult(int xsize, int ysize)
  int param0;
  int param1;
  static const char *keyword_list[] = {"xsize", "ysize", nullptr};
  if (PyArg_ParseTupleAndKeywords(args, kwds, "ii:query_fullscreen_testresult", (char **)keyword_list, &param0, &param1)) {
    bool return_value = (::query_fullscreen_testresult)((int)param0, (int)param1);
    return Dtool_Return_Bool(return_value);
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "query_fullscreen_testresult(int xsize, int ysize)\n");
  }
  return nullptr;
}

#ifndef NDEBUG
static const char *Dtool_query_fullscreen_testresult_6_comment =
  "C++ Interface:\n"
  "query_fullscreen_testresult(int xsize, int ysize)\n";
#else
static const char *Dtool_query_fullscreen_testresult_6_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * void store_accessibility_shortcut_keys(void)
 */
static PyObject *Dtool_store_accessibility_shortcut_keys_7(PyObject *, PyObject *) {
  // 1-void store_accessibility_shortcut_keys(void)
  (::store_accessibility_shortcut_keys)();
  return Dtool_Return_None();
}

#ifndef NDEBUG
static const char *Dtool_store_accessibility_shortcut_keys_7_comment =
  "C++ Interface:\n"
  "store_accessibility_shortcut_keys()\n"
  "\n"
  "// to handle windows stickykeys";
#else
static const char *Dtool_store_accessibility_shortcut_keys_7_comment = nullptr;
#endif

/**
 * Python function wrapper for:
 * void allow_accessibility_shortcut_keys(bool allowKeys)
 */
static PyObject *Dtool_allow_accessibility_shortcut_keys_8(PyObject *, PyObject *arg) {
  // 1-void allow_accessibility_shortcut_keys(bool allowKeys)
  (::allow_accessibility_shortcut_keys)((PyObject_IsTrue(arg) != 0));
  return Dtool_Return_None();
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "allow_accessibility_shortcut_keys(bool allowKeys)\n");
  }
  return nullptr;
}

#ifndef NDEBUG
static const char *Dtool_allow_accessibility_shortcut_keys_8_comment =
  "C++ Interface:\n"
  "allow_accessibility_shortcut_keys(bool allowKeys)\n";
#else
static const char *Dtool_allow_accessibility_shortcut_keys_8_comment = nullptr;
#endif


/**
 * Module Object Linker ..
 */
void Dtool_libp3showbase_RegisterTypes() {
  TypeRegistry *registry = TypeRegistry::ptr();
  nassertv(registry != nullptr);
}

void Dtool_libp3showbase_BuildInstants(PyObject *module) {
  (void) module;
}

static PyMethodDef python_simple_funcs[] = {
  {"get_particle_path", &Dtool_get_particle_path_1, METH_NOARGS, (const char *)Dtool_get_particle_path_1_comment},
  {"getParticlePath", &Dtool_get_particle_path_1, METH_NOARGS, (const char *)Dtool_get_particle_path_1_comment},
  {"throw_new_frame", &Dtool_throw_new_frame_2, METH_NOARGS, (const char *)Dtool_throw_new_frame_2_comment},
  {"throwNewFrame", &Dtool_throw_new_frame_2, METH_NOARGS, (const char *)Dtool_throw_new_frame_2_comment},
  {"init_app_for_gui", &Dtool_init_app_for_gui_3, METH_NOARGS, (const char *)Dtool_init_app_for_gui_3_comment},
  {"initAppForGui", &Dtool_init_app_for_gui_3, METH_NOARGS, (const char *)Dtool_init_app_for_gui_3_comment},
  {"add_fullscreen_testsize", (PyCFunction) &Dtool_add_fullscreen_testsize_4, METH_VARARGS | METH_KEYWORDS, (const char *)Dtool_add_fullscreen_testsize_4_comment},
  {"addFullscreenTestsize", (PyCFunction) &Dtool_add_fullscreen_testsize_4, METH_VARARGS | METH_KEYWORDS, (const char *)Dtool_add_fullscreen_testsize_4_comment},
  {"runtest_fullscreen_sizes", &Dtool_runtest_fullscreen_sizes_5, METH_O, (const char *)Dtool_runtest_fullscreen_sizes_5_comment},
  {"runtestFullscreenSizes", &Dtool_runtest_fullscreen_sizes_5, METH_O, (const char *)Dtool_runtest_fullscreen_sizes_5_comment},
  {"query_fullscreen_testresult", (PyCFunction) &Dtool_query_fullscreen_testresult_6, METH_VARARGS | METH_KEYWORDS, (const char *)Dtool_query_fullscreen_testresult_6_comment},
  {"queryFullscreenTestresult", (PyCFunction) &Dtool_query_fullscreen_testresult_6, METH_VARARGS | METH_KEYWORDS, (const char *)Dtool_query_fullscreen_testresult_6_comment},
  {"store_accessibility_shortcut_keys", &Dtool_store_accessibility_shortcut_keys_7, METH_NOARGS, (const char *)Dtool_store_accessibility_shortcut_keys_7_comment},
  {"storeAccessibilityShortcutKeys", &Dtool_store_accessibility_shortcut_keys_7, METH_NOARGS, (const char *)Dtool_store_accessibility_shortcut_keys_7_comment},
  {"allow_accessibility_shortcut_keys", &Dtool_allow_accessibility_shortcut_keys_8, METH_O, (const char *)Dtool_allow_accessibility_shortcut_keys_8_comment},
  {"allowAccessibilityShortcutKeys", &Dtool_allow_accessibility_shortcut_keys_8, METH_O, (const char *)Dtool_allow_accessibility_shortcut_keys_8_comment},
  // Support Function For Dtool_types ... for now in each module ??
  {"Dtool_BorrowThisReference", &Dtool_BorrowThisReference, METH_VARARGS, "Used to borrow 'this' pointer (to, from)\nAssumes no ownership."},
  {nullptr, nullptr, 0, nullptr}
};

#ifdef LINK_ALL_STATIC
extern const struct LibraryDef libp3showbase_moddef = {python_simple_funcs, exports, nullptr};
#else
extern const struct LibraryDef libp3showbase_moddef = {python_simple_funcs, exports, imports};
#endif
static InterrogateModuleDef _in_module_def = {
  1583614844,  /* file_identifier */
  "libp3showbase",  /* library_name */
  "il41",  /* library_hash_name */
  "panda3d.direct",  /* module_name */
  "libp3showbase.in",  /* database_filename */
  nullptr,  /* unique_names */
  0,  /* num_unique_names */
  nullptr,  /* fptrs */
  0,  /* num_fptrs */
  1,  /* first_index */
  24  /* next_index */
};

Configure(_in_configure_libp3showbase);
ConfigureFn(_in_configure_libp3showbase) {
  interrogate_request_module(&_in_module_def);
}

