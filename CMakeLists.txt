cmake_minimum_required(VERSION 3.13)
project(reggie)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(REGGIE_ENABLE_COMPILATION_DATABASE "Generate compilation database compile_commands.json" ON)
if(REGGIE_ENABLE_COMPILATION_DATABASE)
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif()

add_subdirectory(src)
add_subdirectory(test)
