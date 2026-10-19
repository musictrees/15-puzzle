cmake_minimum_required(VERSION 3.20)

project(
    15-Puzzle
)

add_executable(App)

target_include_directories(App PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(App PRIVATE
    main.cpp
)

set_target_properties(App PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    COMPILE_WARNING_AS_ERROR OFF
)

if (MSVC)
    target_compile_options(App PRIVATE /W4)
else()
    target_compile_options(App PRIVATE -Wall -Wextra -pedantic)
endif()