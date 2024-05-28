#include <cstdlib>
#include <iostream>
#include <string>
using std::string;

struct Passenger {
    string name;
};

void someFunction(const Passenger& pass) {
    pass.name = "Name Modification";
    // The line above should display an error
}

int main() {
    Passenger pass = {"Marco Cordero"};
}
