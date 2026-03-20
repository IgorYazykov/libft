/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:18:14 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 19:31:10 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	mapi_test(unsigned int index, char c)
// {
// 	if (!(index % 2 == 0))
// 		return (ft_toupper(c));
// 	return (c);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
//     char str[] = "jjdgjg";
//     printf("%s\n", ft_strmapi(str, mapi_test));
//     return(0);
// }