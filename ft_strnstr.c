/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:05:48 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/14 16:04:14 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!little[0])
        return ((char *)big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && big[i + j])
        {
            if (big[i + j] == little[j])
                j++;
            if (little[j] == '\0' && ((i + j) < len))
                return ((char *)&big[i]);
        }
        i++;
    }
    return (NULL);
}

//This program shud be run with flag -lbsd after name of file in compiling
// int main(void)
// {
//     char largestring[]= "Foo Baz Bar";
//     // char smallstring = '\0';
    
//     printf("Result - %s\n", ft_strnstr(largestring, NULL, 12));
//     printf("Result - %s\n", strnstr(largestring, NULL, 12));
// }