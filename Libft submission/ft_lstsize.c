/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:39:27 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/11 13:31:46 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	t_list *node1 = ft_lstnew("ff");
// 	t_list *node2 = ft_lstnew("zxdffdda");
// 	t_list *node3 = ft_lstnew("qwfdgfgeqwe");

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	printf("%d\n", ft_lstsize(node1));
// }
