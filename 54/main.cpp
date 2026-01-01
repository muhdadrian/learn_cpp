// Void functions can’t be used in expression that require a value

// Some types of expressions require values. For example:

#include <iostream>

int main()
{
    std::cout << 5; // ok: 5 is a literal value that we're sending to the console to be printed
    std::cout << ;  // compile error: no value provided

    return 0;
}

// In the above program, the value to be printed needs to be provided on the right-side of the std::cout <<. If no value is provided, the compiler will produce a syntax error. Since the second call to std::cout does not provide a value to be printed, this causes an error.
