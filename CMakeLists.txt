cmake_minimum_required(VERSION 3.20)
project("2048tui" VERSION 0.0.1)

configure_file(2048config.h.in 2048config.h)

set(SOURCE_FILES src/2048tui.cpp)

add_executable(2048tui ${SOURCE_FILES})

target_include_directories(2048tui PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(2048tui PUBLIC "src/")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#set(CMAKE_MODULE_PATH "../src/cmake")
#
#find_package(CppUnit REQUIRED)
#include_directories(${CPPUNIT_INCLUDE_DIR})
#LIST(APPEND UnitTestLibs ${CPPUNIT_LIBRARY})
#
## include the tests-directory
#include_directories("tests")
#
## find all sources in unit test
#FILE(GLOB_RECURSE UNIT_TEST "*.cpp*" "*.hpp")
#
## All unit tests get added to executables
#add_executable(UnitTests ${UNIT_TEST} $<TARGET_OBJECTS:SRCFILES>)
#
## Link unit tests executable
#target_link_libraries(UnitTests ${LibraryList} ${UnitTestLibs})


