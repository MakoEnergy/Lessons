project(Conversions)
cmake_minimum_required(VERSION 2.8)

set(Conversions_Sources Conversions_Main.cpp)
set(Conversions_Test_Sources Conversions_Test_Main.cpp)

add_executable(Conversions ${Conversions_Sources})
add_executable(Conversions_Test ${Conversions_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
