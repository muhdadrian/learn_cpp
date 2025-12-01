// Just like it is possible to output more than one bit of text in a single line, it is also possible to input more than one value on a single line:

#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{}; // define variable x to hold user input (and value-initialize it)
    int y{}; // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}

// Values entered should be separated by whitespace (spaces, tabs, or newlines).
// In line with our previous recommendation that variables should always be initialized, best practice is to initialize the variable first.