cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 1.0)


##add subdirectory
add_subdirectory ("Source")
add_subdirectory ("Tests")
add_subdirectory ("unity")

#configure_file(TutorialConfig TutorialConfig.h)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_C_STANDARD)


#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# add the executable
add_executable(Test Tests/TestDumbExample.c Source/production/BasePro1.c unity/src/unity.c)

##add at the end
target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}" )

                           

##########################################################################
#cmake_minimum_required(VERSION 3.0.0)
#project(BasePro1 VERSION 0.1.0)

#include(CTest)
#enable_testing()

#add_library(BasePro1 BasePro1.cpp)

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
#######################################