cmake_minimum_required(VERSION 3.16)
project(timing_exercise
  VERSION 0.0.1
  LANGUAGES CXX
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Can set the compiler flags such as "-g" for debug, "-O1/2/3" for optimisation
# set(CMAKE_CXX_FLAGS "-O1")

add_subdirectory(source)
