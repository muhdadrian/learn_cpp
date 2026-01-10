// Other types of forward declarations

// Forward declarations are most often used with functions. However, forward declarations can also be used with other identifiers in C++, such as variables and types. Variables and types have a different syntax for forward declaration, so we’ll cover these in future lessons.

/*
Declarations vs. definitions

In C++, you’ll frequently hear the words “declaration” and “definition” used, and often interchangeably. What do they mean? You now have enough fundamental knowledge to understand the difference between the two.

A declaration tells the compiler about the existence of an identifier and its associated type information. Here are some examples of declarations:
 */
 int add(int x, int y); // tells the compiler about a function named "add" that takes two int parameters and returns an int.  No body!
 int x;                 // tells the compiler about an integer variable named x

// A definition is a declaration that actually implements (for functions and types) or instantiates (for variables) the identifier.

// Here are some examples of definitions:
// because this function has a body, it is an implementation of function add()
int add(int x, int y)
{
    int z{ x + y };   // instantiates variable z

    return z;
}

int x;                // instantiates variable x

// In C++, all definitions are declarations. Therefore int x; is both a definition and a declaration.

// Conversely, not all declarations are definitions. Declarations that aren’t definitions are called pure declarations. Types of pure declarations include forward declarations for function, variables, and types.

// Nomenclature: In common language, the term “declaration” is typically used to mean “a pure declaration”, and “definition” is used to mean “a definition that also serves as a declaration”. Thus, we’d typically call int x; a definition, even though it is both a definition and a declaration.

// When the compiler encounters an identifier, it will check to ensure use of that identifier is valid (e.g. that the identifier is in scope, that it is used in a syntactically valid manner, etc…).

// In most cases, a declaration is sufficient to allow the compiler to ensure an identifier is being used properly. For example, when the compiler encounters function call add(5, 6), if it has already seen the declaration for add(int, int), then it can validate that add is actually a function that takes two int parameters. It does not need to have actually seen the definition for function add (which may exist in some other file).

// However, there are a few cases where the compiler must be able to see a full definition in order to use an identifier (such as for template definitions and type definitions, both of which we will discuss in future lessons).

// Look at the table (table.png)
