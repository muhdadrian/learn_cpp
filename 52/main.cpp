// Void return values

// Functions are not required to return a value back to the caller. To tell the compiler that a function does not return a value, a return type of void is used. For example:

#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    return 0;
}

// In the above example, the printHi function has a useful behavior (it prints “Hi”) but it doesn’t need to return anything back to the caller. Therefore, printHi is given a void return type.

// When main calls printHi, the code in printHi executes, and “Hi” is printed. At the end of printHi, control returns to main and the program proceeds.

// A function that does not return a value is called a non-value returning function (or a void function).
