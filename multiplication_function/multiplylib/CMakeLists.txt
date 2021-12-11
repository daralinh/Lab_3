project(multiplylib)

set(HEADER_FILES multiply.h)
set(SOURCE_FILES multiply.cpp)

add_library(multiplylib_lib ${SOURCE_FILES} ${HEADER_FILES})