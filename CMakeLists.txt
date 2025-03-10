# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.1.3 FATAL_ERROR)

# Package information
if (NOT DEFINED PACKAGE_VERSION)
  set(PACKAGE_VERSION 1.0.0)
endif ()
project(fbthrift VERSION ${PACKAGE_VERSION} LANGUAGES CXX)

if (NOT DEFINED CPACK_GENERATOR)
  set(CPACK_GENERATOR RPM)
endif ()
set(CPACK_RPM_PACKAGE_PROVIDES thrift)
include(CPack)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(BIN_INSTALL_DIR bin CACHE STRING
    "The subdirectory where the compiler binary should be installed")
set(INCLUDE_INSTALL_DIR include CACHE STRING
    "The subdirectory where include files should be installed")
set(LIB_INSTALL_DIR lib CACHE STRING
    "The subdirectory where libraries should be installed")
set(CMAKE_INSTALL_DIR lib/cmake/fbthrift CACHE STRING
    "The subdirectory where CMake package config files should be installed")

set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/${LIB_INSTALL_DIR}")
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

# Name the top level directories
set(THRIFT_HOME ${CMAKE_CURRENT_SOURCE_DIR})
set(THRIFT_BUILD ${CMAKE_CURRENT_BINARY_DIR})

# Add root dir so qualified includes work. E.g. #include "thrift/compiler/$x.h"
include_directories(${THRIFT_HOME})
include_directories(${THRIFT_BUILD})

# Set directory of the Find$x.cmake files to properly include dependencies
set(CMAKE_STD_MODULE_PATH ${CMAKE_MODULE_PATH})
set(CMAKE_MODULE_PATH
  "${THRIFT_HOME}/thrift/cmake"
  # for in-fbsource builds
  "${CMAKE_CURRENT_SOURCE_DIR}/../opensource/fbcode_builder/CMake"
  # For shipit-transformed builds
  "${THRIFT_HOME}/build/fbcode_builder/CMake"
  ${CMAKE_MODULE_PATH})

# Find required dependencies
find_package(OpenSSL REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable modular builds
option(compiler_only "Build the Thrift Compiler only" OFF)
option(lib_only "Build the Thrift Libraries only" OFF)
if(compiler_only OR lib_only)
  set(build_all OFF)
else()
  set(build_all ON)
endif(compiler_only OR lib_only)

set(
  thriftpy AUTO
  CACHE BOOL
  "Install the thrift/lib/py library as an FB Python archive manifest"
)
set_property(CACHE thriftpy PROPERTY STRINGS ON OFF AUTO)
option(thriftpy3
  "Include thrift-py3 library and extensions in the build, requires Cython"
  OFF
)

# Find required dependencies for the Thrift compiler.
if (compiler_only OR build_all)
  find_package(BISON 3.0.4 REQUIRED)
  include_directories(${OPENSSL_INCLUDE_DIR})
  set(THRIFT1 thrift1)
  set(THRIFTCPP2 thriftcpp2)
  include(ThriftLibrary.cmake)
  install(FILES ThriftLibrary.cmake DESTINATION ${INCLUDE_INSTALL_DIR}/thrift)
endif ()

# Find required dependencies for thrift/lib
if(lib_only OR build_all)
  find_package(Gflags REQUIRED)
  find_package(Glog REQUIRED)
  find_package(folly CONFIG REQUIRED)
  find_package(fizz CONFIG REQUIRED)
  find_package(fmt CONFIG REQUIRED)
  find_package(wangle CONFIG REQUIRED)
  find_package(ZLIB REQUIRED)
  find_package(Zstd REQUIRED)
  # https://cmake.org/cmake/help/v3.9/module/FindThreads.html
  set(THREADS_PREFER_PTHREAD_FLAG ON)
  find_package(Threads)
  include_directories(
    ${LIBGFLAGS_INCLUDE_DIR}
    ${GLOG_INCLUDE_DIRS}
    ${OPENSSL_INCLUDE_DIR}
    ${ZSTD_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
  )
  add_definitions("-DTHRIFT_HAVE_LIBSNAPPY=0")
  if(lib_only)
    find_program(THRIFT1 thrift1)
    include(${THRIFT_COMPILER_INCLUDE}/thrift/ThriftLibrary.cmake)
  endif(lib_only)

  find_package(python-six)
  if("${thriftpy}" STREQUAL "AUTO")
    if(python-six_FOUND)
      message(STATUS
        "Python dependencies found, enabling build of thrift/lib/py"
      )
    else()
      message(STATUS
        "Python dependencies not found, will not build thrift/lib/py"
      )
    endif()
    set(thriftpy "${python-six_FOUND}")
  elseif(thriftpy AND NOT python-six_FOUND)
    message(FATAL_ERROR
        "Unable to find python-six, but building thrift/lib/py was requested"
    )
  endif()
endif(lib_only OR build_all)

if(thriftpy3)
  find_package(PythonInterp 3.6 REQUIRED)
  find_package(PythonLibs 3 REQUIRED)
  find_package(Cython 0.28 REQUIRED)
endif()

# Add the test dependencies
# To run tests: `make test`
if(enable_tests)
  find_package(PythonInterp REQUIRED)
  find_package(GTest REQUIRED)
  find_package(GMock REQUIRED)
  include_directories(
    ${GTEST_INCLUDE_DIRS}
    ${GMOCK_INCLUDE_DIRS}
  )
  enable_testing()
endif(enable_tests)

# Create a generalized function for tests
function(thrift_gtest tname srcfile)
  add_executable("${tname}-t" ${srcfile})
  target_link_libraries(
    "${tname}-t"

    ${ARGN}
    ${GTEST_BOTH_LIBRARIES}
    ${GMOCK_BOTH_LIBRARIES}
    pthread
  )
  gtest_add_tests("${tname}-t" "" ${srcfile})
endfunction(thrift_gtest)

add_subdirectory(thrift)
