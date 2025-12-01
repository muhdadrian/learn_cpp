// Using std::endl to output a newline

// What would you expect this program to print?

#include <iostream> // for std::cout

int main()
{
    std::cout << "Hi!";
    std::cout << "My name is Alex.";
    return 0;
}

// Separate output statements don’t result in separate lines of output on the console.

// If we want to print separate lines of output to the console, we need to tell the console to move the cursor to the next line. We can do that by outputting a newline. A newline is an OS-specific character or sequence of characters that moves the cursor to the start of the next line. Go to 11