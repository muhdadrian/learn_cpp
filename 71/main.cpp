// Local variable lifetime

// Function parameters are created and initialized when the function is entered, and variables within the function body are created and initialized at the point of definition. For example:

int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y };   // z created and initialized here

    return z;
}

// The natural follow-up question is, “so when is an instantiated variable destroyed?”. Local variables are destroyed in the opposite order of creation at the end of the set of curly braces in which it is defined (or for a function parameter, at the end of the function).

int add(int x, int y)
{
    int z{ x + y };

    return z;
} // z, y, and x destroyed here

// Much like a person’s lifetime is defined to be the time between their birth and death, an object’s lifetime is defined to be the time between its creation and destruction. Note that variable creation and destruction happen when the program is running (called runtime), not at compile time. Therefore, lifetime is a runtime property.

/*
For advanced readers:

The above rules around creation, initialization, and destruction are guarantees. That is, objects must be created and initialized no later than the point of definition, and destroyed no earlier than the end of the set of the curly braces in which they are defined (or, for function parameters, at the end of the function).

In actuality, the C++ specification gives compilers a lot of flexibility to determine when local variables are created and destroyed. Objects may be created earlier, or destroyed later for optimization purposes. Most often, local variables are created when the function is entered, and destroyed in the opposite order of creation when the function is exited. We’ll discuss this in more detail in a future lesson, when we talk about the call stack.
 */
