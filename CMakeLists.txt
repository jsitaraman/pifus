cmake_minimum_required(VERSION 2.8)


option(BUILD_SHARED_LIBS "Build shared libraries (default: on)" on)
option(BUILD_PIFUS_EXE "Build pifus driver code (default: on)" on)
option(BUILD_GPU_CODE "Build GPU code (default: on)" on)
if (BUILD_GPU_CODE)
 project(PIFUS CXX C Fortran CUDA)
 find_package(CUDA REQUIRED)
else()
 project(PIFUS CXX C Fortran)
endif()

find_package(MPI REQUIRED)
include_directories(${MPI_INCLUDE_PATH})

# Ensure C++11 standard is enabled
if (CMAKE_VERSION VERSION_LESS "3.1")
  set(CMAKE_CXX_FLAGS "-g -rdynamic -std=c++0x" ${CMAKE_CXX_FLAGS})
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS FALSE)
  if (BUILD_GPU_CODE) 
    set(CMAKE_CXX_FLAGS "-DGPU -fopenmp -O3" ${CMAKE_CXX_FLAGS} )
    set(CMAKE_CUDA_FLAGS ${CMAKE_CUDA_FLAGS} "-DGPU -arch=sm_60 -rdc=true")
  else()
    set(CMAKE_CXX_FLAGS "-fopenmp -O3" ${CMAKE_CXX_FLAGS})
  endif()
endif()


# Set some default compilation settings for Fortran compiler
if (${CMAKE_Fortran_COMPILER_ID} STREQUAL "GNU")
  #set(CMAKE_Fortran_FLAGS
  #  "${CMAKE_Fortran_FLAGS} -fbounds-check -fbacktrace -fdefault-real-8 -ffree-line-length-none")
  set(CMAKE_Fortran_FLAGS "-O3 -fdefault-real-8")
elseif (${CMAKE_Fortran_COMPILER_ID} STREQUAL "Intel")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -r8 -double_size 128")
endif()

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
