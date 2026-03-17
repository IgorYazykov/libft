#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(s != NULL)
        write(fd, &s[0], ft_strlen(s));
}

// int main(void)
// {
//     char str[] = "Hello\n";
//     ft_putstr_fd(str, 1);
//     char str_error[] = "error\n";
//     ft_putstr_fd(str_error, 2);
//     return (0);
// }