# C-style Strings in C++

## Sequence of characters

- contiguous in Memory
- implemented as an array of characters
- terminated by a null character `\0`
- referred to as zero-terminated or null-terminated strings\

For example, the string "C++ is fun" is represented as:

```
C++ is fun\0
```

where `\0` is the null character.

### Declaring C-style Strings

```cpp
char my_name[] {"Lyle"};
/* my_name is an array of characters, {L, y, l, e, \0} */

my_name[4] = 'a'; // this will not occur any error, but has potential issues
```

- Undefined Behavior: By overwriting the null terminator, the behavior of any function relying on the string being null-terminated (like cout for printing) is undefined. This could mean printing extra unintended characters, accessing out-of-bounds memory, or even causing a program crash.
- Memory Safety: Such modifications risk buffer overflows and related security vulnerabilities, especially if the new data accidentally extends beyond the allocated memory for the array.

```cpp
char my_name[8] {"Lyle"};
/* my_name is an array of characters, {L, y, l, e, \0, \0, \0, \0} */

my_name[4] = 'a'; // this is safe
```

```cpp
char my_name[8];
my_name = "Lyle"; // Error, cannot assign a string literal to an array
// error: incompatible types in assignment of ‘const char [5]’ to ‘char [8]’
```

-

```cpp
char my_name[8];
strcpy(my_name, "Lyle"); // Correct way to copy a string literal to an array
```

## String Literals

- sequence of characters enclosed in double quotes.
- constant
- terminated with null character

## Functions for C-style Strings

```cpp
#include <cstring>
```

- Copying
- Concatenation
- Comparison
- Searching
- Length
- and more

## General purpose functions

```cpp
#include <cstdlib>
```

- convert C-style strings to
  - integers
  - floating-point numbers
  - long integers
