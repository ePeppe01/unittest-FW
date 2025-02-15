################################################################################
#                                                                              #
# Copyright (C) 2023 Luca Tricerri                                                                           
                                        #
# All Rights Reserved.                                                         #
#                                                                              #
################################################################################

# @author Luca Tricerri <triccyx@gmail.com>


cmake_minimum_required(VERSION 3.12)
project(training
        LANGUAGES CXX C
        VERSION 0.1.0)

include(FeatureSummary)
include(GNUInstallDirs)
include(FetchContent)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}")

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY "https://github.com/google/googletest"
        GIT_TAG        origin/main
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_subdirectory(firmwareLib)
add_subdirectory(unittest)