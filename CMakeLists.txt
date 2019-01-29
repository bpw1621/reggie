cmake_minimum_required(VERSION 3.13)
project(reggie)

option(REGGIE_ENABLE_COMPILATION_DATABASE "Generate compilation database compile_commands.json" ON)
if(REGGIE_ENABLE_COMPILATION_DATABASE)
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif()

add_subdirectory(src)
add_subdirectory(test)
