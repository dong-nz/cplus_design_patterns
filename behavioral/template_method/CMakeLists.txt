cmake_minimum_required(VERSION 3.1...3.15)

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "Template Method headers: ${HEADERS}")

add_library(Template OBJECT Logger.cpp ConsoleLogger.cpp ConsoleDestination.cpp FileLogger.cpp FileDestination.cpp)
target_include_directories(Template PRIVATE ${HEADERS})

add_executable(Template_Test TemplateTest.cpp)
target_include_directories(Template_Test PRIVATE ${HEADERS})
target_link_libraries(Template_Test Template)

