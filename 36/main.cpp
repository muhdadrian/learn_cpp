// Here is a sample program that illustrates a user-defined function being defined and called:
#include <iostream> // for std::cout

// Definition of user-defined function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
    std::cout << "In doPrint()\n";
}

// Definition of user-defined function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint();                        // Interrupt main() by making a function call to doPrint().  main() is the caller.
    std::cout << "Ending main()\n";   // This statement is executed after doPrint() ends

    return 0;
}

// This program produces the following output:
/*
Starting main()
In doPrint()
Ending main()
*/

// This program begins execution at the top of function main(), and the first line to be executed prints Starting main().
// The second line in main() is a function call to the function doPrint(). We know it’s a function call due to the trailing parentheses.
// Warning: When calling a function, don’t forget the parentheses () after the function’s name. If you forget the parentheses, your program may not compile (and if it does, the function will not be called).
// Because a function call was made, execution of statements in main() is suspended, and execution jumps to the top of called function doPrint(). The first (and only) line in doPrint() prints In doPrint(). When doPrint() terminates, execution returns back to the caller (main()) and continues from the point just beyond the function call. Consequently, the next statement executed in main() prints Ending main().
