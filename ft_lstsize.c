/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:46:15 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/20 02:46:15 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (!lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main(void)
{
	t_list	node1;
	t_list	*lst;

	node1.content = "tungtungtungsahur";
	lst = &node1;
	printf("%d", (char *)ft_lstsize(lst)->content);
	return (0);
}*/