*This project has been created as part of the 42 curriculum by tmolinie.*

# Libft

## Description

Libft is the first project of the 42 common core. The goal is to build my own C library, `libft.a`, containing reimplementations of standard libc functions as well as extra utility functions.

The library has three parts:

**Part 1 - libc functions** (same prototypes and behaviour as the originals, prefixed with `ft_`)

| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks whether a character is a letter (returns 1 if so, 0 otherwise). |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is a letter or a digit. |
| `ft_isascii` | Checks whether a character is in the ASCII range (0 to 127). |
| `ft_isprint` | Checks whether a character is printable, space included. |
| `ft_toupper` | Converts a lowercase letter to uppercase and leaves other characters unchanged. |
| `ft_tolower` | Converts an uppercase letter to lowercase and leaves other characters unchanged. |
| `ft_strlen` | Returns the length of a string, not counting the terminating `'\0'`. |
| `ft_strlcpy` | Copies a string into a buffer of a given size, always NUL-terminating it, and returns the length of the source. |
| `ft_strlcat` | Appends a string to the end of another within a given buffer size, and returns the length it tried to create. |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string, or `NULL`. |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string, or `NULL`. |
| `ft_strncmp` | Compares at most `n` characters of two strings. |
| `ft_strnstr` | Finds the first occurrence of a substring in a string, searching at most `len` characters. |
| `ft_strdup` | Returns a newly allocated copy of a string. |
| `ft_memset` | Fills a memory area with a given byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies `n` bytes from one memory area to another (areas must not overlap). |
| `ft_memmove` | Copies `n` bytes between memory areas, handling overlap correctly. |
| `ft_memchr` | Finds the first occurrence of a byte in the first `n` bytes of a memory area. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| `ft_calloc` | Allocates zero-filled memory for an array, returning `NULL` if the size overflows. |
| `ft_atoi` | Converts the beginning of a string to an `int`, skipping leading whitespace and handling a sign. |

**Part 2 - additional functions** (not in libc, or in a different form)

| Function | Description |
| --- | --- |
| `ft_substr` | Returns a substring of a string, allocated with `malloc`. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Removes the characters of a set from both ends of a string. |
| `ft_split` | Splits a string with a delimiter character into a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer to a string, negative numbers included. |
| `ft_strmapi` | Applies a function to each character (with its index) and builds a new string from the results. |
| `ft_striteri` | Applies a function to each character of a string, passed by address. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

**Part 3 - linked lists** (using the `t_list` structure declared in `libft.h`)

| Function | Description |
| --- | --- |
| `ft_lstnew` | Creates a new node holding the given content, with `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstdelone` | Frees one node's content with the given function, then frees the node itself (not the next one). |
| `ft_lstclear` | Deletes and frees a node and all the ones after it, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Builds a new list from the results of applying a function to each node's content, freeing it all on failure. |

Design choices:

- Allocating functions return `NULL` when `malloc` fails, and `ft_split` and `ft_lstmap` free everything they had already allocated before returning.
- `ft_calloc` returns `NULL` if `nmemb * size` would overflow, like the original.
- Helper functions are `static`, and there are no global variables.

## Instructions

Requirements: a C compiler (`cc`), `make` and `ar`.

Build the library:

```sh
make
```

This compiles every `ft_*.c` file with `-Wall -Wextra -Werror` and creates `libft.a` at the root of the repository.

Other rules:

```sh
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild everything from scratch
```

To use the library in a program, include the header and link against the archive:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

- `man 3` pages of the reimplemented functions (`strlen`, `strlcpy`, `memmove`, `calloc`, ...)
- The Libft subject (v19.3) from the 42 intranet
- The 42 Norm, checked with `norminette`
- GNU `ar` documentation, for building a static library
- Peer discussions and the evaluation sheet, for edge cases to test

## Usage of IA

- IA was partly used to write the README file
