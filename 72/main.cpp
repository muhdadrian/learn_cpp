// Here’s a slightly more complex program demonstrating the lifetime of a variable named x:

#include <iostream>

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int x{ 0 };    // x's lifetime begins here

    doSomething(); // x is still alive during this function call

    return 0;
} // x's lifetime ends here

// In the above program, the lifetime of x runs from the point of definition to the end of function main. This includes the time spent during the execution of function doSomething.

// What happens when an object is destroyed?
// In most cases, nothing. The destroyed object simply becomes invalid.

/*
 For advanced readers:

 If the object is a class type object, prior to destruction, a special function called a destructor is invoked. In many cases, the destructor does nothing, in which case no cost is incurred.
 */

 // Any use of an object after it has been destroyed will result in undefined behavior.

 // At some point after destruction, the memory used by the object will be deallocated (freed up for reuse).
