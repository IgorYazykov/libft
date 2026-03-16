/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:41:37 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/16 11:59:40 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *  sub;
	size_t s_len;

	if(!s)
		return(NULL);	
	s_len = ft_strlen(s);
	if(start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (0);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	printf("len %zu\n", len);
	return (sub);
}

// int main(void)
// {
//     char str[] = "example string, very long string";
//     char* sub_str;
//     sub_str = ft_substr(str, 2, 5);
//     printf("res - %s", sub_str);
//     return(0);
// }