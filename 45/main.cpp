// Fixing our challenge program

// With this in mind, we can fix the program we presented at the top of the lesson:

#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}

int main()
{
	int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

// When this program executes, the first statement in main will create an int variable named num. When the program goes to initialize num, it will see that there is a function call to getValueFromUser(), so it will go execute that function. Function getValueFromUser, asks the user to enter a value, and then it returns that value back to the caller (main()). This return value is used as the initialization value for variable num. num can then be used as many times as needed within main().

// Tip: If you need to use the return value of a function call more than once, initialize a variable with the return value, and then use that variable as many times as needed.

// Compile this program yourself and run it a few times to prove to yourself that it works.
