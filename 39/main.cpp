// Nested functions are not supported

// A function whose definition is placed inside another function is a nested function. Unlike some other programming languages, in C++, functions cannot be nested. The following program is not legal:

#include <iostream>

int main()
{
    void foo() // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }

    foo(); // function call to foo()

    return 0;
}

// The proper way to write the above program is: go to 40
