/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:37:30 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/18 13:07:18 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int    new_n;

    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        new_n = (unsigned int)-n;
    }
    else
        new_n = (unsigned int)n;
    if(new_n > 9)
    {
        ft_putnbr_fd(new_n / 10, fd);
    }
    ft_putchar_fd(((new_n % 10) + '0'), fd);
}

// int main(void)
// {
//     ft_putnbr_fd(-2147483648, 1);
//     printf("\n");
//     ft_putnbr_fd(0, 2);
//     printf("\n");
//     ft_putnbr_fd(2147483647, 1);
//     printf("\n");
//     ft_putnbr_fd(2, 1);
//     printf("\n");
//     ft_putnbr_fd(100, 1);
//     printf("\n");
//     return (0);
// }