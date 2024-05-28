# 01 - Basics
As in C, C++ needs a *compiler* in order to translate code into machine-code. After that, a *linker* (invoked automatically by the compiler) includes any required library that the code needs to execute properly.  

To compile C++ programs, the _g++_ compiler can be used in the form of
```sh
g++ -o output_name input_code.cpp
```

### Expressions
As in other programming languages, expressions takes two operands and an operator in order to obtain new values (precedence is the usual). These are the most common:
- **class_name.member** - class/structure member selection
- **pointer->member** - class/structure member selection
- **array\[exp\]** - array subscripting
- **exp + exp** - addition
- **exp - exp** - substraction
- **exp \* exp** - multiplication
- **exp / exp** - division (truncated when dividing two integers)
- **exp % exp** - modulo
- **++x | x++** - pre/post increment
- **--x | x--** - pre/post decrement

Relational and logical operators are the same as in Java or C, such as: <, >, <=, >=, ==, !=, !exp, &&, and ||.  
To check if a pointer is null, `p != NULL` comparison can be used.

Bitwise operators can manipulate integers at bit level with operators such as: ~exp (complement), & (and), ^ (xor), | (or), << (shift lside to the left by rside bits; always fills with zeros), >> (shift lside to the rigth by rside bits).

The usual assignments operators are present as well (=, +=, -=, *=, ...). Only STL strings and C structures are copied when assigned to other variables, the rest of objects assign references to themselves rather than a copy to the original data.

#### Other operators
- **class_name::member** - class scope resolution (properties)
- **namespace::member** - namespace resolution
- **bool_expr ? if_true : if_false** - ternary
- **stream >> var** - stream input (operator overloaded by \<iostream\>)
- **stream << var** - stream output (operator overloaded by \<iostream\>)

### Streams
C++ has __three__ main I/O streams:
- Standard output stream => std::cout
- Standard input stream => std::cin
- Standard error stream => std::cerr

To avoid *std* usage, issue `using namespace std;` after header files references  
The object *std::endl* can be seen as the equivalent of *'\n'*

### Fundamental types
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

### Type casting
Refers to type change of a variable.

#### Traditional C-Style Casting
Having an expression and a type, the expression can be casted to the new type with notation `(Type)expression` or `Type(expression)` if the type is a type name.

#### Explicit cast operators
Casting can be dangerous, as information can be lost and the architecture of the computers in which code is ran can affect these operations. For this reason, C++ provides **static cast, dynamic_cast, const_cast** and **reinterpret_cast**.

Static casting can be used to convert between two related types, i.e. numbers to numbers or pointers to pointers. The syntax is `static_cast<type>(data)`.



## Pointers, Arrays and Structures
### Pointers
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

### Arrays
An array is a collection of elements of the same type. Given any type _T_ and a constant _N_, a variable of type _T[N]_ holds an array of _N_ elements, each of type _T_.  
Index logic it's the same as other languages, 0-based accessing.  
Once declared, array size cannot be increased.  
Arrays can be declared and initialize within the same line using curly braces -> `int a[] = {10, 11, 12, 13};`. This style doesn't need the array size, but it can be included.  
Array of pointers can also be declared and accessed through `*array[index]`.

### Pointers and arrays
As in C, the name of an array is equivalent to a pointer to the start of itself and vice versa, meaning `char c[] <=> char *p = c <=> char *q = &c[0]`.

### Strings
Strings in C++ are also fixed-length array of characters (_char word[]_) that ends with the null characters (_\0_). This alone doesn't provides important operations such as concatenation and comparison, but it does inherits previously seen array features.  
To address previous concerns, C++ provides the **string** type, part of the _Standard Template Library (STL)_. To use it, include the _\<string\>_ header file and refer to them as _std::string_ or issue `using std::string` to omit the standard namespace part.

### C-Style Structures
Structures allow aggregation of elements, usually of different types. Each _member_ or _field_ of a structure is referred to by a given name.

### Dynamic memory
C++ allows for dynamic object creation on the run, done by reserving a large block of memory called the _free store_ or commonly referred to as _heap memory_. Operators *new* and *delete* are used to create and destroy instances of structures. The operator *delete* should only be used with objects created with the *new* keyword.  
Having a structure, `pointer_name->member` is equivalent `(*pointer_name).member`.  
**_C++ does not provide automatic garbage collection_**

Arrays can also be created with the _new_ keyword. This will yield an array of type _\*T_ rather than an array of type _T_. The operator to delete it is _delete\[\]_

    If an object is allocated with the new operator, it should eventually be deallocated with the delete operator

### References
Pointers refer indirectly to objets. Another way to do it is through _references_, which are simply alternatives to object names.  
Given a type _T_, the notation _T&_ indicates a reference to an object of type _T_. Unless pointers, these can't be _NULL_, and they have to be initialized at the same time of declaration. Afterwards, any access to the reference is the same as access to the underlying object.  
References are often used for passing function arguments and are also often used for returning results from functions.

## Named Constants, Scope and Namespaces
C++ has multiple mechanisms that aid in providing names and limiting their scope.

### Constants and Typedef
Literals that doesn't change their values can be declared with *const* prefix.  
Synonyms or complex data type shortcuts can be created with *typedef*. These declarations are useful for future data type exchange, although that isn't recommended. By convention, user defined types have their first letter capitalized when declared and further used.

### Scopes
All defined within \{curly braces\} belongs to a _block_; variables and types defined within said space are _local_ to that block. Variables declared outside a block are _global_ and can be accessed from the inside of any other block.  
The portions of a program from which a given name is accessible are called its _scope_. Two variable with the same name can be defined within \{nested \{blocks\}\}; when that happens, the variable of the inner block becomes active until leaving said block.

### Namespaces
Global variables present many problems in large codebases because they can be accessed and potentially modified from anywhere in the program. They can also can cause name colliton.  
When globals can't be avoided, _namespaces_ can be used to group related names to be defined in one place. Having the form
```cpp
namespace groupName {
    int x;
    string s;
}
```
An object _x_ in a namespace _groupName_ can be accessed using _groupName::x_. This is called _fully qualified name_.

#### The "using" statement
The **using** statement can be used to refer to a name of a namespace that its being used constantly. It can be used to access single names (`using groupName::name`) or whole namespaces (`using namespace groupName`)
