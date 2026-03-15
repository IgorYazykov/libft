/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:42:58 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/14 16:00:34 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while(src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

//This program shud be run with flag -lbsd after name of file in compiling
// int main(void)
// {
//     char dst1[] = "exampl this";
//     char src1[] = "frogs";
//     printf("%zu\n", ft_strlcpy(dst1, src1, 6));
//     printf("%s\n", dst1);

//     char dst2[] = "exampl this";
//     char src2[] = "frogs";
//     printf("%zu\n", strlcpy(dst2, src2, 6));
//     printf("%s\n", dst2);

//     char dst3[] = "frogs";
//     char src3[] = "exampl this";
//     printf("%zu\n", ft_strlcpy(dst3, src3, 12));
//     printf("%s\n", dst3);

//     char dst4[] = "frogs";
//     char src4[] = "exampl this";
//     printf("%zu\n", strlcpy(dst4, src4, 12));
//     printf("%s\n", dst4);
//     return(0);
// }