cmake_minimum_required(VERSION 3.13)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runbasic_check basic_check.cpp title_check.cpp ../../TitleCapitalization.cpp)

target_link_libraries(runbasic_check gtest gtest_main)