add_library(reggie SHARED reggie.cpp reggie.h)

target_compile_features(reggie PRIVATE cxx_std_20)

if(MSVC)
    target_compile_options(reggie PRIVATE /W4 /WX)
else()
    target_compile_options(reggie PRIVATE -Wall -Wextra -Wpedantic)
endif()

include(GenerateExportHeader)
generate_export_header(reggie)
target_include_directories(reggie PUBLIC ${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)
