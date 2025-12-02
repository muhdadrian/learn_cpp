// Calling functions more than once

#include <iostream> // for std::cout

void doPrint()
{
    std::cout << "In doPrint()\n";
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint(); // doPrint() called for the first time
    doPrint(); // doPrint() called for the second time
    std::cout << "Ending main()\n";

    return 0;
}

// This program produces the following output:

// Starting main()
// In doPrint()
// In doPrint()
// Ending main()

// Since doPrint() gets called twice by main(), doPrint() executes twice, and In doPrint() gets printed twice (once for each call).
