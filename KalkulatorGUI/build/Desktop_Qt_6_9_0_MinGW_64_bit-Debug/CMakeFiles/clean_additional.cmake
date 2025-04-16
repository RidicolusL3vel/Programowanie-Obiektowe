# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\KalkulatorProjekt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\KalkulatorProjekt_autogen.dir\\ParseCache.txt"
  "KalkulatorProjekt_autogen"
  )
endif()
