/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:42:47 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/18 15:12:54 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *temp;

    if (!lst)
        return NULL;
    temp = lst;
    while(temp->next)
        temp = temp->next;
    return (temp);
}

// int main(void)
// {
//     t_list *lst;
//     int size;
//     char *ptr = "gfghdfghdf";
//     char *ptr1 = "2222";
//     lst = ft_lstnew(ptr);
//     t_list *lst1 = ft_lstnew(ptr1);
//     ft_lstadd_front(&lst, lst1);
//     char *ptr2 = "2468024680";
//     t_list *lst2 = ft_lstnew(ptr2);
//     ft_lstadd_front(&lst, lst2);
//     t_list *last = ft_lstlast(lst);
//     printf("%s", last->content);
//     return(0);
// }