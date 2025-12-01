// Operators
// In mathematics, an operation is a process involving zero or more input values (called operands) that produces a new value (called an output value). The specific operation to be performed is denoted by a symbol called an operator.
// For example, as children we all learn that 2 + 3 equals 5. In this case, the literals 2 and 3 are the operands, and the symbol + is the operator that tells us to apply mathematical addition on the operands to produce the new value 5.

// In C++, operations work as you’d expect. For example:
#include <iostream>

int main()
{
    std::cout << 1 + 2 << '\n';

    return 0;
}
// In this program, the literals 1 and 2 are operands to the plus (+) operator, which produces the output value 3. This output value is then printed to the console. In C++, the output value of an operation is often called a return value.

// You are likely already quite familiar with standard arithmetic operators from common usage in mathematics, including addition (+), subtraction (-), multiplication (*), and division (/). In C++, assignment (=) is an operator as well, as are insertion (<<), extraction (>>), and equality (==). While most operators have symbols for names (e.g. +, or ==), there are also a number of operators that are keywords (e.g. new, delete, and throw).

// Author’s note:
// For reasons that will become clear when we discuss operators in more detail, for operators that are symbols, it is common to append the operator’s symbol to the word operator.
// For example, the plus operator would be written operator+, and the extraction operator would be written operator>>.

// The number of operands that an operator takes as input is called the operator’s arity. Few people know what this word means, so don’t drop it in a conversation and expect anybody to have any idea what you’re talking about. Operators in C++ come in four different arities:
// Unary operators act on one operand. An example of a unary operator is the - operator. For example, given -5, operator- takes literal operand 5 and flips its sign to produce new output value -5.

// Binary operators act on two operands (often called left and right, as the left operand appears on the left side of the operator, and the right operand appears on the right side of the operator). An example of a binary operator is the + operator. For example, given 3 + 4, operator+ takes the left operand 3 and the right operand 4 and applies mathematical addition to produce new output value 7. The insertion (<<) and extraction (>>) operators are binary operators, taking std::cout or std::cin on the left side, and the value to output or variable to input to on the right side.

// Ternary operators act on three operands. There is only one of these in C++ (the conditional operator), which we’ll cover later.

// Nullary operators act on zero operands. There is also only one of these in C++ (the throw operator), which we’ll also cover later.

// Note that some operators have more than one meaning depending on how they are used. For example, operator- has two contexts. It can be used in unary form to invert a number’s sign (e.g. to convert 5 to -5, or vice versa), or it can be used in binary form to do subtraction (e.g. 4 - 3).