// my own exercise:
// write a code with an output:
// *
// **
// ***
// ****
// *****

#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)        // outer loop: rows
    {
        for (int j = 1; j <= i; j++)    // inner loop: number of stars
        {
        std::cout << "*";
        }
    std::cout << "\n";                  // move to next line
    }
    return 0;
}
