cmake_minimum_required(VERSION 3.20)
project(DroneSwarm LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(drone_swarm_core STATIC src/event.cpp)
target_include_directories(drone_swarm_core PUBLIC include)

add_executable(drone_swarm src/main.cpp)
target_link_libraries(drone_swarm PRIVATE drone_swarm_core)

find_package(pybind11 CONFIG REQUIRED)
pybind11_add_module(drone_swarm_py python/bindings.cpp)
target_link_libraries(drone_swarm_py PRIVATE drone_swarm_core)
target_include_directories(drone_swarm_py PRIVATE include)
