add_executable(Figures
  main.cpp
  Point.h
  Point.cpp
  Console.h
  Console.cpp
  Circle.h
  Circle.cpp)

target_include_directories(Figures
  PUBLIC ${PROJECT_BINARY_DIR}
         ${PROJECT_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR}
  ${QT_INCLUDE_DIR}
  ${QT_QTCORE_INCLUDE_DIR}
  ${QT_QTGUI_INCLUDE_DIR})



target_link_libraries(Figures
  Qt6::Widgets
  Qt6::Core
  Qt6::Gui
)

 

set_target_properties(Figures PROPERTIES AUTOMOC ON)


set_target_properties(Figures PROPERTIES
  FOLDER "${PROJECT_NAME}/Figures"
  OUTPUT_NAME ${PROJECT_NAME}-Figures
  PROJECT_LABEL "Figures")
