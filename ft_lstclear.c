/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:39:26 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 18:45:32 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

void	del(void *content)
{
	(void)content;
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*allnode;
	t_list	*nextnode;

	if (lst == NULL || *lst == NULL)
		return ;
	allnode = *lst;
	while (allnode != NULL)
	{
		nextnode = allnode->next;
		del(allnode->content);
		free(allnode);
		allnode = nextnode;
	}
	*lst = nextnode;
}
/*int	main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	t_list *lst;

	if (n1 == NULL || n2 == NULL || n3 == NULL)
	{
		free(n1);
		free(n2);
		free(n3);
		return (1);
	}

	n1->content = "tung";
	n1->next = n2;
	n2->content = "tunga";
	n2->next = n3;
	n3->content = "sahuuur";
	n3->next = NULL;
	lst = n1;
	ft_lstclear(&lst, del);
	if (lst == NULL)
		printf("Lista limpa com sucesso\n");
	else
		printf("Erro ao limpar a lista\n");
	printf("Resultado -> %s", (char *)lst);
}*/