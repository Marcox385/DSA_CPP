#include <cstdlib>
#include <iostream>
using namespace std;

void f(int value, int& ref) {
    value++; // Argument by value; local to function
    ref++; // Argument by reference; sum persists after return
}

int main() {
    int cat = 1, dog = 5;
    cout << "Value before function call: " << cat << ", " << dog << endl;
    f(cat, dog);
    cout << "Value after function call: " << cat << ", " << dog << endl;

    return EXIT_SUCCESS;
}
