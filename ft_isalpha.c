/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:27:39 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/24 13:14:18 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (
		!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z'))
	)
	{
		return (0);
	}
	return (1);
}

// int main (void) 
// {
// 	char	dest[] = "##!HelloWorld";
// 	int i = 0;
// 	while (dest[i])
// 	{
// 		printf("this is the alpha: %i\n", ft_isalpha(dest[i]));
// 		printf("this is the alpha - generale: %i\n", isalpha(dest[i]));
// 		i++;
// 	}
// 	return (0);
// }
