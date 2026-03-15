/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:43:01 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/14 17:32:18 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat( char *dst, const char *src, size_t size )
{
    size_t size_dst;
    size_t size_src;

    size_dst = ft_strlen(dst);
    size_src = ft_strlen(src);
    if(size <= size_dst)
        return(size + size_src);
    if(size_src < (size - size_dst))
        ft_memcpy(dst + size_dst, src, size_src + 1);
    else
    {
        ft_memcpy(dst + size_dst, src, (size - size_dst - 1));
        dst[size - 1] = '\0';
    }
    return(size_dst + size_src);
}

//This program should be run with flag -lbsd after name of file in compiling

// int main(void)
// {
//     char dest[] = "hello";
//     char src[] = " world!";
//     printf("Befor - %s\n", dest);
//     printf("Result - %zu\n", ft_strlcat(dest, src, 20));
//     printf("After - %s\n", dest);

//     char dest1[] = "hello";
//     char src1[] = " world!";
//     printf("Befor original - %s\n", dest1);
//     printf("Result original - %zu\n", strlcat(dest1, src1, 20));
//     printf("After original - %s\n", dest1);
//     return(0);
// }