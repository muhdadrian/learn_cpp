// Functions can call functions that call other functions

// You’ve already seen that function main() can call other functions (such as function doPrint() in the example 37).
// The functions called by main() can also call other functions (and those functions can call functions too, etc…). In the following program, function main() calls function doA(), which calls function doB():

#include <iostream> // for std::cout

void doB()
{
    std::cout << "In doB()\n";
}


void doA()
{
    std::cout << "Starting doA()\n";

    doB();

    std::cout << "Ending doA()\n";
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";

    doA();

    std::cout << "Ending main()\n";

    return 0;
}

// This program produces the following output:
// Starting main()
// Starting doA()
// In doB()
// Ending doA()
// Ending main()
