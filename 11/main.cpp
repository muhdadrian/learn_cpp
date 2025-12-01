// One way to output a newline is to output std::endl (which stands for “end line”):

#include <iostream> // for std::cout and std::endl

int main()
{
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    return 0;
}

/*
Best practice:
Output a newline whenever a line of output is complete.
*/