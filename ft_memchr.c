/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:11:22 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:03:33 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char * new_s;
    size_t i;

    i = 0;
    new_s = (const unsigned char *) s;
    while(i < n)
    {
        if (new_s[i] == c)
            return((unsigned char *)&new_s[i]);
        i++;
    }
    return(NULL); 
}

// int main() 
// {
//     const char str[] = "Welcome to India";
//     const char ch = 'l';
//     char* result = (char*)ft_memchr(str, ch, 1);
//     if (result != NULL) {
//        printf("'%c' found at position %ld\n", ch, result - str);
//     } else {
//        printf("'%c' not found in the string\n", ch);
//     }

//     const char str1[] = "Welcome to India";
//     const char ch1 = 'l';
//     char* result1 = (char*)memchr(str1, ch1, 1);
//     if (result1 != NULL) {
//        printf("'%c' found at position %ld\n", ch1, result1 - str1);
//     } else {
//        printf("'%c' not found in the string\n", ch1);
//     }
//     return 0;
// }