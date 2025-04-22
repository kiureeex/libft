/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:21:51 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/22 16:51:50 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = malloc((nmemb * size));
	if (s == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}

/*int	main(void)
{
	void	*ptr = ft_calloc(10, 20);
	printf("Falso: %p\n", ptr);
	free(ptr);
	return (0);
}*/