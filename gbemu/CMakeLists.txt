

ucm_add_dirs( src TO SRC_FILES RECURSIVE)

add_executable(gbemu ${SRC_FILES})

target_link_libraries(gbemu PRIVATE core)

set_target_properties(
    gbemu PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})