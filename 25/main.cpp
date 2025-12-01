// Chaining operators

// Operators can be chained together such that the output of one operator can be used as the input for another operator. For example, given the following: 2 * 3 + 4, the multiplication operator goes first, and converts left operand 2 and right operand 3 into return value 6 (which becomes the left operand for the plus operator). Next, the plus operator executes, and converts left operand 6 and right operand 4 into new value 10.

// For now, it’s enough to know that the arithmetic operators execute in the same order as they do in standard mathematics: Parenthesis first, then Exponents, then Multiplication & Division, then Addition & Subtraction. This ordering is sometimes abbreviated PEMDAS, or expanded to the mnemonic “Please Excuse My Dear Aunt Sally”.

// Author’s note: In some countries, PEMDAS is taught as PEDMAS, BEDMAS, BODMAS, or BIDMAS instead.


// Return values and side effects
// Most operators in C++ just use their operands to calculate a return value. For example, -5 produces return value -5 and 2 + 3 produces return value 5. There are a few operators that do not produce return values (such as delete and throw). We’ll cover what these do later.

// Some operators have additional behaviors. An operator (or function) that has some observable effect beyond producing a return value is said to have a side effect. For example, x = 5 has the side effect of assigning value 5 to variable x. The changed value of x is observable (e.g. by printing the value of x) even after the operator has finished executing. std::cout << 5 has the side effect of printing 5 to the console. We can observe the fact that 5 has been printed to the console even after std::cout << 5 has finished executing.


// In common language, the term “side effect” is typically used to mean a secondary (often negative or unexpected) result of some other thing happening (such as taking medicine). For example, a common side effect of taking oral antibiotics is diarrhea. As such, we often think of side effects as things we want to avoid, or things that are incidental to the primary goal.
// In C++, the term “side effect” has a different meaning: it is an observable effect of an operator or function beyond producing a return value.
// Since assignment has the observable effect of changing the value of an object, this is considered a side effect. We use certain operators (e.g. the assignment operator) primarily for their side effects (rather than the return value those operators produce). In such cases, the side effect is both beneficial and predictable (and it is the return value that is often incidental).


// For advanced readers:
// For the operators that we call primarily for their return values (e.g. operator+ or operator*), it’s usually obvious what their return values will be (e.g. the sum or product of the operands).
// For the operators we call primarily for their side effects (e.g. operator= or operator<<), it’s not always obvious what return values they produce (if any). For example, what return value would you expect x = 5 to have?
// Both operator= and operator<< (when used to output values to the console) return their left operand. Thus, x = 5 returns x, and std::cout << 5 returns std::cout. This is done so that these operators can be chained.
// For example, x = y = 5 evaluates as x = (y = 5). First y = 5 assigns 5 to y. This operation then returns y, which can then be assigned to x.
// std::cout << "Hello " << "world!" evaluates as (std::cout << "Hello ") << "world!". This first prints "Hello " to the console. This operation returns std::cout, which can then be used to print "world!" to the console as well.