cmake_minimum_required(VERSION 3.9)

project(app-factory)

add_subdirectory(test EXCLUDE_FROM_ALL)

set(CMAKE_CXX_STANDARD 17)
add_library(${PROJECT_NAME} src/AppFactory.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC interface)
