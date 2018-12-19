#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pifus" for configuration ""
set_property(TARGET pifus APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(pifus PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "/autofs/nccs-svm1_sw/summitdev/.swci/1-compute/opt/spack/20180914/linux-rhel7-ppc64le/gcc-5.4.0/spectrum-mpi-10.2.0.7-20180830-zsc2t7ihjdwhc4xd6x2qsxxkabvuocso/lib/libmpiprofilesupport.so;/autofs/nccs-svm1_sw/summitdev/.swci/1-compute/opt/spack/20180914/linux-rhel7-ppc64le/gcc-5.4.0/spectrum-mpi-10.2.0.7-20180830-zsc2t7ihjdwhc4xd6x2qsxxkabvuocso/lib/libmpi_ibm.so;dl"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpifus.so"
  IMPORTED_SONAME_NOCONFIG "libpifus.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS pifus )
list(APPEND _IMPORT_CHECK_FILES_FOR_pifus "${_IMPORT_PREFIX}/lib/libpifus.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
