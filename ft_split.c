/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:05:52 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/16 13:48:28 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int counter_words(char const *s, char c)
{
    int counter;
    int i;

    counter = 0;
    i = 0;
    if(s[i] != c)
        counter++;
    while(s[i])
    {
        if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            counter++;
        i++;
    }
    return(counter);
}

char **ft_split(char const *s, char c)
{
    char** arr_with_strings;
    int number_words;
    int i;

    number_words = counter_words(s, c);
    
    return(arr_with_strings);
}

int main(void)
{
    char str[] = " this very long string for counting words ";
    // printf("%i",counter_words(str, ' '));
    return(0);
}