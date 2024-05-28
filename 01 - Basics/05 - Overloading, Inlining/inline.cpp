#include <cstdlib>
#include <iostream>
using namespace std;

inline int min(int x, int y) { return x > y ? x : y; }

int main() {
    int a = 10;
    int b = 200;

    cout << min(a, b) << endl;

    return 0;
}
