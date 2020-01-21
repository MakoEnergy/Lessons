project(SpecialMembers)
cmake_minimum_required(VERSION 2.8)

set(SpecialMembers_Sources SpecialMembers_Main.cpp)
set(SpecialMembers_Test_Sources SpecialMembers_Test_Main.cpp)

add_executable(SpecialMembers ${SpecialMembers_Sources})
add_executable(SpecialMembers_Test ${SpecialMembers_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
