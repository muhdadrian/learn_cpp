// Using return values as arguments

// In the problem in folder 64, we can see that variable num is only used once, to transport the return value of function getValueFromUser to the argument of the call to function printDouble.

// We can simplify the previous example slightly as follows:

#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value)
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
	printDouble(getValueFromUser());

	return 0;
}

// Now, we’re using the return value of function getValueFromUser directly as an argument to function printDouble!

// Although this program is more concise (and makes it clear that the value read by the user will be used for nothing else), you may also find this “compact syntax” a bit hard to read. If you’re more comfortable sticking with the version that uses the variable instead, that’s fine.
