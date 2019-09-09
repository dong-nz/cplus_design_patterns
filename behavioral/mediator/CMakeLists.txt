cmake_minimum_required(VERSION 3.1...3.15)

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "Mediator headers: ${HEADERS}")

add_library(mediator OBJECT TrafficController.cpp Plane.cpp)
target_include_directories(mediator PRIVATE ${HEADERS})

add_executable(mediator_test MediatorTest.cpp)
target_include_directories(mediator_test PRIVATE ${HEADERS})
target_link_libraries(mediator_test mediator)

