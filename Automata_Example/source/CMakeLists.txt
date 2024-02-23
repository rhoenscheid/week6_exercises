# add Library Automata_lib
add_library(Automata_lib automaton.cpp)
target_include_directories(Automata_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)

# add executable 
add_executable(Automata_example main.cpp)
target_link_libraries(Automata_example PUBLIC Automata_lib)