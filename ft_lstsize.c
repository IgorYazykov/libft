/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:35:30 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/18 14:43:28 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *temp;
    int i;

    temp = lst;
    i = 0;
    if (!lst)
        return (0);
    while (temp)
    {
        temp = temp->next;
        i++;
    }
    return(i);
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
//     size = ft_lstsize(lst);
//     printf("%i", size);
//     return(0);
// }