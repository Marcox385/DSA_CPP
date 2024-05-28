#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	char c[] = {'c', 'a', 't'};
	char *p = c;	 						// p points to c[0]
	char *q = &c[0]; 						// q also points to c[0]
	cout << c[2] << p[2] << q[2] << endl;	// Outputs "ttt"
	return EXIT_SUCCESS;
}

