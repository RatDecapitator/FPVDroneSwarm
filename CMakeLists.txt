cmake_minimum_required(VERSION 3.20)
project(DroneSwarm LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(drone_swarm src/main.cpp)
target_include_directories(drone_swarm PRIVATE include)