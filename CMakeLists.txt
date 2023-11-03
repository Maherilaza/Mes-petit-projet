cmake_minimum_required(VERSION 2.0)
project(Calculatrice)
set(SOURCES src/main.cpp)
add_executable(calc ${SOURCES})
set_target_properties(calc PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)