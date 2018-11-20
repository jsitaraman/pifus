
set(PIFUS_EXE_SOURCES
  myfunc.f90)

add_executable(testpifus.exe testpifus.f90 ${PIFUS_EXE_SOURCES})
add_executable(pifus_accuracy.exe pifus_accuracy.f90 ${PIFUS_EXE_SOURCES})

#target_compile_definitions(pifus.exe PUBLIC ${MPI_Fortran_COMPILE_FLAGS})
#target_include_directories(pifus.exe PUBLIC ${MPI_Fortran_INCLUDE_PATH})
target_link_libraries(testpifus.exe
  pifus ${MPI_Fortran_LIBRARIES} ${CMAKE_DL_LIBS})

target_link_libraries(pifus_accuracy.exe
  pifus ${MPI_Fortran_LIBRARIES} ${CMAKE_DL_LIBS})

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
