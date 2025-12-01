// There are (at least) 3 ways we can go about this. Let’s go from worst to best.

// The not-good solution
#include <iostream>

// worst version
int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	num = num * 2; // double num's value, then assign that value back to num

	std::cout << "Double that number is: " << num << '\n';

	return 0;
}
// In this solution, we use an expression to multiply num by 2, and then assign that value back to num. From that point forward, num will contain our doubled number.
// Why this is a bad solution:
// Before the assignment statement, num contains the user’s input. After the assignment, it contains a different value. That’s confusing.
// We overwrote the user’s input by assigning a new value to the input variable, so if we wanted to extend our program to do something else with that input value later (e.g. triple the user’s input), it’s already been lost.


// The mostly-good solution
#include <iostream>

// less-bad version
int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	int doublenum{ num * 2 }; // define a new variable and initialize it with num * 2
	std::cout << "Double that number is: " << doublenum << '\n'; // then print the value of that variable here

	return 0;
}
// This solution is pretty straightforward to read and understand, and resolves both of the problems encountered in the worst solution.
// The primary downside here is that we’re defining a new variable (which adds complexity) to store a value we only use once. We can do better.


// The preferred solution
#include <iostream>

// preferred version
int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	std::cout << "Double that number is: " <<  num * 2 << '\n'; // use an expression to multiply num * 2 at the point where we are going to print it

	return 0;
}
// This is the preferred solution of the bunch. When std::cout executes, the expression num * 2 will get evaluated, and the result will be double num‘s value. That value will get printed. The value in num itself will not be altered, so we can use it again later if we wish.