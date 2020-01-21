project(Structures)
cmake_minimum_required(VERSION 2.8)

set(Structures_Sources Structures_Main.cpp)
set(Structures_Test_Sources Structures_Test_Main.cpp)

add_executable(Structures ${Structures_Sources})
add_executable(Structures_Test ${Structures_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
