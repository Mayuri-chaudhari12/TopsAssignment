//Objective: Understand the basic structure of a C++ program, including #include,main(), and cout.

/*

- Preprocessor Directives like `#include`
- The `main()` function where the program execution starts
- The `cout` object for outputting data

Let's go through each of these concepts with examples to understand how they come together.

 1. Preprocessor Directives (`#include`)

In C++, preprocessor directives are instructions that are processed by the compiler before the actual compilation of the program. The most common preprocessor directive is `#include`, which is used to include libraries or header files.

Example: `include`
#include <iostream>

- `#include` tells the compiler to include the contents of a specific file before compiling the program. 
- In the case of `#include <iostream>`, it includes the **input/output stream library** that allows us to use `cout` for displaying output and `cin` for receiving input.

Explanation:
- `<iostream>` is the header file that provides functions for input and output, such as `cout` (output) and `cin` (input).
  
Without including this file, you wouldn't be able to use `cout` or other standard input/output operations.

2. The `main()` Function

Every C++ program must have a **`main()` function**. This is where the program execution begins. Without a `main()` function, the program would not run. The `main()` function is special because it tells the program where to start and ends once all statements in `main()` have been executed.

Example: `main()` Function
#include <iostream>
using namespace std;

int main() {
    // Program code goes here
    return 0;
}

- `int main()`: The program execution starts at the `main()` function. The `int` signifies that the function will return an integer value (in this case, `0`).
- `return 0;`: This statement indicates the successful termination of the program. A return value of `0` generally means the program ended without errors. Non-zero values typically indicate errors.


3. Using `cout` to Display Output

The `cout` (character output) object is used to display output on the screen. It's a part of the `iostream` library and is used in conjunction with the `<<` operator to send data to the output stream (typically the console).

- `return 0;`: Indicates that the program finished successfully.
*/
#include <iostream> 

using namespace std; 

int main() {  
    cout << "Hello, World!"<<endl;  

}
