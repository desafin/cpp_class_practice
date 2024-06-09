cmake_minimum_required(VERSION 3.28)
project(clion_cpp_class)

set(CMAKE_CXX_STANDARD 17)

# include 및 src 디렉토리를 포함 디렉토리로 추가
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(clion_cpp_class main.cpp
        include/exp.h
        src/exp.cpp
        include/tower.h
        src/tower.cpp
)
