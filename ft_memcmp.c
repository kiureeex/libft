/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clsantos <clsantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:55:46 by clsantos          #+#    #+#             */
/*   Updated: 2025/04/10 16:05:48 by clsantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	i = 0;
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	str1[] = "amigo";
	char	str2[] = "amiga";

	printf("%d\n", ft_memcmp(str1, str2, 5));
	return (0);
}*/