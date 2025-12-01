// Basic formatting

// Our basic rule of thumb is that the best styles are the ones that produce the most readable code, and provide the most consistency.

// Here are our recommendations for basic formatting:

// 1) It’s fine to use either tabs or spaces for indentation. We recommend you set your tabs to 4 spaces worth of indentation. Some IDEs default to 3 spaces of indentation, which is fine too.

// 2) There are two conventional styles for function braces.
// Many developers prefer putting the opening curly brace on the same line as the statement:
int main() {
    // statements here
}

// The justification for this is that it reduces the amount of vertical whitespace

// in this tutorial series, we’ll use the common alternative, where the opening brace appears on its own line:
int main()
{
    // statements here
}
// This enhances readability, and is less error prone since your brace pairs should always be indented at the same level. If you get a compiler error due to a brace mismatch, it’s very easy to see where.

// 3) Each statement within curly braces should start one tab in from the opening brace of the function it belongs to. For example:
int main()
{
    std::cout << "Hello world!\n"; // tabbed in one tab (4 spaces)
    std::cout << "Nice to meet you.\n"; // tabbed in one tab (4 spaces)
}

// 4) Lines should not be too long. Typically, 80 characters has been the de facto standard for the maximum length a line should be. If a line is going to be longer, it should be split (at a reasonable spot) into multiple lines. This can be done by indenting each subsequent line with an extra tab, or if the lines are similar, by aligning it with the line above (whichever is easier to read).
int main()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";
}
// This makes your lines easier to read. 

// Best practice: Consider keeping your lines to 80 chars or less in length.

// Tip: Many editors have a built-in feature (or plugin/extension) that will show a line (called a “column guide”) at a given column (e.g. at 80 characters), so you can easily see when your lines are getting too long. To see if your editor supports this, do a search on your editor’s name + “Column guide”.

// 5) If a long line is split with an operator (eg. << or +), the operator should be placed at the beginning of the next line, not the end of the current line
std::cout << 3 + 4
    + 5 + 6
    * 7 * 8;
// This helps make it clearer that subsequent lines are continuations of the previous lines, and allows you to align the operators on the left, which makes for easier reading.

// 6) Use whitespace to make your code easier to read by aligning values or comments or adding spacing between blocks of code.

// Harder to read:
cost = 57;
pricePerItem = 24;
value = 5;
numberOfItems = 17;

// Easier to read:
cost          = 57;
pricePerItem  = 24;
value         = 5;
numberOfItems = 17;

// Harder to read:
std::cout << "Hello world!\n"; // cout lives in the iostream library
std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read
std::cout << "Yeah!\n"; // especially when lines are different lengths

// Easier to read:
std::cout << "Hello world!\n";                  // cout lives in the iostream library
std::cout << "It is very nice to meet you!\n";  // these comments are easier to read
std::cout << "Yeah!\n";                         // especially when all lined up

// Harder to read:
// cout lives in the iostream library
std::cout << "Hello world!\n";
// these comments make the code hard to read
std::cout << "It is very nice to meet you!\n";
// especially when all bunched together
std::cout << "Yeah!\n";

// Easier to read:
// cout lives in the iostream library
std::cout << "Hello world!\n";

// these comments are easier to read
std::cout << "It is very nice to meet you!\n";

// when separated by whitespace
std::cout << "Yeah!\n";

// For Visual Studio users
// In Visual Studio, the automatic formatting options can be found under Edit > Advanced > Format Document and Edit > Advanced > Format Selection.

// For Code::Blocks users
// In Code::Blocks, the automatic formatting options can be found under Right mouse click > Format use AStyle.

// For easier access, we recommend adding a keyboard shortcut to auto-format the active file.

// There are also external tools that can be used to automatically format code. clang-format is a popular one.

// Best practice: Using the automatic formatting feature is highly recommended to keep your code’s formatting style consistent.

// Some commonly referenced C++ style guides include:
// C++ Core Guidelines, maintained by Bjarne Stroustrup and Herb Sutter.
// Google.
// LLVM
// GCC/GNU
// We generally favor the C++ Core Guidelines, as they are up to date and widely applicable.
