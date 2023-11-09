
set(DYM_VERSION "0.1.1")

project(dym VERSION ${DYM_VERSION})

file(GLOB dynamiclib_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc ${CMAKE_CURRENT_SOURCE_DIR}/*.hh)

message(STATUS "==>> sources:" ${dynamiclib_SRC})
# add_library(dym STATIC ${dynamiclib_SRC})
add_library(dym SHARED ${dynamiclib_SRC})
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES VERSION ${DYM_VERSION} SOVERSION 1)
target_compile_definitions(dym PUBLIC BUILD_DLL)