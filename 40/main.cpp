#include <iostream>

void foo() // no longer inside of main()
{
    std::cout << "foo!\n";
}

int main()
{
    foo();

    return 0;
}

// Nomenclature: “foo” is a meaningless word that is often used as a placeholder name for a function or variable when the name is unimportant to the demonstration of some concept. Such words are called metasyntactic variables (though in common language they’re often called “placeholder names” since nobody can remember the term “metasyntactic variable”). Other common metasyntactic variables in C++ include “bar”, “baz”, and 3-letter words that end in “oo”, such as “goo”, “moo”, and “boo”).
