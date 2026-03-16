/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:08:20 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/16 12:40:30 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char*   new_str;
    size_t  len_s1;
    size_t  len_s2;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    new_str = malloc(len_s1 + len_s2 + 1);
    if(new_str == NULL)
        return (0);
    ft_memcpy(new_str, s1, len_s1);
    ft_memcpy(new_str + len_s1, s2, len_s2);
    new_str[len_s1 + len_s2] = '\0';
    return(new_str);
}

// int main(void)
// {
//     char str[] = "first part ";
//     char str1[] = "second part";
//     char* new_str;

//     new_str = ft_strjoin(str, str1);
//     printf("%s", new_str);
//     return(0);
// }