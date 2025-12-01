// Introduction to literals and operators

std::cout << "Hello world!";
int x { 5 };
// What are ‘”Hello world!”‘ and ‘5’? They are literals. A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code.

// To further highlight the difference between literals and variables, let’s examine this short program:
#include <iostream>

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal

    int x { 5 };
    std::cout << x << '\n'; // print the value of a variable
    return 0;
}
// On line 12, we’re printing the value 5 to the console. When the compiler compiles this, it will generate code that causes std::cout to print the value 5. This value 5 is compiled into the executable and can be used directly.
// On line 14, we’re creating a variable named x, and initializing it with value 5. The compiler will generate code that copies the literal value 5 into whatever memory location is given to x. On line 15, when we print x, the compiler will generate code that causes std::cout to print the value at the memory location of x (which has value 5).
// Thus, both output statements do the same thing (print the value 5). But in the case of the literal, the value 5 can be printed directly. In the case of the variable, the value 5 must be fetched from the memory the variable represents.
// This also explains why a literal is constant while a variable can be changed. A literal’s value is placed directly in the executable, and the executable itself can’t be changed after it is created. A variable’s value is placed in memory, and the value of memory can be changed while the executable is running.

// Key insight:
// Literals are values that are inserted directly into the source code. These values usually appear directly in the executable code (unless they are optimized out).
// Objects and variables represent memory locations that hold values. These values can be fetched on demand.