project(Polymorphism)
cmake_minimum_required(VERSION 2.8)

set(Polymorphism_Sources Polymorphism_Main.cpp)
set(Polymorphism_Test_Sources Polymorphism_Test_Main.cpp)

add_executable(Polymorphism ${Polymorphism_Sources})
add_executable(Polymorphism_Test ${Polymorphism_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
