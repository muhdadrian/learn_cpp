// The function author can decide what the return value means

// The meaning of the value returned by a function is determined by the function’s author. Some functions use return values as status codes, to indicate whether they succeeded or failed. Other functions return a calculated or selected value. Other functions return nothing (we’ll see examples of these in the next lesson).

// Because of the wide variety of possibilities here, it’s a good idea to document your function with a comment indicating what the return values mean. For example:

// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}
