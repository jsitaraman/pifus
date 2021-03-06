
set(PIFUS_EXE_SOURCES
  myfunc.f90)

add_library(pifusdriver ${PIFUS_EXE_SOURCES})
target_link_libraries(pifusdriver
  pifus ${MPI_Fortran_LIBRARIES} ${CMAKE_DL_LIBS})

add_executable(testpifus.exe testpifus.f90)
target_link_libraries(testpifus.exe pifusdriver)

add_executable(pifus_accuracy.exe pifus_accuracy.f90)
target_link_libraries(pifus_accuracy.exe pifusdriver)

if (ENABLE_GPU_CODE)
  set_target_properties(pifusdriver PROPERTIES
    CUDA_SEPARABLE_COMPILATION ON)
  set_target_properties(testpifus.exe PROPERTIES
    CUDA_SEPARABLE_COMPILATION ON)
  set_target_properties(pifus_accuracy.exe PROPERTIES
    CUDA_SEPARABLE_COMPILATION ON)
endif()

set_target_properties(testpifus.exe PROPERTIES LINKER_LANGUAGE Fortran)
set_target_properties(pifus_accuracy.exe PROPERTIES LINKER_LANGUAGE Fortran)

install(TARGETS testpifus.exe
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib)
install(TARGETS pifus_accuracy.exe
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib)
