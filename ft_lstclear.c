/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:33:02 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/20 19:33:13 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	free_node(void *lst)
// {
// 	free(lst);
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	del(lst);
}

// int main(void)
// {
//     t_list *lst;
//     t_list *temp;
//     char *ptr = "gfghdfghdf";
//     char *ptr1 = "2222";
//     lst = ft_lstnew(ptr);
//     t_list *lst1 = ft_lstnew(ptr1);
//     ft_lstadd_front(&lst, lst1);
//     char *ptr2 = "2468024680";
//     t_list *lst2 = ft_lstnew(ptr2);
//     ft_lstadd_front(&lst, lst2);
//     temp = lst;
//     while (temp)
//     {
//         printf("%s\n", temp->content);
//         temp = temp->next;
//     }
//     printf("----------\n");
//     temp = lst;
//     ft_lstclear(&lst,free_node);
//     printf("%p", lst);
//     return(0);
// }