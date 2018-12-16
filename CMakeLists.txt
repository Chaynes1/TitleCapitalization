cmake_minimum_required(VERSION 3.13)
project(TitleCapitalization)

set(CMAKE_CXX_STANDARD 14)

add_executable(TitleCapitalization main.cpp TitleCapitalization.cpp)

add_subdirectory(TitleCapitalization_tests)
