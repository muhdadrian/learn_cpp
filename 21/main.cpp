// Whitespace and basic formatting

// a variable declaration must be whitespace separated:
int x; // int and x must be whitespace separated

// As another example, a function’s return type and name must be whitespace separated:
int main(); // int and main must be whitespace separated

// When whitespace is required as a separator, the compiler doesn’t care how much whitespace is used, as long as some exists.
// The following variable definitions are all valid:
int x;
int                y;
            int
z;

// doing something like this will get you in trouble:
std::cout << "Hello world!"; // This is part of the comment and
this is not part of the comment

// Preprocessor directives (e.g. #include <iostream>) must be placed on separate lines:
#include <iostream>
#include <string>


// Inside quoted text, the amount of whitespace is taken literally.
std::cout << "Hello world!";
// is different than:
std::cout << "Hello          world!";

// Newlines are not allowed in quoted text:
std::cout << "Hello
     world!"; // Not allowed!

// Quoted text separated by nothing but whitespace (spaces, tabs, or newlines) will be concatenated:
std::cout << "Hello "
     "world!"; // prints "Hello world!"


// Using whitespace to format code
// we can use whitespace wherever we like to format our code in order to make it easier to read.
// the following is pretty hard to read:
#include <iostream>
int main(){std::cout<<"Hello world";return 0;}

// The following is better (but still pretty dense):
#include <iostream>
int main() {
std::cout << "Hello world";
return 0;
}

// And the following is even better:
#include <iostream>

int main()
{
    std::cout << "Hello world";

    return 0;
}

// Statements may be split over multiple lines if desired:
#include <iostream>

int main()
{
    std::cout
        << "Hello world"; // works fine
    return 0;
}
// This can be useful for particularly long statements.