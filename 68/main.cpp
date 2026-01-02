// Unreferenced parameters and unnamed parameters

// In certain cases, you will encounter functions that have parameters that are not used in the body of the function. These are called unreferenced parameters.

// As a trivial example:

void doSomething(int count) // warning: unreferenced parameter count
{
    // This function used to do something with count but it is not used any longer
}

int main()
{
    doSomething(4);

    return 0;
}

// Just like with unused local variables, your compiler will probably warn that variable count has been defined but not used.

// In a function definition, the name of a function parameter is optional. Therefore, in cases where a function parameter needs to exist but is not used in the body of the function, you can simply omit the name. A parameter without a name is called an unnamed parameter:
void doSomething(int) // ok: unnamed parameter will not generate warning
{
}

// The Google C++ style guide recommends using a comment to document what the unnamed parameter was:
void doSomething(int /*count*/)
{
}

/*
 Author’s note

 You’re probably wondering why we’d write a function that has a parameter whose value isn’t used. This happens most often in cases similar to the following:

 Let’s say we have a function with a single parameter. Later, the function is updated in some way, and the value of the parameter is no longer needed. If the now-unused function parameter were simply removed, then every existing call to the function would break (because the function call would be supplying more arguments than the function could accept). This would require us to find every call to the function and remove the unneeded argument. This might be a lot of work (and require a lot of retesting). It also might not even be possible (in cases where we did not control all of the code calling the function). So instead, we might leave the parameter as it is, and just have it do nothing.
 */

 /*
 Author’s note

 If unnamed parameters still don’t make sense to you yet, don’t worry. We’ll encounter them again in future lessons, when we have more context to explain when they are useful.
 */

 // Best practice: When a function parameter exists but is not used in the body of the function, do not give it a name. You can optionally put a name inside a comment.

 // Conclusion: Function parameters and return values are the key mechanisms by which functions can be written in a reusable way, as it allows us to write functions that can perform tasks and return retrieved or calculated results back to the caller without knowing what the specific inputs or outputs are ahead of time.
