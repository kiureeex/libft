/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:46:15 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 18:46:47 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int	main(void)
{
	t_list	*lst1 = ft_lstnew("um");
	t_list	*lst2 = ft_lstnew("dois");
	t_list	*lst3 = ft_lstnew("três");

	lst1->next = lst2;
	lst2->next = lst3;

	int size = ft_lstsize(lst1);
	printf("A lista tem %d nós.\n", size);

	free(lst1);
	free(lst2);
	free(lst3);
	return (0);
}*/