#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	char ch = 'Q';
	char* p = &ch; // Address of ch
	cout << *p << endl; // Outputs 'Q'
	
	ch = 'Z';
	cout << *p << endl; // Now outputs 'Z'
	
	*p = 'X'; // Changing value of ch using pointers
	cout << ch << '\n'; // Now outputs 'X'
	
	return EXIT_SUCCESS;
}

