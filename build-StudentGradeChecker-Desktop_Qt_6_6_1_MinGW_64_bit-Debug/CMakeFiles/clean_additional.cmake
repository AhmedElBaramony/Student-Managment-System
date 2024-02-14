# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\StudentGradeChecker_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\StudentGradeChecker_autogen.dir\\ParseCache.txt"
  "StudentGradeChecker_autogen"
  )
endif()
