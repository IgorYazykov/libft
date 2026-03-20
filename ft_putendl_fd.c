/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:37:38 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 17:51:08 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write(fd, &s[0], ft_strlen(s));
		ft_putchar_fd('\n', fd);
	}
}

// int main(void)
// {
//     char str[] = "Hello";
//     ft_putendl_fd(str, 1);
//     char str_error[] = "error";
//     ft_putendl_fd(str_error, 2);
//     return (0);
// }