project(Templates)
cmake_minimum_required(VERSION 2.8)

set(Templates_Sources Templates_Main.cpp)
set(Templates_Test_Sources Templates_Test_Main.cpp)

add_executable(Templates ${Templates_Sources})
add_executable(Templates_Test ${Templates_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
