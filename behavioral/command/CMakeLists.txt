cmake_minimum_required(VERSION 3.1...3.15)

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "Command headers: ${HEADERS}")

add_library(Command OBJECT CopyCommand.cpp App.cpp Editor.cpp PasteCommand.cpp)
target_include_directories(Command PRIVATE ${HEADERS})

add_executable(Command_Test CommandTest.cpp)
target_include_directories(Command_Test PRIVATE ${HEADERS})
target_link_libraries(Command_Test Command)

