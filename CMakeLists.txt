file(GLOB dynamic_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

add_subdirectory(dym)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(dynamic_exec ${dynamic_SRC})

include_directories(dym)
target_link_libraries(dynamic_exec PRIVATE dym)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)