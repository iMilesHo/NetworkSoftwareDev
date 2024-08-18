# Size of primitive types in C++

## Types sizes

- 8 bits, 2^8, 256 values (3 digits)
- 16 bits, 2^16, 65536 values (5 digits)
- 32 bits, 2^32, 4294967296 values (10 digits)
- 64 bits, 2^64, 18446744073709551616 values (20 digits)

## Charater types

Used to store characters like 'a', 'b', 'c', etc.

- `char`: 1 byte
- `char16_t`: 2 bytes
- `char32_t`: 4 bytes
- `wchar_t`: 2 or 4 bytes (can represent a wider range of characters)

## Integer types

Used to store whole numbers like 1, 2, 3, etc. (signed or unsigned)

- signed short int: at least 16 bits
- signed int: at least 16 bits
- signed long int: at least 32 bits
- signed long long int: at least 64 bits
- unsigned short int: at least 16 bits
- unsigned int: at least 16 bits
- unsigned long int: at least 32 bits
- unsigned long long int: at least 64 bits

## Floating point types

Used to store numbers with decimal points like 1.2, 3.4, etc. It is represented in scientific notation.(mantissa and exponent).

Floating point types can only approximate real numbers. It only stores a duration of the number. It can't store the exact number.

- `float`: 4 bytes, 7 decimal digits precision, 1.2e-38 to 3.4e+38
- `double`: 8 bytes, 15 decimal digits precision, 2.3e-308 to 1.7e+308
- `long double`: 10 bytes, 19 decimal digits precision, 3.4e-4932 to 1.1e+4932

## Boolean type

Used to store true or false values. Zero is false, non-zero is true.

- `bool`: 1 byte (usually stored as 1 byte)

## Omitting the type

```cpp
short x = 5; // short int
long y = 10; // long int
unsigned z = 15; // unsigned int
signed w = 20; // signed int
```

## Size of types

<climits> and <cfloat> contain size and precison information about your implementation of C++.

- INT_MAX
- INT_MIN
- LONG_MAX
- LONG_MIN
- FLT_MAX
- FLT_MIN

```cpp

```
