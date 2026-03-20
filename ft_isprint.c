/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:03:16 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 19:38:02 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c == 127)
	{
		return (0);
	}
	return (1);
}

// int main (void) 
// {
// 	char	dest[] = "\n\f\aHello world 777";
// 	int i = 0;
// 	while(dest[i])
// 	{
// 		printf("this is print - %i\n", ft_isprint(dest[i]));
// 		printf("this is print -generale - %i\n", isprint(dest[i]));
// 		i++;
// 	}
// 	return (0);
// }
