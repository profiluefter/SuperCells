cmake_minimum_required(VERSION 3.12)
project(SuperCells)

set(CMAKE_CXX_STANDARD 17)

add_executable(SuperCells main.cpp)

#SFML
set(CMAKE_MODULE_PATH "H:/1 Programmieren/C++ LIBRARIES/SFML-compiled/Modules/" ${CMAKE_MODULE_PATH})
set(SFML_ROOT "H:/1 Programmieren/C++ LIBRARIES/SFML-compiled/")
find_package(SFML REQUIRED system window graphics network audio)

include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(SuperCells ${SFML_LIBRARIES})