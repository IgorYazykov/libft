/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:23:41 by iyazykov          #+#    #+#             */
/*   Updated: 2026/03/18 11:37:12 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char*  new_data;
    size_t  size_for_data;

    size_for_data = nmemb * size;
    new_data = (unsigned char*)malloc(size_for_data);
    if(new_data == NULL)
        return(0);
    if (size_for_data >= 0)
        ft_bzero(new_data, size_for_data);
    return(new_data);
}

// int main(void)
// {
//     int *ptr = (int *)calloc(10, sizeof(int));
//     int *ptr1 = (int *)ft_calloc(10, sizeof(int));

//     if (ptr == NULL) {
//         printf("Allocation Failed in original \n");
//     }
//     if (ptr1 == NULL) {
//         printf("Allocation Failed in my function\n");
//     }
//     for (int i = 0; i < 10; i++)
//         printf("%d - original \n", ptr[i]);
//     for (int i = 0; i < 10; i++)
//         printf("%d - my \n", ptr1[i]);
//     free(ptr);
//     free(ptr1);
//     for (int i = 0; i < 10; i++)
//         printf("%d - original \n", ptr[i]);
//     for (int i = 0; i < 10; i++)
//         printf("%d - my \n", ptr1[i]);
//     return 0;
// }
