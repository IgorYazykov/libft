/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:40:24 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/14 11:35:24 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(char c)
{
    if(
        ft_isalpha(c) || ft_isdigit(c)
    )
        return (1);
    return (0);
}

// #include <stdio.h>
// #include <ctype.h>

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