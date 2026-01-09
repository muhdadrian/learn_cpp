// When to use function parameters vs Local variables

// Because function parameters and local variable can both be used within the body of a function, new programmers sometimes struggle to understand when each should be used. A function parameter should be used when the caller will pass in the initialization value as an argument. A local variable should be used otherwise.

// Using a function parameter when you should use a local variable leads to code looking like this:

#include <iostream>

int getValueFromUser(int val) // val is a function parameter
{
    std::cout << "Enter a value: ";
    std::cin >> val;
    return val;
}

int main()
{
    int x {};
    int num { getValueFromUser(x) }; // main must pass x as an argument

    std::cout << "You entered " << num << '\n';

    return 0;
}


// In the above example, getValueFromUser() has defined val as a function parameter. Because of this, main() must define x so that it has something to pass as an argument. However, the actual value of x is never used, and the value that val is initialized with is never used. Making the caller define and pass a variable that is never used adds needless complexity.

// The correct way to write this would be in folder 79:
