project(Constants)
cmake_minimum_required(VERSION 2.8)

set(Constants_Sources Constants_Main.cpp)
set(Constants_Test_Sources Constants_Test_Main.cpp)

add_executable(Constants ${Constants_Sources})
add_executable(Constants_Test ${Constants_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
