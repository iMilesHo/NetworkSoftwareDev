# C++ Programming Language

## Keywords

- C++ has 90 keywords.
  - E.g. `int`, `float`, `if`, `else`, `while`, `for`, `do`, `class`, `public`, `private`, `protected`, `friend`, `virtual`, `static`, `const`, `volatile`, `mutable`, `extern`, `register`, `typedef`, `sizeof`, `new`, `delete`, `operator`, `this`, `return`, `break`, `continue`, `goto`, `switch`, `case`, `default`, `try`, `catch`, `throw`, `const_cast`, `dynamic_cast`, `static_cast`, `reinterpret_cast`, `template`, `typename`, `using`, `namespace`, `inline`, `explicit`, `true`, `false`, `bool`, `char`, `wchar_t`, `short`, `long`, `double`, `void`, `auto`, `union`, `struct`, `enum`, `volatile`, `mutable`, `const`, `static`, `extern`, `register`, `signed`, `unsigned`, `constexpr`, `noexcept`, `nullptr`, `decltype`, `alignas`, `alignof`, `asm`, `delete`, `new`, `operator`, `sizeof`, `typeid`, `and`, `and_eq`, `bitand`, `bitor`, `compl`, `not`, `not_eq`, `or`, `or_eq`, `xor`, `xor_eq`.
- Jave has 50 keywords.
- C has 32 keywords.
- Python has 33 keywords.

## Indentifier

- An identifier is a name given to a variable, function, class, etc.

## C++ Preprocessor

Preprocessor is a program that processes our source code before it passes through the compiler. It begins with a hash symbol (#).

When preprocessor encounters a hash symbol, and find the command after it, the preprocesser will execute the command.

E.g. #include
When the preprocesser encounters this command, it will replace the line with the content of the file that the command is pointing to and it is recursively until all the files are included.

As the preprocesser is a separate program, it is not part of the compiler. It is a separate program that runs before the compiler. It will strip off all the comments and all the preprocessor directives and then pass the code to the compiler.

So the C++ preprocessor does not know anything about the C++ language. It only knows about the preprocessor directives.

## Comments

- Single Line Comment
  - `// This is a single line comment`. (Forwards slash)
- Multi Line Comment
  - `/* This is a multi line comment */`. (Forwards slash and asterisk)
