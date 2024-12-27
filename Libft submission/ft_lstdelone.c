/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:08:47 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/11 17:04:22 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("bruh"));
// 	t_list *node2 = ft_lstnew(ft_strdup("zxda"));
// 	t_list *node3 = ft_lstnew(ft_strdup("qweqwe"));

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	ft_lstdelone(node2, free);
// 	while(node1)
// 	{
// 		printf("%s\n", node1->content);
// 		node1 = node1->next;
// 	}
// }
