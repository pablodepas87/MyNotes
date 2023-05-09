#include <iostream>
#include <stdlib.h>
#include "tutorial_CMake.h"

int main(int argc, char *argv[]){

    char *stringName;
    stringName = getenv("PATH");  
    std::cout << "Hello CMake";
    std::cout << " Version " << tutorial_CMake_VERSION_MAJOR << "."
              << tutorial_CMake_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    

    return -1;
}

