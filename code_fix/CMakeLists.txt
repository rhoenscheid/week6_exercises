cmake_minimum_required(VERSION 3.0.0)
project(dodgy_array VERSION 0.1.0)

add_executable(dodgy_array main.cpp)
target_compile_options(dodgy_array PRIVATE -g)
target_compile_options(dodgy_array PRIVATE -Werror -Wall -Wextra)
target_compile_features(dodgy_array PUBLIC cxx_std_17)
set_target_properties(dodgy_array PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF)