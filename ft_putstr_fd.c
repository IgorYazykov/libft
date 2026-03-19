/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:38:00 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/18 12:38:03 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(s != NULL)
        write(fd, &s[0], ft_strlen(s));
}

// int main(void)
// {
//     char str[] = "Hello\n";
//     ft_putstr_fd(str, 1);
//     char str_error[] = "error\n";
//     ft_putstr_fd(str_error, 2);
//     return (0);
// }