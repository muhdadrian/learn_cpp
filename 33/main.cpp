// Quiz:

// Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.
// The output of the program should match the following (assuming inputs of 6 and 4):

// Enter an integer: 6
// Enter another integer: 4
// 6 + 4 is 10.
// 6 - 4 is 2.

// Hint: To print a period and a newline, use ".\n", not '.\n'.

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num{}; //solution use x
    std::cin >> num;
    
    std::cout << "Enter another integer: ";
    int num2{}; //solution use y
    std::cin >> num2;

    std::cout << num << " + " << num2 << " is " << num + num2 << ".\n";
    std::cout << num << " - " << num2 << " is " << num - num2 << ".\n";

    return 0;
}