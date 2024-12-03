// Objective: Practice string operations.

/*
String manipulation is a fundamental concept in programming. It includes tasks like string comparison, concatenation, extraction, transformation, and searching. In C++, strings are often handled using the `string` class from the Standard Library, which provides various built-in functions to perform operations on strings.

Here are some common string operations that we can practice:

1. String Input/Output
2. String Length
3. String Concatenation
4. String Comparison
5. Substring Extraction
6. String Transformation (e.g., converting to uppercase/lowercase)
7. Finding Substrings
8. Reversing a String


 Explanation of the Code:

1. String Input and Output:
   - `getline(cin, str1)` is used to take a string input from the user (including spaces).
   - We then output the string using `cout`.

2. String Length:
   - We use `str1.length()` to find the length of the string.

3. String Concatenation:
   - We concatenate `str1` and `str2` using the `+` operator and store the result in `concatenated`.

4. String Comparison:
   - We compare two strings using the equality operator (`==`) to check if they are identical.

5. Substring Extraction:
   - `str1.substr(0, 5)` extracts the first 5 characters from `str1`.

6. String Transformation (to Uppercase):
   - `transform()` is used to convert all characters in the string to uppercase. It takes a range of characters and applies the given operation (in this case, `::toupper`) to each character.

7. Finding a Substring:
   - The `find()` function is used to find the position of a substring within a string. If found, it returns the index of the first occurrence; otherwise, it returns `string::npos`.

8. Reversing a String:
   - `reverse()` is used to reverse the string in-place.

 Example Output:
Enter a string: C++ is awesome!
You entered: C++ is awesome!
Length of the string: 16
Enter another string: C++ programming is fun!
Concatenated string: C++ is awesome! C++ programming is fun!
The strings are not equal.
Substring (first 5 characters): C++ i
String in uppercase: C++ IS AWESOME!
'C++' found at position 0
Reversed string: !emosewa si ++C

Key Concepts:

1. String Manipulation: The program demonstrates basic operations like input, length calculation, and manipulation of strings.
2. Built-in Functions: Functions like `find()`, `substr()`, and `transform()` are part of C++'s `string` class, making string operations easy and efficient.
3. Case Insensitivity: The transformation to uppercase ensures case-insensitive operations.
4. Reversing a String: The `reverse()` function is used to reverse the string, a common operation in algorithms.

Practice Exercises:

1. Palindrome Check: Write a program that takes a string as input and checks if it is a palindrome.
2. Count Vowels and Consonants: Write a program to count the number of vowels and consonants in a string.
3. Word Count: Write a program that counts how many words are in a given string.
4. Character Frequency: Write a program that calculates the frequency of each character in a string.
*/