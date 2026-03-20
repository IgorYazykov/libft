/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:43:36 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 18:18:52 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

// int main(void)
// {
//     char c[]= "c1G";
//     int i = 0;
//     while(c[i])
//     {
//         printf("Befor - %c\n", c[i]);
//         printf("Return value - %i\n",ft_toupper(c[i]));
//         c[i] = ft_toupper(c[i]);
//         printf("After - %c\n", c[i]);
//         i++;
//     }
//     char c1[]= "c1G";
//     i = 0;
//     while(c[i])
//     {
//         printf("Befor - %c\n", c1[i]);
//         printf("Return value - %i\n",toupper(c[i]));
//         c1[i] = toupper(c[i]);
//         printf("After - %c\n", c1[i]);
//         i++;
//     }
//     return(0);
// }