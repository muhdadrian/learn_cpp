#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

// This function won't compile
void printDouble()
{
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
	int num { getValueFromUser() };

	printDouble();

	return 0;
}

// This won’t compile, because function printDouble doesn’t know what identifier num is. You might try defining num as a variable inside function printDouble():

void printDouble()
{
	int num{}; // we added this line
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

// While this addresses the compiler error and makes the program compile-able, the program still doesn’t work correctly (it always prints “0 doubled is: 0”). The core of the problem here is that function printDouble doesn’t have a way to access the value the user entered.

// We need some way to pass the value of variable num to function printDouble so that printDouble can use that value in the function body.
