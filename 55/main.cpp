#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    std::cout << printHi(); // compile error

    return 0;
}

// The first call to printHi() is called in a context that does not require a value. Since the function doesn’t return a value, this is fine.

// The second function call to function printHi() won’t even compile. Function printHi has a void return type, meaning it doesn’t return a value. However, this statement is trying to send the return value of printHi to std::cout to be printed. std::cout doesn’t know how to handle this (what value would it output?). Consequently, the compiler will flag this as an error. You’ll need to comment out this line of code in order to make your code compile.
