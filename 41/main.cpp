// Quiz
// What does the following program print? Do not compile this program, just trace the code yourself.

#include <iostream> // for std::cout

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "In doA()\n";

    doB();
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";

    doA();
    doB();

    std::cout << "Ending main()\n";

    return 0;
}
