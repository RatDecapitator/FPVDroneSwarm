#include <pybind11/pybind11.h>
#include "swarm/event.hpp"

namespace py = pybind11;

PYBIND11_MODULE(drone_swarm_py, m) {
    py::enum_<swarm::EventType>(m, "EventType")
        .value("TARGET_DETECTED", swarm::EventType::TARGET_DETECTED)
        .value("TARGET_DESTROYED", swarm::EventType::TARGET_DESTROYED)
        .value("DRONE_LOST", swarm::EventType::DRONE_LOST)
        .value("TICK", swarm::EventType::TICK);

    py::class_<swarm::Event>(m, "Event")
        .def(py::init<>())
        .def_readwrite("type", &swarm::Event::type)
        .def_readwrite("timestamp_ms", &swarm::Event::timestamp_ms)
        .def_readwrite("target_id", &swarm::Event::target_id)
        .def_readwrite("x", &swarm::Event::x)
        .def_readwrite("y", &swarm::Event::y);
}

