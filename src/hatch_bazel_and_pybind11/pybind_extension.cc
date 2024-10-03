#include <pybind11/pybind11.h>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace py = pybind11;

struct Foo {
  int x;
  boost::uuids::uuid id;

  Foo(int x) : x(x), id(boost::uuids::random_generator()()) {}
};

PYBIND11_MODULE(pybind_extension, m) {
  m.doc() = "Dummy extension module using pybind11 and bazel";

  py::class_<Foo>(m, "Foo")
    .def(py::init<int>(), py::arg("x"))
    .def_readwrite("x", &Foo::x)
    .def_property_readonly("id", [](const Foo& f) { return to_string(f.id); });
}
