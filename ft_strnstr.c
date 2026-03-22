/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:05:48 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/22 11:08:30 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

//This program shud be run with flag -lbsd after name of file in compiling
// int main(void)
// {
//     // char largestring[]= "Foo Baz Bar";
//     // // char smallstring = '\0';
//     // printf("Result - %s\n", ft_strnstr(largestring, NULL, 12));
//     // printf("Result - %s\n", strnstr(largestring, NULL, 12));
// 	// char	*s1 = "oh no not the empty string !";
// 	// char	*s2 = "";
// 	// size_t	max = 0;
// 	// printf("%s\n", ft_strnstr(s1, s2, max));
// 	// printf("%s\n", strnstr(s1, s2, max));
// 	// if(ft_strnstr(s1, s2, max) != strnstr(s1, s2, max))
// 	// {
// 	// 	printf("%li", ft_strnstr(s1, s2, max) - strnstr(s1, s2, max));
// 	// }
// 	char haystack[30] = "aaabcabcd";
// 	printf("%s\n",ft_strnstr(haystack, "aaabc", 5));
// 	char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s2);
// 	printf("%s\n",ft_strnstr(s1, s2, max));
// 	printf("%s - original \n ",strnstr(s1, s2, max));
// 	char *big = "abcdef";
//     char *little = "abcdefghijklmnop";
//     size_t max1 = strlen(big);
// 	printf("%s\n",ft_strnstr(big, little, max1));
// 	printf("%s - original \n ",strnstr(big, little, max1));
// 	char *s11 = "A";
//     size_t max2 = strlen(s1) + 1;
// 	printf("%s\n",ft_strnstr(s11, s11, max2));
// 	printf("%s - original \n ",strnstr(s11, s11, max2));
// 	printf("%s\n",ft_strnstr(haystack, "abcd", 9));

// 	// printf("%s\n",ft_strnstr(haystack, "a", 1));
// 	return(0);
// }