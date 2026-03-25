*This project has been created as part of the 42 curriculum by iyazykov*
## Project Goal:
```
Create your own C component implementing the library's core functions to better understand how to work with memory, strings, and pointers.
```
## Overview:
```
The project involves rethinking basic C functions and adding a robust utility, including string and linked list handling. 
```
## Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```
## Resources:
```
The following sources were used as resources: man, stack overflow, geeksforgeeks, habr, systutorials, opengroup, manpages, github. AI was used to generate tests.
```
## Functions Description
```
ft_isalpha — Checks whether a character is a letter (A-Z or a-z).

ft_isdigit — Checks whether a character is a digit (0-9).

ft_isalnum — Checks whether a character is a letter or a digit.

ft_isascii — Checks whether a character is in the ASCII table (0-127).

ft_isprint — Checks whether a character is printable (visible).

ft_strlen — returns the length of a string (the number of characters before \0).

ft_strlcpy — copies a string to a buffer with a limited size and guarantees \0.

ft_strlcat — appends a string to another, taking into account the buffer size.

ft_strchr — finds the first occurrence of a character in a string.

ft_strrchr — finds the last occurrence of a character in a string.

ft_strncmp — compares two strings up to n characters.

ft_strnstr — finds a substring within a string up to n characters.

ft_strdup — creates a copy of a string, allocating new memory.

ft_memset — Fills a memory region with the specified byte.

ft_bzero — Zeroes a memory region (fills it with zeros).

ft_memcpy — Copies a memory block (without collision protection).

ft_memmove — Copies memory, taking into account possible overlaps.

ft_memchr — Searches for a byte in a memory block.

ft_memcmp — Compares two memory blocks.

ft_atoi — converts a string to an integer (int).

ft_calloc — allocates memory and fills it with zeros.

ft_strdup — (above) copies a string and allocates memory.

ft_substr — Creates a substring from the string s, starting at index start and up to length len.

ft_strjoin — Concatenates two strings s1 and s2 into a new string.

ft_strtrim — Removes all characters from set from the beginning and end of the string s1.

ft_split — Splits the string s into an array of strings, using the character c as a separator.

ft_itoa — converts an integer to a string (takes into account negative numbers).

ft_strmapi — creates a new string by applying the function f to each character of the string s (with an index passed).

ft_striteri — applies the function f to each character of the string s, allowing for direct modification of the string.

ft_putchar_fd — Outputs a single character to the specified file descriptor.

ft_putstr_fd — Outputs a string to the specified file descriptor.

ft_putendl_fd — Outputs a string to the file descriptor and appends \n.

ft_putnbr_fd — Outputs an integer to the file descriptor.

ft_lstnew — creates a new list element, initializing `content` with the passed value and setting `next` to NULL.

ft_lstadd_front — adds a new element to the front of the list.

ft_lstsize — returns the number of elements (nodes) in the list.

ft_lstlast — returns the last element of the list.

ft_lstadd_back — adds a new element to the end of the list.

ft_lstdelone — removes a single element from the list: frees its contents using the del function, then frees the node itself (leaves next untouched).

ft_lstclear — completely clears the list: removes all elements and frees memory, setting the list pointer to NULL.

ft_lstiter — iterates through the list and applies the function f to the contents of each element.

ft_lstmap — creates a new list by applying the function f to each element of the original list; if an error occurs, it uses del to free the memory.
```