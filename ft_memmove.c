/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:22:39 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:04:21 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    if (d == s || n == 0)
        return dest;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    } else {
        while (n--)
        {
            d[n] = s[n];
        }
    }
    return dest;
}

// int main(void)
// {
//     char dest1[] = "Geeksfor";
//     char src1[] = "Frog";
//     printf("Befor %s\n", dest1);
//     ft_memmove(dest1, src1, 4);
//     printf("After %s\n", dest1);

//     char dest2[] = "Geeksfor";
//     char src2[] = "Frog";
//     printf("Befor - original %s\n", dest2);
//     memmove(dest2, src2, 4);
//     printf("After - original %s\n", dest2);
//     return (0);
// }