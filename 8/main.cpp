// To print more than one thing on the same line, the insertion operator (<<) can be used multiple times in a single statement to concatenate (link together) multiple pieces of output. For example:

#include <iostream> // for std::cout

int main()
{
    std::cout << "Hello" << " world!";
    return 0;
}

// This uses the << operator twice, first to output Hello and then to output world.