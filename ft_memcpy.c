/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:38:38 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/21 14:05:46 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	str1 = (unsigned char *) dest;
	str2 = (const unsigned char *) src;
	while (i < n)
	{
		str1[i] = (unsigned char)str2[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     // printf("Example with strings\n");

//     // char str1[] = "str1";
//     // char str2[] = "str2";
//     // printf("Befor %s\n", str1);
//     // ft_memcpy(str1, str2, 5);
//     // printf("After %s\n", str1);
//     // char str3[] = "str1";
//     // char str4[] = "str2";
//     // printf("Befor - original %s\n", str3);
//     // memcpy(str3, str4, 5);
//     // printf("After - original %s\n", str3);
//     // printf("Example with numbers\n");
//     // int str5[] = {1, 2, 3};
//     // int str6[] = {4, 5, 6};
//     // int i = 0;
//     // while(i < 3)
//     // {
//     //     printf("Befor %i\n", str5[i]);
//     //     i++;
//     // }
//     // ft_memcpy(str5, str6, 12);
//     // i = 0;
//     // while(i < 3)
//     // {
//     //     printf("After %i\n", str5[i]);
//     //     i++;
//     // }
//     // int str7[] = {1, 2, 3};
//     // int str8[] = {4, 5, 6};
//     // i = 0;
//     // while(i < 3)
//     // {
//     //     printf("Befor - original %i\n", str7[i]);
//     //     i++;
//     // }
//     // memcpy(str7, str8, 12);
//     // i = 0;
//     // while(i < 3)
//     // {
//     //     printf("After - original %i\n", str7[i]);
//     //     i++;
//     // }

// 	printf("%s - my ", (char *)ft_memcpy(NULL, NULL, 0));
//     return (0);
// }