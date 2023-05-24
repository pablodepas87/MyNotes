cmake_minimum_required(VERSION 3.10)

set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)

set (CMAKE_CXX_STANDARD 11)

project(SimpleLibraryExample 
        VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}
        DESCRIPTION "Create Library Example")

message("Simple project o create library to cmake")


SET (SOURCES 
        myclass.cpp
        ## other files .cpp here
)

# metodo 1 per headers
SET (HEADERS 
        myclass.h
        ## other files .h here
)

# Crea la libreria con metodo 1 header
add_library( ${PROJECT_NAME} ${SOURCES} ${HEADERS})


#metodo 2 per file headers

# ho posizionato i file nella cartella include e richiamero solo con il nome il file senza il percorsp
include_directories(include)  

# Crea la libreria con metodo 2 
add_library( ${PROJECT_NAME} ${SOURCES})

# Imposta l'output corretto per la libreria
set_target_properties( ${PROJECT_NAME} PROPERTIES
            OUTPUT_NAME "${PROJECT_NAME}"
            ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/Lib"
)

# Opzionale: specifica altre dipendenze esterne per la libreria
target_link_libraries(${PROJECT_NAME}
    # Elenco delle dipendenze esterne
)