cmake_minimum_required(VERSION 3.9)

project(app)

add_subdirectory(test EXCLUDE_FROM_ALL)

add_library(${PROJECT_NAME} src/App.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC interface)
