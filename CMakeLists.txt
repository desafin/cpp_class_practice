cmake_minimum_required(VERSION 3.16.3)
project(cpp_class_practice)

set(CMAKE_CXX_STANDARD 17)

# include 및 src 디렉토리를 포함 디렉토리로 추가
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(cpp_class_practice main.cpp
        main.cpp
        include/exp.h
        src/exp.cpp
        include/tower.h
        src/tower.cpp
        include/date.h
        src/date.cpp
        include/account.h
        src/account.cpp
        include/coffeemachine.h
        src/coffeemachine.cpp
        include/person.h
        src/person.cpp
        include/morse.h
        src/morse.cpp
        include/book.h
        src/book.cpp
        include/color.h
        src/color.cpp
        
)
