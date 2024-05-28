#include <cstdlib>
#include <iostream>

int main() {
    int     i = 3;
    double  d = 4.8;
    double  d3 = i / d; // internally double(i)/d
    int     i3 = d3;    // This will likely cause a compiler warning
    // Tested with g++ 14.1.1, no warning issued

    std::cout << i3 << std::endl;

    return EXIT_SUCCESS;
}
