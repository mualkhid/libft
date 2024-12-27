/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:19:29 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/11 13:35:39 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

// int main(void)
// {
// 	t_list *node1 = ft_lstnew("bruh");
// 	t_list *node2 = ft_lstnew("zxda");
// 	t_list *node3 = ft_lstnew("qweqwe");

// 	ft_lstadd_front(&node1, node2);
// 	ft_lstadd_front(&node1, node3);

// 	while(node1)
// 	{
// 		printf("%s\n", node1->content);
// 		node1 = node1->next;
// 	}
// }
