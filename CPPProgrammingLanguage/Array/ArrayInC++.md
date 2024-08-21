In C++, an array is a collection of elements of the same type stored in contiguous memory locations. Arrays are one of the simplest and most commonly used data structures in C++ programming. Here’s a detailed look into arrays in C++:

### What is an Array in C++?

Array in C++ is a primitive type.

An array in C++ is a compound data type that can hold several values of the same type. All elements of an array share the same identifier, and each element is accessed via its unique index.

### Declaring and Initializing Arrays

#### **Declaring an Array**

You declare an array by specifying the type of its elements, the name of the array, and the number of elements it can hold (its size).

```cpp
int numbers[10];  // Declares an array of ten integers.
```

The size of the array must be a constant expression that evaluates to a non-negative value.

#### **Initializing an Array**

- It don't have constructors because they are not objects in the traditional sense.
- Arrays can be initialized at the time of declaration. The initializer list is enclosed in curly braces `{}`.
- Efficiency: Directly initializing an array with {} is often the most efficient way to set up an array, as it can be optimized by the compiler. And it can check the narrowing converstion errors.
- Legacy and Compatibility: Arrays are a fundamental part of C++, and their behavior is maintained for compatibility and performance reasons.

```cpp
int numbers[5] = {10, 20, 30, 40, 50};  // Explicitly initializing each element
int squares[] = {0, 1, 4, 9, 16, 25};   // Array size is inferred from the number of elements
int zeros[5] = {};                       // All elements initialized to zero
```

### if I access the index that is out of the bound of the array

```cpp
    char vowels[]{ 'a', 'e', 99, 'o', 'u'}; // constructor-like initialization of array (C++11 and later)
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    cout << "Test: " << vowels[2] << endl;


    double hi_temps [] { 90.1, 89.8, 77.5, 81.6 };

    hi_temps[0] = 100.7;

    // the size of the array is fixed
    hi_temps[5] = 103.2; // this will cause a runtime error (*** stack smashing detected ***: terminated),
```
