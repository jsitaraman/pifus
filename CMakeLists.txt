cmake_minimum_required(VERSION 3.8)

project(PIFUS CXX C Fortran)

# set(CMAKE_BUILD_TYPE Debug)

option(BUILD_SHARED_LIBS "Build shared libraries (default: on)" on)
option(BUILD_PIFUS_EXE "Build pifus driver code (default: on)" on)
option(BUILD_GPU_CODE "Build GPU code (default: on)" on)
option(BUILD_GRIDGEN_EXE "Build strand/cart meshing code (default: on)" on)

if(${CMAKE_VERSION} VERSION_GREATER "3.11")                                               
  cmake_policy(SET CMP0074 NEW)                                                           
endif()                                                                                   

find_package(MPI REQUIRED)
include_directories(${MPI_INCLUDE_PATH})

if (BUILD_GPU_CODE)
  enable_language(CUDA)
  add_definitions("-DGPU")
if (CMAKE_VERSION VERSION_LESS "3.18")
  # Hard-code multiple target architectures:
  set(CMAKE_CUDA_FLAGS "${CMAKE_CUDA_FLAGS} -gencode=arch=compute_60,code=sm_60")
  set(CMAKE_CUDA_FLAGS "${CMAKE_CUDA_FLAGS} -gencode=arch=compute_70,code=sm_70")
else ()
  set(CMAKE_CUDA_ARCHITECTURES "70")
endif()
  set(CMAKE_CUDA_FLAGS "-lineinfo")
  set(CMAKE_CUDA_STANDARD 14)
  set(CMAKE_CUDA_STANDARD_REQUIRED ON)
  set(CMAKE_CUDA_EXTENSIONS OFF)
endif()

set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

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
  set(CMAKE_CXX_FLAGS "-g -rdynamic" ${CMAKE_CXX_FLAGS})
endif()

if (OPENMP_FOUND)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} ${OpenMP_Fortran_FLAGS}")
  add_definitions(-DENABLE_OPENMP)
endif()

# Set some default compilation settings for Fortran compiler
if (${CMAKE_Fortran_COMPILER_ID} STREQUAL "GNU")
  set(CMAKE_Fortran_FLAGS "-O3 -fbacktrace -fbounds-check -fdefault-real-8 -ffree-line-length-none ${CMAKE_Fortran_FLAGS}")
elseif (${CMAKE_Fortran_COMPILER_ID} STREQUAL "Intel")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -r8 -double_size 128")
endif()

# CMake Configuration variables
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING
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
