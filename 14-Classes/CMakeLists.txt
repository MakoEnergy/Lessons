project(Classes)
cmake_minimum_required(VERSION 2.8)

set(Classes_Sources Classes_Main.cpp)
set(Classes_Test_Sources Classes_Test_Main.cpp)

add_executable(Classes ${Classes_Sources})
add_executable(Classes_Test ${Classes_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
