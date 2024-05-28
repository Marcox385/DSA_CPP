#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	double f[5]; 	 // Array of 5 doubles
	int m[10];	 // Array of 10 integers
	f[4] = 2.5;
	m[2] = 4;
	cout << f[m[2]] << endl; // == f[4] == 2.5
}

