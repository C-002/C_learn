cmake_minimum_required(VERSION 2.8)
project(union_test)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${PROJECT_NAME} a.cpp)