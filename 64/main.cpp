// Fixing our challenge program

// We now have the tool we need to fix the program we presented at the top of the lesson:

#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value) // This function now has an integer parameter
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
	int num { getValueFromUser() };

	printDouble(num);

	return 0;
}

// In this program, variable num is first initialized with the value entered by the user. Then, function printDouble is called, and the value of argument num is copied into the value parameter of function printDouble. Function printDouble then uses the value of parameter value.
