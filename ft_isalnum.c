/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:40:24 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/24 13:13:31 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int main(void)
// {
//     char str[] = "strEW#$091";
//     int i = 0;
//     while(str[i])
//     {
//         printf("this c is alnum - %i\n", ft_isalnum(str[i]));
// 		printf("this c is alnum - generale - %i\n", isalnum(str[i]));
//  		i++;
//     }
//     return (0);
// }