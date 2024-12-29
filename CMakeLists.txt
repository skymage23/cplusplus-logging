cmake_minimum_required(VERSION 3.10)
project(cplusplus-logging  CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(BUILD_MODE STATIC)
if(NOT DEFINED BUILD_STATIC_LIBS)
    set(BUILD_MODE SHARED)
endif()

add_subdirectory(src)

add_library(cplusplus-logging ${BUILD_MODE}
$<TARGET_OBJECTS:simple>
#$<TARGET_OBJECTS:system>
)
set(CPLUSPLUS_LOGGING "${CMAKE_CURRENT_LIST_DIR}")
