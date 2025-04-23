/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:07:28 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/21 19:24:38 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_strup(char *s)
{
	char *c;

	c = (char *)s;
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (lst == NULL)
		return ;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/*int    main(void)
{
    t_list    *lst; 
    t_list    *node2;
    t_list    node3;
    charstr1 = strdup("tralalero"); 
    char  str2 = strdup("sahur"); 
    charstr3 = strdup("tuuuung"); 
    lst = ft_lstnew(str1); 
    node2 = ft_lstnew(str2);
    node3 = ft_lstnew(str3);
    lst->next = node2; 
    node2->next = node3;

    printf("Antes:\n");
    t_list tmp = lst; 
    while (tmp)
    {
        printf("%s\n", (char)tmp->content);
        tmp = tmp->next;
    }
    ft_lstiter(lst, ft_strup);

    printf("\nDepois:\n");
    tmp = lst; 
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    free(str1);
    free(str2);
    free(str3);
    free(lst); 
    free(node2);
    free(node3);
    return (0);
}*/