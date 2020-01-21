project(NameVisibility)
cmake_minimum_required(VERSION 2.8)

set(NameVisibility_Sources NameVisibility_Main.cpp)
set(NameVisibility_Test_Sources NameVisibility_Test_Main.cpp)

add_executable(NameVisibility ${NameVisibility_Sources})
add_executable(NameVisibility_Test ${NameVisibility_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
