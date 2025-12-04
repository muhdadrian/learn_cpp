// Function return values (value-returning functions)

#include <iostream>

int main()
{
	// get a value from the user
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;

	// print the value doubled
	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

// This program is composed of two conceptual parts: First, we get a value from the user. Then we tell the user what double that value is.

// Although this program is trivial enough that we don’t need to break it into multiple functions, what if we wanted to? Getting an integer value from the user is a well-defined job that we want our program to do, so it would make a good candidate for a function. So let’s write a program to do this at 43.
