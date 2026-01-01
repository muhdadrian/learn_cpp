// Void functions don’t need a return statement

// A void function will automatically return to the caller at the end of the function. No return statement is required.

// A return statement (with no return value) can be used in a void function -- such a statement will cause the function to return to the caller at the point where the return statement is executed. This is the same thing that happens at the end of the function anyway. Consequently, putting an empty return statement at the end of a void function is redundant:

#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';

    return; // tell compiler to return to the caller -- this is redundant since the return will happen at the end of the function anyway!
} // function will return to caller here

int main()
{
    printHi();

    return 0;
}

// Best practice: Do not put a return statement at the end of a non-value returning function.
