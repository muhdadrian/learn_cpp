// std::endl vs \n

// \n moves the cursor to the next line of the console without causing a flush, so it will typically perform better.
// Using std::endl is often inefficient, as it actually does two jobs: it outputs a newline (moving the cursor to the next line of the console), and it flushes the buffer (which is slow).

#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}

// When \n is not being embedded into an existing line of double-quoted text (e.g. "hello\n"), it is conventionally single quoted ('\n').

/*
In C++, we use single quotes to represent single characters (such as 'a' or '$'), and double-quotes to represent text (zero or more characters).

Even though ‘\n’ is represented in source code as two symbols, it is treated by the compiler as a single linefeed (LF) character (with ASCII value 10), and thus is conventionally single quoted (unless embedded into existing double-quoted text). 

When ‘\n’ is output, the library doing the outputting is responsible for translating this single LF character into the appropriate newline sequence for the given OS.
*/

/*
Although unconventional, we believe it’s fine to use (or even prefer) double quoted "\n" in standard output statements.

This has two primary benefits:

1) It’s simpler to double-quote all outputted text rather than having to determine what should be single-quoted and double-quoted.

2) More importantly, it helps avoid inadvertent multicharacter literals.

Single quotes should be preferred in non-output cases.
*/

// Prefer \n over std::endl when outputting text to the console.