#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int     cat = 14;
    double  dog = (double) cat;
    double  pig = double(cat);

    cout << "Dato original: " << cat << endl;
    cout << "Dato transformado: " << dog << ", " << pig << endl;

    // Floating point division by casting
    int     i1 = 18;
    int     i2 = 16;
    double  dv1 = i1 / i2;
    cout << "División de enteros: " << dv1 << endl;
    cout << "División flotante: " << double(i1/i2) << endl;
    cout << "División flotante correcta: " << double(i1)/i2 << endl;
    cout << "División flotante correcta: " << double(i1)/double(i2) << endl;
    cout << "División flotante correcta: " << i1/double(i2) << endl;

    return EXIT_SUCCESS;
}
