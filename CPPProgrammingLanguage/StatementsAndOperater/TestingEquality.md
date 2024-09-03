# Equlity in C++

## Print boolean values

```cpp
int x {10};
int y {20};

cout << (x == y) << endl; // 0

bool isEqual = (x == y);
cout << isEqual << endl; // 0
// If we want to print true or false instead of 1 or 0
cout << boolalpha;
cout << isEqual << endl; // false
```

## Floating Point Comparisons

```cpp
double a {100.0 - 99.99}; // 0.01
double b {10.0 - 9.99}; // 0.01
cout << (a == b) << endl; // 0

// Comparing floating point numbers
double epsilon {1.0e-10};
cout << (abs(a - b) < epsilon) << endl; // 1


int x{12};
double y{11.9999999999};
cout << (x == y) << endl; // true (implicit conversion) why? because the value of y is 12.0
```
