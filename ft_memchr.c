/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:48:19 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/21 14:18:13 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	c = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	const char *s = "42 Porto";
	char c = 'P';
	const char *result = ft_memchr(s, c, 4);
	printf("%s", result);
	return (0);
}*/
