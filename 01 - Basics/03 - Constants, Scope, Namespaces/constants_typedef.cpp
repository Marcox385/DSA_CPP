#include <cstdlib>
#include <iostream>

using namespace std;

// Constant declaration
const double PI     = 3.14159265;
const int CUT_OFF[] = {90, 80, 70, 60};
const int N_DAY     = 7;
const int N_HOURS   = 24 * N_DAY;

// Type declaration
typedef char* BufferPtr; // Pointer to char
typedef double Coordinate; // Double synonym

int main() {
    int counter[N_HOURS]; // Array of 168 ints

    BufferPtr p;
    Coordinate x, y;
}
