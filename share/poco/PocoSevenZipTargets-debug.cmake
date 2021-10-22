#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Poco::SevenZip" for configuration "Debug"
set_property(TARGET Poco::SevenZip APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Poco::SevenZip PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/debug/lib/PocoSevenZipd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/bin/PocoSevenZipd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Poco::SevenZip )
list(APPEND _IMPORT_CHECK_FILES_FOR_Poco::SevenZip "${_IMPORT_PREFIX}/debug/lib/PocoSevenZipd.lib" "${_IMPORT_PREFIX}/debug/bin/PocoSevenZipd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
