// Objective: Objective understanding of different types of operators in c++.

/*
In C++, **operators** are symbols or keywords used to perform operations on variables and values. C++ provides a wide variety of operators that can be grouped into several categories based on their functionality. These include:

1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Bitwise Operators
5. Assignment Operators
6. Increment and Decrement Operators
7. Conditional (Ternary) Operator
8. Type-Casting Operators

Each category of operators serves a specific purpose and allows us to perform various operations in C++ programming.

 Types of Operators in C++:

1. Arithmetic Operators
These operators perform mathematical operations on numerical values.

| Operator | Name         | Description                 |
|----------|--------------|-----------------------------|
| `+`      | Addition     | Adds two operands.          |
| `-`      | Subtraction  | Subtracts the second operand from the first. |
| `*`      | Multiplication | Multiplies two operands.    |
| `/`      | Division     | Divides the numerator by the denominator. |
| `%`      | Modulus      | Returns the remainder when one operand is divided by another. |

Example:
int a = 10, b = 5;
cout << "a + b = " << a + b << endl;  // 15
cout << "a - b = " << a - b << endl;  // 5
cout << "a * b = " << a * b << endl;  // 50
cout << "a / b = " << a / b << endl;  // 2
cout << "a % b = " << a % b << endl;  // 0

 2. Relational Operators
These operators are used to compare two values and return a boolean value (`true` or `false`).

| Operator | Name        | Description                             |
|----------|-------------|-----------------------------------------|
| `==`     | Equal to    | Returns `true` if the operands are equal. |
| `!=`     | Not equal to| Returns `true` if the operands are not equal. |
| `>`      | Greater than | Returns `true` if the left operand is greater than the right operand. |
| `<`      | Less than   | Returns `true` if the left operand is less than the right operand. |
| `>=`     | Greater than or equal to | Returns `true` if the left operand is greater than or equal to the right operand. |
| `<=`     | Less than or equal to | Returns `true` if the left operand is less than or equal to the right operand. |

Example:
int a = 10, b = 5;
cout << "a == b: " << (a == b) << endl;  // false (0)
cout << "a != b: " << (a != b) << endl;  // true (1)
cout << "a > b: " << (a > b) << endl;    // true (1)
cout << "a < b: " << (a < b) << endl;    // false (0)


3. Logical Operators
Logical operators are used to perform logical operations, typically on boolean values.

| Operator | Name     | Description                                  |
|----------|----------|----------------------------------------------|
| `&&`     | Logical AND  | Returns `true` if both operands are true.     |
| `||`     | Logical OR   | Returns `true` if at least one operand is true. |
| `!`      | Logical NOT  | Returns `true` if the operand is false, and `false` if the operand is true. |

Example:
bool x = true, y = false;
cout << "x && y: " << (x && y) << endl;  // false (0)
cout << "x || y: " << (x || y) << endl;  // true (1)
cout << "!x: " << (!x) << endl;          // false (0)


4. Bitwise Operators
Bitwise operators are used to perform operations on individual bits of an integer.

| Operator | Name         | Description                         |
|----------|--------------|-------------------------------------|
| `&`      | Bitwise AND  | Performs bitwise AND between two operands. |
| `|`      | Bitwise OR   | Performs bitwise OR between two operands. |
| `^`      | Bitwise XOR  | Performs bitwise XOR between two operands. |
| `~`      | Bitwise NOT  | Performs bitwise NOT (flips all bits). |
| `<<`     | Left shift   | Shifts bits to the left by the specified number of positions. |
| `>>`     | Right shift  | Shifts bits to the right by the specified number of positions. |

Example:
int a = 5, b = 3;  // Binary: a = 0101, b = 0011
cout << "a & b: " << (a & b) << endl;   // 1 (Binary: 0001)
cout << "a | b: " << (a | b) << endl;   // 7 (Binary: 0111)
cout << "a ^ b: " << (a ^ b) << endl;   // 6 (Binary: 0110)
cout << "~a: " << (~a) << endl;         // -6 (bitwise NOT)
cout << "a << 1: " << (a << 1) << endl; // 10 (Binary: 1010)
cout << "a >> 1: " << (a >> 1) << endl; // 2 (Binary: 0010)


5. Assignment Operators
Assignment operators are used to assign values to variables.

| Operator | Name       | Description                             |
|----------|------------|-----------------------------------------|
| `=`      | Assignment | Assigns the value of the right operand to the left operand. |
| `+=`     | Add and assign | Adds the right operand to the left operand and assigns the result to the left operand. |
| `-=`     | Subtract and assign | Subtracts the right operand from the left operand and assigns the result to the left operand. |
| `*=`     | Multiply and assign | Multiplies the left operand by the right operand and assigns the result to the left operand. |
| `/=`     | Divide and assign | Divides the left operand by the right operand and assigns the result to the left operand. |
| `%=`     | Modulus and assign | Takes the modulus of the left operand by the right operand and assigns the result to the left operand. |

Example:
int a = 10;
a += 5;  // a = a + 5
cout << "a += 5: " << a << endl;  // 15
a -= 3;  // a = a - 3
cout << "a -= 3: " << a << endl;  // 12
a *= 2;  // a = a * 2
cout << "a *= 2: " << a << endl;  // 24
a /= 4;  // a = a / 4
cout << "a /= 4: " << a << endl;  // 6

 6. Increment and Decrement Operators
These operators are used to increment or decrement the value of a variable by 1.

| Operator | Name     | Description                             |
|----------|----------|-----------------------------------------|
| `++`     | Increment | Increases the value of the operand by 1. |
| `--`     | Decrement | Decreases the value of the operand by 1. |

Example:
int a = 5;
cout << "a++: " << a++ << endl;  // 5, then a becomes 6
cout << "a: " << a << endl;      // 6
cout << "--a: " << --a << endl;  // 5

7. Conditional (Ternary) Operator
The ternary operator is a shorthand for `if-else` statements.

| Operator | Name           | Description |
|----------|----------------|-------------|
| `? :`    | Ternary        | Takes three operands. Evaluates the condition (if true returns the first operand, otherwise the second operand). |

Example:
int a = 10, b = 5;
cout << "(a > b) ? a : b: " << (a > b ? a : b) << endl;  // 10

 8. Type-Casting Operators
Type casting is used to convert one data type to another.

| Operator   | Name         | Description                                     |
|------------|--------------|-------------------------------------------------|
| `static_cast` | Static cast | Used to convert between related types (e.g., int to float). |
| `dynamic_cast` | Dynamic cast | Used for safe downcasting of pointers in object-oriented programming. |
| `reinterpret_cast` | Reinterpret cast | Used to cast between unrelated types (not recommended for common usage). |
| `const_cast` | Const cast   | Used to add or remove the `const` qualifier.    |

Example:
float f = 10.5;
int i = static_cast<int>(f);  // Convert float to int
cout << "Converted float to int: " << i << endl;  // 10
*/