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
    int x{ getValueFromUser() }; // first call to getValueFromUser
    int y{ getValueFromUser() }; // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}

// This program produces the following output:
// Enter an integer: 5
// Enter an integer: 7
// 5 + 7 = 12

// In this program, we call getValueFromUser twice, once to initialize variable x, and once to initialize variable y. That saves us from duplicating the code to get user input, and reduces the odds of making a mistake. Once we know getValueFromUser works, we can call it as many times as we desire.

// This is the essence of modular programming: the ability to write a function, test it, ensure that it works, and then know that we can reuse it as many times as we want and it will continue to work (so long as we don’t modify the function -- at which point we’ll have to retest it).

/*
Best practice

Follow DRY: “Don’t repeat yourself”. If you need to do something more than once, consider how to modify your code to remove as much redundancy as possible. Variables can be used to store the results of calculations that need to be used more than once (so we don’t have to repeat the calculation). Functions can be used to define a sequence of statements we want to execute more than once. And loops (which we’ll cover in a later chapter) can be used to execute a statement more than once.

Like all best practices, DRY is meant to be a guideline, not an absolute. Reader Yariv has noted that DRY can harm overall comprehension when code is broken into pieces that are too small.
 */

 /*
  As an aside…

  The (snarky) opposite of DRY is WET (“Write everything twice”).
  */

  // Conclusion:
  // Return values provide a way for functions to return a single value back to the function’s caller.
  // Functions provide a way to minimize redundancy in our programs.
