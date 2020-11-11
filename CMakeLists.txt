cmake_minimum_required(VERSION 3.17)
project(Injector)
set(CMAKE_CXX_STANDARD 20)
add_executable(Inject Main.cpp)
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
target_link_libraries(Inject PRIVATE restinio::restinio)