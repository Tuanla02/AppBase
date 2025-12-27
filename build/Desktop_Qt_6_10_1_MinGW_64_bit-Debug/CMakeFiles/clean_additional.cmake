# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AppUI_autogen"
  "CMakeFiles\\AppUI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AppUI_autogen.dir\\ParseCache.txt"
  )
endif()
