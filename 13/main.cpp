// std::cin
// std::cin is another predefined variable in the iostream library. 
// Whereas std::cout prints data to the console (using the insertion operator << to provide the data), std::cin (which stands for “character input”) reads input from keyboard. 
// We typically use the extraction operator >> to put the input data in a variable (which can then be used in subsequent statements).

#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}

// Note that you don’t need to output '\n' when accepting a line of input, as the user will need to press the enter key to have their input accepted, and this will move the cursor to the next line of the console.