// Reusing functions

// Now we can illustrate a good case for function reuse. Consider the following program:

#include <iostream>

int main()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;

	int y{};
	std::cout << "Enter an integer: ";
	std::cin >> y;

	std::cout << x << " + " << y << " = " << x + y << '\n';

	return 0;
}

// While this program works, it’s a little redundant. In fact, this program violates one of the central tenets of good programming: Don’t Repeat Yourself (often abbreviated DRY).

// Why is repeated code bad? If we wanted to change the text “Enter an integer:” to something else, we’d have to update it in two locations. And what if we wanted to initialize 10 variables instead of 2? That would be a lot of redundant code (making our programs longer and harder to understand), and a lot of room for typos to creep in.

// Let’s update this program to use our getValueFromUser function that we developed above. Go to 50
