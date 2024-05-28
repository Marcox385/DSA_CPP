#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    double  d1 = 3.2;
    double  d2 = 3.9999;
    int     i1 = static_cast<int>(d1);
    int     i2 = static_cast<int>(d2);

    cout << "New values: " << i1 << ", " << i2 << endl;
    return EXIT_SUCCESS;
}
