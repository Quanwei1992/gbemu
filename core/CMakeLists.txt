
ucm_add_dirs(include src TO SRC_FILES RECURSIVE)

add_library(core STATIC ${SRC_FILES})
target_include_directories(core PUBLIC include)