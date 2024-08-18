# Warning Types In C++

## Narrowing Conversion

this is a type of conversion that occurs when a value is converted to a type that cannot represent all the values of the original type. This can lead to data loss and unexpected results.

```cpp
int x = 1000;
char c = x; // Narrowing conversion
```
