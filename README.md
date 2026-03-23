*This project has been created as part of the 42 curriculum by iyazykov*

Project Goal:
Create your own C component implementing the library's core functions to better understand how to work with memory, strings, and pointers.

Overview:
The project involves rethinking basic C functions and adding a robust utility, including string and linked list handling. 

Resources:
The following sources were used as resources: man, stack overflow, geeksforgeeks, habr, systutorials, opengroup, manpages, github. AI was used to generate tests.

Functions Description
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
ft_lstnew — создаёт новый элемент списка, инициализируя content переданным значением, а next устанавливает в NULL.
ft_lstadd_front — добавляет новый элемент в начало списка.
ft_lstsize — возвращает количество элементов (узлов) в списке.
ft_lstlast — возвращает последний элемент списка.
ft_lstadd_back — добавляет новый элемент в конец списка.
ft_lstdelone — удаляет один элемент списка: освобождает его содержимое с помощью функции del, затем освобождает сам узел (не трогает next).
ft_lstclear — полностью очищает список: удаляет все элементы и освобождает память, устанавливая указатель на список в NULL.
ft_lstiter — проходит по списку и применяет функцию f к содержимому каждого элемента.
ft_lstmap — создаёт новый список, применяя функцию f к каждому элементу исходного списка; при ошибке использует del для очистки памяти.