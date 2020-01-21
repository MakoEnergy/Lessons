project(Arrays)
cmake_minimum_required(VERSION 2.8)

set(Arrays_Sources Arrays_Main.cpp)
set(Arrays_Test_Sources Arrays_Test_Main.cpp)

add_executable(Arrays ${Arrays_Sources})
add_executable(Arrays_Test ${Arrays_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
