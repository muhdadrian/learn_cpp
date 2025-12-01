#include <iostream>

int main()
{
    // Here's some math/physics values that we copy-pasted from elsewhere
    double pi { 3.14159 };
    double gravity { 9.8 };
    double phi { 1.61803 };

    std::cout << pi << '\n';  // pi is used
    std::cout << phi << '\n'; // phi is used

    // The compiler will likely complain about gravity being defined but unused

    return 0;
}

/*
 in any program where we don’t use all of these values, the compiler will likely complain about each variable that isn’t actually used. 
 
 In the above example, we could easily just remove the definition of gravity. 
 
 But what if there were 20 or 30 variables instead of 3? And what if we use them in multiple places? 
 
 Going through the list of variables to remove/comment out the unused ones takes time and energy. 
 
 And later if we need one that we’ve previously removed, we’ll have to spend more time and energy to go back and re-add/uncomment it.
*/

// To address such cases, C++17 introduced the [[maybe_unused]] attribute, which allows us to tell the compiler that we’re okay with a variable being unused. The compiler will not generate unused variable warnings for such variables. Go to 7