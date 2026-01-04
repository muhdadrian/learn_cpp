// Local variables

// Variables defined inside the body of a function are called local variables (as opposed to global variables, which we’ll discuss in a future chapter):

int add(int x, int y)
{
    int z{ x + y }; // z is a local variable

    return z;
}

// Function parameters are also generally considered to be local variables, and we will include them as such:

int add(int x, int y) // function parameters x and y are local variables
{
    int z{ x + y };

    return z;
}

// In this lesson, we’ll take a look at some properties of local variables in more detail.
