/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:51:47 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 17:27:58 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = (unsigned char *)s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

// #include <bsd/string.h>

// int main(void)
// {
//     printf("Example with strings\n");
//     char str1[] = "Hello world";
//     char str2[] = "Hello world";
//     ft_bzero(str1, 6);
//     bzero(str2, 6);

//     printf("Example with number\n");

//     int nb1 = 1;
//     int nb2 = 1;
//     ft_bzero(&nb1, 4);
//     bzero(&nb2, 4);
//     return (0);
// }