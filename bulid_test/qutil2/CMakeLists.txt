cmake_minimum_required(VERSION 3.7)
project(qutil2_main)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(qutil2_main ${SOURCE_FILES})

target_link_libraries(qutil2_main qutil2)
add_subdirectory(qutil2)
add_dependencies(qutil2_main qutil2)