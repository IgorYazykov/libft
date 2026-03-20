/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:05:52 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 18:03:08 by iyazykov         ###   ########.fr       */
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

static int	counter_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (s[i] != c && s[i] != '\0')
		counter++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

static char	*get_new_word(char const *s, char c, size_t *s_c)
{
	char	*new_str;
	size_t	start;
	size_t	end;

	start = 0;
	end = 0;
	while (s[*s_c])
	{
		if (s[*s_c] == c && s[*s_c + 1] != c && s[*s_c + 1] != '\0')
			start = *s_c + 1;
		if (s[*s_c] != c && (s[*s_c + 1] == c || s[*s_c + 1] == '\0'))
		{
			end = *s_c;
			(*s_c)++;
			break ;
		}
		(*s_c)++;
	}
	new_str = malloc(end + 2 - start);
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s + start, end - start + 1);
	new_str[end - start + 1] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_with_strings;
	size_t	number_words;
	size_t	i;
	size_t	last_pos;

	if (!s)
		return (NULL);
	number_words = counter_words(s, c);
	arr_with_strings = malloc((number_words + 1) * sizeof(char *));
	if (arr_with_strings == NULL)
		return (NULL);
	i = 0;
	last_pos = 0;
	while (i < number_words)
	{
		arr_with_strings[i] = get_new_word(s, c, &last_pos);
		if (arr_with_strings[i] == NULL)
		{
			free_all(arr_with_strings, i);
			return (NULL);
		}
		i++;
	}
	arr_with_strings[i] = NULL;
	return (arr_with_strings);
}

// int main(void)
// {
//     char str[] = "    h fkngenjg    g ";
//     char **arr_with_str = ft_split(str, ' ');
//     int i = 0;
//     while (arr_with_str[i])
//     {
//         printf("%s\n", arr_with_str[i]);
//         free(arr_with_str[i]);
//         i++;
//     }
//     free(arr_with_str);
//     printf("new test \n");
//     char *str1 = "   hello world";
//     char **arr_with_str1 = ft_split(str1, ' ');
//     i = 0;
//     while (arr_with_str1[i])
//     {
//         printf("%s\n", arr_with_str1[i]);
//         free(arr_with_str1[i]);
//         i++;
//     }
//     free(arr_with_str1);
//     printf("new test 2 \n");
//     char *str2 = "";
//     char **arr_with_str2 = ft_split(str2, ' ');
//     i = 0;
//     while (arr_with_str2[i])
//     {
//         printf("%s\n", arr_with_str2[i]);
//         free(arr_with_str2[i]);
//         i++;
//     }
//     free(arr_with_str2);
//     return(0);
// }