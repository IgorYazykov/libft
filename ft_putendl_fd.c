#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if(s != NULL)
    {
        write(fd, &s[0], ft_strlen(s));
        ft_putchar_fd('\n', fd);
    }
}

// int main(void)
// {
//     char str[] = "Hello";
//     ft_putendl_fd(str, 1);
//     char str_error[] = "error";
//     ft_putendl_fd(str_error, 2);
//     return (0);
// }