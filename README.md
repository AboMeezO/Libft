_This activity has been created as part of the 42 curriculum by mohammah._

## Description

`libft` is a custom C library that reimplements a collection of standard libc functions along with additional utility functions and a linked list manipulation API. The goal is to understand how standard library functions work by recoding them from scratch, creating a reusable library for future 42 projects.

The library is divided into three parts:

- **Part 1 — Libc functions**: Reimplementations of standard C functions (`isalpha`, `strlen`, `memcpy`, `strncmp`, etc.) with the `ft_` prefix.
- **Part 2 — Additional functions**: Utility functions not in libc or in a different form (`ft_substr`, `ft_split`, `ft_itoa`, `ft_strmapi`, etc.).
- **Part 3 — Linked list functions**: Functions to manipulate a singly linked list using the `t_list` structure (`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, etc.).

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
