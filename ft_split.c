/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:05:52 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/22 17:13:26 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **arr, size_t i)
{
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

size_t counter_words(const char *str, char c)
{
	size_t	counter;

	counter = 0;
	while(*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
		{
			counter++;
		}
		str++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char **arr_strs;
	size_t	len;
	size_t	len_word;
	size_t	i;

	if(!s)
		return (NULL);
	len = counter_words(s, c);
	arr_strs = malloc((len + 1) * sizeof(char *));
	if (!arr_strs)
		return (NULL);
	len_word = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && *s != '\0')
			len_word++;
		if ((*s == c || *s == '\0') && len_word != 0)
		{
			arr_strs[i] = malloc(len_word);
			if (!arr_strs[i])
			{
				free_all(arr_strs, i);
				return (NULL);
			}
			
			i++;
			len_word = 0;
		}
		s++;
	}
	arr_strs[len] = NULL;
	return (arr_strs);
}

int main(void)
{
    // char str[] = "    h fkngenjg    g ";
    // char **arr_with_str = ft_split(str, ' ');
    // int i = 0;
    // while (arr_with_str[i])
    // {
    //     printf("%s\n", arr_with_str[i]);
    //     free(arr_with_str[i]);
    //     i++;
    // }
    // free(arr_with_str);
    // printf("new test \n");
    // char *str1 = "   hello world";
    // char **arr_with_str1 = ft_split(str1, ' ');
    // i = 0;
    // while (arr_with_str1[i])
    // {
    //     printf("%s\n", arr_with_str1[i]);
    //     free(arr_with_str1[i]);
    //     i++;
    // }
    // free(arr_with_str1);
    // printf("new test 2 \n");
    // char *str2 = "";
    // char **arr_with_str2 = ft_split(str2, ' ');
    // i = 0;
    // while (arr_with_str2[i])
    // {
    //     printf("%s\n", arr_with_str2[i]);
    //     free(arr_with_str2[i]);
    //     i++;
    // }
    // free(arr_with_str2);
	char str[] = "4^^^1^^2a,^^^^3^^^^--h^^^^";
	// char **arr_with_str = ft_split(str, '^');
	printf("%zu",counter_words(str, '^'));
	// int i = 0;
	// while (arr_with_str[i])
    // {
    //     printf("%s\n", arr_with_str[i]);
    //     free(arr_with_str[i]);
    //     i++;
    // }
    return(0);
}