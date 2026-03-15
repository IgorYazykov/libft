/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:47:16 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/15 16:37:25 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *fs;

    i = 0;
    fs = NULL;
    while(s[i])
    {
        if(s[i] == c)
            fs = (char *)&s[i];
        i++;
    }
    if(s[i] == c)
        return ((char *)&s[i]);
    return (fs);
}

// int main(void)
// {
//     char str[] = "a find tdhe char";
//     char find = 'w';
//     const char* result = ft_strrchr(str, find);
//     if (result != NULL) {
//         printf("Character '%c' found at position: %s\n", find, result);
//     }
//     else {
//         printf("Character '%c' not found.\n", find);
//     }

//     char str1[] = "a find tdhe char";
//     char find1 = 'w';
//     const char* result1 = strrchr(str1, find1);
//     if (result1 != NULL) {
//         printf("Character '%c' found at position: %s\n", find1, result1);
//     }
//     else {
//         printf("Character '%c' not found.\n", find1);
//     }
//     return (0);
// }