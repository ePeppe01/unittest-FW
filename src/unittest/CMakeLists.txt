################################################################################
#                                                                              #
# Copyright (C) 2023 Luca Tricerri                                                                           
                                        #
# All Rights Reserved.                                                         #
#                                                                              #
################################################################################

# @author Luca Tricerri <triccyx@gmail.com> 

project(unittest)

set(SOURCES gtest_main.cc
            testCRC.cpp
            )

set(CMAKE_EXE_LINKER_FLAGS  "-rdynamic")
set(CMAKE_INSTALL_RPATH ./)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME}  gtest gmock utilityfunction)

# install
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})