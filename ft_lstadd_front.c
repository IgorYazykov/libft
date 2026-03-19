/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:17:42 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/18 15:08:54 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
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
//     temp = lst;
//     while (temp)
//     {
//         printf("%s\n", temp->content);
//         temp = temp->next;
//     }
//     printf("----------\n");
//     char *ptr2 = "2468024680";
//     t_list *lst2 = ft_lstnew(ptr2);
//     ft_lstadd_front(&lst, lst2);
//     temp = lst;
//     while (temp)
//     {
//         printf("%s\n", temp->content);
//         temp = temp->next;
//     }
    
//     return(0);
// }