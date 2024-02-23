add_executable(automata_tests tests.cpp)
target_link_libraries(automata_tests PUBLIC Automata_lib Catch2::Catch2WithMain)
