// Returning a value from a void function is a compile error

// Trying to return a value from a non-value returning function will result in a compilation error:

void printHi() // This function is non-value returning
{
    std::cout << "In printHi()" << '\n';

    return 5; // compile error: we're trying to return a value
}
