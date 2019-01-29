add_library(reggie SHARED reggie.cpp reggie.h)

target_compile_features(reggie PRIVATE cxx_std_20)

include(GenerateExportHeader)
generate_export_header(reggie)
target_include_directories(reggie PUBLIC ${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)