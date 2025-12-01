 // Most modern compilers will attempt to detect if a variable is being used without being given a value. If they are able to detect this, they will generally issue a compile-time warning or error. For example, compiling the above program on Visual Studio produced the following warning:

// c:\VCprojects\test\test.cpp(11) : warning C4700: uninitialized local variable 'x' used

// If your compiler won’t let you compile and run the above program (e.g. because it treats the issue as an error), here is a possible solution to get around this issue:

#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x << '\n';

    return 0;
}

// Using uninitialized variables is one of the most common mistakes that novice programmers make, and unfortunately, it can also be one of the most challenging to debug (because the program may run fine anyway if the uninitialized variable happened to get assigned to a spot of memory that had a reasonable value in it, like 0).

// This is the primary reason for the “always initialize your variables” best practice.


// Undefined behavior

// Using the value from an uninitialized variable is our first example of undefined behavior. Undefined behavior (often abbreviated UB) is the result of executing code whose behavior is not well-defined by the C++ language. In this case, the C++ language doesn’t have any rules determining what happens if you use the value of a variable that has not been given a known value. Consequently, if you actually do this, undefined behavior will result.