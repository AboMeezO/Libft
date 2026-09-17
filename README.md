_This activity has been created as part of the 42 curriculum by mohammah._

## Description

`libft` is a custom C library that reimplements a collection of standard libc functions along with additional utility functions and a linked list manipulation API. The goal is to understand how standard library functions work by recoding them from scratch, creating a reusable library for future 42 projects.

## Functions

### Part 1 — Libc Functions

Reimplementations of standard C functions with the `ft_` prefix.

#### Character Checks & Conversion

| Function     | Description                                                              |
| ------------ | ------------------------------------------------------------------------ |
| `ft_isalpha` | Checks whether a character is an alphabetic letter (a-z or A-Z).         |
| `ft_isdigit` | Checks whether a character is a decimal digit (0-9).                     |
| `ft_isalnum` | Checks whether a character is alphanumeric (letter or digit).            |
| `ft_isascii` | Checks whether a character is within the 7-bit ASCII range (0-127).      |
| `ft_isprint` | Checks whether a character is printable (including space, range 32-126). |
| `ft_toupper` | Converts a lowercase ASCII letter to its uppercase equivalent.           |
| `ft_tolower` | Converts an uppercase ASCII letter to its lowercase equivalent.          |

#### String Functions

| Function     | Description                                                                                                           |
| ------------ | --------------------------------------------------------------------------------------------------------------------- |
| `ft_strlen`  | Returns the length of a string (number of characters before the null terminator).                                     |
| `ft_strlcpy` | Copies a string to a destination buffer with size limit, always null-terminates, and returns the total length of src. |
| `ft_strlcat` | Appends a source string to a destination buffer with size limit and returns the total desired length (dst + src).     |
| `ft_strchr`  | Locates the first occurrence of character `c` in a string, including the null terminator.                             |
| `ft_strrchr` | Locates the last occurrence of character `c` in a string, including the null terminator.                              |
| `ft_strncmp` | Compares up to `n` characters of two strings and returns the difference.                                              |
| `ft_strnstr` | Finds the first occurrence of a substring within a string, searching within a limited length.                         |

#### Memory Functions

| Function     | Description                                                                                     |
| ------------ | ----------------------------------------------------------------------------------------------- |
| `ft_memset`  | Fills the first `n` bytes of a memory area with the constant byte `c`.                          |
| `ft_bzero`   | Erases (zeros out) the first `n` bytes of a memory area.                                        |
| `ft_memcpy`  | Copies `n` bytes from source to destination; does not handle overlapping regions.               |
| `ft_memmove` | Copies `n` bytes from source to destination, safely handling overlapping memory regions.        |
| `ft_memchr`  | Scans the first `n` bytes of a memory area for the first occurrence of byte `c`.                |
| `ft_memcmp`  | Compares the first `n` bytes of two memory areas and returns the difference.                    |
| `ft_calloc`  | Allocates zeroed memory for an array of `n` elements of `size` bytes, with overflow protection. |
| `ft_strdup`  | Allocates and returns a newly allocated copy of a string.                                       |

#### Conversion

| Function  | Description                                                                        |
| --------- | ---------------------------------------------------------------------------------- |
| `ft_atoi` | Converts a string to an integer, handling leading whitespace and an optional sign. |

### Part 2 — Additional Functions

Utility functions not in libc or in a different form.

#### String Manipulation

| Function      | Description                                                                                                      |
| ------------- | ---------------------------------------------------------------------------------------------------------------- |
| `ft_substr`   | Allocates and returns a substring from string `s` starting at index `start` with max length `len`.               |
| `ft_strjoin`  | Allocates and returns a new string formed by concatenating strings `s1` and `s2`.                                |
| `ft_strtrim`  | Allocates and returns a copy of `s1` with leading and trailing characters from `set` removed.                    |
| `ft_split`    | Allocates and returns an array of strings obtained by splitting `s` on delimiter character `c`.                  |
| `ft_itoa`     | Allocates and returns a string representation of an integer, including negative numbers.                         |
| `ft_strmapi`  | Allocates and returns a new string by applying function `f` to each character with its index.                    |
| `ft_striteri` | Applies function `f` to each character of string `s` in place, passing the index and a pointer to the character. |

#### Output Functions

| Function        | Description                                                                                     |
| --------------- | ----------------------------------------------------------------------------------------------- |
| `ft_putchar_fd` | Writes a single character to the given file descriptor.                                         |
| `ft_putstr_fd`  | Writes a string to the given file descriptor.                                                   |
| `ft_putendl_fd` | Writes a string followed by a newline to the given file descriptor.                             |
| `ft_putnbr_fd`  | Writes an integer as a decimal string to the given file descriptor, including negative numbers. |

### Part 3 — Linked List Functions

Functions to manipulate a singly linked list using the `t_list` structure.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function          | Description                                                                                                             |
| ----------------- | ----------------------------------------------------------------------------------------------------------------------- |
| `ft_lstnew`       | Allocates and returns a new list node with the given content and `next` set to NULL.                                    |
| `ft_lstadd_front` | Adds a node at the beginning of a linked list by prepending it to the head.                                             |
| `ft_lstsize`      | Counts and returns the number of nodes in a linked list.                                                                |
| `ft_lstlast`      | Returns a pointer to the last node of a linked list.                                                                    |
| `ft_lstadd_back`  | Adds a node at the end of a linked list by appending it after the last node.                                            |
| `ft_lstdelone`    | Deletes and frees a single list node, applying the `del` function to its content first.                                 |
| `ft_lstclear`     | Deletes and frees all nodes in a linked list, applying `del` to each node's content, and sets the list pointer to NULL. |
| `ft_lstiter`      | Iterates over a linked list and applies function `f` to the content of each node.                                       |
| `ft_lstmap`       | Creates a new linked list by applying function `f` to each node's content, using `del` for cleanup on failure.          |

## Instructions

### Compilation

```bash
make
```

This produces `libft.a` using `cc` with `-Wall -Wextra -Werror`.

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Link the library when compiling your program:

```bash
cc your_program.c -L. -lft
```

### Makefile Rules

- `make` — compiles the library
- `make clean` — removes object files
- `make fclean` — removes object files and `libft.a`
- `make re` — recompiles the library from scratch

## Resources

- [man 3 libc functions](https://man7.org/linux/man-pages/man3/)
- [BSD string functions](https://man7.org/linux/man-pages/man3/strlcpy.3.html)

### AI Usage

I used AI to write this file and explain the behavior of some functions in Parts 2 and 3, as the descriptions provided in the subject file were not detailed enough.
