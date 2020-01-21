project(Enums)
cmake_minimum_required(VERSION 2.8)

set(Enums_Sources Enums_Main.cpp)
set(Enums_Test_Sources Enums_Test_Main.cpp)

add_executable(Enums ${Enums_Sources})
add_executable(Enums_Test ${Enums_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
