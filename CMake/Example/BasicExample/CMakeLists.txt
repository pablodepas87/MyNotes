# define the cmake minimun version set
cmake_minimum_required( VERSION 3.10)

#not necessary but more clear to set the project version
set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)

project(basicExCMAKE 
    VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}
    DESCRIPTION "Basic CMake example"
)

message("DESCRIPTION APP = " ${PROJECT_DESCRIPTION})
message("PROJECT VERSION = " ${PROJECT_VERSION})

# AN ALTERNATIVE TO PRINT IS TO INSTALL CMakePrintHelpers and use 
include(CMakePrintHelpers)

cmake_print_variables("PROJECT VERSION = " ${PROJECT_VERSION})
cmake_print_variables("DESCRIPTION = " ${PROJECT_DESCRIPTION})

