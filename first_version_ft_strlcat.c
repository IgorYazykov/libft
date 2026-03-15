#include <stdio.h>
#include <strings.h>

// size_t ft_strnlen(const char* str)
// {
//     size_t size;

//     size = 0;
//     while (str[size])
//         size++;
//     return size;
// }

// void *ft_memcpy(void *dest, const void *src, size_t n)
// {
//     unsigned char * new_dest;
//     const unsigned char * new_src;
//     size_t i;

//     new_dest = (unsigned char *)dest;
//     new_src = (const unsigned char *)src;
//     i = 0;
//     while (i < n)
//     {
//         new_dest[i] = new_src[i];
//         i++;
//     }
//     return (dest);
// }

// size_t ft_strlcat( char *dst, const char *src, size_t size )
// {
//     size_t size_dst;
//     size_t size_src;

//     size_dst = ft_strnlen(dst);
//     size_src = ft_strnlen(src);
//     if(size <= size_dst)
//         return(size + size_src);
//     if(size_src < (size - size_dst))
//         ft_memcpy(dst + size_dst, src, size_src + 1);
//     else
//     {
//         ft_memcpy(dst + size_dst, src, (size - size_dst - 1));
//         dst[size - 1] = '\0';
//     }
//     return(size_dst + size_src);
// }

// int main(void)
// {
//     char dest[] = "hello";
//     char src[] = " world!";
//     printf("Befor - %s\n", dest);
//     printf("Result - %zu\n", ft_strlcat(dest, src, 20));
//     printf("After - %s\n", dest);

//     // char dest1[] = "hello";
//     // char src1[] = " world!";
//     // printf("Befor original - %s\n", dest);
//     // printf("Result original - %zu", strlcat(dest, src, 12));
//     // printf("After original - %s\n", dest);
//     return(0);
//  }