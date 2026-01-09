// Quiz time
// What does the following program print?

#include <iostream>

void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << "main: x = " << x << " y = " << y << '\n';

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;
}

/*
Here’s what happens in this program:

@ execution starts at the top of main
@ main‘s variable x is created and initialized with value 1
@ main‘s variable y is created and initialized with value 2
@ std::cout prints main: x = 1 y = 2
@ doIt is called with argument 1
@ doIt‘s parameter x is created and initialized with value 1
@ doIt’s variable y is created and initialized with value 4
@ doIt prints doIt: x = 1 y = 4
@ doIt‘s variable x is assigned the new value 3
@ std::cout prints doIt: x = 3 y = 4
@ doIt‘s y and x are destroyed
@ std::cout prints main: x = 1 y = 2
@ main returns 0 to the operating system
@ main‘s y and x are destroyed

Note that even though doIt‘s variables x and y had their values initialized or assigned to something different than main‘s, main‘s x and y were unaffected because they are different variables.
 */
