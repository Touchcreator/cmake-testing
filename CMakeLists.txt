# final verdict? stick to make

cmake_minimum_required(VERSION 3.10)

project(app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# add files and include dir
file(GLOB_RECURSE SRCS ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)
set(PROJECT_INCLUDE ${CMAKE_CURRENT_LIST_DIR}/src/)

# no idea what private does
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${SRCS})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE})

target_link_libraries(${PROJECT_NAME} raylib)