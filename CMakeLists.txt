cmake_minimum_required(VERSION 3.17)
project(Injector)

set(CMAKE_CXX_STANDARD 20)

find_package(SQLite3)

include_directories(${SQLite3_INCLUDE_DIRS})

add_executable(Injector Main.cpp)