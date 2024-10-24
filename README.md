# Libft - My First C Library

## Project Overview

**Libft** is a foundational project in which I developed my own custom C library. This library replicates a variety of standard C functions and introduces additional, commonly-used utility functions. It serves as a building block for future C projects, emphasizing the understanding and implementation of low-level memory management, string manipulation, and data handling.

Through this project, I enhanced my ability to work in C, manage heap memory, and write efficient, reusable code. The functions created in this library are essential tools for many of my subsequent projects.

---

## Table of Contents

- [Introduction](#introduction)
- [Functions Overview](#functions-overview)
  - [Part 1 - Libc Functions](#part-1---libc-functions)
  - [Part 2 - Additional Functions](#part-2---additional-functions)
- [How to Use](#how-to-use)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

---

## Introduction

The **Libft** project aims to implement a custom version of various essential C standard library functions, alongside additional utility functions. This custom library is designed for personal use in future projects, replacing and enhancing standard library functionalities.

- **Language**: C
- **Project Type**: Custom static library (`libft.a`)
- **Key Skills**: Memory management, string manipulation, algorithm development, and Makefile configuration.

---

## Functions Overview

### Part 1 - Libc Functions

In this section, I reimplemented a set of fundamental C standard library functions with the prefix `ft_`. These functions cover a range of basic operations such as character checks, memory handling, and string manipulation.

- `ft_isalpha` - Check if a character is alphabetic.
- `ft_isdigit` - Check if a character is a digit.
- `ft_strlen` - Calculate the length of a string.
- `ft_memcpy` - Copy memory area.
- `ft_memmove` - Move memory block safely.
- `ft_strncmp` - Compare strings up to a specified length.
- ... and many more.

### Part 2 - Additional Functions

This section includes extra utility functions that are not part of the libc or have extended functionality. These functions further enhance the library's usability in various C projects.

- `ft_substr` - Extract a substring from a string.
- `ft_strjoin` - Concatenate two strings.
- `ft_split` - Split a string based on a delimiter into an array of strings.
- `ft_itoa` - Convert an integer to a string.
- `ft_strmapi` - Apply a function to each character of a string.

---
