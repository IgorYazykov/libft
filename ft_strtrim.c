/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:37:41 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 16:14:07 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t finde_from_set(char const *s1, char const *set, size_t start, int direction)
{
    size_t  len_set;
    size_t  j;

    len_set = ft_strlen(set);
    j = 0;
    while (s1[start])
    {
        while (set[j])
        {
            if(s1[start] != set[j])
                len_set--;
            if(len_set == 0)
                return(start);
            j++;
        }
        
        len_set = ft_strlen(set);
        j = 0;
        if(direction == 1)
            start++;
        else
            start--;
    }
    return(start);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char*   new_str;
    size_t  len;
    size_t  i_from_start;
    size_t  i_end;

    len = ft_strlen(s1);
    i_from_start = 0;
    i_end = 0;
    i_from_start += finde_from_set(s1, set, 0, 1);
    i_end += finde_from_set(s1, set, len - 1, 0);
    printf("size %zu, i_from_start = %zu, i_end = %zu\n", i_end - i_from_start + 1, i_from_start, i_end);
    new_str = malloc(i_end - i_from_start + 1);
    if (new_str == NULL)
        return (0);
    memcpy(new_str, s1 + i_from_start, i_from_start - i_end);
    new_str[i_end - i_from_start + 1] = '\0';
    return(new_str);
}

// int main(void)
// {
//     char str[] = "xxx New x word xx x";
//     char set[] = "x N";
//     char* new_str;

//     new_str = ft_strtrim(str, set);
//     printf("res - %s", new_str);
//     return (0);
// }