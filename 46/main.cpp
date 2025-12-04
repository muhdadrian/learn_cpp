// Revisiting main()

// You now have the conceptual tools to understand how the main() function actually works. When the program is executed, the operating system makes a function call to main(). Execution then jumps to the top of main(). The statements in main() are executed sequentially. Finally, main() returns an integer value (usually 0), and your program terminates.

// In C++, there are two special requirements for main():
// 1) main() is required to return an int.
// 2) Explicit function calls to main() are disallowed.

void foo()
{
    main(); // Compile error: main not allowed to be called explicitly
}

void main() // Compile error: main not allowed to have non-int return type
{
    foo();
}

// Key insight: C does allow main() to be called explicitly, so some C++ compilers will allow this for compatibility reasons.

// For now, you should also define your main() function at the bottom of your code file, below other functions, and avoid calling it explicitly.

// For advanced readers:
// It is a common misconception that main is always the first function that executes.
// Global variables are initialized prior to the execution of main. If the initializer for such a variable invokes a function, then that function will execute prior to main.

// Status codes:
// You may be wondering why we return 0 from main(), and when we might return something else.
// The return value from main() is sometimes called a status code (or less commonly, an exit code, or rarely a return code). The status code is used to signal whether your program was successful or not.
// By convention, a status code of 0 means the program ran normally (meaning the program executed and behaved as expected).

// Best practice: Your main function should return the value 0 if the program ran normally.

// A non-zero status code is often used to indicate some kind of failure (and while this works fine on most operating systems, strictly speaking, it’s not guaranteed to be portable).


// For advanced readers:
// The C++ standard only defines the meaning of 3 status codes: 0, EXIT_SUCCESS, and EXIT_FAILURE. 0 and EXIT_SUCCESS both mean the program executed successfully. EXIT_FAILURE means the program did not execute successfully.
// EXIT_SUCCESS and EXIT_FAILURE are preprocessor macros defined in the <cstdlib> header:
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE

int main()
{
    return EXIT_SUCCESS;
}

// If you want to maximize portability, you should only use 0 or EXIT_SUCCESS to indicate a successful termination, or EXIT_FAILURE to indicate an unsuccessful termination.

// The status code is passed back to the operating system. The OS will typically make the status code available to whichever program launched the program returning the status code. This provides a crude mechanism for any program launching another program to determine whether the launched program ran successfully or not.
