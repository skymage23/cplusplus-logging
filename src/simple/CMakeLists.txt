add_library(simple OBJECT
${CMAKE_CURRENT_LIST_DIR}/simple_logging.cpp
)

target_include_directories(simple
PUBLIC "${CMAKE_SOURCE_DIR}/include"
)