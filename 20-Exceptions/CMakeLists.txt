project(Exceptions)
cmake_minimum_required(VERSION 2.8)

set(Exceptions_Sources Exceptions_Main.cpp)
set(Exceptions_Test_Sources Exceptions_Test_Main.cpp)

add_executable(Exceptions ${Exceptions_Sources})
add_executable(Exceptions_Test ${Exceptions_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
