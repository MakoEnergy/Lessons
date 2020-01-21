project(PreprocessorDirectives)
cmake_minimum_required(VERSION 2.8)

set(PreprocessorDirectives_Sources PreprocessorDirectives_Main.cpp)
set(PreprocessorDirectives_Test_Sources PreprocessorDirectives_Test_Main.cpp)

add_executable(PreprocessorDirectives ${PreprocessorDirectives_Sources})
add_executable(PreprocessorDirectives_Test ${PreprocessorDirectives_Test_Sources})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES Readme.md)
