add_executable(Fruits
  main.cpp
  Console.h
  Console.cpp
  Fruit.h
  Fruit.cpp
  Color.h
  Color.cpp
  Basket.h
  Basket.cpp
  Apple.h
  Apple.cpp
  Banana.h
  Banana.cpp
 )

target_include_directories(Fruits
  PUBLIC ${PROJECT_BINARY_DIR}
         ${PROJECT_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR}
  ${QT_INCLUDE_DIR}
  ${QT_QTCORE_INCLUDE_DIR}
  ${QT_QTGUI_INCLUDE_DIR})



target_link_libraries(Fruits
  Qt6::Widgets
  Qt6::Core
  Qt6::Gui
)

 

set_target_properties(Fruits PROPERTIES AUTOMOC ON)


set_target_properties(Fruits PROPERTIES
  FOLDER "${PROJECT_NAME}/Fruits"
  OUTPUT_NAME ${PROJECT_NAME}-Fruits
  PROJECT_LABEL "Fruits")
