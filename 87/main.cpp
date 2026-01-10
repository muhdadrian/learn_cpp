// The one definition rule (ODR)

// The one definition rule (or ODR for short) is a well-known rule in C++. The ODR has three parts:

// 1) Within a file, each function, variable, type, or template in a given scope can only have one definition. Definitions occurring in different scopes (e.g. local variables defined inside different functions, or functions defined inside different namespaces) do not violate this rule.

// 2)Within a program, each function or variable in a given scope can only have one definition. This rule exists because programs can have more than one file (we’ll cover this in the next lesson). Functions and variables not visible to the linker are excluded from this rule (discussed further in lesson 7.6 -- Internal linkage).

// 3) Types, templates, inline functions, and inline variables are allowed to have duplicate definitions in different files, so long as each definition is identical. We haven’t covered what most of these things are yet, so don’t worry about this for now -- we’ll bring it back up when it’s relevant.

// Violating part 1 of the ODR will cause the compiler to issue a redefinition error. Violating ODR part 2 will cause the linker to issue a redefinition error. Violating ODR part 3 will cause undefined behavior.

// Here’s an example of a violation of part 1:
int add(int x, int y)
{
     return x + y;
}

int add(int x, int y) // violation of ODR, we've already defined function add(int, int)
{
     return x + y;
}

int main()
{
    int x{};
    int x{ 5 }; // violation of ODR, we've already defined x
}

// In this example, function add(int, int) is defined twice (in the global scope), and local variable int x is defined twice (in the scope of main()). The compiler thus issues compile errors:

// However, it is not a violation of ODR part 1 for main() to have a local variable defined as int x and add() to also have a function parameter defined as int x. These definitions occur in different scopes (in the scope of each respective function), so they are considered to be separate definitions for two distinct objects, not a definition and redefinition of the same object.

// For advanced readers: Functions that share an identifier but have different sets of parameters are also considered to be distinct functions, so such definitions do not violate the ODR.
