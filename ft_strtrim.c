/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:37:41 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/24 13:48:04 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	end;
	size_t	start;

	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start < end)
	{
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end--;
	}
	new_str = malloc(end - start + 1);
	if (new_str == NULL)
		return (0);
	ft_memcpy(new_str, s1 + start, end - start);
	new_str[end - start] = '\0';
	return (new_str);
}

// int main(void)
// {
//     char str[] = "xxx New x word xx x";
//     char set[] = "x N";
//     char* new_str;

//     new_str = ft_strtrim(str, set);
//     printf("res - %s", new_str);
//     return (0);
// }