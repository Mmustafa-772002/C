# C Programming - Variables
In C programming, a variable is a named storage location in computer memory that is used to hold data during the execution of a program. Variables are a fundamental concept in programming, and they play a crucial role in data manipulation and control flow. Here's a more concise definition of variables in C:

**Variable (in C)**: A named memory location used to store data values that can be accessed and manipulated by a program. Variables have specific data types that define the kind of data they can hold and are declared with unique identifiers (names) that follow specific naming rules in C. These identifiers allow programmers to refer to and work with data in a structured and organized manner throughout the program's execution.

## Table of Contents

- [Introduction](#introduction)
- [Rules for Variable Declaration](#rules-for-variable-declaration)
- [Common Variable Types](#common-variable-types)
  - [int](#int)
  - [float](#float)
  - [double](#double)
  - [char](#char)
  - [bool](#bool)
  - [Array](#array)
  - [Pointer](#pointer)
  - [Struct](#struct)
  - [Enumeration (enum)](#enumeration-enum)



## Introduction

In C programming, variables are used to store and manipulate data. Each variable type is designed to handle specific types of data, and choosing the right variable type is essential for efficient and correct programming. This README provides an overview of common variable types in C.

## Rules for Variable Declaration

- Variable names must start with a letter (a-z or A-Z) or an underscore (_) and can be followed by letters, digits, or underscores.
- Variable names are case-sensitive.
- It is recommended to initialize variables when declaring them whenever possible.
- Use the appropriate data type based on the type of data you want to store.

## Common Variable Types

### int
- Description: Used for integer values (whole numbers).
- Example: `int age = 25;`

### float
- Description: Used for floating-point values (decimal numbers).
- Example: `float temperature = 98.6;`

### double
- Description: Used for double-precision floating-point values (more precise than float).
- Example: `double pi = 3.14159265359;`

### char
- Description: Used for single characters.
- Example: `char grade = 'A';`

### bool
- Description: Used for Boolean values (true or false).
- Note: C doesn't have a built-in `bool` type like C++, so you can use `int` or `char` to represent Boolean values (0 for false, any non-zero value for true).
- Example: `int isTrue = 1;`

### Array
- Description: Used to store collections of elements of the same type.
- Example: `int numbers[5];`

### Pointer
- Description: Used to store memory addresses of other variables.
- Example: `int *ptr;`

### Struct
- Description: Used to create user-defined data types composed of multiple variables.
- Example:
  ```c
  struct Point {
      int x;
      int y;
  };
  ```

### Enumeration (enum)
- Description: Used to define a set of named integer constants.
- Example:
  ```c
  enum Color {
      RED,
      GREEN,
      BLUE
  };
  ```






