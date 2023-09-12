# C++ Module 00 - Namespaces, Classes, and More

## Summary

This document contains the exercises of Module 00 from C++ modules.

- Version: 9

## Contents

I. [Introduction](#introduction)
II. [General Rules](#general-rules)
III. [Exercise 00: Megaphone](#exercise-00-megaphone)
IV. [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)
V. [Exercise 02: The Job Of Your Dreams](#exercise-02-the-job-of-your-dreams)
VI. [Contact Information](#contact-information)
VII. [Submission and Peer-Evaluation](#submission-and-peer-evaluation)

## Chapter I - Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup. These modules introduce Object-Oriented Programming using C++98 standard. While modern C++ has evolved, this module provides a foundation.

## Chapter II - General Rules

### Compiling

- Compile code with `c++` and flags `-Wall -Wextra -Werror`
- Code should compile with `-std=c++98`

### Formatting and Naming Conventions

- Exercise directories: `ex00`, `ex01`, ..., `exn`
- Class names in UpperCamelCase
- Output messages end with a new-line character
- No enforced coding style, but readability matters

### Allowed/Forbidden

- Use standard library extensively
- Forbidden: external libraries (C++11, Boost), *printf(), *alloc(), free()
- Forbidden: using namespace <ns_name> and friend keywords
- STL allowed only in Module 08 and 09

### Design Requirements

- Avoid memory leaks
- Classes must follow Orthodox Canonical Form (Module 02-09)
- No function implementations in header files (except templates)
- Headers should include all dependencies with include guards

### Read Me

- Add additional files if necessary
- Guidelines may imply requirements not explicitly stated
- Read each module thoroughly
- Use your intellect!

## Chapter III - Exercise 00: Megaphone

- Turn-in directory: `ex00/`
- Files to turn in: `Makefile`, `megaphone.cpp`
- Forbidden functions: None
- Description: Write a program that capitalizes and echoes command-line arguments.

## Chapter IV - Exercise 01: My Awesome PhoneBook

- Turn-in directory: `ex01/`
- Files to turn in: `Makefile`, `*.cpp`, `*.{h, hpp}`
- Forbidden functions: None
- Description: Implement a phonebook program using classes `PhoneBook` and `Contact`.

## Chapter V - Exercise 02: The Job Of Your Dreams

- Turn-in directory: `ex02/`
- Files to turn in: `Makefile`, `Account.cpp`, `Account.hpp`, `tests.cpp`
- Forbidden functions: None
- Description: Recreate a lost source file `Account.cpp` using `Account.hpp` and a log file.

## Chapter VI - Contact Information

If you have any questions or need assistance, feel free to contact me:

- Instagram: [@ael_bak](https://www.instagram.com/ael_bak/)
- GitHub: [ve-no](https://github.com/ve-no)
- LinkedIn: [Allal EL BAKOURI](https://www.linkedin.com/in/allal-el-bakouri-ba3565205/)
- Twitter: [@ael_bak](https://twitter.com/ael_bak)

## Chapter VII - Submission and Peer-Evaluation

- Turn in your assignment in your Git repository.
- Only the work inside your repository will be evaluated during the defense.
