// Developing your first program

// Multiply by 2

// First, let’s create a program that asks the user to enter an integer, waits for them to input an integer, then tells them what 2 times that number is. The program should produce the following output (assume I entered 4 as input):
// Enter an integer: 4
// Double that number is: 8

//  let’s start with some basic scaffolding:
int main()
{
	return 0;
}

// We know we’re going to need to output text to the console, and get text from the user’s keyboard, so we need to include iostream for access to std::cout and std::cin.
#include <iostream>

int main()
{
	return 0;
}

// Now let’s tell the user that we need them to enter an integer:
#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	return 0;
}
// At this point, your program should produce this result:
// Enter an integer:
// and then terminate.

// Next, we’re going to get the user’s input. We’ll use std::cin and operator>> to get the user’s input. But we also need to define a variable to store that input for use later.
#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num; // std::cin uses operator >>, not operator <<!

	return 0;
}
// Now the program will compile, and we can test it. The program will wait for you to enter a number, so let’s enter 4. The output should look like this:
// Enter an integer: 4
// Almost there! Last step is to double the number.
// Once we finish this last step, our program will compile and run successfully, producing the desired output. Go to 30.