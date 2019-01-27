add_library(reggie SHARED reggie.cpp reggie.h)

include(GenerateExportHeader)
generate_export_header(reggie)
target_include_directories(reggie PUBLIC ${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR}/src)