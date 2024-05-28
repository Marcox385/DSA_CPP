#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {
    // Basic usage
    string s = "to be";
    string t = "not " + s; // Concatenation made with std::string
    string u = s + " or " + t;

    if (s > t) // Lexicographic comparison
        cout << u << endl;

    // Concatenation, size and indexing
    string v = "John";
    v += " Smith";
    int i = v.size();
    cout << "Size of " << v << " = " << i << endl;
    
    return EXIT_SUCCESS;
}
