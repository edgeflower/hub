make_minimum_required(VERSION 3.17)
project(stl)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(stl.2.cpp
        stl.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC high_precision)
include_directories(high_precision PUBLIC src/high_precision/include)