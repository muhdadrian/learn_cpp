#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

void printNumber(int value)
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int num{getValueFromUser()};
    printNumber(num);

    return 0;
}
