cmake_minimum_required(VERSION 3.22)

project(ImageGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
set(CMAKE_CXX_EXTENSIONS OFF) #...without compiler extensions like gnu++11

add_subdirectory(src)
add_subdirectory(test)