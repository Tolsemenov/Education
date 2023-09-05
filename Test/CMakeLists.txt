add_executable(Test
  main.cpp
 )

target_include_directories(Student
  PUBLIC ${PROJECT_BINARY_DIR}
         ${PROJECT_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(Student PROPERTIES
  FOLDER "${PROJECT_NAME}/Student"
  OUTPUT_NAME ${PROJECT_NAME}-Student
  PROJECT_LABEL "Student")
