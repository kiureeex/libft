/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 02:54:08 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 18:10:20 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *) lst->content);
		lst = lst->next;
	}
}
int	main(void)
{
	t_list	*n1 = ft_lstnew("tung");
	t_list	*n2 = ft_lstnew("tralalero");
	t_list	*n3 = ft_lstnew("bombardini");

	n1->next = n2;
	n2->next = n3;

	t_list	*lst = n1;

	printf("Antes: ");
	print_list(lst);

	t_list	*new = ft_lstnew("gusini");
	ft_lstadd_back(&lst, new);

	printf("\nDepois: ");
	print_list(lst);

	while (lst)
	{
		t_list *tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	return (0);
}*/