// The following program should generate no warnings/errors:

#include <iostream>

int main()
{
    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}

// the compiler will likely optimize these variables out of the program, so they have no performance impact.

// The [[maybe_unused]] attribute should only be applied selectively to variables that have a specific and legitimate reason for being unused (e.g. because you need a list of named values, but which specific values are actually used in a given program may vary). 

// Otherwise, unused variables should be removed from the program.

// In future lessons, we’ll often define variables we don’t use again, in order to demonstrate the syntax for certain concepts. Making use of [[maybe_unused]] allows us to do so without compilation warnings/errors.