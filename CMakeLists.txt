cmake_minimum_required(VERSION 2.6)

project(clink)

SET(EXTRA_CXX_COMPILE_FLAGS "-std=c++11 -I./src -I./test -I/opt/local/include -O2 -Werror -Wall")

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${EXTRA_CXX_COMPILE_FLAGS}")

INCLUDE_DIRECTORIES(./src/)

SET(CLINK_CPPS ./src/particle_system.cpp
	       ./src/vec2.cpp)

add_library(clink ${CLINK_CPPS})

SET(TEST_FILES ./test/particle_system_tests.cpp)

add_executable(all-tests ${TEST_FILES})
target_link_libraries(all-tests clink)

