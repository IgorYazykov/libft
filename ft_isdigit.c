/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:27:31 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:03:40 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	if (c < '0' || c > '9' )
	{
		return (0);
	}
	return (1);
}

// int main (void) 
// {
// 	char	dest[] = "gh*54354-_55";
// 	int i = 0;
// 	while (dest[i])
// 	{
// 		printf("this c is digit - %d\n", ft_isdigit(dest[i]));
// 		printf("this c is digit - generale - %d\n", isdigit(dest[i]));
// 		i++;
// 	}
// 	return (0);
// }