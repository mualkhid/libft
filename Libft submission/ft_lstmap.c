/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:38:21 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/11 17:06:29 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		temp = (t_list *)malloc(sizeof(t_list));
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		temp->content = (*f)(lst->content);
		temp->next = NULL;
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}

// void *offsetContent(void *content)
// {
// 	content = content + 2;
// 	return(content);
// }
// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("bruh"));
// 	t_list *node2 = ft_lstnew(ft_strdup("zxda"));
// 	t_list *node3 = ft_lstnew(ft_strdup("qweqwe"));

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	t_list *new = ft_lstmap(node1, offsetContent, free);
// 	while(new)
// 	{
// 		printf("%s\n", new->content);
// 		new = new->next;
// 	}
// }
