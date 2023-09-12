# C++ Module 03 - Inheritance

This repository contains my solutions for Module 03 exercises on Inheritance in C++.

## Table of Contents

1. [Introduction](#introduction)
2. [General Rules](#general-rules)
3. [Exercise 00: Aaaaand... OPEN!](#exercise-00-aaaaand-open)
4. [Exercise 01: Serena, my love!](#exercise-01-serena-my-love)
5. [Exercise 02: Repetitive work](#exercise-02-repetitive-work)
6. [Exercise 03: Now it’s weird!](#exercise-03-now-its-weird)
7. [How to Build and Run](#how-to-build-and-run)
8. [Submission and Peer-Evaluation](#submission-and-peer-evaluation)
9. [Additional Notes](#additional-notes)
- [Contact Information](#contact-information)

## Introduction

C++ Module 03 covers the topic of Inheritance. Inheritance allows you to create new classes that are built upon existing classes, inheriting their attributes and methods. This module includes exercises to practice inheritance in C++.

## General Rules

In this section, explain any general rules or conventions that need to be followed throughout the project. For example:

- All code is written in accordance with the C++98 standard.
- Compilation is done with `g++` using the flags `-Wall -Wextra -Werror`.
- Proper formatting and naming conventions are followed.
- Code should be readable and well-documented.

## Exercise 00: Aaaaand... OPEN!

### Files

- `Makefile`
- `main.cpp`
- `ClapTrap.hpp`
- `ClapTrap.cpp`

In this exercise, a class named `ClapTrap` is implemented, which represents a basic robot. The class includes attributes for name, hit points, energy points, and attack damage, as well as member functions for attacking, taking damage, and being repaired.

## Exercise 01: Serena, my love!

### Files

- `ScavTrap.hpp`
- `ScavTrap.cpp`

In this exercise, a derived class `ScavTrap` is created from the `ClapTrap` class. `ScavTrap` inherits attributes and functions from `ClapTrap` and has its own special ability, `guardGate`.

## Exercise 02: Repetitive work

### Files

- `FragTrap.hpp`
- `FragTrap.cpp`

In this exercise, another derived class, `FragTrap`, is created from `ClapTrap`. Similar to `ScavTrap`, it inherits attributes and functions from `ClapTrap` and has its own special ability, `highFivesGuys`.

## Exercise 03: Now it’s weird!

### Files

- `DiamondTrap.hpp`
- `DiamondTrap.cpp`

In this exercise, a class called `DiamondTrap` is created, which inherits from both `FragTrap` and `ScavTrap`. It has attributes from both parent classes and its own special ability, `whoAmI`.

## How to Build and Run

In this section, provide instructions on how to build and run the code. For example:

To build the code, navigate to the root directory of each exercise and run the following command:

```shell
make
./program_name
```
## Contact Information

If you have any questions or need assistance, feel free to contact me:

- Instagram: [@ael_bak](https://www.instagram.com/ael_bak/)
- GitHub: [ve-no](https://github.com/ve-no)
- LinkedIn: [Allal EL BAKOURI](https://www.linkedin.com/in/allal-el-bakouri-ba3565205/)
- Twitter: [@ael_bak](https://twitter.com/ael_bak)
