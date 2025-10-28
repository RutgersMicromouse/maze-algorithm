cmake_minimum_required(VERSION 3.10)

# Project name and C++ standard
project(Maze_Algorithm VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header directory
include_directories(${PROJECT_SOURCE_DIR})

# Add the source files
set(SOURCES
    main.cpp
    api.cpp
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})
