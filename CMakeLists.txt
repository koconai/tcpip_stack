cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# Set up the project
project(test2
    VERSION 6.0.0
    LANGUAGES C ASM
)

set(CMAKE_DEBUG_POSTFIX d)

add_subdirectory(lib)
add_subdirectory(startup)
add_subdirectory(src)
