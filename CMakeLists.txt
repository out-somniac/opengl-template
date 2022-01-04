cmake_minimum_required(VERSION 3.1)
project(opelngl-template)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(${PROJECT_SOURCE_DIR}/include)
set(SOURCES src/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

add_definitions(-DGLEW_STATIC)
add_subdirectory(external/glew)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/external/glew/include)
target_link_libraries(${PROJECT_NAME} PRIVATE libglew_static)
