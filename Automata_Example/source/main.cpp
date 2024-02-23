#include "automaton.h"
#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::string;

int main()
{
    vector<vector<int>> M{{0, 1}, {0, 1}};
    map<char, int> A{{'a', 0}, {'b', 1}}; 
    vector<int> S{1};
    Automaton ends_with_b(A, M, S);
    std::cout << "Read abab = " << ends_with_b.Read("abab") << std::endl;
    std::cout << "Read aaba = " << ends_with_b.Read("aaba") << std::endl;

    return 0;
}