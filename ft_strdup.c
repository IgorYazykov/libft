/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:57:24 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 18:04:44 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	size;

	size = ft_strlen(s) + 1;
	new_s = malloc(size);
	if (new_s == NULL)
		return (0);
	ft_memcpy(new_s, s, size);
	return (new_s);
}

// int main(void)
// {
//     char src[] = "Example";
//     char src1[] = "Example";

//     char* res = ft_strdup(src);
//     char* res1 = strdup(src1);

//     printf("%s - my \n", res);
//     printf("%s - original \n", res1);
//     return (0);
// }
