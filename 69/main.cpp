// Write a complete program that reads an integer from the user, doubles it using the doubleNumber() function you wrote in the previous quiz question, and then prints the doubled value out to the console.


#include <iostream>

int doubleNumber()
{
        std::cout << "Enter an integer: ";
        int num{};
        std::cin >> num;
        return num * 2;
}

int main()
{

    std::cout << doubleNumber() << '\n';


    return 0;
}

/*
 learncpp.com answer:

 #include <iostream>

 int doubleNumber(int x)
 {
     return 2 * x;
 }

 int main()
 {
     std::cout << "Enter an integer value: ";
     int x{};
     std::cin >> x;
     std::cout << doubleNumber(x) << '\n';

     return 0;
 }

 Note: You may come up with other (similar) solutions. There are often many ways to do the same thing in C++.
 */
