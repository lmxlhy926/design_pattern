cmake_minimum_required(VERSION 3.15)
project(design_pattern)

set(CMAKE_CXX_STANDARD 14)

set(LIBS factory)

include_directories(dp_factory)

link_directories(dp_factory)

add_subdirectory(dp_factory)

add_executable(design_pattern main.cpp)
target_link_libraries(design_pattern ${LIBS})

