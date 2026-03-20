/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:31:19 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 20:47:05 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	find_dec(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*get_char_from_nb(
	unsigned int n, unsigned int len, unsigned int sign, char *str
)
{
	unsigned int	temp_n;
	unsigned int	dec_nub;

	dec_nub = 1;
	str[0] = '-';
	while (sign < len)
	{
		temp_n = n;
		if (temp_n < 10)
			str[sign] = temp_n + '0';
		else
		{
			while (temp_n >= 10)
			{
				temp_n /= 10;
				dec_nub *= 10;
			}
			str[sign] = temp_n + '0';
			n -= temp_n * dec_nub;
			dec_nub = 1;
		}
		sign++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	new_n;
	unsigned int	sign;
	char			*new_string;
	unsigned int	len;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 0;
	len = 0;
	if (n > 0)
		new_n = n;
	else
	{
		sign = 1;
		len++;
		new_n = (unsigned int)-n;
	}
	len += find_dec(new_n);
	new_string = malloc(len + 1);
	if (new_string == NULL)
		return (NULL);
	new_string = get_char_from_nb(new_n, len, sign, new_string);
	new_string[len] = '\0';
	return (new_string);
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

// 	printf("%s\n", ft_itoa(100010));

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