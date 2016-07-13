SET(CMAKE_CXX_COMPILER /usr/bin/clang++)
SET(CMAKE_CXX_FLAGS "-std=c++11")
project("Segue")

add_executable(Segue main.cpp note.cpp)
