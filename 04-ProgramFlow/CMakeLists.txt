project(ProgramFlow)
cmake_minimum_required(VERSION 2.8)

set(ProgramFlow_Sources ProgramFlow_Main.cpp)
set(ProgramFlow_Test_Sources ProgramFlow_Test_Main.cpp)

add_executable(ProgramFlow ${ProgramFlow_Sources})
add_executable(ProgramFlow_Test ${ProgramFlow_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
