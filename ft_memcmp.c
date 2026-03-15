/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:54:02 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:03:56 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char * new_s1;
    const unsigned char * new_s2;
    size_t i;

    new_s1 = (const unsigned char *) s1;
    new_s2 = (const unsigned char *) s2;
    i = 0;
    while (i < n)
    {
        if(new_s1[i] != new_s2[i])
            return(new_s1[i] - new_s2[i]);
        i++;
    }
    return (0);
}

// int main () 
// {
//     char str1[] = "abcdef";
//     char str2[] = "ABCDEF";

//     printf("Result - %i\n", ft_memcmp(str1, str2, 5));
//     printf("Result - %i\n", memcmp(str1, str2, 5));
//     return(0);
// }