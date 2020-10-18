cmake_minimum_required(VERSION 3.17)
project(Injector)
set(CMAKE_CXX_STANDARD 20)

set(OUTPUT_DIRECTORY "release")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")

add_executable(Injector Main.cpp)

# RESTinio dependencies:
# 1. ASIO or Boost::ASIO (goes as headers, vcpkg knows where)
# 2. HTTP parser
find_package(unofficial-http-parser REQUIRED)
# 3. fmtlib
find_package(fmt REQUIRED)
# RESTinio itself
find_package(restinio REQUIRED)

# Make your project dependent on restinio,
# and let cmake deal with all the headers paths and linked libs.
target_link_libraries(Injector PRIVATE restinio::restinio)