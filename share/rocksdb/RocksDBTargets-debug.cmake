#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "RocksDB::rocksdb" for configuration "Debug"
set_property(TARGET RocksDB::rocksdb APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(RocksDB::rocksdb PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/rocksdbd.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS RocksDB::rocksdb )
list(APPEND _IMPORT_CHECK_FILES_FOR_RocksDB::rocksdb "${_IMPORT_PREFIX}/debug/lib/rocksdbd.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
