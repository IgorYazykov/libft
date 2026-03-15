/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:53:14 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:03:37 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(char c)
{
    if(
        c >= 0 && c <= 127
    )
        return (1);
    return (0);
}

// int main(void)
// {
//     char str[] = "\as\bt\v";
//     int i = 0;
//     while(str[i])
//     {
//         printf("this c is ascii - %i\n", ft_isascii(str[i]));
// 		printf("this c is ascii - generale - %i\n", isascii(str[i]));
//  		i++;
//     }
//     return (0);
// }