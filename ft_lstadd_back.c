/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:53:54 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/24 13:24:35 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	last = ft_lstlast(temp);
	last->next = new;
}

// int main(void)
// {
//     t_list *lst;
//     t_list *temp;
//     int size;
//     char *ptr = "gfghdfghdf";
//     char *ptr1 = "2222";
//     lst = ft_lstnew(ptr);
//     t_list *lst1 = ft_lstnew(ptr1);
//     ft_lstadd_front(&lst, lst1);
//     char *ptr2 = "2468024680";
//     t_list *lst2 = ft_lstnew(ptr2);
//     ft_lstadd_front(&lst, lst2);
//     char *ptr3 = "New_last";
//     t_list *lst3;
//     lst3 = ft_lstnew(ptr3);
//     ft_lstadd_back(&lst, lst3);
//     temp = lst;
//     while (temp)
//     {
//         printf("%s\n", temp->content);
//         temp = temp->next;
//     }
//     return(0);
// }