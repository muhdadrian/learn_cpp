// 1.3 Introduction to objects and variables

/*
Data and values:
- majority of instructions in a program are statements.
- functions are groups of statements that execute sequentially.
- the statements inside the function perform actions that generate result the program was designed to produce 
*/

/*
How do programs actually produce results?
- they do so by manipulating (reading, changing and writing) data.
- in computing, data is any information that can be moved, processed, or stored by a computer.
*/

/*
Key Insight:
- programs are collections of instructions that manipulate data to produce a desired result.
- in context of a computer program:
i) code is the program itself.
ii) data is the information that the program works with to produce a result. 
*/

/*
Key Insight:
- values placed in single-quotes are interpreted by the compiler as character values.
- values placed in double-quotes are interpreted by the compiler as text values.
- numeric values are not quoted.
*/

// values that are placed directly into the source code are called literals. 

#include <iostream>	// for std::cout

int main()
{
	std::cout << 5;		 	// print the literal number '5'
	std::cout << -6.7;	 	// print the literal number '-6.7'
	std::cout << 'H';	 	// print the literal character 'H'
	std::cout << "Hello";	// print the literal text 'Hello'

	return 0;
}

/*
Literals are the easiest way to provide values for your program, but they have some shortcomings. Literals are read-only values, so their values can't be modified. Thus, if we want to store data in memory, we need some other way to do this. 
*/