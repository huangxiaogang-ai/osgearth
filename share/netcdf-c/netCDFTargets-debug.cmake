#----------------------------------------------------------------
# Generated CMake target import file for configuration "DEBUG".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "netCDF::netcdf" for configuration "DEBUG"
set_property(TARGET netCDF::netcdf APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(netCDF::netcdf PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/debug/lib/netcdf.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/bin/netcdf.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS netCDF::netcdf )
list(APPEND _IMPORT_CHECK_FILES_FOR_netCDF::netcdf "${_IMPORT_PREFIX}/debug/lib/netcdf.lib" "${_IMPORT_PREFIX}/debug/bin/netcdf.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
