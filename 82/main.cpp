#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

// You would expect this program to produce the result:
// The sum of 3 and 4 is: 7

// But in fact, it doesn’t compile at all! (compile error).

// The reason this program doesn’t compile is because the compiler compiles the contents of code files sequentially. When the compiler reaches the function call add() on line 5 of main, it doesn’t know what add is, because we haven’t defined add until line 9! That produces the error, identifier not found.

// Best practice: When addressing compilation errors or warnings in your programs, resolve the first issue listed and then compile again.

// To fix this problem, we need to address the fact that the compiler doesn’t know what add is. There are two common ways to address the issue. Go to 83 and 84
