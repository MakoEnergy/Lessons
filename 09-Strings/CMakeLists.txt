project(Strings)
cmake_minimum_required(VERSION 2.8)

set(Strings_Sources Strings_Main.cpp)
set(Strings_Test_Sources Strings_Test_Main.cpp)

add_executable(Strings ${Strings_Sources})
add_executable(Strings_Test ${Strings_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
