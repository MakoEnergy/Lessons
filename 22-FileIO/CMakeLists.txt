project(FileIO)
cmake_minimum_required(VERSION 2.8)

set(FileIO_Sources FileIO_Main.cpp)
set(FileIO_Test_Sources FileIO_Test_Main.cpp)

add_executable(FileIO ${FileIO_Sources})
add_executable(FileIO_Test ${FileIO_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
