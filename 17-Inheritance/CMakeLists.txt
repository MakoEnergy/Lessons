project(Inheritance)
cmake_minimum_required(VERSION 2.8)

set(Inheritance_Sources Inheritance_Main.cpp)
set(Inheritance_Test_Sources Inheritance_Test_Main.cpp)

add_executable(Inheritance ${Inheritance_Sources})
add_executable(Inheritance_Test ${Inheritance_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
