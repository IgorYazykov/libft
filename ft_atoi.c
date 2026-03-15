/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:16:40 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 12:02:03 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_space(char c)
{
    if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
        return 1;
    return 0;
}

int ft_atoi(const char *nptr)
{
    int i;
    int numb;
    int sign;

    i = 0;
    numb = 0;
    sign = 1;
    while (is_space(nptr[i]))
        i++;
    if ((nptr[i] == '+' || nptr[i] == '-'))
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(nptr[i]))
    {
        numb = numb * 10 + (nptr[i] - '0');
        i++;
    }
    return (numb * sign);
}

// int main()
// {
//     char str[] = "    --12345";
//     int num;

//     // Convert string to integer
//     num = ft_atoi(str);

//     printf("The integer value is: %d\n", num);

//     int num1;

//     // Convert string to integer
//     num1 = atoi(str);

//     printf("The integer value is: %d\n", num1);
//     return 0;
// }