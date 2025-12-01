// Implementation-defined behavior and unspecified behavior

// A specific compiler and the associated standard library it comes with are called an implementation (as these are what actually implements the C++ language). In some cases, the C++ language standard allows the implementation to determine how some aspect of the language will behave, so that the compiler can choose a behavior that is efficient for a given platform. Behavior that is defined by the implementation is called implementation-defined behavior. Implementation-defined behavior must be documented and consistent for a given implementation.

// Let’s look at a simple example of implementation-defined behavior:

#include <iostream>

int main()
{
	std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

	return 0;
}

// On most platforms, this will produce 4, but on others it may produce 2.

// Best practice:
// Avoid implementation-defined and unspecified behavior whenever possible, as they may cause your program to malfunction on other implementations.