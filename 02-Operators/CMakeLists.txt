project(Operators)
cmake_minimum_required(VERSION 2.8)

set(Operators_Sources Operators_Main.cpp)
set(Operators_Test_Sources Operators_Test_Main.cpp)

add_executable(Operators ${Operators_Sources})
add_executable(Operators_Test ${Operators_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
