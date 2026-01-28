#include <iostream>

int printDouble(int x)
{
    return x * 2;
}

int main()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    std::cout << printDouble(num) << '\n';


}
