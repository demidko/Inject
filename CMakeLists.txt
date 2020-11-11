cmake_minimum_required(VERSION 3.17)
project(Inject)
set(CMAKE_CXX_STANDARD 20)
add_executable(Inject Main.cpp)
# RESTinio dependencies:
# 1. ASIO or Boost::ASIO (goes as headers, vcpkg knows where)
# 2. HTTP parser
find_package(asio REQUIRED)

find_package(unofficial-http-parser REQUIRED)

# 3. fmtlib
find_package(fmt REQUIRED)

# RESTinio itself
find_package(restinio REQUIRED)

# Make your project dependent on restinio,
# and let cmake deal with all the headers paths and linked libs.
target_link_directories(Inject PRIVATE ${restinio_DIR})
target_link_libraries(Inject PRIVATE restinio::restinio)

# Чтобы жить было веселее
message("properties {")
get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach ()
message("}\n")