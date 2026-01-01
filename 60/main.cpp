 // Introduction to function parameters and arguments

 // In the previous lesson, we learned that we could have a function return a value back to the function’s caller. We used that to create a modular getValueFromUser function that we used in this program:

 #include <iostream>

 int getValueFromUser()
 {
  	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
 }

 int main()
 {
	int num { getValueFromUser() };

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
 }

 // However, what if we wanted to put the output line into its own function as well? You might try something like this at folder 61:
