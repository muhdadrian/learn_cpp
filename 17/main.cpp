// Using the values of uninitialized variables can lead to unexpected results. Consider the following short program:

#include <iostream>

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

    return 0;
}

// In this case, the computer will assign some unused memory to x. It will then send the value residing in that memory location to std::cout, which will print the value (interpreted as an integer). But what value will it print? The answer is “who knows!”, and the answer may (or may not) change every time you run the program. When the author ran this program in Visual Studio, std::cout printed the value 7177728 one time, and 5277592 the next. Feel free to compile and run the program yourself (your computer won’t explode).