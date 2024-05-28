#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {
    string author = "García Márquez";
    string& penName = author;
    penName = "Gabito"; // == author = "Gabito"
    cout << author << endl;

    return EXIT_SUCCESS;
}
