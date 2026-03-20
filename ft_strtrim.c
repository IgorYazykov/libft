/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:37:41 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 18:16:43 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comparasion(char const s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	end;
	size_t	start;

	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && comparasion(s1[start], set))
		start++;
	if (start < end)
	{
		while (s1[end - 1] && comparasion(s1[end - 1], set))
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