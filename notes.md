# 01 - Basics
As in C, C++ needs a *compiler* in order to translate code into machine-code. After that, a *linker* (invoked automatically by the compiler) includes any required library that the code needs to execute properly.  

To compile C++ programs, the _g++_ compiler can be used in the form of
```sh
g++ -o output_name input_code.cpp
```

## Streams
C++ has __three__ main I/O streams:
- Standard output stream => std::cout
- Standard input stream => std::cin
- Standard error stream => std::cerr

To avoid *std* usage, issue `using namespace std;`
The object *std::endl* can be seen as the equivalent of *'\n'*

## Fundamental types
The following data types are native to C++
- **bool** - *true* or *false*
- **char** - a single letter (8 bits)
- **short** - a short integer (at least 16 bits)
- **int** - a common integer
- **long** - long integer (wider range) (at least 32 bits)
- **float** - single-precision float (common)
- **double** - double-precision float (more precise)

Also, enumerations can be done with **enum** to represent a sest of discrete values => `enum Day { SUN, MON, TUE, ..., SAT}; // SUN == 0, MON == 1, ...`.  
Another special type **void** represents the absence of data.  

To get the exact size of a type **T**, the expression _**sizeof**(T)_ returns a multiple of the size of **char**, i.e.: _**sizeof**(int)_ == 4.

## Pointers
Each program variable is stored in the computer's memory at some location or _address_. A **pointer** is a variable that holds the value of an address. Given the type _T_, the type _T\*_ denotes a pointer to a variable of type _T_. The declaration of **int*** denotes a pointer to an integer.
The following operators can be used to manipulate pointers:
- **address-of (&)** - returns the address of an object in memory
- **dereferecing (\*)** - returns the content of a given address

Pointers can also point to complex types and even functions.  

Pointers can point to nothing, this being a _**null pointer**_, which points to the value zero. An attempt to deference a null pointer results in a *run-time error*.  
The special symbol **NULL** can be used to define a null pointer. Its definition is activated by using `#include <cstdlib>`.

Although a variable of type **void** cannot be declared, a pointer __void\*__ can be used to point to a variable of _any_ type. This is discouraged because the compiler can't check correctness of such references, unless direct access to computer's memory is needed.

A final consideration has to be taken:
The deferencing operator (\*) is binded to the variable name rather than the type, meaning:  
```cpp
    int* x, y, z; // == int *x; int y; int z;
```

## Arrays
An array is a collection of elements of the same type. Given any type _T_ and a constant _N_, a variable of type _T[N]_ holds an array of _N_ elements, each of type _T_.  
Index logic it's the same as other languages, 0-based accessing.  
Once declared, array size cannot be increased.  
Arrays can be declared and initialize within the same line using curly braces -> `int a[] = {10, 11, 12, 13};`. This style doesn't need the array size, but it can be included.  
Array of pointers can also be declared and accessed through `*array[index]`.

## Pointers and arrays
...

