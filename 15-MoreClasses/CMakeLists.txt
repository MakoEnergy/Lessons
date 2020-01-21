project(MoreClasses)
cmake_minimum_required(VERSION 2.8)

set(MoreClasses_Sources MoreClasses_Main.cpp)
set(MoreClasses_Test_Sources MoreClasses_Test_Main.cpp)

add_executable(MoreClasses ${MoreClasses_Sources})
add_executable(MoreClasses_Test ${MoreClasses_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
