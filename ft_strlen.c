/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:03:59 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:25:41 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char* str)
{
    size_t size;

    size = 0;
    while (str[size])
        size++;
    return size;
}

// int	main(void)
// {
// 	char str[6] = "Hello";

// 	printf("%lu\n", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// 	return (0);
// }
