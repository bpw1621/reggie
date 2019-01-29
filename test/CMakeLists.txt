add_library(Catch2 INTERFACE)
target_include_directories(Catch2 INTERFACE "${CMAKE_SOURCE_DIR}/3rdparty/Catch2/single_include/catch2")

add_executable(test_runner testRunner.cpp)
target_link_libraries(test_runner Catch2)
target_link_libraries(test_runner reggie)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/3rdparty/Catch2/contrib")
target_compile_features(test_runner PRIVATE cxx_std_20)

include(CTest)
include(Catch)
catch_discover_tests(test_runner)
