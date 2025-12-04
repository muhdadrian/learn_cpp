// This program doesn't work
#include <iostream>

void getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
}

int main()
{
	getValueFromUser(); // Ask user for input

	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

// While this program is a good attempt at a solution, it doesn’t quite work.

// When function getValueFromUser is called, the user is asked to enter an integer as expected. But the value they enter is lost when getValueFromUser terminates and control returns to main. Variable num never gets initialized with the value the user entered, and so the program always prints the answer 0.

// What we’re missing is some way for getValueFromUser to return the value the user entered back to main so that main can make use of that data.


// Return values
// When you write a user-defined function, you get to determine whether your function will return a value back to the caller or not. To return a value back to the caller, two things are needed:
// First, your function has to indicate what type of value will be returned. This is done by setting the function’s return type, which is the type that is defined before the function’s name. In the example above, function getValueFromUser has a return type of void (meaning no value will be returned to the caller), and function main has a return type of int (meaning a value of type int will be returned to the caller). Note that this doesn’t determine what specific value is returned -- it only determines what type of value will be returned.
// Second, inside the function that will return a value, we use a return statement to indicate the specific value being returned to the caller. The return statement consists of the return keyword, followed by an expression (sometimes called the return expression), ending with a semicolon.

// When the return statement is executed:
// 1) The return expression is evaluated to produce a value.
// 2) The value produced by the return expression is copied back to the caller. This copy is called the return value of the function.
// 3) The function exits, and control returns to the caller.

// The process of returning a copied value back to the caller is named return by value.

// Nomenclature: The return expression produces the value to be returned. The return value is a copy of that value.
