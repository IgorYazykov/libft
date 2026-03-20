/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:18:03 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 17:50:07 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*data;
	size_t			i;

	i = 0;
	data = (unsigned char *)s;
	while (i < n)
	{
		data[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     printf("Example with strings\n");

//     char str1[] = "Hello world";
//     char str2[] = "Hello world";
//     ft_memset(str1, '#', 2);
//     printf("%s\n", str1);
//     memset(str2, '#', 2);
//     printf("%s\n", str2);
//     printf("Example with numbers\n");

//     int str5[] = {1, 2, 3};
//     int i = 0;
//     ft_memset(str5, 1, 12);
//     while(i < 3)
//     {
//         printf("After %i\n", str5[i]);
//         i++;
//     }
//     int str7[] = {1, 2, 3};
//     memset(str7, 1, 12);
//     i = 0;
//     while(i < 3)
//     {
//         printf("After - original %i\n", str7[i]);
//         i++;
//     }

//     return (0);
// }