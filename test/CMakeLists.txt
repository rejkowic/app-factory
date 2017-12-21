cmake_minimum_required(VERSION 3.9)

project(app-factory-test)

set(CMAKE_CXX_STANDARD 17)
add_executable(${PROJECT_NAME} app-factory-test.cpp)
target_link_libraries(${PROJECT_NAME} app-factory)
