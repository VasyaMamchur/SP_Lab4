cmake_minimum_required(VERSION 3.0)

project(calculator)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB calculator.cpp)

add_library(calculatorLibrary STATIC ${SOURCE_LIB})

add_executable(calculator_app ${SOURCE_EXE})

target_link_libraries(calculator_app calculatorLibrary)
