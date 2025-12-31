// A value-returning function that does not return a value will produce undefined behavior

// A function that returns a value is called a value-returning function. A function is value-returning if the return type is anything other than void.

// A value-returning function must return a value of that type (using a return statement), otherwise undefined behavior will result.

// Here’s an example of a function that produces undefined behavior:

#include <iostream>

int getValueFromUserUB() // this function returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// note: no return statement
}

int main()
{
	int num { getValueFromUserUB() }; // initialize num with the return value of getValueFromUserUB()

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

// A modern compiler should generate a warning because getValueFromUserUB is defined as returning an int but no return statement is provided. Running such a program would produce undefined behavior, because getValueFromUserUB() is a value-returning function that does not return a value.

// In most cases, compilers will detect if you’ve forgotten to return a value. However, in some complicated cases, the compiler may not be able to properly determine whether your function returns a value or not in all cases, so you should not rely on this.

// Best practice: Make sure your functions with non-void return types return a value in all cases. Failure to return a value from a value-returning function will cause undefined behavior.

/*
Function main will implicitly return 0 if no return statement is provided

The only exception to the rule that a value-returning function must return a value via a return statement is for function main(). The function main() will implicitly return the value 0 if no return statement is provided. That said, it is best practice to explicitly return a value from main, both to show your intent, and for consistency with other functions (which will exhibit undefined behavior if a return value is not specified).
 */

 /*
 Functions can only return a single value

 A value-returning function can only return a single value back to the caller each time it is called.

 Note that the value provided in a return statement doesn’t need to be literal -- it can be the result of any valid expression, including a variable or even a call to another function that returns a value. In the getValueFromUser() example above, we returned a variable input, which held the number the user input.

 There are various ways to work around the limitation of functions only being able to return a single value, which we’ll cover in future lessons.
  */
