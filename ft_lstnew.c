/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:23:32 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 18:20:32 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*void	print_node(t_list *node)
{
	if (node)
		printf("%s", (char *)node->content);
	else
		printf("No nulo");
}

int	main(void)
{
	t_list *node = ft_lstnew(" tung tung sahur bombardini gusini");

	printf("Resultado do node: ");
	print_node(node);

	free(node);
	return (0); 
}*/