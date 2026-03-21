/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:31:19 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/21 15:26:57 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_new_str(unsigned int *new_n, int n)
{
	int				counter;
	unsigned int	number;

	counter = 0;
	if (n < 0)
	{
		*new_n = (unsigned int)-n;
		number = (unsigned int)-n;
		counter++;
	}
	else
	{
		*new_n = (unsigned int)n;
		number = (unsigned int)n;
	}
	while (number >= 10)
	{
		number /= 10;
		counter++;
	}
	counter++;
	return (counter);
}

static char	get_char(unsigned int n)
{
	char	c;

	c = n % 10 + '0';
	return (c);
}

char	*ft_itoa(int n)
{
	unsigned int	new_n;
	char			*str;
	int				len;

	if (n == 0)
		return (ft_strdup("0"));
	len = count_new_str(&new_n, n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = get_char(new_n);
		new_n = (new_n - (new_n % 10)) / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main(void)
// {
//     // printf("%s\n", ft_itoa(-2147483648));
//     // printf("%s\n", ft_itoa(2147483647));
//     // printf("%s\n", ft_itoa(0));
//     // printf("%s\n", ft_itoa(100));
//     // printf("%s\n", ft_itoa(-100));
//     // printf("%s\n", ft_itoa(10));
//     // printf("%s\n", ft_itoa(12));
//     // printf("%s\n", ft_itoa(125));
// 	// printf("%s\n", ft_itoa(-125));
// 	// printf("%s\n", ft_itoa(-9874));
// 	// printf("%s\n", ft_itoa(1824700010));

// 	// printf("%s\n", ft_itoa(100010));

// 	// int n;
// 	// char	*d;

// 	// for (int i = 0; i < 2000; i++)
// 	// {
// 	// 	n = rand();
// 	// 	d = ft_itoa(n);
// 	// 	if (atoi(d) != n) {
// 	// 		printf("its broken on %i, and have res - %s\n", n, d);
// 	// 	}
// 	// }
//     return(0);
// }