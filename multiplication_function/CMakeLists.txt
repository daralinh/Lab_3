cmake_minimum_required(VERSION 3.21)
project(multiplication_function)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(multiplication_function_run ${SOURCE_FILES})

include_directories(multiplylib)
add_subdirectory(multiplylib)
target_link_libraries(multiplication_function_run multiplylib_lib)

add_subdirectory(multiplylib_tests)