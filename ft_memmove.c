/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:22:39 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/24 13:36:16 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

// int main(void)
// {
// 	int i = 0;

//     char dest1[] = "Geeksfor";
//     printf("Before %s\n", dest1);
//     ft_memmove(dest1, dest1 + 2, 4);
//     printf("After %s\n", dest1);

//     char dest2[] = "Geeksfor";
//     printf("Before - original %s\n", dest2);
//     memmove(dest2, dest2 - 2, 6);
//     printf("After - original %s\n", dest2);
// 	while (i < 6)
// 	{
// 		write(1, &dest2[i], 1);
// 		i++;
// 	}
//     return (0);
// }