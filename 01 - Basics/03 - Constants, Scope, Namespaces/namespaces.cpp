#include <cstdlib>
#include <iostream>
#include <string>
using std::string;

namespace myGlobals {
    int cat;
    string dog = "bark bark";
}

using namespace myGlobals;

int main() {
    std::cout << dog << std::endl;
    return EXIT_SUCCESS;
}
