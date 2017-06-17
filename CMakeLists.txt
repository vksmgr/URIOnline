cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/URI/BEGINNER.c src/URI/BEGINNER.h)
add_executable(untitled ${SOURCE_FILES})