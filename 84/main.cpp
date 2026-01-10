// Option 2: Use a forward declaration

// We can also fix this by using a forward declaration.

// A forward declaration allows us to tell the compiler about the existence of an identifier before actually defining the identifier.

// In the case of functions, this allows us to tell the compiler about the existence of a function before we define the function’s body. This way, when the compiler encounters a call to the function, it’ll understand that we’re making a function call, and can check to ensure we’re calling the function correctly, even if it doesn’t yet know how or where the function is defined.

// To write a forward declaration for a function, we use a function declaration statement (also called a function prototype). The function declaration consists of the function’s return type, name, and parameter types, terminated with a semicolon. The names of the parameters can be optionally included. The function body is not included in the declaration.

// Here’s a function declaration for the add function:
// int add(int x, int y); // function declaration includes return type, name, parameters, and semicolon.  No function body!

// Now, here’s our original program that didn’t compile, using a function declaration as a forward declaration for function add:

#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

// Now when the compiler reaches the call to add in main, it will know what add looks like (a function that takes two integer parameters and returns an integer), and it won’t complain.

// It is worth noting that function declarations do not need to specify the names of the parameters (as they are not considered to be part of the function declaration). In the above code, you can also forward declare your function like this:
// int add(int, int); // valid function declaration

// However, we prefer to name our parameters (using the same names as the actual function). This allows you to understand what the function parameters are just by looking at the declaration. For example, if you were to see the declaration void doSomething(int, int, int), you may think you remember what each of the parameters represent, but you may also get it wrong.

// Also many automated documentation generation tools will generate documentation from the content of header files, which is where declarations are often placed. We discuss header files and declarations later.

//Best practice: Keep the parameter names in your function declarations.

// Tip: You can easily create function declarations by copy/pasting your function’s header and adding a semicolon.

/*
Why forward declarations?

You may be wondering why we would use a forward declaration if we could just reorder the functions to make our programs work.

Most often, forward declarations are used to tell the compiler about the existence of some function that has been defined in a different code file. Reordering isn’t possible in this scenario because the caller and the callee are in completely different files! We’ll discuss this in more detail in the next lesson.

Forward declarations can also be used to define our functions in an order-agnostic manner. This allows us to define functions in whatever order maximizes organization (e.g. by clustering related functions together) or reader understanding.

Less often, there are times when we have two functions that call each other. Reordering isn’t possible in this case either, as there is no way to reorder the functions such that each is before the other. Forward declarations give us a way to resolve such circular dependencies.
*/
