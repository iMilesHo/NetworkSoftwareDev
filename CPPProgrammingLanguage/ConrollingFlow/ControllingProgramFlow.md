# Controllling program flow in C++

### Selection Statements

- if
- if-else
- nested if-else
- switch
- conditional operator

### Iteration Statements

- for
- range-based for loop
- while
- do-while
- continue and break statements
- infinite loops
- nested loops

In C++, controlling program flow is critical for creating programs that can make decisions, loop through conditions, and execute different code based on varying inputs. Here’s a breakdown of the control structures in C++:

### Selection Statements

These allow the program to choose different paths of execution based on conditions.

1. **if**: Tests a condition, and if it's `true`, the subsequent code block is executed.

   ```cpp
   if (condition) {
      // code to execute if condition is true
   }
   ```

2. **if-else**: Specifies an alternative set of statements that are executed if the condition is `false`.

   ```cpp
   if (condition) {
      // code to execute if condition is true
   } else {
      // code to execute if condition is false
   }
   ```

3. **nested if-else**: Involves multiple levels of if-else, allowing for more complex conditions.

   ```cpp
   if (condition1) {
      // code if condition1 is true
   } else if (condition2) {
      // code if condition2 is true
   } else {
      // code if both conditions are false
   }
   ```

4. **switch**: Tests a variable against a list of values for equality, and executes the corresponding block of code.

   ```cpp
   switch (variable) {
      case value1:
         // code to execute if variable == value1
         break;
      case value2:
         // code to execute if variable == value2
         break;
      default:
         // code to execute if variable doesn't match any case
   }

   char grade = 'B';
   switch (grade) {
    case 'A':
        cout << "Excellent!";
        break;
    case 'B':
        cout << "Well done!";
        break;
    case 'C':
        cout << "Good.";
        break;
    case 'D':
        cout << "You passed.";
        break;
    case 'F':
        cout << "Better try again.";
        break;
    default:
        cout << "Invalid grade.";
   }


   ```

5. **conditional operator** (ternary operator): A shorthand for if-else, which returns one of two values depending on the condition.
   ```cpp
   result = (condition) ? value_if_true : value_if_false;
   ```

### Iteration Statements

These allow repeating a block of code multiple times.

1. **for**: Executes a loop a set number of times.

   ```cpp
   for (initialization; condition; increment) {
      // code to execute
   }
   ```

2. **range-based for loop**: Introduced in C++11, this loops over elements in a range, such as an array or a container.

   ```cpp
   for (declaration : range) {
      // code to execute
   }
   ```

3. **while**: Continues to execute a block of code as long as the condition is `true`.

   ```cpp
   while (condition) {
      // code to execute
   }
   ```

4. **do-while**: Similar to the while loop, but it ensures the block of code is executed at least once.

   ```cpp
   do {
      // code to execute
   } while (condition);
   ```

5. **continue and break statements**:

   - **continue**: Skips the remaining code in the current iteration and proceeds with the next iteration.
   - **break**: Exits the loop immediately.

6. **infinite loops**: Loops that continue forever unless broken internally.

   ```cpp
   for (;;) {
      // infinite loop
   }
   ```

7. **nested loops**: Loops inside another loop, useful for multi-dimensional data structures.
   ```cpp
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         // code to execute
      }
   }
   ```

Understanding and using these control structures effectively allows you to handle a wide range of programming scenarios in C++.
