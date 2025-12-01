#include <iostream>

int main()
{

    int x { 2 };
    std::cout << (x = 5) << '\n';
    return 0;
}

// x = 5 assigns the value 5 to x, and then returns x. The value of x (now 5) is then printed to the console.