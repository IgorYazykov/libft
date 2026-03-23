/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:05:52 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/23 15:54:41 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_all(char **arr, size_t i)
{
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

static size_t	counter_words(char const *str, char c)
{
	size_t	counter;

	counter = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
		{
			counter++;
		}
		str++;
	}
	return (counter);
}

static int	fill_arr(char **arr, const char *s, char c)
{
	const char	*start;
	size_t		len_word;
	int			i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = s;
		len_word = 0;
		while (*s && *s != c)
		{
			len_word++;
			s++;
		}
		arr[i] = malloc(len_word + 1);
		if (arr[i] == NULL)
			return (free_all(arr, i));
		ft_strlcpy(arr[i], start, len_word + 1);
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_strs;
	size_t	len;

	if (!s)
		return (NULL);
	len = counter_words(s, c);
	arr_strs = malloc((len + 1) * sizeof(char *));
	if (!arr_strs)
		return (NULL);
	fill_arr(arr_strs, s, c);
	arr_strs[len] = NULL;
	return (arr_strs);
}

// int main(void)
// {
// // 	// char str[] = "    h fkngenjg    g ";
// // 	// char **arr_with_str = ft_split(str, ' ');
// // 	// int i = 0;
// // 	// while (arr_with_str[i])
// // 	// {
// // 	//     printf("%s\n", arr_with_str[i]);
// // 	//     free(arr_with_str[i]);
// // 	//     i++;
// // 	// }
// // 	// free(arr_with_str);
// // 	// printf("new test \n");
// // 	// char *str1 = "   hello world";
// // 	// char **arr_with_str1 = ft_split(str1, ' ');
// // 	// i = 0;
// // 	// while (arr_with_str1[i])
// // 	// {
// // 	//     printf("%s\n", arr_with_str1[i]);
// // 	//     free(arr_with_str1[i]);
// // 	//     i++;
// // 	// }
// // 	// free(arr_with_str1);
// // 	// printf("new test 2 \n");
// // 	// char *str2 = "";
// // 	// char **arr_with_str2 = ft_split(str2, ' ');
// // 	// i = 0;
// // 	// while (arr_with_str2[i])
// // 	// {
// // 	//     printf("%s\n", arr_with_str2[i]);
// // 	//     free(arr_with_str2[i]);
// // 	//     i++;
// // 	// }
// // 	// free(arr_with_str2);
// // 	char str[] = "4^^^1^^2a,^^^^3^^^^--h^^^^";
// // 	char **arr_with_str = ft_split(str, '^');
// // 	int i1;
// // 	i1 = 0;
// // 	while (arr_with_str[i1])
// // 	{
// // 		printf("%s\n", arr_with_str[i1]);
// // 		free(arr_with_str[i1]);
// // 		i1++;
// // 	}

// // 	char **arr_with_str1 = ft_split("hello!", ' ');
// // 	int i;
// // 	i = 0;
// // 	while (arr_with_str1[i])
// // 	{
// // 		printf("%s\n", arr_with_str1[i]);
// // 		free(arr_with_str1[i]);
// // 		i++;
// // 	}
// // 	// int i = 0;
// // 	// while (arr_with_str[i])
// // 	// {
// // 	//     printf("%s\n", arr_with_str[i]);
// // 	//     free(arr_with_str[i]);
// // 	//     i++;
// // 	// }
// 	char **arr_with_str = ft_split("\t\t\t\thello!\t\t\t\t", '\t');
// 	char **arr_with_str2 = ft_split("ggggggggggg", 'g');
// 	char **arr_with_str3 = ft_split("hello!zzzzzzzz", 'z');
// 	int i = 0;
// 	while (arr_with_str[i])
// 	{
// 	    printf("%s\n", arr_with_str[i]);
// 	    i++;
// 	}
// 	i = 0;
// 	while (arr_with_str2[i])
// 	{
// 	    printf("%s\n", arr_with_str2[i]);
// 	    i++;
// 	}
// 	i = 0;
// 	while (arr_with_str3[i])
// 	{
// 	    printf("%s\n", arr_with_str3[i]);
// 	    i++;
// 	}
// 	return(0);
// }