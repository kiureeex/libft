/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:49:32 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 18:52:54 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	node1, node2, node3;
	t_list	*lst;

	node1.content = "tung";
	node1.next = &node2;
	node2.content = "tunga";
	node2.next = &node3;
	node3.content = "sahuuur";
	node3.next = NULL;
	lst = &node1;
	printf("%s", (char *)ft_lstlast(lst)->content);
	return (0);
}*/