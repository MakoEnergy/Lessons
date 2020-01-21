project(PointersAndReferences)
cmake_minimum_required(VERSION 2.8)

set(PointersAndReferences_Sources PointersAndReferences_Main.cpp)
set(PointersAndReferences_Test_Sources PointersAndReferences_Test_Main.cpp)

add_executable(PointersAndReferences ${PointersAndReferences_Sources})
add_executable(PointersAndReferences_Test ${PointersAndReferences_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
