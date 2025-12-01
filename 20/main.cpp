// the name of a variable (or function, type, or other kind of item) is called an identifier.
// The identifier can not be a keyword. Keywords are reserved.
// The identifier can only be composed of letters (lower or upper case), numbers, and the underscore character. That means the name can not contain symbols (except the underscore) nor whitespace (spaces or tabs).
// The identifier must begin with a letter (lower or upper case) or an underscore. It can not start with a number.
// C++ is case sensitive, and thus distinguishes between lower and upper case letters. nvalue is different than nValue is different than NVALUE.

// It is conventional in C++ that variable names should begin with a lowercase letter:
int value; // conventional

int Value; // unconventional (should start with lower case letter)
int VALUE; // unconventional (should start with lower case letter and be in all lower case)
int VaLuE; // unconventional (see your psychiatrist) ;)

// If the variable or function name is multi-word, there are two common conventions: words separated by underscores (sometimes called snake_case), or intercapped (sometimes called camelCase, since the capital letters stick up like the humps on a camel).
int my_variable_name;   // conventional (separated by underscores/snake_case)
int my_function_name(); // conventional (separated by underscores/snake_case)

int myVariableName;     // conventional (intercapped/camelCase)
int myFunctionName();   // conventional (intercapped/camelCase)

int my variable name;   // invalid (whitespace not allowed)
int my function name(); // invalid (whitespace not allowed)

int MyVariableName;     // unconventional (should start with lower case letter)
int MyFunctionName();   // unconventional (should start with lower case letter)

// Avoid naming your identifiers starting with an underscore. Although syntactically legal, these names are typically reserved for OS, library, and/or compiler use.

// An identifier that exists for only a few statements (e.g. in the body of a short function) can have a shorter name.
// An identifier that is accessible from anywhere might benefit from a longer name.
// An identifier that represents a non-specific number (e.g. anything the user provides) can have a shorter name.
// An identifier that represents a specific value (e.g. the length of an inseam in millimeters) should have a longer name.

// For variable declarations, it can be useful to use a comment to describe what a variable is going to be used for, or to explain anything else that might not be obvious. 
// a count of the number of chars in a piece of text, including whitespace and punctuation
int numChars {};