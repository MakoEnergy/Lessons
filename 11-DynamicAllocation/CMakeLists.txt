project(DynamicAllocation)
cmake_minimum_required(VERSION 2.8)

set(DynamicAllocation_Sources DynamicAllocation_Main.cpp)
set(DynamicAllocation_Test_Sources DynamicAllocation_Test_Main.cpp)

add_executable(DynamicAllocation ${DynamicAllocation_Sources})
add_executable(DynamicAllocation_Test ${DynamicAllocation_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
