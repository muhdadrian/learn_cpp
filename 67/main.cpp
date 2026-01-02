// Let’s take a look at some more function calls:

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}

int main()
{
    std::cout << add(4, 5) << '\n'; // within add() x=4, y=5, so x+y=9
    std::cout << add(1 + 2, 3 * 4) << '\n'; // within add() x=3, y=12, so x+y=15

    int a{ 5 };
    std::cout << add(a, a) << '\n'; // evaluates (5 + 5)

    std::cout << add(1, multiply(2, 3)) << '\n'; // evaluates 1 + (2 * 3)
    std::cout << add(1, add(2, 3)) << '\n'; // evaluates 1 + (2 + 3)

    return 0;
}

// This program produces the output:
// 9
// 15
// 10
// 7
// 6

// The first statement is straightforward.

// In the second statement, the arguments are expressions that get evaluated before being passed. In this case, 1 + 2 evaluates to 3, so 3 is copied to parameter x. 3 * 4 evaluates to 12, so 12 is copied to parameter y. add(3, 12) resolves to 15.

// The next pair of statements is relatively easy as well:
/*
int a{ 5 };
std::cout << add(a, a) << '\n'; // evaluates (5 + 5)
 */

 // In this case, add() is called where the value of a is copied into both parameters x and y. Since a has value 5, add(a, a) = add(5, 5), which resolves to value 10.

 // Let’s take a look at the first tricky statement in the bunch:
// std::cout << add(1, multiply(2, 3)) << '\n'; // evaluates 1 + (2 * 3)

// When the function add is executed, the program needs to determine what the values for parameters x and y are. x is simple since we just passed it the integer 1. To get a value for parameter y, it needs to evaluate multiply(2, 3) first. The program calls multiply and initializes z = 2 and w = 3, so multiply(2, 3) returns the integer value 6. That return value of 6 can now be used to initialize the y parameter of the add function. add(1, 6) returns the integer 7, which is then passed to std::cout for printing.

// Put less verbosely:
// add(1, multiply(2, 3)) evaluates to add(1, 6) evaluates to 7

// The following statement looks tricky because one of the arguments given to add is another call to add.
// std::cout << add(1, add(2, 3)) << '\n'; // evaluates 1 + (2 + 3)

// But this case works exactly the same as the prior case. add(2, 3) resolves first, resulting in the return value of 5. Now it can resolve add(1, 5), which evaluates to the value 6, which is passed to std::cout for printing.

// Less verbosely:
// add(1, add(2, 3)) evaluates to add(1, 5) => evaluates to 6
