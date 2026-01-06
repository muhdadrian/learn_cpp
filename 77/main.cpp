// As an aside…

// Due to the limitations of older, more primitive compilers, the C language used to require all local variables be defined at the top of the function. The equivalent C++ program using that style would look like this:

#include <iostream>

int main()
{
	int x{}, y{}, sum{}; // how are these used?

	std::cout << "Enter an integer: ";
	std::cin >> x;

	std::cout << "Enter another integer: ";
	std::cin >> y;

	sum = x + y;
	std::cout << "The sum is: " << sum << '\n';

	return 0;
}

/*
This style is suboptimal for several reasons:

The intended use of these variables isn’t apparent at the point of definition. You have to scan through the entire function to determine where and how each variable is used.
The intended initialization value may not be available at the top of the function (e.g. we can’t initialize sum to its intended value because we don’t know the value of x and y yet).
There may be many lines between a variable’s initializer and its first use. If we don’t remember what value it was initialized with, we will have to scroll back to the top of the function, which is distracting.
This restriction was lifted in the C99 language standard.
 */
