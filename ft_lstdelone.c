/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:32:07 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/21 14:49:33 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*int main(void)
{
    t_list  *lst;
    lst = malloc(sizeof(t_list));
    if (lst == NULL)
        return (1);
    lst->content = malloc(4 * sizeof(char));
    if(lst->content == NULL)
    {
        free(lst);
        return (1);
    }
    memcpy(lst->content, "ola", 4);
    ft_lstdelone(lst, ft_del);
	if (lst == NULL)
		printf ("Lista limpa com sucesso!\n");
	else
		printf ("Erro ao limpar a lista.\n");
    return (0);
}*/ //REVER ISTO