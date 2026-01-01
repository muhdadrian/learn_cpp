// Quiz

#include <iostream>

void printA()
{
    std::cout << "A\n";
}

int main()
{
    std::cout << printA() << '\n';

    return 0;
}

// This program does not compile. Function printA() returns void, which can’t be sent to std::cout to be printed. This will produce a compile error.
