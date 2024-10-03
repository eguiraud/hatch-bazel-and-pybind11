#include <pybind11/pybind11.h>

namespace py = pybind11;

struct Foo {
  int x;

  Foo(int x) : x(x) {}
};

PYBIND11_MODULE(pybind_extension, m) {
  m.doc() = "Dummy extension module using pybind11 and bazel";

  py::class_<Foo>(m, "Foo")
    .def(py::init<int>(), py::arg("x"))
    .def_readwrite("x", &Foo::x);
}
