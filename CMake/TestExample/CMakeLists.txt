cmake_minimum_required(VERSION 3.10)

project(tutorial_CMake 
    VERSION 1.0.0.0 
    LANGUAGES  CXX
    DESCRIPTION "FIRST TEST CMAKE EXAMPLE"
)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(tutorial_CMake main.cpp)

include(CMakePrintHelpers)
cmake_print_variables(PROJECT_VERSION)
cmake_print_variables(PROJECT_VERSION_MAJOR)
cmake_print_variables(PROJECT_VERSION_MINOR)
cmake_print_variables(PROJECT_VERSION_PATCH)
cmake_print_variables(PROJECT_VERSION_TWEAK)
cmake_print_variables(PROJECT_DESCRIPTION)
cmake_print_variables(PROJECT_HOMEPAGE_URL)

message("VERSION MAJOR = " ${tutorial_CMake_VERSION_MAJOR})
message("VERSION MINOR = " ${tutorial_CMake_VERSION_MINOR})
message("VERSION PATCH = " ${tutorial_CMake_VERSION_PATCH})
message("VERSION TWEAK = " ${tutorial_CMake_VERSION_TWEAK})
message("DESCIZIONE PROGETTO= " ${tutorial_CMake_DESCRIPTION})

#set directory co nfile libreria
target_include_directories(tutorial_CMake 
    PUBLIC
    "${CMAKE_CURRENT_BINARY_DIR}" #DIREC
)

configure_file(tutorial_CMake.h.in ${PROJECT_SOURCE_DIR}/tutorial_CMake.h)
