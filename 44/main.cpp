// A value-returning function will return a value each time it is called.

// Let’s take a look at a simple function that returns an integer value, and a sample program that calls it:

#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement provides the value that will be returned
    return 5; // return the value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}

// When run, this program prints:
// 5
// 7

// Execution starts at the top of main. In the first statement, the function call to returnFive() is evaluated, which results in function returnFive() being called. The return expression 5 is evaluated to produce the value 5, which is returned back to the caller and printed to the console via std::cout.

// In the second function call, the function call to returnFive is evaluated, which results in function returnFive being called again. Function returnFive returns the value of 5 back to the caller. The expression 5 + 2 is evaluated to produce the result 7, which is then printed to the console via std::cout.

// In the third statement, function returnFive is called again, resulting in the value 5 being returned back to the caller. However, function main does nothing with the return value, so nothing further happens (the return value is ignored).

// Note: Return values will not be printed unless the caller sends them to the console via std::cout. In the last case above, the return value is not sent to std::cout, so nothing is printed.

// Tip: When a called function returns a value, the caller may decide to use that value in an expression or statement (e.g. by using it to initialize a variable, or sending it to std::cout) or ignore it (by doing nothing else). If the caller ignores the return value, it is discarded (nothing is done with it).
