#include <iostream>

int getValueFromUser()
{
    int val {}; // val is a local variable
    std::cout << "Enter a value: ";
    std::cin >> val;
    return val;
}

int main()
{
    int num { getValueFromUser() }; // main does not need to pass anything

    std::cout << "You entered " << num << '\n';

    return 0;
}

// In this example, val is now a local variable. main() is now simpler because it does not need to define or pass a variable to call getValueFromUser().

/*
Best practice

When a variable is needed within a function:

1) Use a function parameter when the caller will pass in the initialization value for the variable as an argument.
2) Use a local variable otherwise.
 */
