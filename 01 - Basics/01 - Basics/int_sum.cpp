// Header files
#include <cstdlib>
#include <iostream>

// Comment syntax is similar to other languages
/* Same goes for
 * multiline comments
 */

int main() {
	int x, y;
	std::cout << "Enter two numbers: ";
	std::cin >> x >> y;

	// >> is for input (along with std::cin)
	// << is for output (along with std::cout)
	// Another standard I/O stream is std::cerr
	
	int sum = x + y;
	std::cout << "Result: " << sum << std::endl;

	return EXIT_SUCCESS;
	// Code defined by cstdlib
}

