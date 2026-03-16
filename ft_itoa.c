
// #include "libft.h"

// unsigned int find_dec(unsigned int n)
// {
//     unsigned int i;

//     i = 1;
//     while(n >= 9)
//     {
//         n /= 10;
//         i++;
//     }
//     return(i);
// }

// char *ft_itoa(int n)
// {
//     unsigned int new_n;
//     int sign;
//     char* new_string;
//     unsigned int len;

//     if (n == 0)
//         return(ft_strdup("0"));
//     sign = 1;
//     len = 0;
//     if(n < 0)
//     {
//         sign = 0;
//         len++;
//         new_n = (unsigned int)-n;
//     } else
//         new_n = n;
//     len += find_dec(new_n);
//     new_string = malloc(len + 1);
//     if (new_string == NULL)
//         return(0);
//     printf("%u , %u ", new_n, len);
//     return("sdgdf");
// }

// int main(void)
// {
//     printf("%s", ft_itoa(-2147483648));
//     return(0);
// }