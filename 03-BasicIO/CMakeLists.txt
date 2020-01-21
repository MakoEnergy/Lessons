project(BasicIO)
cmake_minimum_required(VERSION 2.8)

set(BasicIO_Sources BasicIO_Main.cpp)
set(BasicIO_Test_Sources BasicIO_Test_Main.cpp)

add_executable(BasicIO ${BasicIO_Sources})
add_executable(BasicIO_Test ${BasicIO_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
