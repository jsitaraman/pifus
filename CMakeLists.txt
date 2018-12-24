cmake_minimum_required(VERSION 3.8)

project(PIFUS CXX C Fortran)

option(BUILD_SHARED_LIBS "Build shared libraries (default: on)" on)
option(BUILD_PIFUS_EXE "Build pifus driver code (default: on)" on)
option(BUILD_GPU_CODE "Build GPU code (default: on)" on)

# CUDA architecture to target
set(PIFUS_CUDA_SM "60" CACHE STRING "CUDA arch option")

if (BUILD_GPU_CODE)
  enable_language(CUDA)
  add_definitions("-DGPU")
  set(CMAKE_CUDA_FLAGS "${CMAKE_CUDA_FLAGS} -arch=sm_${PIFUS_CUDA_SM}")
  set(CMAKE_CUDA_STANDARD 11)
  set(CMAKE_CUDA_STANDARD_REQUIRED ON)
  set(CMAKE_CUDA_EXTENSIONS OFF)
endif()

find_package(MPI REQUIRED)
include_directories(SYSTEM ${MPI_C_INCLUDE_PATH})
include_directories(SYSTEM ${MPI_CXX_INCLUDE_PATH})
include_directories(SYSTEM ${MPI_Fortran_INCLUDE_PATH})

find_package(OpenMP)

# Ensure C++11 standard is enabled
if (CMAKE_VERSION VERSION_LESS "3.1")
  set(CMAKE_CXX_FLAGS "-g -rdynamic -std=c++0x" ${CMAKE_CXX_FLAGS})
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS FALSE)
endif()

if (OPENMP_FOUND)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} ${OpenMP_Fortran_FLAGS}")
  add_definitions(-DENABLE_OPENMP)
endif()

# Set some default compilation settings for Fortran compiler
if (${CMAKE_Fortran_COMPILER_ID} STREQUAL "GNU")
  set(CMAKE_Fortran_FLAGS "-fdefault-real-8 -ffree-line-length-none ${CMAKE_Fortran_FLAGS}")
elseif (${CMAKE_Fortran_COMPILER_ID} STREQUAL "Intel")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -r8 -double_size 128")
endif()

# CMake Configuration variables
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING
    "Choose the build type: Debug Release" FORCE)
endif (NOT CMAKE_BUILD_TYPE)

# Always build libpifus
add_subdirectory(src)

# Optionally build driver exe and gridGen if the user requests it
if (BUILD_PIFUS_EXE)
  add_subdirectory(driver)
endif()

# CMake installation configuration

install(EXPORT PIFUSLibraries
  DESTINATION lib/cmake/PIFUS
  FILE PIFUSLibraries.cmake)

# Create PIFUS config so that other codes can find PIFUS
set(INCLUDE_INSTALL_DIR include/)
set(LIB_INSTALL_DIR lib/)
