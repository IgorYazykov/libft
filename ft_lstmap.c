/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:23:59 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/19 17:58:37 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list *new_lst;
//     t_list *temp_for_new;
//     int flag;

//     flag = 0;
//     while (lst)
//     {
//         if (flag == 0)
//         {
//             new_lst = ft_lstnew(f(lst->content));
//             if(new_lst == NULL)
//             {
//                 del(new_lst);
//                 return (NULL);
//             }
//             lst = lst->next;
//             flag++;
//         }
//         else

//     }
//     return (new_lst);
// }