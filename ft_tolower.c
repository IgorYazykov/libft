/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:01:13 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:05:55 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
    {
        c += 32;
    }
    return c;
}

// int main(void)
// {
//     char c[]= "c1GAZ";
//     int i = 0;
//     while(c[i])
//     {
//         printf("Befor - %c\n", c[i]);
//         printf("Return value - %i\n",ft_tolower(c[i]));
//         c[i] = ft_tolower(c[i]);
//         printf("After - %c\n", c[i]);
//         i++;
//     }
//     char c1[]= "c1GAZ";
//     i = 0;
//     while(c[i])
//     {
//         printf("Befor - %c\n", c1[i]);
//         printf("Return value - %i\n",tolower(c[i]));
//         c1[i] = tolower(c[i]);
//         printf("After - %c\n", c1[i]);
//         i++;
//     }
//     return(0);
// }