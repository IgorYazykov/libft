/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:41:37 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 13:17:34 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *  sub;
    size_t i;

    i = 0;
    sub = malloc(len + 1);
    if (sub == NULL)
		return (0);
    memcpy(sub, s + start, len);
    sub[len + 1] = '\0';
    return(sub);
}

// int main(void)
// {
//     char str[] = "example string, very long string";
//     char* sub_str;
//     sub_str = ft_substr(str, 7, 7);
//     printf("res - %s", sub_str);
//     return(0);
// }