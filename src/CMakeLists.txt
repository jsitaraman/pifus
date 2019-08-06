set(PIFUS_SOURCES
  # Fortran sources
  median.F90
  interpRBF.f90
  solveMat.f90
  interpLS1.f90
  # C sources
  buildADTrecursion.c

  # CXX sources
  ADT.C
  MeshBlock.C
  pifus.C
  searchADTRegion.C
  pifusInterface.C
  #
  # CUDA emu sources
  #dMeshBlock.C
  #dADT.C
  )

if (BUILD_GPU_CODE)
  set (PIFUS_SOURCES ${PIFUS_SOURCES}
       # CUDA sources
       dMeshBlock2.C
       dMeshBlock.cu
       dADT.cu
      )
endif()
file(GLOB PIFUS_HEADERS *.h)

add_library(pifus ${PIFUS_SOURCES})
target_link_libraries(pifus ${MPI_LIBRARIES} ${CMAKE_DL_LIBS})

if (ENABLE_GPU_CODE)
  set_target_properties(pifus PROPERTIES
    CUDA_SEPARABLE_COMPILATION ON)
endif()

if(MPI_COMPILE_FLAGS)
  set_target_properties(pifus PROPERTIES
    COMPILE_FLAGS "${MPI_COMPILE_FLAGS}")
endif()

if(MPI_LINK_FLAGS)
  set_target_properties(pifus PROPERTIES
    LINK_FLAGS "${MPI_LINK_FLAGS}")
endif()

install(TARGETS pifus
  EXPORT "${CMAKE_PROJECT_NAME}Libraries"
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib)

install(FILES ${PIFUS_HEADERS}
  DESTINATION include)
