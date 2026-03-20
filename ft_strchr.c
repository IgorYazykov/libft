/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:05:16 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 18:03:57 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// int main(void)
// {
//     char str[] = "find the char";
//     char find = '\0';
//     const char* result = ft_strchr(str, find);
//     if (result != NULL) {
//         printf("Character '%c' found at position: %s\n", find, result);
//     }
//     else {
//         printf("Character '%c' not found.\n", find);
//     }

//     char str1[] = "find the char";
//     char find1 = '\0';
//     const char* result1 = strchr(str1, find1);
//     if (result1 != NULL) {
//         printf("Character '%c' found at position: %s\n", find1, result1);
//     }
//     else {
//         printf("Character '%c' not found.\n", find1);
//     }
//     return (0);
// }