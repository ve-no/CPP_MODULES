# C++ Module 02: Ad-hoc Polymorphism, Operator Overloading, and Orthodox Canonical Class Form

## Table of Contents

- [Introduction](#introduction)
- [General Rules](#general-rules)
- [New Rules](#new-rules)
- [Exercise 00: My First Class in Orthodox Canonical Form](#exercise-00-my-first-class-in-orthodox-canonical-form)
- [Exercise 01: Towards a More Useful Fixed-point Number Class](#exercise-01-towards-a-more-useful-fixed-point-number-class)
- [Exercise 02: Now We're Talking](#exercise-02-now-were-talking)
- [Exercise 03: BSP](#exercise-03-bsp)
- [Contact Information](#contact-information)
- [Submission and Peer-evaluation](#submission-and-peer-evaluation)

## Introduction

Welcome to Module 02 of the C++ course, where we will explore ad-hoc polymorphism, operator overloading, and adhere to the Orthodox Canonical class form. This module aims to provide you with a foundational understanding of these concepts within the C++ programming language.

## General Rules

### Compiling

- Compile your code with `c++` and the flags `-Wall -Wextra -Werror`.
- Your code should still compile if you add the flag `-std=c++98`.

### Formatting and Naming Conventions

- Exercise directories will be named in the format: `ex00`, `ex01`, ..., `exn`.
- Follow the naming conventions for files, classes, functions, member functions, and attributes as specified in the guidelines.
- Class names should be in the UpperCamelCase format.
- Output messages must end with a newline character and be displayed to the standard output.
- No specific coding style is enforced, but readability is crucial.

### Allowed/Forbidden

- You can use most features from the standard library.
- External libraries like C++11, Boost, and certain functions (`*printf()`, `*alloc()`, `free()`) are forbidden.
- Avoid using `using namespace <ns_name>` and `friend` unless explicitly stated.
- STL can only be used in Module 08 and 09.

### Design Requirements

- Avoid memory leaks when allocating memory.
- Design classes in the Orthodox Canonical Form from Module 02 to Module 09.
- Avoid putting function implementations in header files (except for function templates).
- Include all dependencies in header files and use include guards to prevent double inclusion.

## New Rules

- All classes must adhere to the Orthodox Canonical Form, implementing default constructor, copy constructor, copy assignment operator, and destructor.
- Split class code into header files (`.hpp/.h`) for class definition and source files (`.cpp`) for implementation.

## Exercise 00: My First Class in Orthodox Canonical Form

- Create a class representing a fixed-point number.
- Implement constructors, copy constructor, copy assignment operator, destructor, `getRawBits()`, and `setRawBits()` functions.

## Exercise 01: Towards a More Useful Fixed-point Number Class

- Expand the fixed-point number class with additional constructors and conversion functions.
- Overload the insertion (`<<`) operator to display floating-point representations.

## Exercise 02: Now We're Talking

- Overload comparison and arithmetic operators for the fixed-point number class.
- Implement increment and decrement operators.
- Add `min` and `max` static member functions.

## Exercise 03: BSP

- Create a class to represent 2D points.
- Implement constructors, copy constructor, copy assignment operator, and destructor.
- Implement a function to check if a point is inside a triangle (Binary Space Partitioning).

## Contact Information

If you have any questions or need assistance, feel free to contact me:

- Instagram: [@ael_bak](https://www.instagram.com/ael_bak/)
- GitHub: [ve-no](https://github.com/ve-no)
- LinkedIn: [Allal EL BAKOURI](https://www.linkedin.com/in/allal-el-bakouri-ba3565205/)
- Twitter: [@ael_bak](https://twitter.com/ael_bak)

## Submission and Peer-evaluation

- Submit your assignment in your Git repository.
- Only the work inside your repository will be evaluated during the defense.
- Ensure folder and file names follow the provided guidelines.
- Don't hesitate to create your own tests to verify the behavior of your code.

---

This README provides an overview of the C++ Module 02 project. Please refer to the detailed module documentation for specific instructions on each exercise. Good luck with your project!
