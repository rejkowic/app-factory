cmake_minimum_required(VERSION 3.9)

project(app-test)

add_executable(${PROJECT_NAME} app-test.cpp)
target_link_libraries(${PROJECT_NAME} app)
