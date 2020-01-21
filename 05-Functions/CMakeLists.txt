project(Functions)
cmake_minimum_required(VERSION 2.8)

set(Functions_Sources Functions_Main.cpp)
set(Functions_Test_Sources Functions_Test_Main.cpp)

add_executable(Functions ${Functions_Sources})
add_executable(Functions_Test ${Functions_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
