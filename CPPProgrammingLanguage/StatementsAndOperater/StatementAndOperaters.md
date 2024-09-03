# Statements and Operators in C++

- Expressions
- Statements and blocks of statements
- Operators
  - Assignment
  - Arithmetic
  - Increment and Decrement
  - Equality and Relational
  - Logical
  - Compound Assignment
  - Precedence and Associativity

## Expressions and Statements

- **Expression**: A combination of variables, constants, and operators that the compiler evaluates to produce a single value.
- **Statement**: A complete line of code that performs some action, such as declaring a variable or assigning a value to a variable.

```cpp
int x {100}; // statement
int y {200}; // statement

x + y; // expression
```

## Operators

- **Operators**: Symbols that tell the compiler to perform specific mathematical or logical operations.
- unary, binary, ternary operators
- assignment, arithmetic, increment and decrement, equality and relational, logical, compound assignment, bitwise, member access, and other operators.
- In C++, we have lvlaue and rvalue. lvalue is an object that occupies some identifiable location in memory (i.e., has an address). rvalue is a temporary value that does not persist beyond the expression that uses it.

```cpp
int x {100}; // assignment operator
int y {200}; // assignment operator

// a handy way to assign the same value to multiple variables
x = y = 100; // compouqnd assignment operator (right to left)

cout << "x: " << x << " y: " << y << endl;

// print the address of the variable
cout << "Address of x: " << &x << endl;
cout << "Address of y: " << &y << endl;


x = "Lyle"; // error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]

const int z {300}; // constant variable
z = 400; // error: assignment of read-only variable ‘z’

100 = x; // error: lvalue required as left operand of assignment

// increment and decrement operators
int count {10};
int result {0};
result = ++count + 5; // pre-increment

// increment and decrement operators
int count {10};
int result {0};
result = count++ + 5; // post-increment
```

## Mixed Type Expressions

- C++ operantions occur on same type of operands.
- if operands are of different types, C++ will convert one of the operands to the type of the other operand.
- **Implicit Type Conversion**: C++ automatically converts one type to another when necessary. but if it can't convert, it will throw an error.

### Converting Between Types

- based on the size of the value the type can hold.
- Promotion: conversion to a higher type (Used in mathematical operations)
- Demotion: conversion to a lower type (Used in assignment to lower type)

```cpp
 2 * 2.5 // 2 is promoted to double (2.0)
 int x {10};
 x = 100.5; // 100.5 is demoted to int (100) and assigned to x and there is no error. this is called implicit type conversion or truncation.
```

- **Type Casting**: Explicitly converting one type to another.

we can use `static_cast<type>(value)` to convert one type to another. This is the most recommended way to convert types. It is safer and more explicit.

```cpp
int total {100};
int count {8};
double average {0.0};

average = total / count; // 100 / 8 = 12.5

cout << average << endl; // 12

average = static_cast<double>(total) / count; // 100.0 / 8 = 12.5, here total is converted to double and then divided by count. count is implicitly converted to double.
cout << average << endl; // 12.5
```

But we can also use C-style casting `(double)total / count` to convert types. But this is not recommended because it is not safe and can cause errors.
