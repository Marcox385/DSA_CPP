#include <cstdlib>
#include <iostream>
using namespace std;

const int Cat = 1; // global Cat

int main() {
    const int Cat = 2; // local Cat
    cout << Cat << endl; // Outputs 2

    return EXIT_SUCCESS;
}

int dog = Cat; // == 1
