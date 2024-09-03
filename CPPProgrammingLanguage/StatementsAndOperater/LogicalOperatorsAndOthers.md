# Logical operators in C++

- and: &&
- or: ||
- not: !

# Compund Assignment Operators

- +=, -=, \*=, /=, %=
- &=, |=, ^=, <<=, >>=

```cpp
// &= is the bitwise AND assignment operator
int x {10};
int y {5};
x &= y; // x = x & y

// |= is the bitwise OR assignment operator
int x {10};
int y {5};
x |= y; // x = x | y

// ^= is the bitwise XOR assignment operator
int x {10};
int y {5};
x ^= y; // x = x ^ y

// <<= is the left shift assignment operator
int x {10};
int y {2};
x <<= y; // x = x << y

// >>= is the right shift assignment operator
int x {10};
int y {2};
x >>= y; // x = x >> y
```

# Operator Precedence and Associativity

- **Precedence**: The order in which the compiler evaluates operators in an expression.
